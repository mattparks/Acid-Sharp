using System;
using FlounderSharp;

namespace FlounderSharp.Tests
{
    class Scene1 : Scene
    {
		private IButton _buttonFullscreen;
		private IButton _buttonScreenshot;
		private IButton _buttonExit;

		public Scene1()
		{
			base(new MainCamera(), new ManagerUis());
			_buttonFullscreen = new ButtonKeyboard({GLFW_KEY_F11});
			_buttonScreenshot = new ButtonKeyboard({GLFW_KEY_F12});
			_buttonExit = new ButtonKeyboard({GLFW_KEY_DELETE});
		}

		public override void Start()
		{
			// Skybox.
			var skyboxObject = new GameObject(Transform(Vector3(), Vector3(), 2048.0f));
			skyboxObject.SetName("SkyboxChapel");
			skyboxObject.AddComponent<Mesh>(ShapeSphere.Resource(6, 6, 1.0f));
			skyboxObject.AddComponent<MaterialSkybox>(Cubemap.Resource("Resources/Entities/SkyboxChapel", ".png"), false);
			skyboxObject.AddComponent<MeshRender>();

			// Entities.
			var sun = new GameObject(Transform(Vector3(100.0f, 1000.0f, 8000.0f), Vector3(), 18.0f));
			sun.AddComponent<Light>(Colour("#FFFFFF"), -1.0f);
		}

		public override void Update()
		{
			if (_buttonFullscreen.WasDown())
			{
				Display.Get().SetFullscreen(!Display.Get().IsFullscreen());
			}

			if (_buttonScreenshot.WasDown())
			{
				var filename = "Screenshots/" + Engine.Get().GetDateTime() + ".png";
				Screenshot.Capture(filename);
			}

			if (_buttonExit.WasDown())
			{
				Engine.Get().RequestClose(false);
			}
		}
    }
}