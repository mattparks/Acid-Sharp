using System;
using FlounderSharp;

namespace FlounderSharp.Tests
{
    class MainCamera : ICamera
    {
    	private static readonly float NearPlane = 0.1f;
    	private static readonly float FarPlane = 1000.0f;
    	private static readonly float FieldOfView = 60.0f;

		private Vector3 _position;
		private Vector3 _velocity;
		private Vector3 _rotation;

		private Matrix4 _viewMatrix;
		private Matrix4 _projectionMatrix;

		private Frustum _viewFrustum;
		private Ray _viewRay;

		public MainCamera()
		{
			_position = new Vector3();
			_velocity = new Vector3();
			_rotation = new Vector3();
			_viewMatrix = new Matrix4();
			_projectionMatrix = new Matrix4();
			_viewFrustum = new Frustum();
			_viewRay = new Ray(false, Vector2(0.5f, 0.5f));
		}

		public override void Update()
		{
		//	var delta = Std.Min(1.0f / 60.0f, Engine.Get().GetDelta());

			_viewMatrix = Matrix4.ViewMatrix(_position, _rotation);
			_projectionMatrix = Matrix4.PerspectiveMatrix(GetFov(), Display.Get().GetAspectRatio(), GetNearPlane(), GetFarPlane());

			_viewFrustum.Update(_viewMatrix, _projectionMatrix);
			_viewRay.Update(_position, Vector2(Mouse.Get().GetPositionX(), Mouse.Get().GetPositionY()), _viewMatrix, _projectionMatrix);
		
		}

		public override void ReflectView(float waterHeight)
		{
			_position._y -= 2.0f * (_position._y - waterHeight);
			_rotation._x = -_rotation._x;
			_viewMatrix = Matrix4.ViewMatrix(_position, _rotation);
		}

		public override float GetNearPlane() 
		{ 
			return NearPlane; 
		}

		public override float GetFarPlane() 
		{ 
			return FarPlane; 
		}

		public override float GetFov() 
		{ 
			return FieldOfView; 
		}

		public override Frustum GetViewFrustum() 
		{ 
			return _viewFrustum; 
		}

		public override Ray GetViewRay() 
		{ 
			return _viewRay; 
		}

		public override Matrix4 GetViewMatrix() 
		{ 
			return _viewMatrix; 
		}

		public override Matrix4 GetProjectionMatrix() 
		{ 
			return _projectionMatrix; 
		}

		public override Vector3 GetPosition() 
		{ 
			return _position; 
		}

		public override Vector3 GetVelocity() 
		{ 
			return _velocity; 
		}

		public override Vector3 GetRotation() 
		{ 
			return _rotation; 
		}
    }
}