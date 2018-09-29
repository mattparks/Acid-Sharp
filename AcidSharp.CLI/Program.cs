using System;
using CppSharp;

namespace AcidSharp.CLI
{
    class Program
    {
        static void Main(string[] args)
        {
            var library = new Library(@"C:\Users\mattp\Documents\Acid Workspace\Acid-Sharp\AcidSharp");
            ConsoleDriver.Run(library);
            library.Dispose();

            Console.WriteLine("Press enter to continue...");
            Console.ReadLine();
        }
    }
}
