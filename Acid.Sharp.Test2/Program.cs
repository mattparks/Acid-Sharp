using System;

namespace Acid.Sharp.Tests
{
    class Program
    {
        private static void Main(string[] args)
        {
            Console.WriteLine($"{Maths.Random(0.0f, 100.0f)}");
            Console.WriteLine($"{Maths.InterpolateCosine(0.0f, 1.0f, 0.6f)}");
            Console.WriteLine($"{Maths.Pi}");

            var array = new float[16]
            {
                1.0f, 0.0f, 0.0f, 0.0f,
                -91.3f, 1.0f, 0.0f, 0.0f,
                102.0f, 0.0f, 1.0f, 0.0f,
                9.11f, 0.0f, 0.0f, 1.0f
            };
            var a = new Matrix4(array);
            Console.WriteLine($"{a.ToString()}");

            var original = new Vector3(90.0f, 0.0f, 0.0f);
            var quaternion = original.ToQuaternion();
            var restored = quaternion.ToEuler();

            Console.WriteLine($"Original: {original.ToString()}");
            Console.WriteLine($"Quaternion: {quaternion.ToString()}");
            Console.WriteLine($"Restored: {restored.ToString()}");

            Console.WriteLine($"Working Directory: {FileSystem.WorkingDirectory}");

            // End program.
            Console.WriteLine("Press enter to continue...");
            Console.ReadLine();
        }
    }
}
