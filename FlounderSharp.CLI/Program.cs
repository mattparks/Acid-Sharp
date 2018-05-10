using System;
using System.Collections.Generic;
using System.Xml;
using CppSharp;

namespace FlounderSharp.CLI
{
    class Program
    {
        static void Main(string[] args)
        {
            // Setup.
            var originalName = "Flounder";
            var targetName = "FlounderSharp";
            var headerPaths = new List<string>{
                @"C:\Users\mattp\Documents\Flounder Workspace\Flounder\Build\Release\include",
            };
            var headerFile = @"AL\Flounder.hpp";
            var sharedLibrary = "libFlounder.lib";
            var libPath = @"C:\Users\mattp\Documents\Flounder Workspace\Flounder\Build\Release\lib";
            var outPath = @"C:\Users\mattp\Documents\Flounder Workspace\FlounderSharp\FlounderSharp";
            var library = new Library(originalName, targetName, headerPaths, headerFile, sharedLibrary, libPath, outPath);

            // Generate.
            ConsoleDriver.Run(library);
            Console.WriteLine("Generation complete!");

            // Write XML.
            var settings = new XmlWriterSettings()
            {
                Indent = true
            };

            using (var writer = XmlWriter.Create($@"{outPath}/ExternalDefinitions.xml", settings))
            {
                library.XmlExport.WriteTo(writer);
            }

            Console.WriteLine($@"Generated '{outPath}/ExternalDefinitions.xml'");

            // End program.
            Console.WriteLine("Press enter to continue...");
            Console.ReadLine();
        }
    }
}
