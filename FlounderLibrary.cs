using CppSharp;
using CppSharp.AST;

namespace FlounderSharp
{
    class FlounderLibrary : ILibrary
    {
        public void Postprocess(Driver driver, ASTContext ctx)
        {

        }

        public void Preprocess(Driver driver, ASTContext ctx)
        {

        }

        public void Setup(Driver driver)
        {
            var options = driver.Options;
            options.GeneratorKind = CppSharp.Generators.GeneratorKind.CSharp;
            options.OutputDir = @"..\..\..\output\";
            options.Verbose = true;

            options.LibraryName = "Flounder";
            options.addIncludeDirs(@"..\..\..\flounder-sdk\include\");
            options.addLibraryDirs(@"..\..\..\flounder-sdk\lib");

            options.LibraryFile = @"..\..\..\flounder-sdk\lib\flounder.dll";

            options.Headers.Add(@"..\..\..\flounder-sdk\include\flounder\params.hpp");
            options.Headers.Add(@"..\..\..\flounder-sdk\include\flounder\map.hpp");


        }

        public void SetupPasses(Driver driver)
        {

        }
    }
}
