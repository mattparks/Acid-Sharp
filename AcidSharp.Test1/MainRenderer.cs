using System;
using System.Collections.Generic;
using AcidSharp;

namespace AcidSharp.Tests
{
    class MainRenderer : IManagerRender
    {
		private static readonly Vector4 Infinity = new Vector4(0.0f, 1.0f, 0.0f, Single.PositiveInfinity);

        private static readonly RenderpassCreate RenderPassCreate0 = new RenderpassCreate(
            0, 0, // width / height
            new List<Attachment>
            {
                new Attachment(0, AttachmentType.AttachmentDepth), // depth
                new Attachment(1, AttachmentType.AttachmentSwapchain) // swapchain
            }, // images
            new List<SubpassType>
            {
                new SubpassType(0, new List<int>{ 1 })
            } // subpasses
        );

		public MainRenderer() : base(new List<RenderpassCreate>{ RenderPassCreate0 })
        {
        }

        public override void Start()
        {
            Renderer.Get().AddRenderer(new RendererGuis(new GraphicsStage(0, 0)));
            Renderer.Get().AddRenderer(new RendererFonts(new GraphicsStage(0, 0)));
        }

        public override void Update()
        {
        }
    }
}