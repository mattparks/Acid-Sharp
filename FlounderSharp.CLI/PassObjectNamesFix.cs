using System.Globalization;
using CppSharp.AST;
using CppSharp.Passes;

namespace FlounderSharp.CLI
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

        public static string ToCamelCase(string source)
        {
            TextInfo textInfo = new CultureInfo("en-US", false).TextInfo;
            var x = source.Replace("_", " ");
            x = textInfo.ToTitleCase(x.ToLower());
            return x.Replace(" ", "");
        }
    }
}
