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
            // Inputs and outputs.
            var originalName = "Flounder";
            var targetName = "FlounderSharp";
            var namespaces = new List<NamespacePair> {
                new NamespacePair("fl", "FlounderSharp")
            };
            var headerPaths = new List<string>{
                @"C:\Users\mattp\Documents\Flounder Workspace\FlounderSharp\Flounder\include",
            };
            var headerFiles = new List<string> {
                @"fl\Flounder.hpp"
            };
            var libraryPaths = new List<string>{
                @"C:\Users\mattp\Documents\Flounder Workspace\FlounderSharp\Flounder\lib",
            };
            var libraryFiles = new List<string>{
                "glfw3.lib",
                "stb.lib",
                "OpenAL32.lib",
                "vulkan-1.lib",
                "Flounder.lib"
            };
            var outPath = @"C:\Users\mattp\Documents\Flounder Workspace\FlounderSharp\FlounderSharp\Sources";

            // Generate.
            var library = new Library(originalName, targetName, namespaces, headerPaths, headerFiles, libraryPaths, libraryFiles, outPath);
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
