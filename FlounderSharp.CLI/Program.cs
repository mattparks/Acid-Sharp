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
            var namespaces = new List<NamespacePair> {
                new NamespacePair("fl", "FlounderSharp")
            };
            var headerPaths = new List<string>{
                @"C:\Users\mattp\Documents\Flounder Workspace\Flounder\Build\Debug\include",
            };
            var headerFile = @"fl\Flounder.hpp";
            var libraryPaths = new List<string>{
                @"C:\Users\mattp\Documents\Flounder Workspace\Flounder\Build\Debug\lib\Debug",
            };
            var libraryFile = "Flounder.lib";
            var outPath = @"C:\Users\mattp\Documents\Flounder Workspace\FlounderSharp\FlounderSharp";
            var library = new Library(originalName, targetName, namespaces, headerPaths, headerFile, libraryPaths, libraryFile, outPath);

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
