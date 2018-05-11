using System;
using System.Xml.Linq;
using System.Collections.Generic;
using System.IO;
using CppSharp;
using CppSharp.AST;
using CppSharp.Generators;

namespace FlounderSharp.CLI
{
    public class Module
    {
        public string originalName;
        public string targetName;
        public string originalSpace;
        public string targetSpace;
        public string headerPath;
        public string headerFile;
        public string libraryPath;
        public string libraryFile;
        public List<string> dependencies;
    }

    class Library : ILibrary
    {
        private List<Module> _modules;
        private string _outPath;

        private PassXmlTranslation _xmlExportPass;

        public Library(List<Module> modules, string outPath)
        {
            _modules = modules;
            _outPath = outPath;
            _xmlExportPass = new PassXmlTranslation(modules[modules.Count - 1].targetName);
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

            // Creates the modules.
            foreach (var entry in _modules)
            {
                var module = options.AddModule("FlounderSharp");
                module.SharedLibraryName = entry.originalName;
                module.OutputNamespace = "";

                module.IncludeDirs.Add(entry.headerPath);
                module.Headers.Add(entry.headerFile);

                module.LibraryDirs.Add(entry.libraryPath);
                module.Libraries.Add(entry.libraryFile);
                
                options.Modules.ForEach(x =>
                {
                    if (entry.dependencies.Contains(x.LibraryName))
                    {
                        module.Dependencies.Add(x);
                    }
                });
            }
        }

        /// <summary>
        /// Setup passes. Second method called.
        /// </summary>
        /// <param name="driver"></param>
        public void SetupPasses(Driver driver)
        {
            driver.AddTranslationUnitPass(new PassOutParamsFix());
            driver.AddTranslationUnitPass(_xmlExportPass);
            driver.AddTranslationUnitPass(new PassObjectNamesFix(_modules));
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
