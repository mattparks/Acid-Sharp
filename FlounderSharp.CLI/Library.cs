using CppSharp;
using CppSharp.AST;
using CppSharp.Generators;
using System.Xml.Linq;
using CppSharp.Parser;

namespace FlounderSharp.CLI
{
    class Library : ILibrary
    {
        private string _headerPath;
        private string _libPath;
        private string _outPath;
        private string _libraryName;
        private string _moduleName;

        private PassXmlTranslation _xmlExportPass;

        public Library(string headerPath, string libPath, string outPath, string libraryName, string moduleName)
        {
            _headerPath = headerPath;
            _libPath = libPath;
            _outPath = outPath;
            _libraryName = libraryName;
            _moduleName = moduleName;
            _xmlExportPass = new PassXmlTranslation();
        }


        /// <summary>
        /// Gets the XDocument of the xml representation.
        /// </summary>
        public XDocument XmlExport
        {
            get
            {
                return _xmlExportPass.Document;
            }
        }

        /// <summary>
        /// Sets the driver options. First method called.
        /// </summary>
        /// <param name="driver"></param>
        public void Setup(Driver driver)
        {
            var parserOptions = driver.ParserOptions;
            parserOptions.MicrosoftMode = false;
            parserOptions.NoBuiltinIncludes = false;
            parserOptions.EnableRTTI = false;
            parserOptions.Abi = CppSharp.Parser.AST.CppAbi.Itanium;
            parserOptions.LanguageVersion = LanguageVersion.CPP17;

            var options = driver.Options;
            options.OutputDir = _outPath;
            options.GeneratorKind = GeneratorKind.CSharp;
            options.GenerateFinalizers = false;
            options.GenerateDefaultValuesForArguments = true;
            options.MarshalCharAsManagedChar = true;
            options.CommentKind = CommentKind.BCPLSlash;
            options.CheckSymbols = true;
            options.Verbose = true;

            var module = options.AddModule(_moduleName);
            module.OutputNamespace = "";
            module.LibraryName = _moduleName;
            
            module.IncludeDirs.Add(_headerPath);
            module.Headers.Add($"{_libraryName}.hpp");

            module.LibraryDirs.Add(_libPath);
            module.Libraries.Add($"{_libraryName}.dll");
            
        }

        /// <summary>
        /// Setup passes. Second method called.
        /// </summary>
        /// <param name="driver"></param>
        public void SetupPasses(Driver driver)
        {
        //    driver.AddTranslationUnitPass(new PassOutParamsFix());
        //    driver.AddTranslationUnitPass(_xmlExportPass);
        //    driver.AddTranslationUnitPass(new PassObjectNamesFix());
        //    driver.AddTranslationUnitPass(new PassCommentsFix());
        }

        /// <summary>
        /// Do transformations that should happen before any passes are processed.
        /// </summary>
        /// <param name="driver"></param>
        /// <param name="ctx"></param>
        public void Preprocess(Driver driver, ASTContext ctx)
        {
        }

        /// <summary>
        /// Do transformations that should happen after all passes are processed.
        /// </summary>
        /// <param name="driver"></param>
        /// <param name="ctx"></param>
        public void Postprocess(Driver driver, ASTContext ctx)
        {
        }
    }
}
