using System;
using System.IO;
using CppSharp;

namespace AcidSharp.CLI
{
    class Program
    {
        static void Main(string[] args)
        {
            var outputDir = @"C:\Users\mattp\Documents\Acid Workspace\Acid-Sharp\AcidSharp";
        //    File.WriteAllText($@"{outputDir}\AcidSharp.cs", string.Empty);
        //    File.WriteAllText($@"{outputDir}\Std.cs", string.Empty);
            var library = new Library(outputDir);
            ConsoleDriver.Run(library);
            library.Dispose();

            Console.WriteLine("Press enter to continue...");
            Console.ReadLine();
        }
    }
}
