using System;
using AcidSharp;

namespace AcidSharp.Tests
{
    class World : IModule
    {
        private static readonly Colour FogColourSunrise = new Colour("#ee9a90");
        private static readonly Colour FogColourNight = new Colour("#0D0D1A");
        private static readonly Colour FogColourDay = new Colour("#e6e6e6");

        private static readonly Colour SunColourSunrise = new Colour("#ee9a90");
        private static readonly Colour SunColourNight = new Colour("#0D0D1A");
        private static readonly Colour SunColourDay = new Colour("#ffffff");

        private static readonly Colour MoonColourNight = new Colour("#666699");
        private static readonly Colour MoonColourDay = new Colour("#000000");

        private static readonly Colour SkyboxColourDay = new Colour("#003C8A");

        private Noise _noiseTerrain;

        private DriverLinear _driverDay;
        private float _factorDay;
        private float _factorSunrise;
        private float _factorShadow;
        private float _sunHeight;
        private float _starIntensity;

        private Vector3 _skyboxRotation;
        private Vector3 _sunPosition;
        private Vector3 _moonPosition;
        private Colour _sunColour;
        private Colour _moonColour;

        private Fog _fog;
        private Colour _skyColour;

		/// <summary>
		/// Gets this engine instance.
		/// </summary>
		/// <returns> The current module instance. </returns>
		static World Get() => Engine.Get().GetModule<World>();
		
        public World()
        {
            _noiseTerrain = new Noise(69124);
            _noiseTerrain.NoiseType = NoiseType.TypePerlinfractal;
            _noiseTerrain.Frequency = 0.003f;
            _noiseTerrain.Interp = NoiseInterp.InterpQuintic;
            _noiseTerrain.FractalType = NoiseFractal.FractalFbm;
            _noiseTerrain.FractalOctaves = 5;
            _noiseTerrain.FractalLacunarity = 2.0f;
            _noiseTerrain.FractalGain = 0.5f;


            _driverDay = new DriverLinear(0.0f, 1.0f, 300.0f);
            _driverDay.Update(50.0f); // Starts during daytime.

            _factorDay = 0.0f;
            _skyboxRotation = new Vector3();
            _sunPosition = new Vector3();
            _moonPosition = new Vector3();
            _sunColour = new Colour();
            _moonColour = new Colour();
            _fog = new Fog(Colour.White, 0.001f, 2.0f, -0.1f, 0.3f);
            _skyColour = new Colour("#3399ff");
        }

        public override void Update()
        {
            var delta = Engine.Get().Delta;
            _factorDay = _driverDay.Update(delta);

            _skyboxRotation = new Vector3(360.0f * _factorDay, 0.0f, 0.0f);

            var lightDirection = _skyboxRotation.Rotate(new Vector3(0.2f, 0.0f, 0.5f));
            lightDirection.Normalize();

            var fogColour = FogColourSunrise.Interpolate(FogColourNight, SunriseFactor);
            fogColour = fogColour.Interpolate(FogColourDay, ShadowFactor);

            _sunPosition = lightDirection * new Vector3(-6048.0f, -6048.0f, -6048.0f);
            _moonPosition = lightDirection * new Vector3(6048.0f, 6048.0f, 6048.0f);

            /*if (Scenes.Get().GetCamera() != null)
            {
                _sunPosition += Scenes.Get().Camera.Position;
                _moonPosition += Scenes.Get().Camera.Position;
            }*/

            _sunColour = SunColourSunrise.Interpolate(SunColourNight, SunriseFactor);
            _sunColour = _sunColour.Interpolate(SunColourDay, ShadowFactor);

            _moonColour = MoonColourNight.Interpolate(MoonColourDay, ShadowFactor);

            _fog.Colour = fogColour;
            _fog.Density = 0.002f + ((1.0f - ShadowFactor * 0.002f));
            _fog.Gradient = 2.0f - ((1.0f - ShadowFactor) * 0.380f);
            _fog.LowerLimit = 0.0f;
            _fog.UpperLimit = 0.15f - ((1.0f - ShadowFactor) * 0.03f);

            _skyColour = SkyboxColourDay;

            if (Shadows.Get() != null)
            {
                Shadows.Get().LightDirection = lightDirection;
                Shadows.Get().ShadowBoxOffset = (4.0f * (1.0f - ShadowFactor)) + 10.0f;
                Shadows.Get().ShadowBoxDistance = 40.0f;
                Shadows.Get().ShadowTransition = 5.0f;
                Shadows.Get().ShadowDarkness = 0.6f * ShadowFactor;
            }

            _factorSunrise = Math.Clamp(-((float)Math.Sin(2.0f * Math.PI * DayFactor) - 1.0f) / 2.0f, 0.0f, 1.0f);
            _factorShadow = Math.Clamp(1.7f * (float)Math.Sin(2.0f * Math.PI * DayFactor), 0.0f, 1.0f);;
            _sunHeight = _sunPosition.Y;
            _starIntensity = Math.Clamp(1.0f - ShadowFactor, 0.0f, 1.0f);
        }

        public float GetTerrainRadius(float radius, float theta, float phi)
        {
            var height = _noiseTerrain.GetValue(
                (radius / 10.0f) * Maths.WrapDegrees(Maths.Degrees(theta)),
                (radius / 10.0f) * Maths.WrapDegrees(Maths.Degrees(phi))
            );
            return radius + (28.0f * height);
        }

        public Fog Fog
        {
            get => _fog;
            set => _fog = value;
        }
        public Colour SkyColour
        {
            get => _skyColour;
            set => _skyColour = value;
        }
        public float DayFactor => _factorDay;
        public float SunriseFactor => _factorSunrise;
        public float ShadowFactor => _factorShadow;
        public float SunHeight => _sunHeight;
        public float StarIntensity => _starIntensity;
        public Noise NoiseTerrain => _noiseTerrain;
        public Vector3 SkyboxRotation => _skyboxRotation;
        public Vector3 SunPosition => _sunPosition;
        public Vector3 MoonPosition => _moonPosition;
        public Colour SunColour => _sunColour;
        public Colour MoonColour => _moonColour;
    }
}
