using CppSharp.AST;
using CppSharp.Passes;
using System.Collections.Generic;

namespace FlounderSharp.CLI
{
    public class PassObjectNamesFix : TranslationUnitPass
    {
        private List<Module> _modules;

        public PassObjectNamesFix(List<Module> modules)
        {
            _modules = modules;
        }

        public override bool VisitClassDecl(Class @class)
        {
            if (!VisitDeclaration(@class))
            {
                return false;
            }

            foreach (var entry in _modules)
            {
                if (@class.Namespace.Name.Length == 0)
                {
                    continue;
                }

                if (@class.Namespace.Name == entry.originalSpace)
                {
                    @class.Namespace.Name = entry.targetSpace;
                    return true;
                }
            }

            return false;
        }
        
        public override bool VisitParameterDecl(Parameter parameter)
        {
            if (!VisitDeclaration(parameter))
            {
                return false;
            }

            // Rename parameters named "object" to "targetObject" as the CSharpGenerator has a hard time with these names in method bodies.
            if (parameter.Name == "object")
            {
                parameter.Name = "targetObject";
                return true;
            }

            return false;
        }
    }
}
