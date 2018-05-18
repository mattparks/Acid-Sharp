#include <fl\Flounder.hpp>

extern "C" { void FlounderSharp_symbols1(void* instance) { new (instance) fl::FormatString(); } }
extern "C" { void FlounderSharp_symbols2(void* instance, const fl::FormatString& _0) { new (instance) fl::FormatString(_0); } }
extern "C" { void FlounderSharp_symbols3(fl::FormatString* instance) { instance->~FormatString(); } }
extern "C" { void FlounderSharp_symbols4(void* instance, const fl::JointTransform& _0) { new (instance) fl::JointTransform(_0); } }
extern "C" { void FlounderSharp_symbols5(void* instance, const fl::Keyframe& _0) { new (instance) fl::Keyframe(_0); } }
extern "C" { void FlounderSharp_symbols6(void* instance, const fl::Animation& _0) { new (instance) fl::Animation(_0); } }
extern "C" { void FlounderSharp_symbols7(void* instance, const fl::Animator& _0) { new (instance) fl::Animator(_0); } }
extern "C" { void FlounderSharp_symbols8(void* instance, const fl::Frustum& _0) { new (instance) fl::Frustum(_0); } }
extern "C" { void FlounderSharp_symbols9(void* instance, const fl::Intersect& _0) { new (instance) fl::Intersect(_0); } }
extern "C" { void FlounderSharp_symbols10(void* instance, const fl::Ray& _0) { new (instance) fl::Ray(_0); } }
extern "C" { void FlounderSharp_symbols11(void* instance, const fl::ModuleRegister& _0) { new (instance) fl::ModuleRegister(_0); } }
extern "C" { void FlounderSharp_symbols12(void* instance, const fl::Engine& _0) { new (instance) fl::Engine(_0); } }
extern "C" { void FlounderSharp_symbols13(void* instance, const fl::CommandBuffer& _0) { new (instance) fl::CommandBuffer(_0); } }
extern "C" { void FlounderSharp_symbols14(void* instance, const fl::GraphicsStage& _0) { new (instance) fl::GraphicsStage(_0); } }
extern "C" { void FlounderSharp_symbols15(fl::GraphicsStage* instance) { instance->~GraphicsStage(); } }
extern "C" { void FlounderSharp_symbols16(void* instance, const fl::DescriptorType& _0) { new (instance) fl::DescriptorType(_0); } }
extern "C" { void FlounderSharp_symbols17(fl::DescriptorType* instance) { instance->~DescriptorType(); } }
int (fl::Uniform::*FlounderSharp_symbols18)() const = &fl::Uniform::GetSize;
bool (fl::Uniform::*FlounderSharp_symbols19)(const fl::Uniform&) const = &fl::Uniform::operator!=;
extern "C" { void FlounderSharp_symbols20(void* instance, const fl::Uniform& _0) { new (instance) fl::Uniform(_0); } }
fl::Uniform& (fl::Uniform::*FlounderSharp_symbols21)(const fl::Uniform&) = &fl::Uniform::operator=;
extern "C" { void FlounderSharp_symbols22(void* instance, const fl::UniformBlock& _0) { new (instance) fl::UniformBlock(_0); } }
fl::UniformBlock& (fl::UniformBlock::*FlounderSharp_symbols23)(const fl::UniformBlock&) = &fl::UniformBlock::operator=;
extern "C" { void FlounderSharp_symbols24(void* instance, const fl::VertexAttribute& _0) { new (instance) fl::VertexAttribute(_0); } }
fl::VertexAttribute& (fl::VertexAttribute::*FlounderSharp_symbols25)(const fl::VertexAttribute&) = &fl::VertexAttribute::operator=;
extern "C" { void FlounderSharp_symbols26(void* instance, const fl::ShaderProgram& _0) { new (instance) fl::ShaderProgram(_0); } }
fl::ShaderProgram& (fl::ShaderProgram::*FlounderSharp_symbols27)(const fl::ShaderProgram&) = &fl::ShaderProgram::operator=;
extern "C" { void FlounderSharp_symbols28(void* instance, const fl::DescriptorSet& _0) { new (instance) fl::DescriptorSet(_0); } }
extern "C" { void FlounderSharp_symbols29(void* instance, const fl::VertexBuffer& _0) { new (instance) fl::VertexBuffer(_0); } }
fl::VertexBuffer& (fl::VertexBuffer::*FlounderSharp_symbols30)(const fl::VertexBuffer&) = &fl::VertexBuffer::operator=;
extern "C" { void FlounderSharp_symbols31(void* instance, const fl::IndexBuffer& _0) { new (instance) fl::IndexBuffer(_0); } }
fl::IndexBuffer& (fl::IndexBuffer::*FlounderSharp_symbols32)(const fl::IndexBuffer&) = &fl::IndexBuffer::operator=;
extern "C" { void FlounderSharp_symbols33(void* instance) { new (instance) fl::Maths(); } }
extern "C" { void FlounderSharp_symbols34(void* instance, const fl::Maths& _0) { new (instance) fl::Maths(_0); } }
extern "C" { void FlounderSharp_symbols35(fl::Maths* instance) { instance->~Maths(); } }
extern "C" { void FlounderSharp_symbols36(void* instance, const fl::Sound& _0) { new (instance) fl::Sound(_0); } }
extern "C" { void FlounderSharp_symbols37(void* instance, const fl::Timer& _0) { new (instance) fl::Timer(_0); } }
extern "C" { void FlounderSharp_symbols38(void* instance, const fl::Config& _0) { new (instance) fl::Config(_0); } }
extern "C" { void FlounderSharp_symbols39(void* instance, const fl::FontCharacter& _0) { new (instance) fl::FontCharacter(_0); } }
extern "C" { void FlounderSharp_symbols40(void* instance, const fl::FontType& _0) { new (instance) fl::FontType(_0); } }
extern "C" { void FlounderSharp_symbols41(void* instance, const fl::UniformHandler& _0) { new (instance) fl::UniformHandler(_0); } }
extern "C" { void FlounderSharp_symbols42(void* instance, const fl::DescriptorsHandler& _0) { new (instance) fl::DescriptorsHandler(_0); } }
extern "C" { void FlounderSharp_symbols43(void* instance) { new (instance) fl::Joystick(); } }
extern "C" { void FlounderSharp_symbols44(void* instance, const fl::Joystick& _0) { new (instance) fl::Joystick(_0); } }
fl::Joystick& (fl::Joystick::*FlounderSharp_symbols45)(const fl::Joystick&) = &fl::Joystick::operator=;
fl::Joystick& (fl::Joystick::*FlounderSharp_symbols46)(fl::Joystick&&) = &fl::Joystick::operator=;
extern "C" { void FlounderSharp_symbols47(fl::Joystick* instance) { instance->~Joystick(); } }
extern "C" { void FlounderSharp_symbols48(void* instance) { new (instance) fl::SelectorJoystick(); } }
extern "C" { void FlounderSharp_symbols49(void* instance, const fl::SelectorJoystick& _0) { new (instance) fl::SelectorJoystick(_0); } }
fl::SelectorJoystick& (fl::SelectorJoystick::*FlounderSharp_symbols50)(const fl::SelectorJoystick&) = &fl::SelectorJoystick::operator=;
fl::SelectorJoystick& (fl::SelectorJoystick::*FlounderSharp_symbols51)(fl::SelectorJoystick&&) = &fl::SelectorJoystick::operator=;
extern "C" { void FlounderSharp_symbols52(fl::SelectorJoystick* instance) { instance->~SelectorJoystick(); } }
extern "C" { void FlounderSharp_symbols53(void* instance, const fl::UiSelector& _0) { new (instance) fl::UiSelector(_0); } }
extern "C" { void FlounderSharp_symbols54(void* instance) { new (instance) fl::FileSystem(); } }
extern "C" { void FlounderSharp_symbols55(void* instance, const fl::FileSystem& _0) { new (instance) fl::FileSystem(_0); } }
extern "C" { void FlounderSharp_symbols56(fl::FileSystem* instance) { instance->~FileSystem(); } }
extern "C" { void FlounderSharp_symbols57(void* instance) { new (instance) fl::SquareArray(); } }
extern "C" { void FlounderSharp_symbols58(void* instance, const fl::SquareArray& _0) { new (instance) fl::SquareArray(_0); } }
extern "C" { void FlounderSharp_symbols59(fl::SquareArray* instance) { instance->~SquareArray(); } }
extern "C" { void FlounderSharp_symbols60(void* instance, const fl::Fog& _0) { new (instance) fl::Fog(_0); } }
extern "C" { void FlounderSharp_symbols61(void* instance, const fl::Delta& _0) { new (instance) fl::Delta(_0); } }
extern "C" { void FlounderSharp_symbols62(void* instance, const fl::SmoothFloat& _0) { new (instance) fl::SmoothFloat(_0); } }
extern "C" { void FlounderSharp_symbols63(void* instance, const fl::Noise& _0) { new (instance) fl::Noise(_0); } }
extern "C" { void FlounderSharp_symbols64(void* instance, const fl::ComponentRegister& _0) { new (instance) fl::ComponentRegister(_0); } }
extern "C" { void FlounderSharp_symbols65(void* instance, const fl::Particle& _0) { new (instance) fl::Particle(_0); } }
bool (fl::QueueFamilyIndices::*FlounderSharp_symbols66)() const = &fl::QueueFamilyIndices::IsComplete;
int (fl::QueueFamilyIndices::*FlounderSharp_symbols67)() const = &fl::QueueFamilyIndices::GetComputeFamily;
extern "C" { void FlounderSharp_symbols68(void* instance, const fl::QueueFamilyIndices& _0) { new (instance) fl::QueueFamilyIndices(_0); } }
fl::QueueFamilyIndices& (fl::QueueFamilyIndices::*FlounderSharp_symbols69)(const fl::QueueFamilyIndices&) = &fl::QueueFamilyIndices::operator=;
fl::QueueFamilyIndices& (fl::QueueFamilyIndices::*FlounderSharp_symbols70)(fl::QueueFamilyIndices&&) = &fl::QueueFamilyIndices::operator=;
extern "C" { void FlounderSharp_symbols71(fl::QueueFamilyIndices* instance) { instance->~QueueFamilyIndices(); } }
extern "C" { void FlounderSharp_symbols72(void* instance) { new (instance) fl::QueueFamily(); } }
extern "C" { void FlounderSharp_symbols73(void* instance, const fl::QueueFamily& _0) { new (instance) fl::QueueFamily(_0); } }
fl::QueueFamily& (fl::QueueFamily::*FlounderSharp_symbols74)(const fl::QueueFamily&) = &fl::QueueFamily::operator=;
fl::QueueFamily& (fl::QueueFamily::*FlounderSharp_symbols75)(fl::QueueFamily&&) = &fl::QueueFamily::operator=;
extern "C" { void FlounderSharp_symbols76(fl::QueueFamily* instance) { instance->~QueueFamily(); } }
extern "C" { void FlounderSharp_symbols77(void* instance, const fl::DepthStencil& _0) { new (instance) fl::DepthStencil(_0); } }
fl::DepthStencil& (fl::DepthStencil::*FlounderSharp_symbols78)(const fl::DepthStencil&) = &fl::DepthStencil::operator=;
extern "C" { void FlounderSharp_symbols79(void* instance, const fl::Swapchain& _0) { new (instance) fl::Swapchain(_0); } }
fl::Swapchain& (fl::Swapchain::*FlounderSharp_symbols80)(const fl::Swapchain&) = &fl::Swapchain::operator=;
extern "C" { void FlounderSharp_symbols81(void* instance, const fl::Renderpass& _0) { new (instance) fl::Renderpass(_0); } }
fl::Renderpass& (fl::Renderpass::*FlounderSharp_symbols82)(const fl::Renderpass&) = &fl::Renderpass::operator=;
extern "C" { void FlounderSharp_symbols83(void* instance, const fl::Framebuffers& _0) { new (instance) fl::Framebuffers(_0); } }
fl::Framebuffers& (fl::Framebuffers::*FlounderSharp_symbols84)(const fl::Framebuffers&) = &fl::Framebuffers::operator=;
bool (fl::RenderStage::*FlounderSharp_symbols85)() const = &fl::RenderStage::HasDepth;
bool (fl::RenderStage::*FlounderSharp_symbols86)() const = &fl::RenderStage::FitDisplaySize;
extern "C" { void FlounderSharp_symbols87(void* instance, const fl::RenderStage& _0) { new (instance) fl::RenderStage(_0); } }
fl::RenderStage& (fl::RenderStage::*FlounderSharp_symbols88)(const fl::RenderStage&) = &fl::RenderStage::operator=;
extern "C" { void FlounderSharp_symbols89(void* instance) { new (instance) fl::Screenshot(); } }
extern "C" { void FlounderSharp_symbols90(void* instance, const fl::Screenshot& _0) { new (instance) fl::Screenshot(_0); } }
extern "C" { void FlounderSharp_symbols91(fl::Screenshot* instance) { instance->~Screenshot(); } }
extern "C" { void FlounderSharp_symbols92(void* instance, const fl::ShadowBox& _0) { new (instance) fl::ShadowBox(_0); } }
extern "C" { void FlounderSharp_symbols93(void* instance, const fl::UiInputDelay& _0) { new (instance) fl::UiInputDelay(_0); } }
