using System;
using System.Globalization;
using CppSharp.AST;
using CppSharp.AST.Extensions;
using CppSharp.Passes;

namespace AcidSharp.CLI
{
    public class PassObjectNamesFix : TranslationUnitPass
    {
        /*public override bool VisitMethodDecl(Method method)
        {
            if (AlreadyVisited(method))
            {
                return false;
            }

            if (method.ReturnType.Type.Desugar().ToNativeString().StartsWith("Vk"))
            {
                method.Ignore = true;
                Console.WriteLine(method.Name);
            }

            return true;
        }

        public override bool VisitFieldDecl(Field field)
        {
            if (AlreadyVisited(field))
            {
                return false;
            }

            if (field.Type.Desugar().ToNativeString().StartsWith("Vk"))
            {
                field.Ignore = true; // TODO: Remove Vulkan Fields, or fix Vulkan links and objects (without methods?)!
                Console.WriteLine(field.Name);
            }

            return true;
        }*/

        public override bool VisitVariableDecl(Variable variable)
        {
            if (AlreadyVisited(variable))
            {
                return false;
            }

            variable.Name = ToCamelCase(variable.Name);
            return true;
        }

        /*public override bool VisitMethodDecl(Method method)
        {
            if (AlreadyVisited(method))
            {
                return false;
            }

            if (method.Name.StartsWith("Vk"))
            {
                method.Ignore = true;
            }

            return true;
        }*/

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

        public static string ToCamelCase(string source)
        {
            TextInfo textInfo = new CultureInfo("en-US", false).TextInfo;
            var x = source.Replace("_", " ");
            x = textInfo.ToTitleCase(x.ToLower());
            return x.Replace(" ", "");
        }
    }
}
