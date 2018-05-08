using CppSharp;
using CppSharp.AST;
using CppSharp.Generators;

namespace FlounderSharp
{
    class FlounderLibrary : ILibrary
    {
        private string _headerPath;
        private string _libPath;
        private string _outPath;

        public FlounderLibrary(string headerPath, string libPath, string outPath)
        {
            _headerPath = headerPath;
            _libPath = libPath;
            _outPath = outPath;
        }

        public void Setup(Driver driver)
        {
            var options = driver.Options;
            options.GeneratorKind = GeneratorKind.CSharp;
            options.OutputDir = _outPath;
            var module = options.AddModule("Testing");
            module.IncludeDirs.Add(_headerPath);
            module.Headers.Add("Testing.hpp");
            module.LibraryDirs.Add(_libPath);
            module.Libraries.Add("Testing.lib");
            /*var options = driver.Options;
            options.GeneratorKind = GeneratorKind.CSharp;
            options.OutputDir = _outPath;

            var module = options.AddModule("Flounder");
            module.IncludeDirs.Add(_headerPath);
            module.Headers.Add(@"Flounder.hpp");
            module.LibraryDirs.Add(_libPath);
            module.Libraries.Add("Flounder.lib");

            options.Verbose = true;
            options.CheckSymbols = true;*/
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
