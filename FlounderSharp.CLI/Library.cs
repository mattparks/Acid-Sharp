using System.Xml.Linq;
using CppSharp;
using CppSharp.AST;
using CppSharp.Generators;
using CppSharp.Passes;

namespace FlounderSharp.CLI
{
    class Library : ILibrary
    {
        private PassXmlTranslation _xmlExportPass;

        public Library()
        {
            _xmlExportPass = new PassXmlTranslation("FlounderSharp");
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
            parserOptions.AddArguments("-fcxx-exceptions");
            parserOptions.EnableRTTI = true;
            parserOptions.UnityBuild = true;
            parserOptions.Verbose = true;

            parserOptions.Defines.Add("FL_EXPORT=__attribute__ ((visibility (\"default\")))");
            parserOptions.Defines.Add("FL_HIDDEN=__attribute__ ((visibility (\"hidden\")))");

            // Sets up other options.
            var options = driver.Options;
            options.OutputDir = @"C:\Users\mattp\Documents\Flounder Workspace\FlounderSharp\FlounderSharp";
            options.GeneratorKind = GeneratorKind.CSharp;
            options.GenerateSingleCSharpFile = true;
            options.MarshalCharAsManagedChar = true;
            options.GenerateDefaultValuesForArguments = true;
            options.GenerateFinalizers = false;
            options.CheckSymbols = false;
            options.Verbose = true;

            // Creates a new module.
            var module = options.AddModule("FlounderSharp");
            module.SharedLibraryName = "Flounder";
            module.OutputNamespace = "";
            module.IncludeDirs.Add(@"C:\Users\mattp\Documents\Flounder Workspace\FlounderSharp\Flounder\include");
            module.Headers.Add(@"fl\Flounder.hpp");
            module.LibraryDirs.Add(@"C:\Users\mattp\Documents\Flounder Workspace\FlounderSharp\Flounder\lib");
            module.Libraries.Add("Flounder.lib");
            module.Libraries.Add("vulkan-1.lib");
        }

        /// <summary>
        /// Setup passes. Second method called.
        /// </summary>
        /// <param name="driver"></param>
        public void SetupPasses(Driver driver)
        {
            driver.AddTranslationUnitPass(_xmlExportPass);
            driver.AddTranslationUnitPass(new PassEnumValuesFix());
            driver.AddTranslationUnitPass(new PassObjectNamesFix());
            driver.AddTranslationUnitPass(new PassConstRefFix());
            driver.AddTranslationUnitPass(new PassCommentsFix());
            driver.Context.TranslationUnitPasses.RenameDeclsUpperCase(RenameTargets.Any);
            driver.Context.TranslationUnitPasses.AddPass(new FunctionToInstanceMethodPass());
        }

        /// <summary>
        /// Do transformations that should happen before any passes are processed.
        /// </summary>
        /// <param name="driver"></param>
        /// <param name="ctx"></param>
        public void Preprocess(Driver driver, ASTContext ctx)
        {
            ctx.RenameNamespace("fl", "FlounderSharp");
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
