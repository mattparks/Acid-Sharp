using System;
using System.Xml.Linq;
using System.Collections.Generic;
using System.IO;
using CppSharp;
using CppSharp.AST;
using CppSharp.Generators;

namespace FlounderSharp.CLI
{
    public class NamespacePair
    {
        public string _original;
        public string _target;

        public NamespacePair(string original, string target)
        {
            _original = original;
            _target = target;
        }
    }

    class Library : ILibrary
    {
        private string _originalName;
        private string _targetName;
        private List<NamespacePair> _namespaces;
        private List<string> _headerPaths;
        private List<string> _headerFiles;
        private List<string> _libraryPaths;
        private List<string> _libraryFiles;
        private string _outPath;

        private PassXmlTranslation _xmlExportPass;

        public Library(string originalName, string targetName, List<NamespacePair> namespaces, List<string> headerPaths, List<string> headerFiles, List<string> libraryPaths, List<string> libraryFiles, string outPath)
        {
            _originalName = originalName;
            _targetName = targetName;
            _namespaces = namespaces;
            _headerPaths = headerPaths;
            _headerFiles = headerFiles;
            _libraryPaths = libraryPaths;
            _libraryFiles = libraryFiles;
            _outPath = outPath;
            _xmlExportPass = new PassXmlTranslation(_targetName);
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
            // Sets up the parser.
            var parserOptions = driver.ParserOptions;
            parserOptions.EnableRTTI = true;

            // Sets up other options.
            var options = driver.Options;
            options.OutputDir = _outPath;
            options.GeneratorKind = GeneratorKind.CSharp;
            options.GenerateFinalizers = true;
            options.Verbose = true;

            // Creates a new module.
            var module = options.AddModule(_targetName);
            module.SharedLibraryName = _originalName;
            module.OutputNamespace = "";

        //    module.Defines.Add("FL_BUILD_WINDOWS");
        //    module.Defines.Add("FL_BUILD_MSVC");
        //    module.Defines.Add("FL_EXPORTS");

            foreach (var path in _headerPaths)
            {
                module.IncludeDirs.Add(path);
            }

            foreach (var header in _headerFiles)
            {
                module.Headers.Add(header);
            }
            
            foreach (var path in _libraryPaths)
            {
                module.LibraryDirs.Add(path);
            }

            foreach (var library in _libraryFiles)
            {
                module.Libraries.Add(library);
            }
        }

        /// <summary>
        /// Setup passes. Second method called.
        /// </summary>
        /// <param name="driver"></param>
        public void SetupPasses(Driver driver)
        {
        //    driver.AddTranslationUnitPass(new PassOutParamsFix());
            driver.AddTranslationUnitPass(_xmlExportPass);
            driver.AddTranslationUnitPass(new PassObjectNamesFix(_namespaces));
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
