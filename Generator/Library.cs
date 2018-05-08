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

        public void Setup(Driver driver)
        {
            var options = driver.Options;
            options.GeneratorKind = GeneratorKind.CSharp;
            options.OutputDir = _outPath;

            var module = options.AddModule(_libraryName);
            module.IncludeDirs.Add(_headerPath);
            module.Headers.Add($"{_libraryName}.hpp");
            module.LibraryDirs.Add(_libPath);
            module.Libraries.Add($"{_libraryName}.dll");

            options.Verbose = true;
            options.CheckSymbols = true;
        }

        public void SetupPasses(Driver driver)
        {
        }

        public void Preprocess(Driver driver, ASTContext ctx)
        {
        }

        public void Postprocess(Driver driver, ASTContext ctx)
        {
        }
    }
}
