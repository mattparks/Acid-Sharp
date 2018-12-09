using System.Xml;
using AcidSharp.CLI.Passes;
using CppSharp;
using CppSharp.AST;
using CppSharp.Generators;
using CppSharp.Passes;

namespace AcidSharp.CLI
{
    class Library : ILibrary
    {
        private PassXmlTranslation _xmlExportPass;
        private string _outputDir;

        public Library(string outputDir)
        {
            _xmlExportPass = new PassXmlTranslation("Acid");
            _outputDir = outputDir;
        }

        public void Dispose()
        {
            var settings = new XmlWriterSettings()
            {
                Indent = true
            };

            using (var writer = XmlWriter.Create($@"{_outputDir}\ExternalDefinitions.xml", settings))
            {
                _xmlExportPass.Document.WriteTo(writer);
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
            parserOptions.SetupMSVC(VisualStudioVersion.VS2017);
            parserOptions.AddArguments("-fcxx-exceptions");
            parserOptions.LanguageVersion = CppSharp.Parser.LanguageVersion.CPP17;
            parserOptions.EnableRTTI = true;
            parserOptions.UnityBuild = true;
            parserOptions.Verbose = true;
            
            // Sets up other options.
            var options = driver.Options;
            options.OutputDir = _outputDir;
            options.GeneratorKind = GeneratorKind.CSharp;
            options.GenerateSingleCSharpFile = true; // TODO: false
            options.MarshalCharAsManagedChar = true;
            options.GenerateDefaultValuesForArguments = false; // FIXME: Crashes when true.
            options.GenerateFinalizers = false;
            options.CheckSymbols = false;
            options.Verbose = true;

            // Creates a new module.
            var module = options.AddModule("Acid");
            module.SharedLibraryName = "Acid";
            module.OutputNamespace = "";
            module.Defines.Add("ACID_BUILD_WINDOWS");
            module.Defines.Add("ACID_BUILD_MSVC");
            module.IncludeDirs.Add(@"C:\Users\mattp\Documents\Acid Workspace\Acid-Sharp\Acid\include");
            module.IncludeDirs.Add(@"D:\Windows Kits\10\Include\10.0.17134.0\shared");
            module.IncludeDirs.Add(@"D:\Windows Kits\10\Include\10.0.17134.0\um");
            module.IncludeDirs.Add(@"D:\Windows Kits\10\Include\10.0.17134.0\winrt");
            module.IncludeDirs.Add(@"D:\Windows Kits\10\Include\10.0.17134.0\ucrt");
            module.Headers.Add(@"acid\Acid.hpp");
            module.LibraryDirs.Add(@"C:\Users\mattp\Documents\Acid Workspace\Acid-Sharp\Acid\lib");
            module.Libraries.Add("vulkan-1.lib");
            module.Libraries.Add("Acid.lib");
        }

        /// <summary>
        /// Setup passes. Second method called.
        /// </summary>
        /// <param name="driver"></param>
        public void SetupPasses(Driver driver)
        {
            driver.AddTranslationUnitPass(_xmlExportPass);
            driver.AddTranslationUnitPass(new PassObjectNamesFix());
            driver.AddTranslationUnitPass(new PassCommentsFix());
            driver.Context.TranslationUnitPasses.AddPass(new FunctionToInstanceMethodPass());
        }

        /// <summary>
        /// Do transformations that should happen before any passes are processed.
        /// </summary>
        /// <param name="driver"></param>
        /// <param name="ctx"></param>
        public void Preprocess(Driver driver, ASTContext ctx)
        {
            ctx.IgnoreHeadersWithName("vulkan/vulkan_core.h");
            ctx.RenameNamespace("acid", "Acid.Sharp");
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
