using System;
using FlounderSharp;

namespace FlounderSharp.Tests
{
    class ConfigManager
    {
		private Config _configAudio;
		private Config _configGraphics;

		public ConfigManager()
		{
			FileSystem.CreateFolder("Configs");

			_configAudio = new Config(new FileJson(FileSystem.GetWorkingDirectory() + "/Configs/Audio.json"));
			_configAudio.Load();
			//	_configAudio.Link<float>("MasterVolume", 1.0f, nullptr, nullptr);

			_configGraphics = new Config(new FileJson(FileSystem.GetWorkingDirectory() + "/Configs/Graphics.json"));
			_configGraphics.Load();
			//  _configGraphics.Link<float>("Fps Limit", 0.0f, CONFIG_GET(Engine.Get().GetFpsLimit()), CONFIG_SET(float, Engine.Get().SetFpsLimit(v)));
			//  _configGraphics.Link<bool>("Is Antialiasing", true, CONFIG_GET(Display.Get().IsAntialiasing()), CONFIG_SET(bool, Display.Get().SetAntialiasing(v)));
			//  _configGraphics.Link<bool>("Is Fullscreen", false, CONFIG_GET(Display.Get().IsFullscreen()), CONFIG_SET(bool, Display.Get().SetFullscreen(v)));
			//  _configGraphics.Link<int>("Display Width", 1080, CONFIG_GET(Display.Get().GetWidth()));
			//  _configGraphics.Link<int>("Display Height", 720, CONFIG_GET(Display.Get().GetHeight()));

			//  Events.Get().AddEvent(new EventTime(2.5f, false, () =>
			//  {
			//  	Save();
			//  }));
		}

		public Save()
		{
			Console.WriteLine("Saving config manager.");
			_configAudio.Save();
			_configGraphics.Save();
		}
    }
}