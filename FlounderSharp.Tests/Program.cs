using System;
using FlounderSharp;

namespace FlounderSharp.Tests
{
    class Program
    {
        private static void CallbackError(int error, string description)
        {
            Console.WriteLine($"GLFW Error: {description}");
        }

        static void Main(string[] args)
        {
            FileSystem.CreateFolder("DankMemes");

            // End program.
            Console.WriteLine("Press enter to continue...");
            Console.ReadLine();
        }
    }
}
