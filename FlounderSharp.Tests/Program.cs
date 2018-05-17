using System;

namespace FlounderSharp.Tests
{
    class Program
    {
        private static void Main(string[] args)
        {
            var display = new Display
            {
                Title = "Hello C#",
                Icon = @"C:\Users\mattp\Documents\Flounder Workspace\Flounder\Resources\Logos\Tail.png",
                Width = 720,
                Height = 480
            };

            while (!display.IsClosed)
            {
                display.Update();
            }

            var filepath = @"C:\Users\mattp\Documents\Flounder Workspace\FlounderSharp\Memes.txt";
            FileSystem.CreateFile(filepath, false);
            var content = FileSystem.ReadTextFile(filepath);
            
            // End program.
            Console.WriteLine("Press enter to continue...");
            Console.ReadLine();
        }
    }
}
