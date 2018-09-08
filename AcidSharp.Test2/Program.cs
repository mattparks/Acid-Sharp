using System;
using System.Collections.Generic;
using AcidSharp;

namespace AcidSharp.Tests
{
    class Program
    {
        private static void Main(string[] args)
        {
            Vector3 original = new Vector3(90.0f, 0.0f, 0.0f);
            Quaternion quaternion = original.ToQuaternion();
            Vector3 restored = quaternion.ToEuler();
          
            Console.WriteLine($"Original: {original.ToString()}");
            Console.WriteLine($"Quaternion: {quaternion.ToString()}");
            Console.WriteLine($"Restored: {restored.ToString()}");

            // Console.WriteLine($"Working Directory: {FileSystem.WorkingDirectory}");

            // End program.
            Console.WriteLine("Press enter to continue...");
            Console.ReadLine();
        }
    }
}
