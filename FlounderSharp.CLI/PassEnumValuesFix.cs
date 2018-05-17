using System;
using CppSharp.AST;
using CppSharp.Passes;
using System.Globalization;

namespace FlounderSharp.CLI
{
    public class PassEnumValuesFix : TranslationUnitPass
    {
        public override bool VisitEnumDecl(Enumeration @enum)
        {
            if (!VisitDeclaration(@enum))
            {
                return false;
            }
            
            foreach (var item in @enum.Items)
            {
                item.Name = PassObjectNamesFix.ToCamelCase(item.Name); // .Replace(@enum.Name, "")
            }

            return true;
        }
    }
}
