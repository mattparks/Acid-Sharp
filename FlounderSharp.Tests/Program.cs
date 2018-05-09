using System;
using FlounderSharp;

namespace FlounderSharp.Tests
{
    class Program
    {
        static void Main(string[] args)
        {
            Foo x = new Foo(3);
            Foo y = new Foo(10);
            Foo z = x.Add(y);

            // End program.
            Console.WriteLine("Press enter to continue...");
            Console.ReadLine();
        }
    }
}
