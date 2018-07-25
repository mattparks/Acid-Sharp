using System;
using System.Collections.Generic;
using AcidSharp;

namespace AcidSharp.Tests
{
    class MainRenderer : IManagerRender
    {
		private static readonly Vector4 Infinity = new Vector4(0.0f, 1.0f, 0.0f, Single.PositiveInfinity);

        private static readonly RenderpassCreate RenderPassCreate0 = new RenderpassCreate(
            0, 0,
            new List<Attachment>
            {
                new Attachment(1, AttachmentType.AttachmentSwapchain) // swapchain
            },
            new List<SubpassType>
            {
                new SubpassType(0, new List<int>{ 0 })
            }
        );

        private RendererGuis _rendererGuis;
		private RendererFonts _rendererFonts;

		public MainRenderer() : base(RenderPassCreate0)
        {
            _rendererGuis = new RendererGuis(new GraphicsStage(0, 0));
			_rendererFonts = new RendererFonts(new GraphicsStage(0, 0));
		}

		public override void Render()
		{
			var commandBuffer = Renderer.Get().CommandBuffer;
			var camera = Scenes.Get().Camera;

			// Starts Rendering.
			var startResult = Renderer.Get().StartRenderpass(commandBuffer, 0);

			if (!startResult)
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