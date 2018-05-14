using System;
using CppSharp;

namespace FlounderSharp.CLI
{
    class Program
    {
        static void Main(string[] args)
        {
            ConsoleDriver.Run(new Library());
            
            Console.WriteLine("Press enter to continue...");
            Console.ReadLine();
        }
    }
}
