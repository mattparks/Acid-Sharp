using CppSharp;
using CppSharp.AST;
using CppSharp.Generators;

namespace FlounderSharp
{
    class Library : ILibrary
    {
        private string _headerPath;
        private string _libPath;
        private string _outPath;
        private string _libraryName;

        public Library(string headerPath, string libPath, string outPath, string libraryName)
        {
            _headerPath = headerPath;
            _libPath = libPath;
            _outPath = outPath;
            _libraryName = libraryName;
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
            options.Verbose = true;
            options.CheckSymbols = true;

            var module = options.AddModule(_libraryName);
            module.OutputNamespace = _libraryName; // "Flounder"
            module.LibraryName = _libraryName; // "Flounder"
            
            module.Defines.Add("FL_BUILD_WINDOWS");
            module.Defines.Add("FL_BUILD_MSVC");
            module.Defines.Add("FL_EXPORTS");
            
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
            // https://github.com/BaristaLabs/ChakraSharp/blob/master/ChakraSharp/ChakraSharp.cs#L61
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
