using System;
using System.Xml;
using CppSharp;

namespace AcidSharp.CLI
{
    class Program
    {
        static void Main(string[] args)
        {
            var library = new Library();
            ConsoleDriver.Run(library);

            var settings = new XmlWriterSettings()
            {
                Indent = true
            };

            using (var writer = XmlWriter.Create(@"C:\Users\mattp\Documents\Acid Workspace\AcidSharp\AcidSharp\ExternalDefinitions.xml", settings))
            {
                library.XmlExport.WriteTo(writer);
            }

            Console.WriteLine("Press enter to continue...");
            Console.ReadLine();
        }
    }
}
