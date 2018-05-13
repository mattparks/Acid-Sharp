using System;
using System.Text.RegularExpressions;
using CppSharp.AST;
using CppSharp.Passes;
using System.Collections.Generic;
using System.Globalization;

namespace FlounderSharp.CLI
{
    public class PassObjectNamesFix : TranslationUnitPass
    {
        private List<NamespacePair> _namespaces;

        public PassObjectNamesFix(List<NamespacePair> namespaces)
        {
            _namespaces = namespaces;
        }

        public override bool VisitClassDecl(Class @class)
        {
            if (!VisitDeclaration(@class))
            {
                return false;
            }

            foreach (var ns in _namespaces)
            {
                if (@class.Namespace.Name == ns._original)
                {
                    @class.Namespace.Name = ns._target;
                    return true;
                }
            }

            return false;
        }

        public override bool VisitEnumDecl(Enumeration @enum)
        {
            if (!VisitDeclaration(@enum))
            {
                return false;
            }

            foreach (var item in @enum.Items)
            {
                item.Name = CamelCase(item.Name);
            }

            return true;
        }

        static string CamelCase(string s)
        {
            TextInfo textInfo = new CultureInfo("en-US", false).TextInfo;
            var x = s.Replace("_", " ");
            x = textInfo.ToTitleCase(x.ToLower());
            x = x.Replace(" ", "");
            return x;
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
