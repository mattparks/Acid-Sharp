using System;
using System.Collections.Generic;
using FlounderSharp;

namespace FlounderSharp.Tests
{
    class MainRenderer : IManagerRender
    {
		private static readonly Vector4 Infinity = new Vector4(0.0f, 1.0f, 0.0f, Single.PositiveInfinity);

        private RenderpassCreate RenderPassCreate0 = null; /*new RenderpassCreate
        {
            Width = 0,
            Height = 0,
            Attachments = new List<Attachment>
            {
                new Attachment(1, AttachmentType.TypeSwapchain) // swapchain
            },
            Subpasses = new List<SubpassType>
            {
                new SubpassType()
                {
                    Binding = 0,
                    Attachments = new List<int>{ 0 }
                }
            }
        };*/

        private RendererGuis _rendererGuis;
		private RendererFonts _rendererFonts;

		public MainRenderer() : base(RenderPassCreate0)
        {
            _rendererGuis = new RendererGuis(new GraphicsStage
			{
			    Renderpass = 0, Subpass = 0
			});
			_rendererFonts = new RendererFonts(new GraphicsStage
			{
			    Renderpass = 0, Subpass = 0
			});
		}

		public override void Render()
		{
			var commandBuffer = Renderer.Get().CommandBuffer;
			var camera = Scenes.Get().Camera;

			// Starts Rendering.
			var startResult = Renderer.Get().StartRenderpass(commandBuffer, 0);

			if (startResult != VkResult.VK_SUCCESS)
			{
				return;
			}

			// Subpass 0.
			_rendererGuis.Render(commandBuffer, Infinity, camera);
			_rendererFonts.Render(commandBuffer, Infinity, camera);

			// Ends Rendering.
			Renderer.Get().EndRenderpass(commandBuffer, 0);
		}
    }
}