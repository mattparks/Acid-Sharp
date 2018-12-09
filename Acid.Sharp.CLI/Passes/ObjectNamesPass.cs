using System.Globalization;
using System.Text.RegularExpressions;
using CppSharp.AST;
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

            variable.Name = ToCamelCase(variable.Name);
            return true;
        }
        
        public override bool VisitParameterDecl(Parameter parameter)
        {
            if (!VisitDeclaration(parameter))
            {
                return false;
            }
            
            if (parameter.Name != "object")
            {
                return false;
            }

            parameter.Name = "targetObject";
            return true;
        }

        public override bool VisitMethodDecl(Method method)
        {
            if (!VisitDeclaration(method))
            {
                return false;
            }

            var regex = new Regex(Regex.Escape("Is"));
            method.Name = regex.Replace(method.Name, "Get", 1);

            //if (method.Name == "ToString")
            //{
            //    method.IsOverride = true; // TODO
            //}

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
                item.Name = ToCamelCase(item.Name).Replace(enumeration.Name, ""); // 
            }

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
