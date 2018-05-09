using System;
using FlounderSharp;

namespace FlounderSharp.Tests
{
    class MainRenderer : IManagerRender
    {
		private static readonly Vector4 Infinity = new Vector4(0.0f, 1.0f, 0.0f, Double.PositiveInfinity);

		private RenderpassCreate RenderPassCreate0 = new RenderpassCreate
		{
			0, 0, // width / height
			{
				Attachment(1, TypeSwapchain) // swapchain
			}, // images
			{
				SubpassType(0, {0}),
			} // subpasses
		};

		private RendererGuis _rendererGuis;
		private RendererFonts _rendererFonts;

		public MainRenderer()
		{
			base(RenderPassCreate0);
			_rendererGuis = new RendererGuis({0, 0});
			_rendererFonts = new RendererFonts({0, 0});
		}

		public override void Render()
		{
			var commandBuffer = Renderer.Get().GetCommandBuffer();
			var camera = Scenes.Get().GetCamera();

			// Starts Rendering.
			VkResult startResult = Renderer.Get().StartRenderpass(commandBuffer, 0);

			if (startResult != VK_SUCCESS)
			{
				return;
			}

			// Subpass 0.
			_rendererGuis.Render(commandBuffer, _infinity, *camera);
			_rendererFonts.Render(commandBuffer, _infinity, *camera);

			// Ends Rendering.
			Renderer.Get().EndRenderpass(commandBuffer, 0);
		}
    }
}