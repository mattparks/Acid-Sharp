using System;
using FlounderSharp;

namespace FlounderSharp.Tests
{
    class MainUpdater : IUpdater
    {
		private Delta _deltaUpdate;
		private Delta _deltaRender;
		private Timer _timerUpdate;
		private Timer _timerRender;

		public MainUpdater() : base()
		{
			_deltaUpdate = new Delta();
			_deltaRender = new Delta();
			_timerUpdate = new Timer(1.0f / 66.0f);
			_timerRender = new Timer(-1.0f);
		}

		public override void Update(ModuleRegister moduleRegister)
		{
            _timerRender.Interval = 1.0f / Engine.Get().FpsLimit;

			// Always-Update.
			moduleRegister.RunUpdate(ModuleUpdate.UpdateAlways);

			if (_timerUpdate.IsPassedTime)
			{
				// Resets the timer.
				_timerUpdate.ResetStartTime();

				// Pre-Update.
				moduleRegister.RunUpdate(ModuleUpdate.UpdatePre);

				// Update.
				moduleRegister.RunUpdate(ModuleUpdate.UpdateNormal);

				// Post-Update.
				moduleRegister.RunUpdate(ModuleUpdate.UpdatePost);

				// Updates the engines delta.
				_deltaUpdate.Update();
			}

			// Prioritize updates over rendering.
			if (!Maths.AlmostEqual(_timerUpdate.Interval, _deltaUpdate.Change, 5.0f))
			{
				return;
			}

			// Renders when needed.
			if (_timerRender.IsPassedTime || Engine.Get().FpsLimit <= 0.0f)
			{
				// Resets the timer.
				_timerRender.ResetStartTime();

				// Render
				moduleRegister.RunUpdate(ModuleUpdate.UpdateRender);

				// Updates the render delta, and render time extension.
				_deltaRender.Update();
			}
		}

        public override float Delta => _deltaUpdate.Change;
        public override float DeltaRender => _deltaRender.Change;
    }
}
