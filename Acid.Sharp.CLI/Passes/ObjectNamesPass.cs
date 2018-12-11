using System;
using System.Globalization;
using System.Linq;
using System.Text.RegularExpressions;
using CppSharp.AST;
using CppSharp.AST.Extensions;
using CppSharp.Passes;

namespace AcidSharp.CLI.Passes
{
    public class PassObjectNamesFix : TranslationUnitPass
	{
		public override bool VisitVariableDecl(Variable variable)
		{
			if (AlreadyVisited(variable))
			{
				return false;
			}

			// Global variables should be camel cased.
			variable.Name = ToCamelCase(variable.Name);
			return true;
		}

		public override bool VisitMethodDecl(Method method)
        {
            if (!VisitDeclaration(method))
            {
                return false;
            }

			// A fix for explicit constructors with a single parameter.
	        if (method.IsConstructor && method.IsExplicit && method.Parameters.Count == 1)
	        {
				// Only change property on primitive types.
		    //    var isPrimitive = TypeExtensions.IsPrimitiveType(method.Parameters[0].Type);

		   //     if (isPrimitive)
		   //     {
			        method.Parameters[0].Kind = ParameterKind.PropertyValue;
		   //     }
	        }

			// Is and Get will refer to the same group almost always.
	        var regex = new Regex(Regex.Escape("Is"));
            method.Name = regex.Replace(method.Name, "Get", 1);
            return true;
        }

        public override bool VisitEnumDecl(Enumeration enumeration)
        {
            if (!VisitDeclaration(enumeration))
            {
                return false;
            }

            foreach (var item in enumeration.Items)
            {
				// Special camel case, and removes enum name from item.
                var itemName = ToCamelCase(item.Name).Replace(enumeration.Name, "");

				// Because enum items cannot appear like numbers.
	            if (Regex.IsMatch(itemName, @"^\d+"))
	            {
		            itemName = "E" + itemName;
	            }

	            item.Name = itemName;
            }

			// Removes item duplicates.
			enumeration.Items = enumeration.Items.GroupBy(x => x.Name).Select(y => y.First()).ToList();

			return true;
        }

        public static string ToCamelCase(string source)
        {
            var textInfo = new CultureInfo("en-GB", false).TextInfo;
            var x = source.Replace("_", " ");
            x = textInfo.ToTitleCase(x.ToLower());
            return x.Replace(" ", "");
        }
    }
}
