using System;
using FlounderSharp;

namespace FlounderSharp.Tests
{
    class Program
    {
        private static void Main(string[] args)
        {
            var display = new Display
            {
                Title = "Dank memes"
            };

            while (!display.IsClosed)
            {
                display.Update();
            }
            
            // End program.
            Console.WriteLine("Press enter to continue...");
            Console.ReadLine();
        }
    }
}
