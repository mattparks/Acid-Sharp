using System.Xml.Linq;
using CppSharp;
using CppSharp.AST;
using CppSharp.Generators;
using CppSharp.Passes;

namespace AcidSharp.CLI
{
    class Library : ILibrary
    {
        private PassXmlTranslation _xmlExportPass;

        public Library()
        {
            _xmlExportPass = new PassXmlTranslation("AcidSharp");
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
            parserOptions.LanguageVersion = CppSharp.Parser.LanguageVersion.CPP17;
            parserOptions.EnableRTTI = true;
            parserOptions.UnityBuild = true;
            parserOptions.Verbose = true;

            parserOptions.Defines.Add("ACID_EXPORT=__attribute__ ((visibility (\"default\")))");
            parserOptions.Defines.Add("ACID_HIDDEN=__attribute__ ((visibility (\"hidden\")))");
            parserOptions.Defines.Add("BT_NO_SIMD_OPERATOR_OVERLOADS=1");

            // Sets up other options.
            var options = driver.Options;
            options.OutputDir = @"C:\Users\mattp\Documents\Acid Workspace\Acid-Sharp\AcidSharp";
            options.GeneratorKind = GeneratorKind.CSharp;
            options.GenerateSingleCSharpFile = true;
            options.MarshalCharAsManagedChar = true;
            options.GenerateDefaultValuesForArguments = true;
            options.GenerateFinalizers = false;
            options.CheckSymbols = false;
            options.Verbose = true;

            // Creates a new module.
            var module = options.AddModule("AcidSharp");
            module.SharedLibraryName = "Acid";
            module.OutputNamespace = "";
            module.IncludeDirs.Add(@"C:\Users\mattp\Documents\Acid Workspace\Acid-Sharp\Acid\include");
            module.Headers.Add(@"acid\Acid.hpp");
            module.LibraryDirs.Add(@"C:\Users\mattp\Documents\Acid Workspace\Acid-Sharp\Acid\lib");
            module.Libraries.Add("vulkan-1.lib");
            module.Libraries.Add("OpenAL32.lib");
            module.Libraries.Add("Acid.lib");
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
        //  ctx.IgnoreHeadersWithName("GLFW/glfw3.h");
        //  ctx.IgnoreHeadersWithName("vulkan/vulkan.h");
        //  ctx.IgnoreHeadersWithName("vulkan/vulkan_core.h");

            ctx.RenameNamespace("acid", "AcidSharp");
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
