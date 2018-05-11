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
            var modules = new List<Module> {
                new Module()
                {
                    originalName = "glfw3",
                    targetName = "GlfwSharp",
                    originalSpace = "",
                    targetSpace = "",
                    headerPath = @"C:\Users\mattp\Documents\Flounder Workspace\FlounderSharp\Flounder\include",
                    headerFile = @"GLFW\glfw3.h",
                    libraryPath = @"C:\Users\mattp\Documents\Flounder Workspace\FlounderSharp\Flounder\lib",
                    libraryFile = "glfw3.lib",
                    dependencies = new List<string>{}
                },
                new Module()
                {
                    originalName = "stb",
                    targetName = "StbSharp",
                    originalSpace = "",
                    targetSpace = "",
                    headerPath = @"C:\Users\mattp\Documents\Flounder Workspace\FlounderSharp\Flounder\include",
                    headerFile = @"STB\stb.h",
                    libraryPath = @"C:\Users\mattp\Documents\Flounder Workspace\FlounderSharp\Flounder\lib",
                    libraryFile = "stb.lib",
                    dependencies = new List<string>{}
                },
                new Module()
                {
                    originalName = "OpenAL",
                    targetName = "AlSharp",
                    originalSpace = "",
                    targetSpace = "",
                    headerPath = @"C:\Users\mattp\Documents\Flounder Workspace\FlounderSharp\Flounder\include",
                    headerFile = @"AL\alc.h",
                    libraryPath = @"C:\Users\mattp\Documents\Flounder Workspace\FlounderSharp\Flounder\lib",
                    libraryFile = "OpenAL32.lib",
                    dependencies = new List<string>{}
                },
                new Module()
                {
                    originalName = "Flounder",
                    targetName = "FlounderSharp",
                    originalSpace = "fl",
                    targetSpace = "FlounderSharp",
                    headerPath = @"C:\Users\mattp\Documents\Flounder Workspace\FlounderSharp\Flounder\include",
                    headerFile = @"fl\Flounder.hpp",
                    libraryPath = @"C:\Users\mattp\Documents\Flounder Workspace\FlounderSharp\Flounder\lib",
                    libraryFile = "Flounder.lib",
                    dependencies = new List<string>{ "GlfwSharp", "StbSharp", "AlSharp"  }
                }
            };
            var outPath = @"C:\Users\mattp\Documents\Flounder Workspace\FlounderSharp\FlounderSharp";

            // Generate.
            var library = new Library(modules, outPath);
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
