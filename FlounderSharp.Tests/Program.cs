using System;
using FlounderSharp;

namespace FlounderSharp.Tests
{
    class Program
    {
        private static void CallbackError(int error, string description)
        {
            Console.WriteLine($"GLFW error: {description}");
        }

        private static void CallbackFramebufferSize(IntPtr window, int width, int height)
        {
            Console.WriteLine($"GLFW window size: {width}x{height}");
            //    glfw3.GlViewport(0, 0, width, height);
        }

        static void Main(string[] args)
        {
            if (glfw3.GlfwInit() == 0)
            {
                Console.WriteLine("Glfw init failed!");
            }

            glfw3.GlfwSetErrorCallback(CallbackError);

            var window = glfw3.GlfwCreateWindow(640, 480, "Glfw Sharp", null, null);

            if (window == null)
            {
                Console.WriteLine("Glfw window creation failed!");
            }

            glfw3.GlfwSetFramebufferSizeCallback(window, CallbackFramebufferSize);
            glfw3.GlfwMakeContextCurrent(window);

            while (glfw3.GlfwWindowShouldClose(window) == 0)
            {
                glfw3.GlfwPollEvents();
            }

            glfw3.GlfwDestroyWindow(window);
            glfw3.GlfwTerminate();

            // End program.
            Console.WriteLine("Press enter to continue...");
            Console.ReadLine();
        }
    }
}
