using System;
using CppSharp.AST;
using CppSharp.Passes;

namespace FlounderSharp.CLI
{
    public class PassRemoveStd : TranslationUnitPass
    {
        public override bool VisitClassDecl(Class @class)
        {
            if (!VisitDeclaration(@class))
            {
                return false;
            }

            if (@class.Namespace.Name == "Std")
            {
            //    Console.WriteLine(@class.Namespace.Name);
                @class.Ignore = true;
            }

            return true;
        }
    }
}
