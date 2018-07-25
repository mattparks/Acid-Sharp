using System;
using AcidSharp;

namespace AcidSharp.Tests
{
    class Program
    {
        private static void Main(string[] args)
        {
            // Registers file search paths.
        //  Files.AddSearchPath("Resources/Game");
            Files.AddSearchPath("Resources/Engine");

            // Creates the engine and updater objects.
            var engine = new Engine
            {
                Updater = new MainUpdater()
            );

            var configManager = new ConfigManager();
            Console.WriteLine($"Working Directory: '{FileSystem.WorkingDirectory}'");

            // Registers modules.
        //    Worlds.Get().World = new MainWorld();

            // Registers components.

            // Initializes modules.
            Display.Get().Title = "Testing Guis";
            Display.Get().Icon = "Logos/Tail.png";
            Mouse.Get().CustomMouse = "Guis/Cursor.png";
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
