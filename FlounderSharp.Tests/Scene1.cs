using System;
using FlounderSharp;

namespace FlounderSharp.Tests
{
    class Scene1 : Scene
    {
		private IButton _buttonFullscreen;
		private IButton _buttonScreenshot;
		private IButton _buttonExit;

		public Scene1() : base(new MainCamera(), new ManagerUis())
		{
			_buttonFullscreen = new ButtonKeyboard({ Key.KeyF11});
			_buttonScreenshot = new ButtonKeyboard({ Key.KeyF12 });
			_buttonExit = new ButtonKeyboard({ Key.KeyDelete });
        }

		public override void Start()
		{
			// Skybox.
			var skyboxObject = new GameObject(new Transform(new Vector3(), new Vector3(), 2048.0f));
			skyboxObject.AddComponent(new Mesh(ShapeSphere.Resource(6, 6, 1.0f)));
			skyboxObject.AddComponent(new MaterialSkybox(Cubemap.Resource("Resources/Entities/SkyboxChapel", ".png"), false));
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
				var filename = "Screenshots/" + Engine.Get().DateTime + ".png";
				Screenshot.Capture(filename);
			}

			if (_buttonExit.WasDown())
			{
				Engine.Get().RequestClose(false);
			}
		}
    }
}