using System;
using System.Collections.Generic;
using AcidSharp;

namespace AcidSharp.Tests
{
    class Scene1 : IScene
    {
        private static readonly Colour _primaryColour = new Colour("#e74c3c");
        private static readonly float _slideTime = 0.2f;

        private IButton _buttonFullscreen;
		private IButton _buttonScreenshot;
		private IButton _buttonExit;
        private UiStartLogo _uiStartLogo;
        private SelectorJoystick _selectorJoystick;

		public Scene1() : base(new MainCamera(), new SelectorJoystick(JoystickPort.Joystick1, 0, 1, new List<uint>{0, 1}))
		{
			_buttonFullscreen = new ButtonKeyboard({ Key.KeyF11});
			_buttonScreenshot = new ButtonKeyboard({ Key.KeyF12 });
			_buttonExit = new ButtonKeyboard({ Key.KeyDelete });

		    _uiStartLogo = new UiStartLogo(Uis.Get().Container);
        }

		public override void Start()
		{
			// Skybox.
			var skyboxObject = new GameObject(new Transform(new Vector3(), new Vector3(), 2048.0f));
			skyboxObject.AddComponent(new Mesh(ModelSphere.Resource(6, 6, 1.0f)));
			skyboxObject.AddComponent(new MaterialSkybox(Cubemap.Resource("Objects/SkyboxChapel", ".png"), false));
			skyboxObject.AddComponent(new MeshRender());

			// Entities.
			var sun = new GameObject(new Transform(new Vector3(100.0f, 1000.0f, 8000.0f), new Vector3(), 18.0f));
			sun.AddComponent(new Light(new Colour("#FFFFFF", 1.0f), -1.0f));
		}

		public override void Update()
		{
			if (_buttonFullscreen.WasDown())
			{
				Display.Get().SetFullscreen(!Display.Get().IsFullscreen);
			}

			if (_buttonScreenshot.WasDown())
			{
				var filename = $"Screenshots/{Engine.DateTime}.png";
				Renderer.Get().CaptureScreenshot(filename);
			}

			if (_buttonExit.WasDown())
			{
				Engine.Get().RequestClose(false);
			}

		    if (_uiStartLogo.Alpha == 0.0f && _uiStartLogo.IsStarting)
		    {
		        _uiStartLogo.AlphaDriver = new DriverConstant(0.0f);
		        _uiStartLogo.SetStarting(false);
		    }
        }

        public override bool IsPaused => _uiStartLogo.IsStarting;
    }
}