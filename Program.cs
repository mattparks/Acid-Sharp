using System;
using CppSharp;

namespace FlounderSharp
{
    class Program
    {
        static void Main(string[] args)
        {
            ConsoleDriver.Run(new FlounderLibrary(@"C:\Testing\include", @"C:\Testing\lib", @"C:\Testing\csharp"));
            Console.ReadLine();
        }
    }
}
