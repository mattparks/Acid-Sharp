using System;
using FlounderSharp;

namespace FlounderSharp.Tests
{
    class ManagerUis : IManagerUis
    {
		private static readonly Colour _primaryColour = new Colour("#e74c3c");
        private static readonly float _slideTime = 0.2f;

        private UiStartLogo _uiStartLogo;

		public ManagerUis() : base()
        {
			_uiStartLogo = new UiStartLogo(Uis.Get().Container);
		}

		public override void Update()
		{
			if (_uiStartLogo.Alpha == 0.0f && _uiStartLogo.IsStarting)
			{
				_uiStartLogo.SetAlphaDriver(new DriverConstant(0.0f));
				_uiStartLogo.SetStarting(false);
			}
		}

        public override bool IsGamePaused => _uiStartLogo.IsStarting;
        public override float BlurFactor => 0.0f;
        public override Colour PrimaryColour => _primaryColour;
    }
}