using System;
using AcidSharp;

namespace AcidSharp.Tests
{
    unsafe class Program
    {
        private static void Main(string[] args)
        {
            Console.WriteLine($"{Maths.Random(0.0f, 100.0f)}");

            var array = new float[16]
            {
                1.0f, 0.0f, 0.0f, 0.0f,
                -91.3f, 1.0f, 0.0f, 0.0f,
                102.0f, 0.0f, 1.0f, 0.0f,
                9.11f, 0.0f, 0.0f, 1.0f
            };
            var a = new Matrix4(array);
            Console.WriteLine($"{a[0][0]}, {a[0][1]}, {a[0][2]}, {a[0][3]}\n{a[1][0]}, {a[1][1]}, {a[1][2]}, {a[1][3]}\n{a[2][0]}, {a[2][1]}, {a[2][2]}, {a[2][3]}\n{a[3][0]}, {a[3][1]}, {a[3][2]}, {a[3][3]}");
        //    Console.WriteLine($"{a.ToString()}");

            //    var original = new Vector3(90.0f, 0.0f, 0.0f);
            //    var quaternion = original.ToQuaternion();
            //    var restored = quaternion.ToEuler();

            //    Console.WriteLine($"Original: {original.ToString()}");
            //    Console.WriteLine($"Quaternion: {quaternion.ToString()}");
            //    Console.WriteLine($"Restored: {restored.ToString()}");

            // Console.WriteLine($"Working Directory: {FileSystem.WorkingDirectory}");

            // End program.
            Console.WriteLine("Press enter to continue...");
            Console.ReadLine();
        }
    }
}
