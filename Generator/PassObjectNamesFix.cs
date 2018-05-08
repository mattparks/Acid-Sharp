using CppSharp.AST;
using CppSharp.Passes;
using System;

namespace Generator
{
    public class PassObjectNamesFix : TranslationUnitPass
    {

        public override bool VisitClassDecl(Class @class)
        {
            if (!VisitDeclaration(@class))
            {
                return false;
            }
            
            // TODO: Modularize namespace refractor.
            if (@class.Namespace.Name == "fl")
            {
                @class.Namespace.Name = "Flounder";
            }

            return true;
        }

        public override bool VisitParameterDecl(Parameter parameter)
        {
            if (!VisitDeclaration(parameter))
            {
                return false;
            }

            Console.WriteLine(parameter.Name);

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
