using System;
using FlounderSharp;

namespace FlounderSharp.Tests
{
    class Program
    {
        private static void Main(string[] args)
        {
            // Creates the engine and updater objects.
            var engine = new Engine();
            engine.SetUpdater(new MainUpdater());

            var configManager = new ConfigManager();
            Console.WriteLine($"Working Directory: '{FileSystem.WorkingDirectory}'");

            // Registers modules.

            // Registers components.

            // Initializes modules.
            Display.Get().Title = "Testing Guis";
            Display.Get().Icon = "Resources/Logos/Tail.png";
            Mouse.Get().CustomMouse = "Resources/Guis/Cursor.png";
            Renderer.Get().Manager = new MainRenderer();
            Scenes.Get().Scene = new Scene1();

            // Runs the game loop.
            var exitCode = engine.Run();
            configManager.Save();

            // End program.
            Console.WriteLine("Press enter to continue...");
            Console.ReadLine();
        }
    }
}
