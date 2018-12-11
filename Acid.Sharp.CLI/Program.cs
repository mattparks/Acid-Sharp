using System;
using System.IO;
using CppSharp;
using CppSharp.AST;
using CppSharp.Passes;
using CppSharp.Generators;
using AcidSharp.CLI.Passes;

namespace AcidSharp.CLI
{
    class Program : ILibrary
	{
		static string _outputDir = @"C:\Users\mattp\Documents\Acid Workspace\Acid-Sharp\Acid.Sharp";

		static void Main(string[] args)
        {
	        File.Delete($@"{_outputDir}\Acid.cs");
	        File.Delete($@"{_outputDir}\Vulkan.cs");
	        File.Delete($@"{_outputDir}\Std.cs");
	        File.Delete($@"{_outputDir}\Acid-symbols.cpp");
	        File.Delete($@"{_outputDir}\Vulkan-symbols.cpp");
			File.Delete($@"{_outputDir}\Std-symbols.cpp");
            ConsoleDriver.Run(new Program());

            Console.WriteLine("Press enter to continue...");
            Console.ReadLine();
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
			parserOptions.LanguageVersion = CppSharp.Parser.LanguageVersion.CPP17_GNU;
			parserOptions.EnableRTTI = true;
			parserOptions.UnityBuild = true;
			parserOptions.Verbose = true;

			// Sets up other options.
			var options = driver.Options;
			options.OutputDir = _outputDir;
			options.GeneratorKind = GeneratorKind.CSharp;
			options.GenerateSingleCSharpFile = true;
			options.MarshalCharAsManagedChar = true;
			options.GenerateObjectOverrides = false;
			options.GenerateDefaultValuesForArguments = false; // FIXME: Crashes when true.
			options.GenerateFinalizers = false;
			options.CheckSymbols = false;
			options.Verbose = false;

			// Creates the modules.
		//	var moduleVulkan = options.AddModule("Vulkan");
		//	moduleVulkan.SharedLibraryName = "Vulkan";
		//	moduleVulkan.OutputNamespace = "Vulkan";
		//	moduleVulkan.IncludeDirs.Add(@"C:\Program Files\VulkanSDK\1.1.92.1\Include");
		//	moduleVulkan.IncludeDirs.Add(@"D:\Windows Kits\10\Include\10.0.17134.0\shared");
		//	moduleVulkan.IncludeDirs.Add(@"D:\Windows Kits\10\Include\10.0.17134.0\um");
		//	moduleVulkan.IncludeDirs.Add(@"D:\Windows Kits\10\Include\10.0.17134.0\winrt");
		//	moduleVulkan.IncludeDirs.Add(@"D:\Windows Kits\10\Include\10.0.17134.0\ucrt");
		//	moduleVulkan.Headers.Add(@"vulkan/vulkan.h");
		//	moduleVulkan.LibraryDirs.Add(@"C:\Program Files\VulkanSDK\1.1.92.1\Source\lib");
		//	moduleVulkan.Libraries.Add("vulkan-1.lib");

			var moduleAcid = options.AddModule("Acid");
			moduleAcid.SharedLibraryName = "Acid";
			moduleAcid.OutputNamespace = "";
			moduleAcid.Defines.Add("ACID_BUILD_WINDOWS");
			moduleAcid.Defines.Add("ACID_BUILD_MSVC");
			moduleAcid.IncludeDirs.Add(@"C:\Users\mattp\Documents\Acid Workspace\Acid-Sharp\Acid\include");
			moduleAcid.IncludeDirs.Add(@"D:\Windows Kits\10\Include\10.0.17134.0\shared");
			moduleAcid.IncludeDirs.Add(@"D:\Windows Kits\10\Include\10.0.17134.0\um");
			moduleAcid.IncludeDirs.Add(@"D:\Windows Kits\10\Include\10.0.17134.0\winrt");
			moduleAcid.IncludeDirs.Add(@"D:\Windows Kits\10\Include\10.0.17134.0\ucrt");
			moduleAcid.Headers.Add(@"acid\Acid.hpp");
			moduleAcid.LibraryDirs.Add(@"C:\Users\mattp\Documents\Acid Workspace\Acid-Sharp\Acid\lib");
			moduleAcid.Libraries.Add("Acid.lib");
		//	moduleAcid.Dependencies.Add(moduleVulkan);
		//	driver.Options.Modules[0].Dependencies.Add(moduleAcid);
		}

		/// <summary>
		/// Setup passes. Second method called.
		/// </summary>
		/// <param name="driver"></param>
		public void SetupPasses(Driver driver)
		{
			driver.AddTranslationUnitPass(new PassObjectNamesFix());
			driver.AddTranslationUnitPass(new PassCommentsFix());
			driver.Context.TranslationUnitPasses.AddPass(new FunctionToInstanceMethodPass());
			driver.Context.TranslationUnitPasses.AddPass(new MarshalPrimitivePointersAsRefTypePass());
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
