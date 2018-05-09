using System;
using System.Xml;
using CppSharp;

namespace FlounderSharp.CLI
{
    class Program
    {
        static void Main(string[] args)
        {
            // Setup.
            var libraryName = "Flounder";
            var moduleName = "FlounderSharp";
            var includeFolder = @"C:\Users\mattp\Documents\Flounder Workspace\FlounderSharp\Flounder";
            var libFolder = @"C:\Users\mattp\Documents\Flounder Workspace\FlounderSharp\Flounder\bin\Debug x64";
            var outputFolder = @"C:\Users\mattp\Documents\Flounder Workspace\FlounderSharp\FlounderSharp";
            var library = new Library(includeFolder, libFolder, outputFolder, libraryName, moduleName);

            // Generate.
            ConsoleDriver.Run(library);
            Console.WriteLine("Generation complete!");

            // Write XML.
            var settings = new XmlWriterSettings()
            {
                Indent = true
            };

            using (var writer = XmlWriter.Create($@"{outputFolder}/ExternalDefinitions.xml", settings))
            {
                library.XmlExport.WriteTo(writer);
            }

            Console.WriteLine($@"Generated '{outputFolder}/ExternalDefinitions.xml'");

            // End program.
            Console.WriteLine("Press enter to continue...");
            Console.ReadLine();
        }
    }
}
