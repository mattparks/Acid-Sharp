using System;
using CppSharp;

namespace FlounderSharp
{
    class Program
    {
        static void Main(string[] args)
        {
            var libraryName = "Testing";
            var sourceFolder = @"C:\Users\mattp\Documents\Flounder Workspace\FlounderSharp\Flounder\Source\Testing";
            var outputFolder = @"C:\Users\mattp\Documents\Flounder Workspace\FlounderSharp\Flounder";
            ConsoleDriver.Run(new Library($@"{sourceFolder}\include", $@"{sourceFolder}\lib", outputFolder, libraryName));
            Console.WriteLine("Generation complete!");
            Console.ReadLine();
        }
    }
}
