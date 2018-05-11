using System;
using FlounderSharp;

namespace FlounderSharp.Tests
{
    class Program
    {
        private static readonly int STBI_rgb_alpha = 4;
        private static readonly int AL_FORMAT_MONO16 = 0x1101;
        private static readonly int AL_FORMAT_STEREO16 = 0x1103;
        private static readonly int AL_BUFFER = 0x1009;
        private static readonly int AL_LOOPING = 0x1007;

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
            var alDevice = alc.AlcOpenDevice(null);
            var attrlist = 0;
            var alContext = alc.AlcCreateContext(alDevice, ref attrlist);

            al.AlListener3f(0x1004, 0.0f, 0.0f, 0.0f);
            al.AlListener3f(0x1006, 0.0f, 0.0f, 0.0f);

            Console.WriteLine(al.AlGetError());

            unsafe
            {

                int channels = 0;
                int samplesPerSec = 0;
                short* data = null;
                int size = stb_vorbis.StbVorbisDecodeFilename(@"C:\Users\mattp\Documents\Flounder Workspace\Flounder\Resources\Sounds\Jump.ogg", ref channels, ref samplesPerSec, &data);

                uint buffer = 0;
                al.AlGenBuffers(1, ref buffer);
                al.AlBufferData(buffer, (channels == 2) ? AL_FORMAT_STEREO16 : AL_FORMAT_MONO16, (IntPtr)data, size, samplesPerSec);

                uint source = 0;
                al.AlGenSources(1, ref source);
                al.AlSourcei(source, AL_BUFFER, (int)buffer);

                Console.WriteLine(al.AlGetError());

                al.AlSourcei(source, AL_LOOPING, 0);
                al.AlSourcePlay(source);
            }

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
            
            while (glfw3.GlfwWindowShouldClose(window) == 0)
            {
                glfw3.GlfwPollEvents();
            }

            glfw3.GlfwDestroyWindow(window);
            glfw3.GlfwTerminate();

            alc.AlcMakeContextCurrent(null);
            alc.AlcDestroyContext(alContext);
            alc.AlcCloseDevice(alDevice);

            // End program.
            Console.WriteLine("Press enter to continue...");
            Console.ReadLine();
        }
    }
}
