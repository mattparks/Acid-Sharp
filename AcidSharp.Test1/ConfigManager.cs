using System;
using AcidSharp;

namespace AcidSharp.Tests
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

		    Events.Get().AddEvent(new EventTime(2.5f, () =>
		    {
		    	Save();
		        return false;
		    }, false));
        }

        public void Load()
		{
			_audio.Load();
			Metadata audioData = _audio.Parent;
			Audio.Get().Volume = audioData.GetChild<float>("Master Volume", 1.0f);
			
			_graphics.Load();
			Metadata graphicsData = _graphics.Parent;
			Display.Get().Width = graphicsData.GetChild<uint>("Display Width", 1080);
			Display.Get().Height = graphicsData.GetChild<uint>("Display Height", 720);
			Engine.Get().FpsLimit = graphicsData.GetChild<float>("Fps Limit", 0.0f);
			Display.Get().Antialiasing = graphicsData.GetChild<bool>("Is Antialiasing", true);
			Display.Get().Fullscreen = graphicsData.GetChild<bool>("Is Fullscreen", false);
		}
		
        public void Save()
		{
			Metadata audioData = _audio.GetParent();
			audioData.SetChild<float>("Master Volume", Audio.Get().Volume);
			_audio.Save();

			Metadata graphicsData = _graphics.GetParent();
			graphicsData.SetChild<uint>("Display Width", Display.Get().Width);
			graphicsData.SetChild<uint>("Display Height", Display.Get().GetHeight());
			graphicsData.SetChild<float>("Fps Limit", Engine.Get().FpsLimit);
			graphicsData.SetChild<bool>("Is Antialiasing", Display.Get().Antialiasing);
			graphicsData.SetChild<bool>("Is Fullscreen", Display.Get().Fullscreen);
			_graphics.Save();
		}
    }

    class EventTime : IEvent
    {
        private Timer _timer;
        private Func<object> _onEvent;
        private bool _repeat;

        public EventTime(float interval, Func<object> onEvent, bool repeat) : base()
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
                if (!_timer.IsPassedTime)
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