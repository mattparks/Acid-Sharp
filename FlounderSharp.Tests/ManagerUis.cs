using System;
using FlounderSharp;

namespace FlounderSharp.Tests
{
    class ManagerUis : IManagerUis
    {
    	private static readonly float SlideTime = 0.2f;
		private static readonly Colour PrimaryColour = new Colour("#e74c3c");

		private UiStartLogo _uiStartLogo;

		public ManagerUis()
		{
			_uiStartLogo = new UiStartLogo(Uis.Get().GetContainer());
		}

		public override void Update()
		{
			if (_uiStartLogo.GetAlpha() == 0.0f && _uiStartLogo.IsStarting())
			{
				_uiStartLogo.SetAlphaDriver(new DriverConstant(0.0f));
				_uiStartLogo.SetStarting(false);
			}
		}

		public override bool IsGamePaused()
		{
			return _uiStartLogo.IsStarting();
		}

		public override float GetBlurFactor()
		{
			return 0.0f;
		}

		public override Colour GetPrimaryColour() 
		{ 
			return PrimaryColour; 
		}
    }
}