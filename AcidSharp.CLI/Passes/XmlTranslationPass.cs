using CppSharp.AST;
using CppSharp.Passes;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Xml.Linq;

namespace AcidSharp.CLI
{
    class PassXmlTranslation : TranslationUnitPass
    {
        private readonly Regex _rx = new Regex(@"///(?<text>.*)", RegexOptions.ExplicitCapture | RegexOptions.Compiled);
        private readonly XDocument _document;
        private readonly XElement _root;
        private string _libraryName;

        public XDocument Document => _document;

        public PassXmlTranslation(string libraryName)
        {
            _document = new XDocument
            {
                Declaration = new XDeclaration("1.0", "UTF-8", "yes")
            };
            _root = new XElement("Definitions");
            _document.Add(_root);
            _libraryName = libraryName;
        }

        public override bool VisitFunctionDecl(Function decl)
        {
            if (!VisitDeclaration(decl))
            {
                return false;
            }

            if (ASTUtils.CheckIgnoreFunction(decl))
            {
                return false;
            }

            if (decl.TranslationUnit.Module.LibraryName != _libraryName)
            {
                return false;
            }

            if (decl.Comment == null)
            {
                return false;
            }

            // Export Elements.
            var exportElement = new XElement("Export");
            exportElement.SetAttributeValue("name", decl.Name);
            exportElement.SetAttributeValue("target", "Common");
            exportElement.SetAttributeValue("source", decl.TranslationUnit.FileName);

            // Normalize Comments.
            var commentBuilder = new StringBuilder();

            foreach (Match match in _rx.Matches(decl.Comment.Text))
            {
                var text = match.Groups["text"].Value;
                text = text.Replace("< 0", "&lt; 0");
                commentBuilder.Append("///" + text + "\r\n");
            }

            var descriptionElement = new XElement("Description");
            descriptionElement.Add(new XText("\r\n      "));
            descriptionElement.Add(new XCData("\r\n" + commentBuilder.ToString()));
            descriptionElement.Add(new XText("\r\n    "));
            exportElement.Add(descriptionElement);

            // Output and map parameters
            var parametersElement = new XElement("Parameters");

            foreach (var param in decl.Parameters)
            {
                var parameterElement = new XElement("Parameter");

                var typeDef = param.Type as TypedefType;
                var pointer = param.Type as PointerType;

                string mappedType;

                if (typeDef != null)
                {
                    mappedType = MapParameterType(decl, param, typeDef.Declaration.QualifiedName);
                }
                else if (pointer != null)
                {
                    if (pointer.Pointee is TypedefType pointerTypeDef)
                    {
                        mappedType = MapParameterType(decl, param, pointerTypeDef.Declaration.ToString());
                    }
                    else
                    {
                        // Fallback to the original qualified type.
                        mappedType = MapParameterType(decl, param, param.QualifiedType.ToString());
                    }
                }
                else
                {
                    mappedType = MapParameterType(decl, param, param.QualifiedType.ToString());
                }

                parameterElement.SetAttributeValue("type", mappedType);

                if (param.Name == "ref" || param.Name == "object")
                {
                    parameterElement.SetAttributeValue("name", "@" + param.Name);
                }
                else
                {
                    parameterElement.SetAttributeValue("name", param.Name);
                }

                if (param.IsOut || param.IsInOut)
                {
                    parameterElement.SetAttributeValue("direction", "Out");
                }

                parametersElement.Add(parameterElement);
            }

            if (parametersElement.HasElements)
                exportElement.Add(parametersElement);

            // Add breaks between Exports from different sources.
            if (_root.Elements().Where(e => e.Attribute("source").Value == exportElement.Attribute("source").Value).Count() == 0)
            {
                _root.Add(new XComment("\r\n  ***************************************\r\n  **\r\n  ** " + exportElement.Attribute("source").Value + "\r\n  **\r\n  ***************************************\r\n  "));
            }

            _root.Add(exportElement);
            return false;
        }

        private string MapParameterType(Function decl, Parameter param, string type)
        {
            type = type.Replace("global::System.", "");

            // Some manual parameter type mappings.
            switch (type)
            {
                case "void**":
                    type = "IntPtr";
                    break;
                case "BYTE":
                    type = "byte[]";
                    break;
                case "bool*":
                case "int*":
                case "uint*":
                case "double*":
                    type = type.Replace("*", "");
                    break;
            }

            if (type == "uint" && (param.DebugText.StartsWith("size_t*") || param.DebugText.StartsWith("size_t *")))
            {
                type = "size_t";
            }
            else if (type == "sbyte*" && param.DebugText == "char* buffer")
            {
                type = "char*";
            }
            else if (type == "ushort*" && param.DebugText == "uint16_t* buffer")
            {
                type = "uint16_t*";
            }
            else if (type == "uint16_t" && param.DebugText == "const uint16_t *content")
            {
                type = "string";
            }

            return type;
        }
    }
}
