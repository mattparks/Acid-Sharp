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

		public MainUpdater()
		{
			_deltaUpdate = new Delta();
			_deltaRender = new Delta();
			_timerUpdate = new Timer(1.0f / 66.0f);
			_timerRender = new Timer(-1.0f);
		}

		public override void Update(ModuleRegister moduleRegister)
		{
			_timerRender.SetInterval(1.0f / Engine.Get().GetFpsLimit());

			// Always-Update.
			moduleRegister.RunUpdate(UpdateAlways);

			if (_timerUpdate.IsPassedTime())
			{
				// Resets the timer.
				_timerUpdate.ResetStartTime();

				// Pre-Update.
				moduleRegister.RunUpdate(UpdatePre);

				// Update.
				moduleRegister.RunUpdate(UpdateNormal);

				// Post-Update.
				moduleRegister.RunUpdate(UpdatePost);

				// Updates the engines delta.
				_deltaUpdate.Update();
			}

			// Prioritize updates over rendering.
			if (!Maths.AlmostEqual(_timerUpdate.GetInterval(), _deltaUpdate.GetChange(), 5.0f))
			{
				return;
			}

			// Renders when needed.
			if (_timerRender.IsPassedTime() || Engine.Get().GetFpsLimit() <= 0.0f)
			{
				// Resets the timer.
				_timerRender.ResetStartTime();

				// Render
				moduleRegister.RunUpdate(UpdateRender);

				// Updates the render delta, and render time extension.
				_deltaRender.Update();
			}
		}

		public override float GetDelta() 
		{ 
			return _deltaUpdate.GetChange(); 
		}

		public override float GetDeltaRender() 
		{ 
			return _deltaRender.GetChange(); 
		}
    }
}
