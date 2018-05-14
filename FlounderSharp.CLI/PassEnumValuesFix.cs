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
                TextInfo textInfo = new CultureInfo("en-US", false).TextInfo;
                var x = item.Name.Replace("_", " ");
                x = textInfo.ToTitleCase(x.ToLower());
                item.Name = x.Replace(" ", "");
            }

            return true;
        }
    }
}
