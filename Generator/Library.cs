using CppSharp;
using CppSharp.AST;
using CppSharp.Generators;
using System.Xml.Linq;

namespace Generator
{
    class Library : ILibrary
    {
        private string _headerPath;
        private string _libPath;
        private string _outPath;
        private string _libraryName;
        private string _moduleName;
        private string _outSpace;

        private PassXmlTranslation _xmlExportPass;

        public Library(string headerPath, string libPath, string outPath, string libraryName, string moduleName, string outSpace)
        {
            _headerPath = headerPath;
            _libPath = libPath;
            _outPath = outPath;
            _libraryName = libraryName;
            _moduleName = moduleName;
            _outSpace = outSpace;
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
            var options = driver.Options;
            options.OutputDir = _outPath;
            options.GeneratorKind = GeneratorKind.CSharp;
            options.GenerateFinalizers = true;
            options.CheckSymbols = true;
            options.Verbose = false;

            var module = options.AddModule(_moduleName);
            module.OutputNamespace = _outSpace; 
            module.LibraryName = _libraryName; 
            
        //    module.Defines.Add("FL_BUILD_WINDOWS");
        //    module.Defines.Add("FL_BUILD_MSVC");
        //    module.Defines.Add("FL_EXPORTS");
            
            module.IncludeDirs.Add(_headerPath);
            module.Headers.Add($"{_libraryName}.hpp");
            
        //    module.LibraryDirs.Add(_libPath);
        //    module.Libraries.Add($"{_libraryName}.dll");
        }

        /// <summary>
        /// Setup passes. Second method called.
        /// </summary>
        /// <param name="driver"></param>
        public void SetupPasses(Driver driver)
        {
            driver.AddTranslationUnitPass(new PassOutParamsFix());
            driver.AddTranslationUnitPass(_xmlExportPass);
            driver.AddTranslationUnitPass(new PassObjectNamesFix());
            driver.AddTranslationUnitPass(new PassCommentsFix());
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
