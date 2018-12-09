#include <acid\Acid.hpp>

extern "C" { void Acid_symbols1(void* instance, const acid::Time& _0) { new (instance) acid::Time(_0); } }
extern "C" { void Acid_symbols2(acid::Time* instance) { instance->~Time(); } }
extern "C" { void Acid_symbols3(void* instance) { new (instance) acid::String(); } }
extern "C" { void Acid_symbols4(void* instance, const acid::String& _0) { new (instance) acid::String(_0); } }
extern "C" { void Acid_symbols5(acid::String* instance) { instance->~String(); } }
extern "C" { void Acid_symbols6(acid::Vector3* instance) { instance->~Vector3(); } }
extern "C" { void Acid_symbols7(acid::Vector4* instance) { instance->~Vector4(); } }
extern "C" { void Acid_symbols8(acid::Matrix4* instance) { instance->~Matrix4(); } }
extern "C" { void Acid_symbols9(acid::Quaternion* instance) { instance->~Quaternion(); } }
extern "C" { void Acid_symbols10(acid::JointTransform* instance) { instance->~JointTransform(); } }
extern "C" { void Acid_symbols11(void* instance, const acid::Animator& _0) { new (instance) acid::Animator(_0); } }
extern "C" { void Acid_symbols12(acid::Animator* instance) { instance->~Animator(); } }
extern "C" { void Acid_symbols13(void* instance, const acid::CommandBuffer& _0) { new (instance) acid::CommandBuffer(_0); } }
extern "C" { void Acid_symbols14(void* instance) { new (instance) acid::Log(); } }
extern "C" { void Acid_symbols15(void* instance, const acid::Log& _0) { new (instance) acid::Log(_0); } }
extern "C" { void Acid_symbols16(acid::Log* instance) { instance->~Log(); } }
extern "C" { void Acid_symbols17(acid::IModule* instance) { instance->~IModule(); } }
extern "C" { void Acid_symbols18(void* instance, const acid::Delta& _0) { new (instance) acid::Delta(_0); } }
extern "C" { void Acid_symbols19(acid::Delta* instance) { instance->~Delta(); } }
extern "C" { void Acid_symbols20(void* instance, const acid::Timer& _0) { new (instance) acid::Timer(_0); } }
extern "C" { void Acid_symbols21(acid::Timer* instance) { instance->~Timer(); } }
extern "C" { void Acid_symbols22(void* instance, const acid::ModuleUpdater& _0) { new (instance) acid::ModuleUpdater(_0); } }
extern "C" { void Acid_symbols23(acid::ModuleUpdater* instance) { instance->~ModuleUpdater(); } }
extern "C" { void Acid_symbols24(acid::Files* instance) { instance->~Files(); } }
extern "C" { void Acid_symbols25(void* instance, const acid::GraphicsStage& _0) { new (instance) acid::GraphicsStage(_0); } }
extern "C" { void Acid_symbols26(acid::GraphicsStage* instance) { instance->~GraphicsStage(); } }
extern "C" { void Acid_symbols27(void* instance, const acid::DescriptorType& _0) { new (instance) acid::DescriptorType(_0); } }
extern "C" { void Acid_symbols28(acid::DescriptorType* instance) { instance->~DescriptorType(); } }
extern "C" { void Acid_symbols29(acid::IPipeline* instance) { instance->~IPipeline(); } }
extern "C" { void Acid_symbols30(void* instance, const acid::DescriptorSet& _0) { new (instance) acid::DescriptorSet(_0); } }
extern "C" { void Acid_symbols31(void* instance, const acid::Buffer& _0) { new (instance) acid::Buffer(_0); } }
extern "C" { void Acid_symbols32(void* instance, const acid::IndexBuffer& _0) { new (instance) acid::IndexBuffer(_0); } }
extern "C" { void Acid_symbols33(void* instance, const acid::VertexBuffer& _0) { new (instance) acid::VertexBuffer(_0); } }
extern "C" { void Acid_symbols34(acid::IResource* instance) { instance->~IResource(); } }
extern "C" { void Acid_symbols35(acid::IVertex* instance) { instance->~IVertex(); } }
extern "C" { void Acid_symbols36(acid::Vector2* instance) { instance->~Vector2(); } }
extern "C" { void Acid_symbols37(acid::VertexAnimated* instance) { instance->~VertexAnimated(); } }
extern "C" { void Acid_symbols38(void* instance) { new (instance) acid::Maths(); } }
extern "C" { void Acid_symbols39(void* instance, const acid::Maths& _0) { new (instance) acid::Maths(_0); } }
extern "C" { void Acid_symbols40(acid::Maths* instance) { instance->~Maths(); } }
extern "C" { void Acid_symbols41(acid::Colour* instance) { instance->~Colour(); } }
extern "C" { void Acid_symbols42(acid::VertexModel* instance) { instance->~VertexModel(); } }
extern "C" { void Acid_symbols43(acid::IComponent* instance) { instance->~IComponent(); } }
extern "C" { void Acid_symbols44(acid::IEvent* instance) { instance->~IEvent(); } }
extern "C" { void Acid_symbols45(acid::IFile* instance) { instance->~IFile(); } }
extern "C" { void Acid_symbols46(void* instance, const acid::FontCharacter& _0) { new (instance) acid::FontCharacter(_0); } }
extern "C" { void Acid_symbols47(acid::FontCharacter* instance) { instance->~FontCharacter(); } }
extern "C" { void Acid_symbols48(acid::IDescriptor* instance) { instance->~IDescriptor(); } }
extern "C" { void Acid_symbols49(void* instance, const acid::Frustum& _0) { new (instance) acid::Frustum(_0); } }
extern "C" { void Acid_symbols50(acid::Frustum* instance) { instance->~Frustum(); } }
extern "C" { void Acid_symbols51(acid::Ray* instance) { instance->~Ray(); } }
extern "C" { void Acid_symbols52(acid::ICamera* instance) { instance->~ICamera(); } }
extern "C" { void Acid_symbols53(acid::IRenderer* instance) { instance->~IRenderer(); } }
extern "C" { void Acid_symbols54(acid::IDriver* instance) { instance->~IDriver(); } }
extern "C" { void Acid_symbols55(void* instance, const acid::PushHandler& _0) { new (instance) acid::PushHandler(_0); } }
extern "C" { void Acid_symbols56(acid::Transform* instance) { instance->~Transform(); } }
extern "C" { void Acid_symbols57(acid::UiBound* instance) { instance->~UiBound(); } }
extern "C" { void Acid_symbols58(void* instance) { new (instance) acid::FileSystem(); } }
extern "C" { void Acid_symbols59(void* instance, const acid::FileSystem& _0) { new (instance) acid::FileSystem(_0); } }
extern "C" { void Acid_symbols60(acid::FileSystem* instance) { instance->~FileSystem(); } }
extern "C" { void Acid_symbols61(acid::IAxis* instance) { instance->~IAxis(); } }
extern "C" { void Acid_symbols62(acid::IButton* instance) { instance->~IButton(); } }
extern "C" { void Acid_symbols63(acid::Keyboard* instance) { instance->~Keyboard(); } }
extern "C" { void Acid_symbols64(acid::Fog* instance) { instance->~Fog(); } }
extern "C" { void Acid_symbols65(acid::Light* instance) { instance->~Light(); } }
extern "C" { void Acid_symbols66(acid::IMaterial* instance) { instance->~IMaterial(); } }
extern "C" { void Acid_symbols67(void* instance, const acid::SmoothFloat& _0) { new (instance) acid::SmoothFloat(_0); } }
extern "C" { void Acid_symbols68(acid::SmoothFloat* instance) { instance->~SmoothFloat(); } }
extern "C" { void Acid_symbols69(acid::Matrix2* instance) { instance->~Matrix2(); } }
extern "C" { void Acid_symbols70(acid::Matrix3* instance) { instance->~Matrix3(); } }
extern "C" { void Acid_symbols71(acid::DriverBounce* instance) { instance->~DriverBounce(); } }
extern "C" { void Acid_symbols72(acid::DriverConstant* instance) { instance->~DriverConstant(); } }
extern "C" { void Acid_symbols73(acid::DriverFade* instance) { instance->~DriverFade(); } }
extern "C" { void Acid_symbols74(acid::DriverLinear* instance) { instance->~DriverLinear(); } }
extern "C" { void Acid_symbols75(acid::DriverSinwave* instance) { instance->~DriverSinwave(); } }
extern "C" { void Acid_symbols76(acid::DriverSlide* instance) { instance->~DriverSlide(); } }
extern "C" { void Acid_symbols77(void* instance, const acid::IpAddress& _0) { new (instance) acid::IpAddress(_0); } }
extern "C" { void Acid_symbols78(acid::IpAddress* instance) { instance->~IpAddress(); } }
acid::ComponentCreate& (acid::ComponentCreate::*Acid_symbols79)(acid::ComponentCreate&&) = &acid::ComponentCreate::operator=;
extern "C" { void Acid_symbols80(void* instance) { new (instance) acid::ComponentCreate(); } }
acid::ComponentCreate& (acid::ComponentCreate::*Acid_symbols81)(const acid::ComponentCreate&) = &acid::ComponentCreate::operator=;
extern "C" { void Acid_symbols82(acid::ISpatialStructure* instance) { instance->~ISpatialStructure(); } }
acid::ParticleData& (acid::ParticleData::*Acid_symbols83)(acid::ParticleData&&) = &acid::ParticleData::operator=;
acid::ParticleData& (acid::ParticleData::*Acid_symbols84)(const acid::ParticleData&) = &acid::ParticleData::operator=;
extern "C" { void Acid_symbols85(acid::ParticleData* instance) { instance->~ParticleData(); } }
extern "C" { void Acid_symbols86(acid::ISpawnParticle* instance) { instance->~ISpawnParticle(); } }
extern "C" { void Acid_symbols87(acid::SpawnCircle* instance) { instance->~SpawnCircle(); } }
extern "C" { void Acid_symbols88(acid::SpawnLine* instance) { instance->~SpawnLine(); } }
extern "C" { void Acid_symbols89(acid::SpawnPoint* instance) { instance->~SpawnPoint(); } }
extern "C" { void Acid_symbols90(acid::SpawnSphere* instance) { instance->~SpawnSphere(); } }
extern "C" { void Acid_symbols91(acid::Collider* instance) { instance->~Collider(); } }
extern "C" { void Acid_symbols92(acid::Force* instance) { instance->~Force(); } }
extern "C" { void Acid_symbols93(acid::IPostPipeline* instance) { instance->~IPostPipeline(); } }
extern "C" { void Acid_symbols94(void* instance, const acid::InstanceBuffer& _0) { new (instance) acid::InstanceBuffer(_0); } }
extern "C" { void Acid_symbols95(void* instance, const acid::UiSelectorMouse& _0) { new (instance) acid::UiSelectorMouse(_0); } }
extern "C" { void Acid_symbols96(acid::UiSelectorMouse* instance) { instance->~UiSelectorMouse(); } }
acid::UiSelectorMouse& (acid::UiSelectorMouse::*Acid_symbols97)(const acid::UiSelectorMouse&) = &acid::UiSelectorMouse::operator=;
acid::UiSelectorMouse& (acid::UiSelectorMouse::*Acid_symbols98)(acid::UiSelectorMouse&&) = &acid::UiSelectorMouse::operator=;
extern "C" { void Acid_symbols99(void* instance) { new (instance) acid::UiSelectorMouse(); } }
extern "C" { void Acid_symbols100(void* instance, const acid::UiSelector& _0) { new (instance) acid::UiSelector(_0); } }
extern "C" { void Acid_symbols101(acid::UiSelector* instance) { instance->~UiSelector(); } }
extern "C" { void Acid_symbols102(acid::Raycast* instance) { instance->~Raycast(); } }
extern "C" { void Acid_symbols103(void* instance) { new (instance) acid::Serialize(); } }
extern "C" { void Acid_symbols104(void* instance, const acid::Serialize& _0) { new (instance) acid::Serialize(_0); } }
extern "C" { void Acid_symbols105(acid::Serialize* instance) { instance->~Serialize(); } }
extern "C" { void Acid_symbols106(acid::ShadowBox* instance) { instance->~ShadowBox(); } }
extern "C" { void Acid_symbols107(acid::Shadows* instance) { instance->~Shadows(); } }
extern "C" { void Acid_symbols108(void* instance, const acid::UiInputDelay& _0) { new (instance) acid::UiInputDelay(_0); } }
extern "C" { void Acid_symbols109(acid::UiInputDelay* instance) { instance->~UiInputDelay(); } }
extern "C" { void Acid_symbols110(acid::IUiGrabber* instance) { instance->~IUiGrabber(); } }
extern "C" { void Acid_symbols111(acid::UiGrabberJoystick* instance) { instance->~UiGrabberJoystick(); } }
extern "C" { void Acid_symbols112(acid::UiGrabberKeyboard* instance) { instance->~UiGrabberKeyboard(); } }
extern "C" { void Acid_symbols113(acid::UiGrabberMouse* instance) { instance->~UiGrabberMouse(); } }
extern "C" { void Acid_symbols114(void* instance, const acid::FtpResponseDirectory& _0) { new (instance) acid::FtpResponseDirectory(_0); } }
acid::FtpResponseDirectory& (acid::FtpResponseDirectory::*Acid_symbols115)(acid::FtpResponseDirectory&&) = &acid::FtpResponseDirectory::operator=;
extern "C" { void Acid_symbols116(acid::FtpResponseDirectory* instance) { instance->~FtpResponseDirectory(); } }
acid::FtpResponseDirectory& (acid::FtpResponseDirectory::*Acid_symbols117)(const acid::FtpResponseDirectory&) = &acid::FtpResponseDirectory::operator=;
extern "C" { void Acid_symbols118(void* instance, const acid::FtpResponseListing& _0) { new (instance) acid::FtpResponseListing(_0); } }
acid::FtpResponseListing& (acid::FtpResponseListing::*Acid_symbols119)(acid::FtpResponseListing&&) = &acid::FtpResponseListing::operator=;
extern "C" { void Acid_symbols120(acid::FtpResponseListing* instance) { instance->~FtpResponseListing(); } }
acid::FtpResponseListing& (acid::FtpResponseListing::*Acid_symbols121)(const acid::FtpResponseListing&) = &acid::FtpResponseListing::operator=;
