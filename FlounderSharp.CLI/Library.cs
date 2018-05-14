using CppSharp;
using CppSharp.AST;
using CppSharp.Generators;
using CppSharp.Parser;
using CppSharp.Passes;

namespace FlounderSharp.CLI
{
    class Library : ILibrary
    {
        /// <summary>
        /// Sets the driver options. First method called.
        /// </summary>
        /// <param name="driver"></param>
        public void Setup(Driver driver)
        {
            // Sets up the parser.
            var parserOptions = driver.ParserOptions;
            parserOptions.LanguageVersion = LanguageVersion.CPP17;
            parserOptions.EnableRTTI = true;
            parserOptions.SetupMSVC(VisualStudioVersion.VS2017);

            // Sets up other options.
            var options = driver.Options;
            options.OutputDir = @"C:\Users\mattp\Documents\Flounder Workspace\FlounderSharp\FlounderSharp";
            options.GeneratorKind = GeneratorKind.CSharp;
            options.GenerateSingleCSharpFile = true;
            //options.GenerateDefaultValuesForArguments = true;
            options.CompileCode = false;
            options.GenerateFinalizers = true;
            options.CheckSymbols = true;
            options.Verbose = false;

            // Creates a new module.
            var module = options.AddModule("FlounderSharp"); // Target name.
            module.SharedLibraryName = "Flounder"; // Original name.
            module.OutputNamespace = "";

            module.Defines.Add("FL_BUILD_WINDOWS");
            module.Defines.Add("FL_BUILD_MSVC");
            module.Defines.Add("FL_EXPORTS");

            module.IncludeDirs.Add(@"C:\Users\mattp\Documents\Flounder Workspace\FlounderSharp\Flounder\include");
            module.Headers.Add(@"fl\Flounder.hpp");

            module.LibraryDirs.Add(@"C:\Users\mattp\Documents\Flounder Workspace\FlounderSharp\Flounder\lib");
            module.Libraries.Add("glfw3.lib");
            module.Libraries.Add("stb.lib");
            module.Libraries.Add("OpenAL32.lib");
            module.Libraries.Add("vulkan-1.lib");
            module.Libraries.Add("Flounder.lib");
        }

        /// <summary>
        /// Setup passes. Second method called.
        /// </summary>
        /// <param name="driver"></param>
        public void SetupPasses(Driver driver)
        {
            driver.AddTranslationUnitPass(new PassConstRefFix());
            driver.AddTranslationUnitPass(new PassEnumValuesFix());
            driver.AddTranslationUnitPass(new PassObjectNamesFix());
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
            ctx.IgnoreHeadersWithName("GLFW/glfw3.h");
            ctx.IgnoreHeadersWithName("vulkan/vulkan_core.h");

            ctx.RenameNamespace("fl", "FlounderSharp");
        }

        /// <summary>
        /// Do transformations that should happen after all passes are processed.
        /// </summary>
        /// <param name="driver"></param>
        /// <param name="ctx"></param>
        public void Postprocess(Driver driver, ASTContext ctx)
        {
        //    ctx.SetMethodParameterUsage("FlounderSharp::FileSystem", "CreateFile", 2, 2, ParameterUsage.In);
        }
    }
}
