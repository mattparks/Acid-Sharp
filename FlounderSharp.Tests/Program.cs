using System;
using FlounderSharp;

namespace FlounderSharp.Tests
{
    class Program
    {
        private static void Main(string[] args)
        {
            /*var seed = 87374932;
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
            Console.WriteLine(100.0f * noise.GetNoise(500.2f, -920.1f));*/

            Console.WriteLine(10.0f * Maths.Random);

            var back = Vector3.BACK;

            var dank = new Memes("RarePepe", 420.0f);
            dank.Print();

            // End program.
            Console.WriteLine("Press enter to continue...");
            Console.ReadLine();
        }
    }
}
