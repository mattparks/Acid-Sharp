using System;
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
            parserOptions.UnityBuild = true;
            parserOptions.EnableRTTI = true;
            parserOptions.Verbose = false;
            
            // Sets up other options.
            var options = driver.Options;
            options.OutputDir = @"C:\Users\mattp\Documents\Flounder Workspace\FlounderSharp\FlounderSharp";
            options.GeneratorKind = GeneratorKind.CSharp;
            options.GenerateSingleCSharpFile = true;
            //options.CompileCode = true;
            options.CheckSymbols = false;
            options.Verbose = false;

            // Creates a new module.
            var module = options.AddModule("FlounderSharp");
            module.SharedLibraryName = "Flounder";
            module.OutputNamespace = "";
            module.IncludeDirs.Add(@"C:\Users\mattp\Documents\Flounder Workspace\FlounderSharp\Flounder\include");
            module.Headers.Add(@"fl\Flounder.hpp");
            module.LibraryDirs.Add(@"C:\Users\mattp\Documents\Flounder Workspace\FlounderSharp\Flounder\lib");
            module.Libraries.Add("Flounder.lib");
        }

        /// <summary>
        /// Setup passes. Second method called.
        /// </summary>
        /// <param name="driver"></param>
        public void SetupPasses(Driver driver)
        {
            driver.AddTranslationUnitPass(new PassEnumValuesFix());
            driver.AddTranslationUnitPass(new PassObjectNamesFix());
            driver.AddTranslationUnitPass(new PassConstRefFix());
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
            ctx.IgnoreHeadersWithName("vulkan/vulkan.h");
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
        }
    }
}
