using System;

namespace Acid.Sharp.Tests
{
    class ConfigManager
    {
		private IFile _audio;
		private IFile _graphics;

		public ConfigManager()
		{
			_audio = new FileJson(FileSystem.WorkingDirectory + "/Configs/Audio.json");
			_graphics = new FileJson(FileSystem.WorkingDirectory + "/Configs/Graphics.json");
            
			Load();

		    Events.Get().AddEvent(new EventTime(Time.Seconds(2.5f), () =>
		    {
		    	Save();
		        return false;
		    }, false));
        }

        public void Load()
		{
			_audio.Load();
			Metadata audioData = _audio.Parent;
			Audio.Get().MasterGain = audioData.GetChild<float>("Master Volume", 1.0f);
			Audio.Get().SetTypeGain(SoundType.General, audioData.GetChild<float>("General Volume", 1.0f));
			Audio.Get().SetTypeGain(SoundType.Effect, audioData.GetChild<float>("Effect Volume", 1.0f));
			Audio.Get().SetTypeGain(SoundType.Music, audioData.GetChild<float>("Music Volume", 1.0f));

			_graphics.Load();
			Metadata graphicsData = _graphics.Parent;
			Display.Get().Dimensions = graphicsData.GetChild<Vector2>("Dimensions", -Vector2.One);
			Display.Get().Position = graphicsData.GetChild<Vector2>("Position", -Vector2.One);
			Display.Get().Antialiasing = graphicsData.GetChild<bool>("Antialiasing", true);
			Display.Get().Borderless = graphicsData.GetChild<bool>("Borderless", false);
			Display.Get().Resizable = graphicsData.GetChild<bool>("Resizable", true);
			Display.Get().Floating = graphicsData.GetChild<bool>("Floating", false);
			Display.Get().Fullscreen = graphicsData.GetChild<bool>("Fullscreen", false);
			Engine.Get().FpsLimit = graphicsData.GetChild<float>("FPS Limit", 0.0f);
		}
		
        public void Save()
		{
			var audioData = _audio.Parent;
			audioData.SetChild<float>("Master Volume", Audio.Get().MasterGain);
			audioData.SetChild<float>("General Volume", Audio.Get().GetTypeGain(SoundType.General));
			audioData.SetChild<float>("Effect Volume", Audio.Get().GetTypeGain(SoundType.Effect));
			audioData.SetChild<float>("Music Volume", Audio.Get().GetTypeGain(SoundType.Music));
			_audio.Save();

			var graphicsData = _graphics.Parent;
			graphicsData.SetChild<Vector2>("Dimensions", Display.Get().Dimensions);
			graphicsData.SetChild<Vector2>("Position", Display.Get().Position);
			graphicsData.SetChild<bool>("Antialiasing", Display.Get().Antialiasing);
			graphicsData.SetChild<bool>("Borderless", Display.Get().Borderless);
			graphicsData.SetChild<bool>("Resizable", Display.Get().Resizable);
			graphicsData.SetChild<bool>("Floating", Display.Get().Floating);
			graphicsData.SetChild<bool>("Fullscreen", Display.Get().Fullscreen);
			graphicsData.SetChild<float>("FPS Limit", Engine.Get().FpsLimit);
			_graphics.Save();
		}
    }

    class EventTime : IEvent
    {
        private Timer _timer;
        private Func<object> _onEvent;
        private bool _repeat;

        public EventTime(Time interval, Func<object> onEvent, bool repeat) : base()
        {
            _timer = new Timer(interval);
            _onEvent = onEvent;
            _repeat = repeat;
        }
        
        public override void OnEvent()
        {
            _onEvent();
        }

        public override bool EventTriggered
        {
            get
            {
                if (!_timer.PassedTime)
                {
                    return false;
                }

                _timer.ResetStartTime();
                return true;
            }
        }

        public override bool RemoveAfterEvent => !_repeat;
    }
}