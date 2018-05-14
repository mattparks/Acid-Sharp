using System;
using FlounderSharp;

namespace FlounderSharp.Tests
{
    class Program
    {
        private static void Main(string[] args)
        {
            var seed = 87374932;
            var noise = new Noise(ref seed)
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
            Console.WriteLine(10.0f * Maths.Random);
            //var x = new Vector3(1.0f, 1.0f, 1.0f);

        //    FileSystem.CreateFolder(@"C:\Users\mattp\Documents\Flounder Workspace\FlounderSharp\FlounderSharp.Tests\Memes");
        //    Console.WriteLine($"Working Directory: '{FileSystem.WorkingDirectory}'");

            // End program.
            Console.WriteLine("Press enter to continue...");
            Console.ReadLine();
        }
    }
}
