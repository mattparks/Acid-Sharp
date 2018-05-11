using System;
using FlounderSharp;

namespace FlounderSharp.Tests
{
    class Program
    {
        private static readonly int STBI_rgb_alpha = 4;

        private static void CallbackError(int error, string description)
        {
            Console.WriteLine($"GLFW error: {description}");
        }

        private static void CallbackFramebufferSize(IntPtr window, int width, int height)
        {
            Console.WriteLine($"GLFW window size: {width}x{height}");
            //    glfw3.GlViewport(0, 0, width, height);
        }
        
        private static void Main(string[] args) 
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

            unsafe
            {
                int width = 0;
                int height = 0;
                int components = 0;
                var data = stb_image.StbiLoad(@"C:\Users\mattp\Documents\Flounder Workspace\Flounder\Resources\Logos\Tail.png", ref width, ref height, ref components, STBI_rgb_alpha);

                var icons = new GLFWimage
                {
                    Pixels = data,
                    Width = width,
                    Height = height
                };

                glfw3.GlfwSetWindowIcon(window, 1, icons);

                stb_image.StbiImageFree((IntPtr)data);
            }

            glfw3.GlfwSetFramebufferSizeCallback(window, CallbackFramebufferSize);
            glfw3.GlfwMakeContextCurrent(window);

            Console.WriteLine(FileSystem.WorkingDirectory);
            
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
