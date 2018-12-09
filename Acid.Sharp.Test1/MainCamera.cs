using System;

namespace Acid.Sharp.Tests
{
    class MainCamera : ICamera
    {
    	private static readonly float _nearPlane = 0.1f;
    	private static readonly float _farPlane = 1000.0f;
    	private static readonly float _fieldOfView = 60.0f;

		private Vector3 _position;
		private Vector3 _velocity;
		private Vector3 _rotation;

		private Matrix4 _viewMatrix;
		private Matrix4 _projectionMatrix;

		private Frustum _viewFrustum;
		private Ray _viewRay;

		public MainCamera() : base()
		{
			_position = new Vector3();
            _velocity = new Vector3();
			_rotation = new Vector3();
			_viewMatrix = new Matrix4();
			_projectionMatrix = new Matrix4();
			_viewFrustum = new Frustum();
			_viewRay = new Ray(false, new Vector2(0.5f, 0.5f));
		}

		public override void Update()
		{
			var delta = Math.Min(1.0f / 60.0f, Engine.Get().Delta.AsSeconds);

            var mouseX = 2.0f * Mouse.Get().DeltaX;
            var mouseY = 2.0f * Mouse.Get().DeltaY;
            _rotation += new Vector3(-mouseY, mouseX, 0.0f);

            _viewMatrix = Matrix4.ViewMatrix(_position, _rotation);
			_projectionMatrix = Matrix4.PerspectiveMatrix(Fov, Display.Get().AspectRatio, NearPlane, FarPlane);

			_viewFrustum.Update(_viewMatrix, _projectionMatrix);
			_viewRay.Update(_position, new Vector2(Mouse.Get().PositionX, Mouse.Get().PositionY), _viewMatrix, _projectionMatrix);
		}

        public override void ReflectView(float waterHeight)
        {
            _position.Y -= 2.0f * (_position.Y - waterHeight);
            _rotation.X = -_rotation.X;
            _viewMatrix = Matrix4.ViewMatrix(_position, _rotation);
        }

        public override float NearPlane => _nearPlane;
        public override float FarPlane => _farPlane;
        public override float Fov => _fieldOfView;
        public override Frustum ViewFrustum => _viewFrustum;
        public override Ray ViewRay => _viewRay;
        public override Matrix4 ViewMatrix => _viewMatrix;
        public override Matrix4 ProjectionMatrix => _projectionMatrix;
        public override Vector3 Position => _position;
        public override Vector3 Velocity => _velocity;
        public override Vector3 Rotation => _rotation;
    }
}