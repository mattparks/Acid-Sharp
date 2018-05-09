using System;
using FlounderSharp;

namespace FlounderSharp.Tests
{
    class Program
    {
        static void Main(string[] args)
        {
            // Maths tests.
            Console.WriteLine(Maths.Random);

            {
               Console.WriteLine("Vector2:");
               Vector2 a = new Vector2(3.0f, -7.2f);
               Vector2 b = new Vector2(-1.74f, 15.4f);
               Console.WriteLine($"  {a.ToString()}");
               Console.WriteLine($"  {a} + {b} = {new Vector2(a + b)}");
               Console.WriteLine($"  {a} - {b} = {new Vector2(a - b)}");
               Console.WriteLine($"  {a} * {b} = {new Vector2(a * b)}");
               Console.WriteLine($"  {a} / {b} = {new Vector2(a / b)}");
               Console.WriteLine($"  {a} ang {b} = {a.Angle(b)}");
               Console.WriteLine($"  {a} dot {b} = {a.Dot(b)}");
               Console.WriteLine($"  {a} sca {10.0f} = {a.Scale(10.0f)}");
               Console.WriteLine($"  {a} rot {90.0f} = {a.Rotate(90.0f)}");
               Console.WriteLine($"  -{a} = {-a}", a, (-a));
               Console.WriteLine($"  nor {a} = {a.Normalize()}", a, a.Normalize());
               //    Console.WriteLine($"  len {a} = {a.Length()}");
               //    Console.WriteLine($"  {a} dist {b} = {a.Distance(b)}");
               Console.WriteLine("");
           }
           {
               Console.WriteLine("Vector3:");
               Vector3 a = new Vector3(12.9f, -2.0f, 6.7f);
               Vector3 b = new Vector3(-9.7f, 15.9f, -13.8f);
               Console.WriteLine($"  {a} + {b} = {new Vector2(a + b)}");
               Console.WriteLine($"  {a} - {b} = {new Vector2(a - b)}");
               Console.WriteLine($"  {a} * {b} = {new Vector2(a * b)}");
               Console.WriteLine($"  {a} / {b} = {new Vector2(a / b)}");
               Console.WriteLine($"  {a} ang {b} = {a.Angle(b)}");
               Console.WriteLine($"  {a} dot {b} = {a.Dot(b)}");
               Console.WriteLine($"  {a} sca {10.0f} = {a.Scale(10.0f)}");
               //   Console.WriteLine($"  {a} rot {90.0f} = {a.Rotate(90.0f)}");
               Console.WriteLine($"  -{a} = {-a}", a, (-a));
               Console.WriteLine($"  nor {a} = {a.Normalize()}", a, a.Normalize());
               //    Console.WriteLine($"  len {a} = {a.Length()}");
               //    Console.WriteLine($"  {a} dist {b} = {a.Distance(b)}");
               Console.WriteLine("");
           }

            // Creates the engine and updater objects.
            var engine = new Engine();
            engine.SetUpdater(new MainUpdater());

            var configManager = new ConfigManager();
            Console.WriteLine($"Working Directory: '{FileSystem.GetWorkingDirectory()}'");

            // Registers modules.

            // Registers components.

            // Initializes modules.
            Display.Get().SetTitle("Testing Guis");
            Display.Get().SetIcon("Resources/Logos/Tail.png");
            Mouse.Get().SetCustomMouse("Resources/Guis/Cursor.png");
            Renderer.Get().SetManager(new MainRenderer());
            Scenes.Get().SetScene(new Scene1());

            // Runs the game loop.
            var exitCode = engine.Run();
            configManager.Save();

            // End program.
            Console.WriteLine("Press enter to continue...");
            Console.ReadLine();
        }
    }
}
