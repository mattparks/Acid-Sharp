using CppSharp.AST;
using CppSharp.Passes;

namespace FlounderSharp.CLI
{
    public class PassObjectNamesFix : TranslationUnitPass
    {
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
    }
}
