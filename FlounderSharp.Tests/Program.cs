using System;
using FlounderSharp;

namespace FlounderSharp.Tests
{
    class Program
    {
        private static void Main(string[] args)
        {
            //    Console.WriteLine($"Working Directory: '{FileSystem.WorkingDirectory}'");
            
            var noise = new Noise(1998)
            {
                NoiseType = NoiseType.TypePerlinfractal,
                Frequency = 0.003f,
                Interp = NoiseInterp.InterpQuintic,
                FractalType = NoiseFractal.FractalFbm,
                FractalOctaves = 5,
                FractalLacunarity = 2.0f,
                FractalGain = 0.5f
            };
            Console.WriteLine(100.0f * noise.GetNoise(500.2f, -920.1f));

            // End program.
            Console.WriteLine("Press enter to continue...");
            Console.ReadLine();
        }
    }
}
