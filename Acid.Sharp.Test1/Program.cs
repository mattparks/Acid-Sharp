using System;

namespace Acid.Sharp.Tests
{
    class Program
    {
        private static void Main(string[] args)
        {
            // Registers file search paths.
            Files.SetBaseDirectory(args[0]);
        //  Files.AddSearchPath("Resources/Game");
            Files.AddSearchPath("Resources/Engine");

            // Creates the engine.
            var engine = new Engine();

            var configManager = new ConfigManager();
            Console.WriteLine($"Working Directory: '{FileSystem.WorkingDirectory}'");

            // Registers modules.
			Engine.Get().RegisterModule(new World(), ModuleUpdate.Normal);

            // Registers components.

            // Initializes modules.
            Display.Get().Title = "Testing C#";
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
