using System;
using System.Xml;
using CppSharp;

namespace Generator
{
    class Program
    {
        static void Main(string[] args)
        {
            // Setup.
            var libraryName = "Testing";
            var moduleName = "TestingSharp";
            var outSpace = "";
            var sourceFolder = @"C:\Users\mattp\Documents\Flounder Workspace\FlounderSharp\Flounder\Source\Testing";
            var outputFolder = @"C:\Users\mattp\Documents\Flounder Workspace\FlounderSharp\Flounder";
            var library = new Library($@"{sourceFolder}\include", $@"{sourceFolder}\lib", outputFolder, libraryName, moduleName, outSpace);

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
