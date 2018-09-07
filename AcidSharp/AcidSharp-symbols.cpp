#include <acid\Acid.hpp>

extern "C" { void AcidSharp_symbols1(void* instance) { new (instance) acid::String(); } }
extern "C" { void AcidSharp_symbols2(void* instance, const acid::String& _0) { new (instance) acid::String(_0); } }
acid::String& (acid::String::*AcidSharp_symbols3)(const acid::String&) = &acid::String::operator=;
acid::String& (acid::String::*AcidSharp_symbols4)(acid::String&&) = &acid::String::operator=;
extern "C" { void AcidSharp_symbols5(acid::String* instance) { instance->~String(); } }
acid::Metadata& (acid::Metadata::*AcidSharp_symbols6)(const acid::Metadata&) = &acid::Metadata::operator=;
float (acid::Vector3::*AcidSharp_symbols7)() const = &acid::Vector3::GetX;
void (acid::Vector3::*AcidSharp_symbols8)(const float&) = &acid::Vector3::SetX;
float (acid::Vector3::*AcidSharp_symbols9)() const = &acid::Vector3::GetY;
void (acid::Vector3::*AcidSharp_symbols10)(const float&) = &acid::Vector3::SetY;
float (acid::Vector3::*AcidSharp_symbols11)() const = &acid::Vector3::GetZ;
void (acid::Vector3::*AcidSharp_symbols12)(const float&) = &acid::Vector3::SetZ;
acid::Vector3& (acid::Vector3::*AcidSharp_symbols13)(const acid::Vector3&) = &acid::Vector3::operator=;
float (acid::Vector4::*AcidSharp_symbols14)() const = &acid::Vector4::GetX;
void (acid::Vector4::*AcidSharp_symbols15)(const float&) = &acid::Vector4::SetX;
float (acid::Vector4::*AcidSharp_symbols16)() const = &acid::Vector4::GetY;
void (acid::Vector4::*AcidSharp_symbols17)(const float&) = &acid::Vector4::SetY;
float (acid::Vector4::*AcidSharp_symbols18)() const = &acid::Vector4::GetZ;
void (acid::Vector4::*AcidSharp_symbols19)(const float&) = &acid::Vector4::SetZ;
float (acid::Vector4::*AcidSharp_symbols20)() const = &acid::Vector4::GetW;
void (acid::Vector4::*AcidSharp_symbols21)(const float&) = &acid::Vector4::SetW;
acid::Vector4& (acid::Vector4::*AcidSharp_symbols22)(const acid::Vector4&) = &acid::Vector4::operator=;
acid::Matrix4& (acid::Matrix4::*AcidSharp_symbols23)(const acid::Matrix4&) = &acid::Matrix4::operator=;
float (acid::Quaternion::*AcidSharp_symbols24)() const = &acid::Quaternion::GetX;
void (acid::Quaternion::*AcidSharp_symbols25)(const float&) = &acid::Quaternion::SetX;
float (acid::Quaternion::*AcidSharp_symbols26)() const = &acid::Quaternion::GetY;
void (acid::Quaternion::*AcidSharp_symbols27)(const float&) = &acid::Quaternion::SetY;
float (acid::Quaternion::*AcidSharp_symbols28)() const = &acid::Quaternion::GetZ;
void (acid::Quaternion::*AcidSharp_symbols29)(const float&) = &acid::Quaternion::SetZ;
float (acid::Quaternion::*AcidSharp_symbols30)() const = &acid::Quaternion::GetW;
void (acid::Quaternion::*AcidSharp_symbols31)(const float&) = &acid::Quaternion::SetW;
acid::Quaternion& (acid::Quaternion::*AcidSharp_symbols32)(const acid::Quaternion&) = &acid::Quaternion::operator=;
acid::JointTransformData& (acid::JointTransformData::*AcidSharp_symbols33)(acid::JointTransformData&&) = &acid::JointTransformData::operator=;
acid::JointTransformData& (acid::JointTransformData::*AcidSharp_symbols34)(const acid::JointTransformData&) = &acid::JointTransformData::operator=;
void (acid::JointTransform::*AcidSharp_symbols35)(const acid::Vector3&) = &acid::JointTransform::SetPosition;
void (acid::JointTransform::*AcidSharp_symbols36)(const acid::Quaternion&) = &acid::JointTransform::SetRotation;
acid::JointTransform& (acid::JointTransform::*AcidSharp_symbols37)(acid::JointTransform&&) = &acid::JointTransform::operator=;
acid::JointTransform& (acid::JointTransform::*AcidSharp_symbols38)(const acid::JointTransform&) = &acid::JointTransform::operator=;
acid::KeyframeData& (acid::KeyframeData::*AcidSharp_symbols39)(acid::KeyframeData&&) = &acid::KeyframeData::operator=;
acid::KeyframeData& (acid::KeyframeData::*AcidSharp_symbols40)(const acid::KeyframeData&) = &acid::KeyframeData::operator=;
acid::Keyframe& (acid::Keyframe::*AcidSharp_symbols41)(acid::Keyframe&&) = &acid::Keyframe::operator=;
extern "C" { void AcidSharp_symbols42(void* instance, const acid::Animation& _0) { new (instance) acid::Animation(_0); } }
acid::Animation& (acid::Animation::*AcidSharp_symbols43)(acid::Animation&&) = &acid::Animation::operator=;
acid::Animation& (acid::Animation::*AcidSharp_symbols44)(const acid::Animation&) = &acid::Animation::operator=;
extern "C" { void AcidSharp_symbols45(void* instance, const acid::AnimationLoader& _0) { new (instance) acid::AnimationLoader(_0); } }
acid::AnimationLoader& (acid::AnimationLoader::*AcidSharp_symbols46)(acid::AnimationLoader&&) = &acid::AnimationLoader::operator=;
acid::AnimationLoader& (acid::AnimationLoader::*AcidSharp_symbols47)(const acid::AnimationLoader&) = &acid::AnimationLoader::operator=;
void (acid::Joint::*AcidSharp_symbols48)(const ::uint32_t&) = &acid::Joint::SetIndex;
void (acid::Joint::*AcidSharp_symbols49)(const std::string&) = &acid::Joint::SetName;
acid::Matrix4 (acid::Joint::*AcidSharp_symbols50)() const = &acid::Joint::GetLocalBindTransform;
void (acid::Joint::*AcidSharp_symbols51)(const acid::Matrix4&) = &acid::Joint::SetLocalBindTransform;
void (acid::Joint::*AcidSharp_symbols52)(const acid::Matrix4&) = &acid::Joint::SetInverseBindTransform;
extern "C" { void AcidSharp_symbols53(void* instance, const acid::Joint& _0) { new (instance) acid::Joint(_0); } }
acid::Joint& (acid::Joint::*AcidSharp_symbols54)(acid::Joint&&) = &acid::Joint::operator=;
acid::Joint& (acid::Joint::*AcidSharp_symbols55)(const acid::Joint&) = &acid::Joint::operator=;
acid::Animation* (acid::Animator::*AcidSharp_symbols56)() const = &acid::Animator::GetCurrentAnimation;
extern "C" { void AcidSharp_symbols57(void* instance, const acid::Animator& _0) { new (instance) acid::Animator(_0); } }
acid::Animator& (acid::Animator::*AcidSharp_symbols58)(acid::Animator&&) = &acid::Animator::operator=;
acid::Animator& (acid::Animator::*AcidSharp_symbols59)(const acid::Animator&) = &acid::Animator::operator=;
extern "C" { void AcidSharp_symbols60(void* instance) { new (instance) VkApplicationInfo(); } }
extern "C" { void AcidSharp_symbols61(void* instance, const VkApplicationInfo& _0) { new (instance) VkApplicationInfo(_0); } }
VkApplicationInfo& (VkApplicationInfo::*AcidSharp_symbols62)(const VkApplicationInfo&) = &VkApplicationInfo::operator=;
VkApplicationInfo& (VkApplicationInfo::*AcidSharp_symbols63)(VkApplicationInfo&&) = &VkApplicationInfo::operator=;
extern "C" { void AcidSharp_symbols64(VkApplicationInfo* instance) { instance->~VkApplicationInfo(); } }
extern "C" { void AcidSharp_symbols65(void* instance) { new (instance) VkInstanceCreateInfo(); } }
extern "C" { void AcidSharp_symbols66(void* instance, const VkInstanceCreateInfo& _0) { new (instance) VkInstanceCreateInfo(_0); } }
VkInstanceCreateInfo& (VkInstanceCreateInfo::*AcidSharp_symbols67)(const VkInstanceCreateInfo&) = &VkInstanceCreateInfo::operator=;
VkInstanceCreateInfo& (VkInstanceCreateInfo::*AcidSharp_symbols68)(VkInstanceCreateInfo&&) = &VkInstanceCreateInfo::operator=;
extern "C" { void AcidSharp_symbols69(VkInstanceCreateInfo* instance) { instance->~VkInstanceCreateInfo(); } }
extern "C" { void AcidSharp_symbols70(void* instance) { new (instance) VkAllocationCallbacks(); } }
extern "C" { void AcidSharp_symbols71(void* instance, const VkAllocationCallbacks& _0) { new (instance) VkAllocationCallbacks(_0); } }
VkAllocationCallbacks& (VkAllocationCallbacks::*AcidSharp_symbols72)(const VkAllocationCallbacks&) = &VkAllocationCallbacks::operator=;
VkAllocationCallbacks& (VkAllocationCallbacks::*AcidSharp_symbols73)(VkAllocationCallbacks&&) = &VkAllocationCallbacks::operator=;
extern "C" { void AcidSharp_symbols74(VkAllocationCallbacks* instance) { instance->~VkAllocationCallbacks(); } }
extern "C" { void AcidSharp_symbols75(void* instance, const VkPhysicalDeviceFeatures& _0) { new (instance) VkPhysicalDeviceFeatures(_0); } }
extern "C" { void AcidSharp_symbols76(VkPhysicalDeviceFeatures* instance) { instance->~VkPhysicalDeviceFeatures(); } }
VkPhysicalDeviceFeatures& (VkPhysicalDeviceFeatures::*AcidSharp_symbols77)(const VkPhysicalDeviceFeatures&) = &VkPhysicalDeviceFeatures::operator=;
VkPhysicalDeviceFeatures& (VkPhysicalDeviceFeatures::*AcidSharp_symbols78)(VkPhysicalDeviceFeatures&&) = &VkPhysicalDeviceFeatures::operator=;
extern "C" { void AcidSharp_symbols79(void* instance) { new (instance) VkPhysicalDeviceFeatures(); } }
extern "C" { void AcidSharp_symbols80(void* instance) { new (instance) VkFormatProperties(); } }
extern "C" { void AcidSharp_symbols81(void* instance, const VkFormatProperties& _0) { new (instance) VkFormatProperties(_0); } }
VkFormatProperties& (VkFormatProperties::*AcidSharp_symbols82)(const VkFormatProperties&) = &VkFormatProperties::operator=;
VkFormatProperties& (VkFormatProperties::*AcidSharp_symbols83)(VkFormatProperties&&) = &VkFormatProperties::operator=;
extern "C" { void AcidSharp_symbols84(VkFormatProperties* instance) { instance->~VkFormatProperties(); } }
extern "C" { void AcidSharp_symbols85(void* instance) { new (instance) VkExtent3D(); } }
extern "C" { void AcidSharp_symbols86(void* instance, const VkExtent3D& _0) { new (instance) VkExtent3D(_0); } }
VkExtent3D& (VkExtent3D::*AcidSharp_symbols87)(const VkExtent3D&) = &VkExtent3D::operator=;
VkExtent3D& (VkExtent3D::*AcidSharp_symbols88)(VkExtent3D&&) = &VkExtent3D::operator=;
extern "C" { void AcidSharp_symbols89(VkExtent3D* instance) { instance->~VkExtent3D(); } }
extern "C" { void AcidSharp_symbols90(void* instance) { new (instance) VkImageFormatProperties(); } }
extern "C" { void AcidSharp_symbols91(void* instance, const VkImageFormatProperties& _0) { new (instance) VkImageFormatProperties(_0); } }
VkImageFormatProperties& (VkImageFormatProperties::*AcidSharp_symbols92)(const VkImageFormatProperties&) = &VkImageFormatProperties::operator=;
VkImageFormatProperties& (VkImageFormatProperties::*AcidSharp_symbols93)(VkImageFormatProperties&&) = &VkImageFormatProperties::operator=;
extern "C" { void AcidSharp_symbols94(VkImageFormatProperties* instance) { instance->~VkImageFormatProperties(); } }
extern "C" { void AcidSharp_symbols95(void* instance, const VkPhysicalDeviceLimits& _0) { new (instance) VkPhysicalDeviceLimits(_0); } }
extern "C" { void AcidSharp_symbols96(VkPhysicalDeviceLimits* instance) { instance->~VkPhysicalDeviceLimits(); } }
VkPhysicalDeviceLimits& (VkPhysicalDeviceLimits::*AcidSharp_symbols97)(const VkPhysicalDeviceLimits&) = &VkPhysicalDeviceLimits::operator=;
VkPhysicalDeviceLimits& (VkPhysicalDeviceLimits::*AcidSharp_symbols98)(VkPhysicalDeviceLimits&&) = &VkPhysicalDeviceLimits::operator=;
extern "C" { void AcidSharp_symbols99(void* instance) { new (instance) VkPhysicalDeviceLimits(); } }
extern "C" { void AcidSharp_symbols100(void* instance, const VkPhysicalDeviceSparseProperties& _0) { new (instance) VkPhysicalDeviceSparseProperties(_0); } }
extern "C" { void AcidSharp_symbols101(VkPhysicalDeviceSparseProperties* instance) { instance->~VkPhysicalDeviceSparseProperties(); } }
VkPhysicalDeviceSparseProperties& (VkPhysicalDeviceSparseProperties::*AcidSharp_symbols102)(const VkPhysicalDeviceSparseProperties&) = &VkPhysicalDeviceSparseProperties::operator=;
VkPhysicalDeviceSparseProperties& (VkPhysicalDeviceSparseProperties::*AcidSharp_symbols103)(VkPhysicalDeviceSparseProperties&&) = &VkPhysicalDeviceSparseProperties::operator=;
extern "C" { void AcidSharp_symbols104(void* instance) { new (instance) VkPhysicalDeviceSparseProperties(); } }
extern "C" { void AcidSharp_symbols105(void* instance, const VkPhysicalDeviceProperties& _0) { new (instance) VkPhysicalDeviceProperties(_0); } }
extern "C" { void AcidSharp_symbols106(VkPhysicalDeviceProperties* instance) { instance->~VkPhysicalDeviceProperties(); } }
VkPhysicalDeviceProperties& (VkPhysicalDeviceProperties::*AcidSharp_symbols107)(const VkPhysicalDeviceProperties&) = &VkPhysicalDeviceProperties::operator=;
VkPhysicalDeviceProperties& (VkPhysicalDeviceProperties::*AcidSharp_symbols108)(VkPhysicalDeviceProperties&&) = &VkPhysicalDeviceProperties::operator=;
extern "C" { void AcidSharp_symbols109(void* instance) { new (instance) VkPhysicalDeviceProperties(); } }
extern "C" { void AcidSharp_symbols110(void* instance) { new (instance) VkQueueFamilyProperties(); } }
extern "C" { void AcidSharp_symbols111(void* instance, const VkQueueFamilyProperties& _0) { new (instance) VkQueueFamilyProperties(_0); } }
VkQueueFamilyProperties& (VkQueueFamilyProperties::*AcidSharp_symbols112)(const VkQueueFamilyProperties&) = &VkQueueFamilyProperties::operator=;
VkQueueFamilyProperties& (VkQueueFamilyProperties::*AcidSharp_symbols113)(VkQueueFamilyProperties&&) = &VkQueueFamilyProperties::operator=;
extern "C" { void AcidSharp_symbols114(VkQueueFamilyProperties* instance) { instance->~VkQueueFamilyProperties(); } }
extern "C" { void AcidSharp_symbols115(void* instance, const VkMemoryType& _0) { new (instance) VkMemoryType(_0); } }
extern "C" { void AcidSharp_symbols116(VkMemoryType* instance) { instance->~VkMemoryType(); } }
VkMemoryType& (VkMemoryType::*AcidSharp_symbols117)(const VkMemoryType&) = &VkMemoryType::operator=;
VkMemoryType& (VkMemoryType::*AcidSharp_symbols118)(VkMemoryType&&) = &VkMemoryType::operator=;
extern "C" { void AcidSharp_symbols119(void* instance) { new (instance) VkMemoryType(); } }
extern "C" { void AcidSharp_symbols120(void* instance, const VkMemoryHeap& _0) { new (instance) VkMemoryHeap(_0); } }
extern "C" { void AcidSharp_symbols121(VkMemoryHeap* instance) { instance->~VkMemoryHeap(); } }
VkMemoryHeap& (VkMemoryHeap::*AcidSharp_symbols122)(const VkMemoryHeap&) = &VkMemoryHeap::operator=;
VkMemoryHeap& (VkMemoryHeap::*AcidSharp_symbols123)(VkMemoryHeap&&) = &VkMemoryHeap::operator=;
extern "C" { void AcidSharp_symbols124(void* instance) { new (instance) VkMemoryHeap(); } }
extern "C" { void AcidSharp_symbols125(void* instance, const VkPhysicalDeviceMemoryProperties& _0) { new (instance) VkPhysicalDeviceMemoryProperties(_0); } }
extern "C" { void AcidSharp_symbols126(VkPhysicalDeviceMemoryProperties* instance) { instance->~VkPhysicalDeviceMemoryProperties(); } }
VkPhysicalDeviceMemoryProperties& (VkPhysicalDeviceMemoryProperties::*AcidSharp_symbols127)(const VkPhysicalDeviceMemoryProperties&) = &VkPhysicalDeviceMemoryProperties::operator=;
VkPhysicalDeviceMemoryProperties& (VkPhysicalDeviceMemoryProperties::*AcidSharp_symbols128)(VkPhysicalDeviceMemoryProperties&&) = &VkPhysicalDeviceMemoryProperties::operator=;
extern "C" { void AcidSharp_symbols129(void* instance) { new (instance) VkPhysicalDeviceMemoryProperties(); } }
extern "C" { void AcidSharp_symbols130(void* instance) { new (instance) VkDeviceQueueCreateInfo(); } }
extern "C" { void AcidSharp_symbols131(void* instance, const VkDeviceQueueCreateInfo& _0) { new (instance) VkDeviceQueueCreateInfo(_0); } }
VkDeviceQueueCreateInfo& (VkDeviceQueueCreateInfo::*AcidSharp_symbols132)(const VkDeviceQueueCreateInfo&) = &VkDeviceQueueCreateInfo::operator=;
VkDeviceQueueCreateInfo& (VkDeviceQueueCreateInfo::*AcidSharp_symbols133)(VkDeviceQueueCreateInfo&&) = &VkDeviceQueueCreateInfo::operator=;
extern "C" { void AcidSharp_symbols134(VkDeviceQueueCreateInfo* instance) { instance->~VkDeviceQueueCreateInfo(); } }
extern "C" { void AcidSharp_symbols135(void* instance) { new (instance) VkDeviceCreateInfo(); } }
extern "C" { void AcidSharp_symbols136(void* instance, const VkDeviceCreateInfo& _0) { new (instance) VkDeviceCreateInfo(_0); } }
VkDeviceCreateInfo& (VkDeviceCreateInfo::*AcidSharp_symbols137)(const VkDeviceCreateInfo&) = &VkDeviceCreateInfo::operator=;
VkDeviceCreateInfo& (VkDeviceCreateInfo::*AcidSharp_symbols138)(VkDeviceCreateInfo&&) = &VkDeviceCreateInfo::operator=;
extern "C" { void AcidSharp_symbols139(VkDeviceCreateInfo* instance) { instance->~VkDeviceCreateInfo(); } }
extern "C" { void AcidSharp_symbols140(void* instance) { new (instance) VkExtensionProperties(); } }
extern "C" { void AcidSharp_symbols141(void* instance, const VkExtensionProperties& _0) { new (instance) VkExtensionProperties(_0); } }
VkExtensionProperties& (VkExtensionProperties::*AcidSharp_symbols142)(const VkExtensionProperties&) = &VkExtensionProperties::operator=;
VkExtensionProperties& (VkExtensionProperties::*AcidSharp_symbols143)(VkExtensionProperties&&) = &VkExtensionProperties::operator=;
extern "C" { void AcidSharp_symbols144(VkExtensionProperties* instance) { instance->~VkExtensionProperties(); } }
extern "C" { void AcidSharp_symbols145(void* instance) { new (instance) VkLayerProperties(); } }
extern "C" { void AcidSharp_symbols146(void* instance, const VkLayerProperties& _0) { new (instance) VkLayerProperties(_0); } }
VkLayerProperties& (VkLayerProperties::*AcidSharp_symbols147)(const VkLayerProperties&) = &VkLayerProperties::operator=;
VkLayerProperties& (VkLayerProperties::*AcidSharp_symbols148)(VkLayerProperties&&) = &VkLayerProperties::operator=;
extern "C" { void AcidSharp_symbols149(VkLayerProperties* instance) { instance->~VkLayerProperties(); } }
extern "C" { void AcidSharp_symbols150(void* instance) { new (instance) VkSubmitInfo(); } }
extern "C" { void AcidSharp_symbols151(void* instance, const VkSubmitInfo& _0) { new (instance) VkSubmitInfo(_0); } }
VkSubmitInfo& (VkSubmitInfo::*AcidSharp_symbols152)(const VkSubmitInfo&) = &VkSubmitInfo::operator=;
VkSubmitInfo& (VkSubmitInfo::*AcidSharp_symbols153)(VkSubmitInfo&&) = &VkSubmitInfo::operator=;
extern "C" { void AcidSharp_symbols154(VkSubmitInfo* instance) { instance->~VkSubmitInfo(); } }
extern "C" { void AcidSharp_symbols155(void* instance) { new (instance) VkMemoryAllocateInfo(); } }
extern "C" { void AcidSharp_symbols156(void* instance, const VkMemoryAllocateInfo& _0) { new (instance) VkMemoryAllocateInfo(_0); } }
VkMemoryAllocateInfo& (VkMemoryAllocateInfo::*AcidSharp_symbols157)(const VkMemoryAllocateInfo&) = &VkMemoryAllocateInfo::operator=;
VkMemoryAllocateInfo& (VkMemoryAllocateInfo::*AcidSharp_symbols158)(VkMemoryAllocateInfo&&) = &VkMemoryAllocateInfo::operator=;
extern "C" { void AcidSharp_symbols159(VkMemoryAllocateInfo* instance) { instance->~VkMemoryAllocateInfo(); } }
extern "C" { void AcidSharp_symbols160(void* instance) { new (instance) VkMappedMemoryRange(); } }
extern "C" { void AcidSharp_symbols161(void* instance, const VkMappedMemoryRange& _0) { new (instance) VkMappedMemoryRange(_0); } }
VkMappedMemoryRange& (VkMappedMemoryRange::*AcidSharp_symbols162)(const VkMappedMemoryRange&) = &VkMappedMemoryRange::operator=;
VkMappedMemoryRange& (VkMappedMemoryRange::*AcidSharp_symbols163)(VkMappedMemoryRange&&) = &VkMappedMemoryRange::operator=;
extern "C" { void AcidSharp_symbols164(VkMappedMemoryRange* instance) { instance->~VkMappedMemoryRange(); } }
extern "C" { void AcidSharp_symbols165(void* instance) { new (instance) VkMemoryRequirements(); } }
extern "C" { void AcidSharp_symbols166(void* instance, const VkMemoryRequirements& _0) { new (instance) VkMemoryRequirements(_0); } }
VkMemoryRequirements& (VkMemoryRequirements::*AcidSharp_symbols167)(const VkMemoryRequirements&) = &VkMemoryRequirements::operator=;
VkMemoryRequirements& (VkMemoryRequirements::*AcidSharp_symbols168)(VkMemoryRequirements&&) = &VkMemoryRequirements::operator=;
extern "C" { void AcidSharp_symbols169(VkMemoryRequirements* instance) { instance->~VkMemoryRequirements(); } }
extern "C" { void AcidSharp_symbols170(void* instance) { new (instance) VkSparseImageFormatProperties(); } }
extern "C" { void AcidSharp_symbols171(void* instance, const VkSparseImageFormatProperties& _0) { new (instance) VkSparseImageFormatProperties(_0); } }
VkSparseImageFormatProperties& (VkSparseImageFormatProperties::*AcidSharp_symbols172)(const VkSparseImageFormatProperties&) = &VkSparseImageFormatProperties::operator=;
VkSparseImageFormatProperties& (VkSparseImageFormatProperties::*AcidSharp_symbols173)(VkSparseImageFormatProperties&&) = &VkSparseImageFormatProperties::operator=;
extern "C" { void AcidSharp_symbols174(VkSparseImageFormatProperties* instance) { instance->~VkSparseImageFormatProperties(); } }
extern "C" { void AcidSharp_symbols175(void* instance) { new (instance) VkSparseImageMemoryRequirements(); } }
extern "C" { void AcidSharp_symbols176(void* instance, const VkSparseImageMemoryRequirements& _0) { new (instance) VkSparseImageMemoryRequirements(_0); } }
VkSparseImageMemoryRequirements& (VkSparseImageMemoryRequirements::*AcidSharp_symbols177)(const VkSparseImageMemoryRequirements&) = &VkSparseImageMemoryRequirements::operator=;
VkSparseImageMemoryRequirements& (VkSparseImageMemoryRequirements::*AcidSharp_symbols178)(VkSparseImageMemoryRequirements&&) = &VkSparseImageMemoryRequirements::operator=;
extern "C" { void AcidSharp_symbols179(VkSparseImageMemoryRequirements* instance) { instance->~VkSparseImageMemoryRequirements(); } }
extern "C" { void AcidSharp_symbols180(void* instance) { new (instance) VkSparseMemoryBind(); } }
extern "C" { void AcidSharp_symbols181(void* instance, const VkSparseMemoryBind& _0) { new (instance) VkSparseMemoryBind(_0); } }
VkSparseMemoryBind& (VkSparseMemoryBind::*AcidSharp_symbols182)(const VkSparseMemoryBind&) = &VkSparseMemoryBind::operator=;
VkSparseMemoryBind& (VkSparseMemoryBind::*AcidSharp_symbols183)(VkSparseMemoryBind&&) = &VkSparseMemoryBind::operator=;
extern "C" { void AcidSharp_symbols184(VkSparseMemoryBind* instance) { instance->~VkSparseMemoryBind(); } }
extern "C" { void AcidSharp_symbols185(void* instance) { new (instance) VkSparseBufferMemoryBindInfo(); } }
extern "C" { void AcidSharp_symbols186(void* instance, const VkSparseBufferMemoryBindInfo& _0) { new (instance) VkSparseBufferMemoryBindInfo(_0); } }
VkSparseBufferMemoryBindInfo& (VkSparseBufferMemoryBindInfo::*AcidSharp_symbols187)(const VkSparseBufferMemoryBindInfo&) = &VkSparseBufferMemoryBindInfo::operator=;
VkSparseBufferMemoryBindInfo& (VkSparseBufferMemoryBindInfo::*AcidSharp_symbols188)(VkSparseBufferMemoryBindInfo&&) = &VkSparseBufferMemoryBindInfo::operator=;
extern "C" { void AcidSharp_symbols189(VkSparseBufferMemoryBindInfo* instance) { instance->~VkSparseBufferMemoryBindInfo(); } }
extern "C" { void AcidSharp_symbols190(void* instance) { new (instance) VkSparseImageOpaqueMemoryBindInfo(); } }
extern "C" { void AcidSharp_symbols191(void* instance, const VkSparseImageOpaqueMemoryBindInfo& _0) { new (instance) VkSparseImageOpaqueMemoryBindInfo(_0); } }
VkSparseImageOpaqueMemoryBindInfo& (VkSparseImageOpaqueMemoryBindInfo::*AcidSharp_symbols192)(const VkSparseImageOpaqueMemoryBindInfo&) = &VkSparseImageOpaqueMemoryBindInfo::operator=;
VkSparseImageOpaqueMemoryBindInfo& (VkSparseImageOpaqueMemoryBindInfo::*AcidSharp_symbols193)(VkSparseImageOpaqueMemoryBindInfo&&) = &VkSparseImageOpaqueMemoryBindInfo::operator=;
extern "C" { void AcidSharp_symbols194(VkSparseImageOpaqueMemoryBindInfo* instance) { instance->~VkSparseImageOpaqueMemoryBindInfo(); } }
extern "C" { void AcidSharp_symbols195(void* instance) { new (instance) VkImageSubresource(); } }
extern "C" { void AcidSharp_symbols196(void* instance, const VkImageSubresource& _0) { new (instance) VkImageSubresource(_0); } }
VkImageSubresource& (VkImageSubresource::*AcidSharp_symbols197)(const VkImageSubresource&) = &VkImageSubresource::operator=;
VkImageSubresource& (VkImageSubresource::*AcidSharp_symbols198)(VkImageSubresource&&) = &VkImageSubresource::operator=;
extern "C" { void AcidSharp_symbols199(VkImageSubresource* instance) { instance->~VkImageSubresource(); } }
extern "C" { void AcidSharp_symbols200(void* instance) { new (instance) VkOffset3D(); } }
extern "C" { void AcidSharp_symbols201(void* instance, const VkOffset3D& _0) { new (instance) VkOffset3D(_0); } }
VkOffset3D& (VkOffset3D::*AcidSharp_symbols202)(const VkOffset3D&) = &VkOffset3D::operator=;
VkOffset3D& (VkOffset3D::*AcidSharp_symbols203)(VkOffset3D&&) = &VkOffset3D::operator=;
extern "C" { void AcidSharp_symbols204(VkOffset3D* instance) { instance->~VkOffset3D(); } }
extern "C" { void AcidSharp_symbols205(void* instance) { new (instance) VkSparseImageMemoryBind(); } }
extern "C" { void AcidSharp_symbols206(void* instance, const VkSparseImageMemoryBind& _0) { new (instance) VkSparseImageMemoryBind(_0); } }
VkSparseImageMemoryBind& (VkSparseImageMemoryBind::*AcidSharp_symbols207)(const VkSparseImageMemoryBind&) = &VkSparseImageMemoryBind::operator=;
VkSparseImageMemoryBind& (VkSparseImageMemoryBind::*AcidSharp_symbols208)(VkSparseImageMemoryBind&&) = &VkSparseImageMemoryBind::operator=;
extern "C" { void AcidSharp_symbols209(VkSparseImageMemoryBind* instance) { instance->~VkSparseImageMemoryBind(); } }
extern "C" { void AcidSharp_symbols210(void* instance) { new (instance) VkSparseImageMemoryBindInfo(); } }
extern "C" { void AcidSharp_symbols211(void* instance, const VkSparseImageMemoryBindInfo& _0) { new (instance) VkSparseImageMemoryBindInfo(_0); } }
VkSparseImageMemoryBindInfo& (VkSparseImageMemoryBindInfo::*AcidSharp_symbols212)(const VkSparseImageMemoryBindInfo&) = &VkSparseImageMemoryBindInfo::operator=;
VkSparseImageMemoryBindInfo& (VkSparseImageMemoryBindInfo::*AcidSharp_symbols213)(VkSparseImageMemoryBindInfo&&) = &VkSparseImageMemoryBindInfo::operator=;
extern "C" { void AcidSharp_symbols214(VkSparseImageMemoryBindInfo* instance) { instance->~VkSparseImageMemoryBindInfo(); } }
extern "C" { void AcidSharp_symbols215(void* instance) { new (instance) VkBindSparseInfo(); } }
extern "C" { void AcidSharp_symbols216(void* instance, const VkBindSparseInfo& _0) { new (instance) VkBindSparseInfo(_0); } }
VkBindSparseInfo& (VkBindSparseInfo::*AcidSharp_symbols217)(const VkBindSparseInfo&) = &VkBindSparseInfo::operator=;
VkBindSparseInfo& (VkBindSparseInfo::*AcidSharp_symbols218)(VkBindSparseInfo&&) = &VkBindSparseInfo::operator=;
extern "C" { void AcidSharp_symbols219(VkBindSparseInfo* instance) { instance->~VkBindSparseInfo(); } }
extern "C" { void AcidSharp_symbols220(void* instance) { new (instance) VkFenceCreateInfo(); } }
extern "C" { void AcidSharp_symbols221(void* instance, const VkFenceCreateInfo& _0) { new (instance) VkFenceCreateInfo(_0); } }
VkFenceCreateInfo& (VkFenceCreateInfo::*AcidSharp_symbols222)(const VkFenceCreateInfo&) = &VkFenceCreateInfo::operator=;
VkFenceCreateInfo& (VkFenceCreateInfo::*AcidSharp_symbols223)(VkFenceCreateInfo&&) = &VkFenceCreateInfo::operator=;
extern "C" { void AcidSharp_symbols224(VkFenceCreateInfo* instance) { instance->~VkFenceCreateInfo(); } }
extern "C" { void AcidSharp_symbols225(void* instance) { new (instance) VkSemaphoreCreateInfo(); } }
extern "C" { void AcidSharp_symbols226(void* instance, const VkSemaphoreCreateInfo& _0) { new (instance) VkSemaphoreCreateInfo(_0); } }
VkSemaphoreCreateInfo& (VkSemaphoreCreateInfo::*AcidSharp_symbols227)(const VkSemaphoreCreateInfo&) = &VkSemaphoreCreateInfo::operator=;
VkSemaphoreCreateInfo& (VkSemaphoreCreateInfo::*AcidSharp_symbols228)(VkSemaphoreCreateInfo&&) = &VkSemaphoreCreateInfo::operator=;
extern "C" { void AcidSharp_symbols229(VkSemaphoreCreateInfo* instance) { instance->~VkSemaphoreCreateInfo(); } }
extern "C" { void AcidSharp_symbols230(void* instance) { new (instance) VkEventCreateInfo(); } }
extern "C" { void AcidSharp_symbols231(void* instance, const VkEventCreateInfo& _0) { new (instance) VkEventCreateInfo(_0); } }
VkEventCreateInfo& (VkEventCreateInfo::*AcidSharp_symbols232)(const VkEventCreateInfo&) = &VkEventCreateInfo::operator=;
VkEventCreateInfo& (VkEventCreateInfo::*AcidSharp_symbols233)(VkEventCreateInfo&&) = &VkEventCreateInfo::operator=;
extern "C" { void AcidSharp_symbols234(VkEventCreateInfo* instance) { instance->~VkEventCreateInfo(); } }
extern "C" { void AcidSharp_symbols235(void* instance) { new (instance) VkQueryPoolCreateInfo(); } }
extern "C" { void AcidSharp_symbols236(void* instance, const VkQueryPoolCreateInfo& _0) { new (instance) VkQueryPoolCreateInfo(_0); } }
VkQueryPoolCreateInfo& (VkQueryPoolCreateInfo::*AcidSharp_symbols237)(const VkQueryPoolCreateInfo&) = &VkQueryPoolCreateInfo::operator=;
VkQueryPoolCreateInfo& (VkQueryPoolCreateInfo::*AcidSharp_symbols238)(VkQueryPoolCreateInfo&&) = &VkQueryPoolCreateInfo::operator=;
extern "C" { void AcidSharp_symbols239(VkQueryPoolCreateInfo* instance) { instance->~VkQueryPoolCreateInfo(); } }
extern "C" { void AcidSharp_symbols240(void* instance) { new (instance) VkBufferCreateInfo(); } }
extern "C" { void AcidSharp_symbols241(void* instance, const VkBufferCreateInfo& _0) { new (instance) VkBufferCreateInfo(_0); } }
VkBufferCreateInfo& (VkBufferCreateInfo::*AcidSharp_symbols242)(const VkBufferCreateInfo&) = &VkBufferCreateInfo::operator=;
VkBufferCreateInfo& (VkBufferCreateInfo::*AcidSharp_symbols243)(VkBufferCreateInfo&&) = &VkBufferCreateInfo::operator=;
extern "C" { void AcidSharp_symbols244(VkBufferCreateInfo* instance) { instance->~VkBufferCreateInfo(); } }
extern "C" { void AcidSharp_symbols245(void* instance) { new (instance) VkBufferViewCreateInfo(); } }
extern "C" { void AcidSharp_symbols246(void* instance, const VkBufferViewCreateInfo& _0) { new (instance) VkBufferViewCreateInfo(_0); } }
VkBufferViewCreateInfo& (VkBufferViewCreateInfo::*AcidSharp_symbols247)(const VkBufferViewCreateInfo&) = &VkBufferViewCreateInfo::operator=;
VkBufferViewCreateInfo& (VkBufferViewCreateInfo::*AcidSharp_symbols248)(VkBufferViewCreateInfo&&) = &VkBufferViewCreateInfo::operator=;
extern "C" { void AcidSharp_symbols249(VkBufferViewCreateInfo* instance) { instance->~VkBufferViewCreateInfo(); } }
extern "C" { void AcidSharp_symbols250(void* instance) { new (instance) VkImageCreateInfo(); } }
extern "C" { void AcidSharp_symbols251(void* instance, const VkImageCreateInfo& _0) { new (instance) VkImageCreateInfo(_0); } }
VkImageCreateInfo& (VkImageCreateInfo::*AcidSharp_symbols252)(const VkImageCreateInfo&) = &VkImageCreateInfo::operator=;
VkImageCreateInfo& (VkImageCreateInfo::*AcidSharp_symbols253)(VkImageCreateInfo&&) = &VkImageCreateInfo::operator=;
extern "C" { void AcidSharp_symbols254(VkImageCreateInfo* instance) { instance->~VkImageCreateInfo(); } }
extern "C" { void AcidSharp_symbols255(void* instance) { new (instance) VkSubresourceLayout(); } }
extern "C" { void AcidSharp_symbols256(void* instance, const VkSubresourceLayout& _0) { new (instance) VkSubresourceLayout(_0); } }
VkSubresourceLayout& (VkSubresourceLayout::*AcidSharp_symbols257)(const VkSubresourceLayout&) = &VkSubresourceLayout::operator=;
VkSubresourceLayout& (VkSubresourceLayout::*AcidSharp_symbols258)(VkSubresourceLayout&&) = &VkSubresourceLayout::operator=;
extern "C" { void AcidSharp_symbols259(VkSubresourceLayout* instance) { instance->~VkSubresourceLayout(); } }
extern "C" { void AcidSharp_symbols260(void* instance) { new (instance) VkComponentMapping(); } }
extern "C" { void AcidSharp_symbols261(void* instance, const VkComponentMapping& _0) { new (instance) VkComponentMapping(_0); } }
VkComponentMapping& (VkComponentMapping::*AcidSharp_symbols262)(const VkComponentMapping&) = &VkComponentMapping::operator=;
VkComponentMapping& (VkComponentMapping::*AcidSharp_symbols263)(VkComponentMapping&&) = &VkComponentMapping::operator=;
extern "C" { void AcidSharp_symbols264(VkComponentMapping* instance) { instance->~VkComponentMapping(); } }
extern "C" { void AcidSharp_symbols265(void* instance) { new (instance) VkImageSubresourceRange(); } }
extern "C" { void AcidSharp_symbols266(void* instance, const VkImageSubresourceRange& _0) { new (instance) VkImageSubresourceRange(_0); } }
VkImageSubresourceRange& (VkImageSubresourceRange::*AcidSharp_symbols267)(const VkImageSubresourceRange&) = &VkImageSubresourceRange::operator=;
VkImageSubresourceRange& (VkImageSubresourceRange::*AcidSharp_symbols268)(VkImageSubresourceRange&&) = &VkImageSubresourceRange::operator=;
extern "C" { void AcidSharp_symbols269(VkImageSubresourceRange* instance) { instance->~VkImageSubresourceRange(); } }
extern "C" { void AcidSharp_symbols270(void* instance) { new (instance) VkImageViewCreateInfo(); } }
extern "C" { void AcidSharp_symbols271(void* instance, const VkImageViewCreateInfo& _0) { new (instance) VkImageViewCreateInfo(_0); } }
VkImageViewCreateInfo& (VkImageViewCreateInfo::*AcidSharp_symbols272)(const VkImageViewCreateInfo&) = &VkImageViewCreateInfo::operator=;
VkImageViewCreateInfo& (VkImageViewCreateInfo::*AcidSharp_symbols273)(VkImageViewCreateInfo&&) = &VkImageViewCreateInfo::operator=;
extern "C" { void AcidSharp_symbols274(VkImageViewCreateInfo* instance) { instance->~VkImageViewCreateInfo(); } }
extern "C" { void AcidSharp_symbols275(void* instance) { new (instance) VkShaderModuleCreateInfo(); } }
extern "C" { void AcidSharp_symbols276(void* instance, const VkShaderModuleCreateInfo& _0) { new (instance) VkShaderModuleCreateInfo(_0); } }
VkShaderModuleCreateInfo& (VkShaderModuleCreateInfo::*AcidSharp_symbols277)(const VkShaderModuleCreateInfo&) = &VkShaderModuleCreateInfo::operator=;
VkShaderModuleCreateInfo& (VkShaderModuleCreateInfo::*AcidSharp_symbols278)(VkShaderModuleCreateInfo&&) = &VkShaderModuleCreateInfo::operator=;
extern "C" { void AcidSharp_symbols279(VkShaderModuleCreateInfo* instance) { instance->~VkShaderModuleCreateInfo(); } }
extern "C" { void AcidSharp_symbols280(void* instance) { new (instance) VkPipelineCacheCreateInfo(); } }
extern "C" { void AcidSharp_symbols281(void* instance, const VkPipelineCacheCreateInfo& _0) { new (instance) VkPipelineCacheCreateInfo(_0); } }
VkPipelineCacheCreateInfo& (VkPipelineCacheCreateInfo::*AcidSharp_symbols282)(const VkPipelineCacheCreateInfo&) = &VkPipelineCacheCreateInfo::operator=;
VkPipelineCacheCreateInfo& (VkPipelineCacheCreateInfo::*AcidSharp_symbols283)(VkPipelineCacheCreateInfo&&) = &VkPipelineCacheCreateInfo::operator=;
extern "C" { void AcidSharp_symbols284(VkPipelineCacheCreateInfo* instance) { instance->~VkPipelineCacheCreateInfo(); } }
extern "C" { void AcidSharp_symbols285(void* instance) { new (instance) VkSpecializationMapEntry(); } }
extern "C" { void AcidSharp_symbols286(void* instance, const VkSpecializationMapEntry& _0) { new (instance) VkSpecializationMapEntry(_0); } }
VkSpecializationMapEntry& (VkSpecializationMapEntry::*AcidSharp_symbols287)(const VkSpecializationMapEntry&) = &VkSpecializationMapEntry::operator=;
VkSpecializationMapEntry& (VkSpecializationMapEntry::*AcidSharp_symbols288)(VkSpecializationMapEntry&&) = &VkSpecializationMapEntry::operator=;
extern "C" { void AcidSharp_symbols289(VkSpecializationMapEntry* instance) { instance->~VkSpecializationMapEntry(); } }
extern "C" { void AcidSharp_symbols290(void* instance) { new (instance) VkSpecializationInfo(); } }
extern "C" { void AcidSharp_symbols291(void* instance, const VkSpecializationInfo& _0) { new (instance) VkSpecializationInfo(_0); } }
VkSpecializationInfo& (VkSpecializationInfo::*AcidSharp_symbols292)(const VkSpecializationInfo&) = &VkSpecializationInfo::operator=;
VkSpecializationInfo& (VkSpecializationInfo::*AcidSharp_symbols293)(VkSpecializationInfo&&) = &VkSpecializationInfo::operator=;
extern "C" { void AcidSharp_symbols294(VkSpecializationInfo* instance) { instance->~VkSpecializationInfo(); } }
extern "C" { void AcidSharp_symbols295(void* instance) { new (instance) VkPipelineShaderStageCreateInfo(); } }
extern "C" { void AcidSharp_symbols296(void* instance, const VkPipelineShaderStageCreateInfo& _0) { new (instance) VkPipelineShaderStageCreateInfo(_0); } }
VkPipelineShaderStageCreateInfo& (VkPipelineShaderStageCreateInfo::*AcidSharp_symbols297)(const VkPipelineShaderStageCreateInfo&) = &VkPipelineShaderStageCreateInfo::operator=;
VkPipelineShaderStageCreateInfo& (VkPipelineShaderStageCreateInfo::*AcidSharp_symbols298)(VkPipelineShaderStageCreateInfo&&) = &VkPipelineShaderStageCreateInfo::operator=;
extern "C" { void AcidSharp_symbols299(VkPipelineShaderStageCreateInfo* instance) { instance->~VkPipelineShaderStageCreateInfo(); } }
VkVertexInputBindingDescription& (VkVertexInputBindingDescription::*AcidSharp_symbols300)(const VkVertexInputBindingDescription&) = &VkVertexInputBindingDescription::operator=;
VkVertexInputBindingDescription& (VkVertexInputBindingDescription::*AcidSharp_symbols301)(VkVertexInputBindingDescription&&) = &VkVertexInputBindingDescription::operator=;
extern "C" { void AcidSharp_symbols302(VkVertexInputBindingDescription* instance) { instance->~VkVertexInputBindingDescription(); } }
extern "C" { void AcidSharp_symbols303(void* instance) { new (instance) VkVertexInputBindingDescription(); } }
extern "C" { void AcidSharp_symbols304(void* instance, const VkVertexInputBindingDescription& _0) { new (instance) VkVertexInputBindingDescription(_0); } }
VkVertexInputAttributeDescription& (VkVertexInputAttributeDescription::*AcidSharp_symbols305)(const VkVertexInputAttributeDescription&) = &VkVertexInputAttributeDescription::operator=;
VkVertexInputAttributeDescription& (VkVertexInputAttributeDescription::*AcidSharp_symbols306)(VkVertexInputAttributeDescription&&) = &VkVertexInputAttributeDescription::operator=;
extern "C" { void AcidSharp_symbols307(VkVertexInputAttributeDescription* instance) { instance->~VkVertexInputAttributeDescription(); } }
extern "C" { void AcidSharp_symbols308(void* instance) { new (instance) VkVertexInputAttributeDescription(); } }
extern "C" { void AcidSharp_symbols309(void* instance, const VkVertexInputAttributeDescription& _0) { new (instance) VkVertexInputAttributeDescription(_0); } }
extern "C" { void AcidSharp_symbols310(void* instance) { new (instance) VkPipelineVertexInputStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols311(void* instance, const VkPipelineVertexInputStateCreateInfo& _0) { new (instance) VkPipelineVertexInputStateCreateInfo(_0); } }
VkPipelineVertexInputStateCreateInfo& (VkPipelineVertexInputStateCreateInfo::*AcidSharp_symbols312)(const VkPipelineVertexInputStateCreateInfo&) = &VkPipelineVertexInputStateCreateInfo::operator=;
VkPipelineVertexInputStateCreateInfo& (VkPipelineVertexInputStateCreateInfo::*AcidSharp_symbols313)(VkPipelineVertexInputStateCreateInfo&&) = &VkPipelineVertexInputStateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols314(VkPipelineVertexInputStateCreateInfo* instance) { instance->~VkPipelineVertexInputStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols315(void* instance) { new (instance) VkPipelineInputAssemblyStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols316(void* instance, const VkPipelineInputAssemblyStateCreateInfo& _0) { new (instance) VkPipelineInputAssemblyStateCreateInfo(_0); } }
VkPipelineInputAssemblyStateCreateInfo& (VkPipelineInputAssemblyStateCreateInfo::*AcidSharp_symbols317)(const VkPipelineInputAssemblyStateCreateInfo&) = &VkPipelineInputAssemblyStateCreateInfo::operator=;
VkPipelineInputAssemblyStateCreateInfo& (VkPipelineInputAssemblyStateCreateInfo::*AcidSharp_symbols318)(VkPipelineInputAssemblyStateCreateInfo&&) = &VkPipelineInputAssemblyStateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols319(VkPipelineInputAssemblyStateCreateInfo* instance) { instance->~VkPipelineInputAssemblyStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols320(void* instance) { new (instance) VkPipelineTessellationStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols321(void* instance, const VkPipelineTessellationStateCreateInfo& _0) { new (instance) VkPipelineTessellationStateCreateInfo(_0); } }
VkPipelineTessellationStateCreateInfo& (VkPipelineTessellationStateCreateInfo::*AcidSharp_symbols322)(const VkPipelineTessellationStateCreateInfo&) = &VkPipelineTessellationStateCreateInfo::operator=;
VkPipelineTessellationStateCreateInfo& (VkPipelineTessellationStateCreateInfo::*AcidSharp_symbols323)(VkPipelineTessellationStateCreateInfo&&) = &VkPipelineTessellationStateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols324(VkPipelineTessellationStateCreateInfo* instance) { instance->~VkPipelineTessellationStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols325(void* instance) { new (instance) VkViewport(); } }
extern "C" { void AcidSharp_symbols326(void* instance, const VkViewport& _0) { new (instance) VkViewport(_0); } }
VkViewport& (VkViewport::*AcidSharp_symbols327)(const VkViewport&) = &VkViewport::operator=;
VkViewport& (VkViewport::*AcidSharp_symbols328)(VkViewport&&) = &VkViewport::operator=;
extern "C" { void AcidSharp_symbols329(VkViewport* instance) { instance->~VkViewport(); } }
extern "C" { void AcidSharp_symbols330(void* instance) { new (instance) VkOffset2D(); } }
extern "C" { void AcidSharp_symbols331(void* instance, const VkOffset2D& _0) { new (instance) VkOffset2D(_0); } }
VkOffset2D& (VkOffset2D::*AcidSharp_symbols332)(const VkOffset2D&) = &VkOffset2D::operator=;
VkOffset2D& (VkOffset2D::*AcidSharp_symbols333)(VkOffset2D&&) = &VkOffset2D::operator=;
extern "C" { void AcidSharp_symbols334(VkOffset2D* instance) { instance->~VkOffset2D(); } }
extern "C" { void AcidSharp_symbols335(void* instance, const VkExtent2D& _0) { new (instance) VkExtent2D(_0); } }
extern "C" { void AcidSharp_symbols336(VkExtent2D* instance) { instance->~VkExtent2D(); } }
VkExtent2D& (VkExtent2D::*AcidSharp_symbols337)(const VkExtent2D&) = &VkExtent2D::operator=;
VkExtent2D& (VkExtent2D::*AcidSharp_symbols338)(VkExtent2D&&) = &VkExtent2D::operator=;
extern "C" { void AcidSharp_symbols339(void* instance) { new (instance) VkExtent2D(); } }
extern "C" { void AcidSharp_symbols340(void* instance) { new (instance) VkRect2D(); } }
extern "C" { void AcidSharp_symbols341(void* instance, const VkRect2D& _0) { new (instance) VkRect2D(_0); } }
VkRect2D& (VkRect2D::*AcidSharp_symbols342)(const VkRect2D&) = &VkRect2D::operator=;
VkRect2D& (VkRect2D::*AcidSharp_symbols343)(VkRect2D&&) = &VkRect2D::operator=;
extern "C" { void AcidSharp_symbols344(VkRect2D* instance) { instance->~VkRect2D(); } }
extern "C" { void AcidSharp_symbols345(void* instance) { new (instance) VkPipelineViewportStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols346(void* instance, const VkPipelineViewportStateCreateInfo& _0) { new (instance) VkPipelineViewportStateCreateInfo(_0); } }
VkPipelineViewportStateCreateInfo& (VkPipelineViewportStateCreateInfo::*AcidSharp_symbols347)(const VkPipelineViewportStateCreateInfo&) = &VkPipelineViewportStateCreateInfo::operator=;
VkPipelineViewportStateCreateInfo& (VkPipelineViewportStateCreateInfo::*AcidSharp_symbols348)(VkPipelineViewportStateCreateInfo&&) = &VkPipelineViewportStateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols349(VkPipelineViewportStateCreateInfo* instance) { instance->~VkPipelineViewportStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols350(void* instance) { new (instance) VkPipelineRasterizationStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols351(void* instance, const VkPipelineRasterizationStateCreateInfo& _0) { new (instance) VkPipelineRasterizationStateCreateInfo(_0); } }
VkPipelineRasterizationStateCreateInfo& (VkPipelineRasterizationStateCreateInfo::*AcidSharp_symbols352)(const VkPipelineRasterizationStateCreateInfo&) = &VkPipelineRasterizationStateCreateInfo::operator=;
VkPipelineRasterizationStateCreateInfo& (VkPipelineRasterizationStateCreateInfo::*AcidSharp_symbols353)(VkPipelineRasterizationStateCreateInfo&&) = &VkPipelineRasterizationStateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols354(VkPipelineRasterizationStateCreateInfo* instance) { instance->~VkPipelineRasterizationStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols355(void* instance) { new (instance) VkPipelineMultisampleStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols356(void* instance, const VkPipelineMultisampleStateCreateInfo& _0) { new (instance) VkPipelineMultisampleStateCreateInfo(_0); } }
VkPipelineMultisampleStateCreateInfo& (VkPipelineMultisampleStateCreateInfo::*AcidSharp_symbols357)(const VkPipelineMultisampleStateCreateInfo&) = &VkPipelineMultisampleStateCreateInfo::operator=;
VkPipelineMultisampleStateCreateInfo& (VkPipelineMultisampleStateCreateInfo::*AcidSharp_symbols358)(VkPipelineMultisampleStateCreateInfo&&) = &VkPipelineMultisampleStateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols359(VkPipelineMultisampleStateCreateInfo* instance) { instance->~VkPipelineMultisampleStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols360(void* instance) { new (instance) VkStencilOpState(); } }
extern "C" { void AcidSharp_symbols361(void* instance, const VkStencilOpState& _0) { new (instance) VkStencilOpState(_0); } }
VkStencilOpState& (VkStencilOpState::*AcidSharp_symbols362)(const VkStencilOpState&) = &VkStencilOpState::operator=;
VkStencilOpState& (VkStencilOpState::*AcidSharp_symbols363)(VkStencilOpState&&) = &VkStencilOpState::operator=;
extern "C" { void AcidSharp_symbols364(VkStencilOpState* instance) { instance->~VkStencilOpState(); } }
extern "C" { void AcidSharp_symbols365(void* instance) { new (instance) VkPipelineDepthStencilStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols366(void* instance, const VkPipelineDepthStencilStateCreateInfo& _0) { new (instance) VkPipelineDepthStencilStateCreateInfo(_0); } }
VkPipelineDepthStencilStateCreateInfo& (VkPipelineDepthStencilStateCreateInfo::*AcidSharp_symbols367)(const VkPipelineDepthStencilStateCreateInfo&) = &VkPipelineDepthStencilStateCreateInfo::operator=;
VkPipelineDepthStencilStateCreateInfo& (VkPipelineDepthStencilStateCreateInfo::*AcidSharp_symbols368)(VkPipelineDepthStencilStateCreateInfo&&) = &VkPipelineDepthStencilStateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols369(VkPipelineDepthStencilStateCreateInfo* instance) { instance->~VkPipelineDepthStencilStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols370(void* instance) { new (instance) VkPipelineColorBlendAttachmentState(); } }
extern "C" { void AcidSharp_symbols371(void* instance, const VkPipelineColorBlendAttachmentState& _0) { new (instance) VkPipelineColorBlendAttachmentState(_0); } }
VkPipelineColorBlendAttachmentState& (VkPipelineColorBlendAttachmentState::*AcidSharp_symbols372)(const VkPipelineColorBlendAttachmentState&) = &VkPipelineColorBlendAttachmentState::operator=;
VkPipelineColorBlendAttachmentState& (VkPipelineColorBlendAttachmentState::*AcidSharp_symbols373)(VkPipelineColorBlendAttachmentState&&) = &VkPipelineColorBlendAttachmentState::operator=;
extern "C" { void AcidSharp_symbols374(VkPipelineColorBlendAttachmentState* instance) { instance->~VkPipelineColorBlendAttachmentState(); } }
extern "C" { void AcidSharp_symbols375(void* instance) { new (instance) VkPipelineColorBlendStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols376(void* instance, const VkPipelineColorBlendStateCreateInfo& _0) { new (instance) VkPipelineColorBlendStateCreateInfo(_0); } }
VkPipelineColorBlendStateCreateInfo& (VkPipelineColorBlendStateCreateInfo::*AcidSharp_symbols377)(const VkPipelineColorBlendStateCreateInfo&) = &VkPipelineColorBlendStateCreateInfo::operator=;
VkPipelineColorBlendStateCreateInfo& (VkPipelineColorBlendStateCreateInfo::*AcidSharp_symbols378)(VkPipelineColorBlendStateCreateInfo&&) = &VkPipelineColorBlendStateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols379(VkPipelineColorBlendStateCreateInfo* instance) { instance->~VkPipelineColorBlendStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols380(void* instance) { new (instance) VkPipelineDynamicStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols381(void* instance, const VkPipelineDynamicStateCreateInfo& _0) { new (instance) VkPipelineDynamicStateCreateInfo(_0); } }
VkPipelineDynamicStateCreateInfo& (VkPipelineDynamicStateCreateInfo::*AcidSharp_symbols382)(const VkPipelineDynamicStateCreateInfo&) = &VkPipelineDynamicStateCreateInfo::operator=;
VkPipelineDynamicStateCreateInfo& (VkPipelineDynamicStateCreateInfo::*AcidSharp_symbols383)(VkPipelineDynamicStateCreateInfo&&) = &VkPipelineDynamicStateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols384(VkPipelineDynamicStateCreateInfo* instance) { instance->~VkPipelineDynamicStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols385(void* instance) { new (instance) VkGraphicsPipelineCreateInfo(); } }
extern "C" { void AcidSharp_symbols386(void* instance, const VkGraphicsPipelineCreateInfo& _0) { new (instance) VkGraphicsPipelineCreateInfo(_0); } }
VkGraphicsPipelineCreateInfo& (VkGraphicsPipelineCreateInfo::*AcidSharp_symbols387)(const VkGraphicsPipelineCreateInfo&) = &VkGraphicsPipelineCreateInfo::operator=;
VkGraphicsPipelineCreateInfo& (VkGraphicsPipelineCreateInfo::*AcidSharp_symbols388)(VkGraphicsPipelineCreateInfo&&) = &VkGraphicsPipelineCreateInfo::operator=;
extern "C" { void AcidSharp_symbols389(VkGraphicsPipelineCreateInfo* instance) { instance->~VkGraphicsPipelineCreateInfo(); } }
extern "C" { void AcidSharp_symbols390(void* instance) { new (instance) VkComputePipelineCreateInfo(); } }
extern "C" { void AcidSharp_symbols391(void* instance, const VkComputePipelineCreateInfo& _0) { new (instance) VkComputePipelineCreateInfo(_0); } }
VkComputePipelineCreateInfo& (VkComputePipelineCreateInfo::*AcidSharp_symbols392)(const VkComputePipelineCreateInfo&) = &VkComputePipelineCreateInfo::operator=;
VkComputePipelineCreateInfo& (VkComputePipelineCreateInfo::*AcidSharp_symbols393)(VkComputePipelineCreateInfo&&) = &VkComputePipelineCreateInfo::operator=;
extern "C" { void AcidSharp_symbols394(VkComputePipelineCreateInfo* instance) { instance->~VkComputePipelineCreateInfo(); } }
extern "C" { void AcidSharp_symbols395(void* instance) { new (instance) VkPushConstantRange(); } }
extern "C" { void AcidSharp_symbols396(void* instance, const VkPushConstantRange& _0) { new (instance) VkPushConstantRange(_0); } }
VkPushConstantRange& (VkPushConstantRange::*AcidSharp_symbols397)(const VkPushConstantRange&) = &VkPushConstantRange::operator=;
VkPushConstantRange& (VkPushConstantRange::*AcidSharp_symbols398)(VkPushConstantRange&&) = &VkPushConstantRange::operator=;
extern "C" { void AcidSharp_symbols399(VkPushConstantRange* instance) { instance->~VkPushConstantRange(); } }
extern "C" { void AcidSharp_symbols400(void* instance) { new (instance) VkPipelineLayoutCreateInfo(); } }
extern "C" { void AcidSharp_symbols401(void* instance, const VkPipelineLayoutCreateInfo& _0) { new (instance) VkPipelineLayoutCreateInfo(_0); } }
VkPipelineLayoutCreateInfo& (VkPipelineLayoutCreateInfo::*AcidSharp_symbols402)(const VkPipelineLayoutCreateInfo&) = &VkPipelineLayoutCreateInfo::operator=;
VkPipelineLayoutCreateInfo& (VkPipelineLayoutCreateInfo::*AcidSharp_symbols403)(VkPipelineLayoutCreateInfo&&) = &VkPipelineLayoutCreateInfo::operator=;
extern "C" { void AcidSharp_symbols404(VkPipelineLayoutCreateInfo* instance) { instance->~VkPipelineLayoutCreateInfo(); } }
extern "C" { void AcidSharp_symbols405(void* instance) { new (instance) VkSamplerCreateInfo(); } }
extern "C" { void AcidSharp_symbols406(void* instance, const VkSamplerCreateInfo& _0) { new (instance) VkSamplerCreateInfo(_0); } }
VkSamplerCreateInfo& (VkSamplerCreateInfo::*AcidSharp_symbols407)(const VkSamplerCreateInfo&) = &VkSamplerCreateInfo::operator=;
VkSamplerCreateInfo& (VkSamplerCreateInfo::*AcidSharp_symbols408)(VkSamplerCreateInfo&&) = &VkSamplerCreateInfo::operator=;
extern "C" { void AcidSharp_symbols409(VkSamplerCreateInfo* instance) { instance->~VkSamplerCreateInfo(); } }
extern "C" { void AcidSharp_symbols410(void* instance) { new (instance) VkDescriptorSetLayoutBinding(); } }
extern "C" { void AcidSharp_symbols411(void* instance, const VkDescriptorSetLayoutBinding& _0) { new (instance) VkDescriptorSetLayoutBinding(_0); } }
VkDescriptorSetLayoutBinding& (VkDescriptorSetLayoutBinding::*AcidSharp_symbols412)(const VkDescriptorSetLayoutBinding&) = &VkDescriptorSetLayoutBinding::operator=;
VkDescriptorSetLayoutBinding& (VkDescriptorSetLayoutBinding::*AcidSharp_symbols413)(VkDescriptorSetLayoutBinding&&) = &VkDescriptorSetLayoutBinding::operator=;
extern "C" { void AcidSharp_symbols414(VkDescriptorSetLayoutBinding* instance) { instance->~VkDescriptorSetLayoutBinding(); } }
extern "C" { void AcidSharp_symbols415(void* instance) { new (instance) VkDescriptorSetLayoutCreateInfo(); } }
extern "C" { void AcidSharp_symbols416(void* instance, const VkDescriptorSetLayoutCreateInfo& _0) { new (instance) VkDescriptorSetLayoutCreateInfo(_0); } }
VkDescriptorSetLayoutCreateInfo& (VkDescriptorSetLayoutCreateInfo::*AcidSharp_symbols417)(const VkDescriptorSetLayoutCreateInfo&) = &VkDescriptorSetLayoutCreateInfo::operator=;
VkDescriptorSetLayoutCreateInfo& (VkDescriptorSetLayoutCreateInfo::*AcidSharp_symbols418)(VkDescriptorSetLayoutCreateInfo&&) = &VkDescriptorSetLayoutCreateInfo::operator=;
extern "C" { void AcidSharp_symbols419(VkDescriptorSetLayoutCreateInfo* instance) { instance->~VkDescriptorSetLayoutCreateInfo(); } }
extern "C" { void AcidSharp_symbols420(void* instance) { new (instance) VkDescriptorPoolSize(); } }
extern "C" { void AcidSharp_symbols421(void* instance, const VkDescriptorPoolSize& _0) { new (instance) VkDescriptorPoolSize(_0); } }
VkDescriptorPoolSize& (VkDescriptorPoolSize::*AcidSharp_symbols422)(const VkDescriptorPoolSize&) = &VkDescriptorPoolSize::operator=;
VkDescriptorPoolSize& (VkDescriptorPoolSize::*AcidSharp_symbols423)(VkDescriptorPoolSize&&) = &VkDescriptorPoolSize::operator=;
extern "C" { void AcidSharp_symbols424(VkDescriptorPoolSize* instance) { instance->~VkDescriptorPoolSize(); } }
extern "C" { void AcidSharp_symbols425(void* instance) { new (instance) VkDescriptorPoolCreateInfo(); } }
extern "C" { void AcidSharp_symbols426(void* instance, const VkDescriptorPoolCreateInfo& _0) { new (instance) VkDescriptorPoolCreateInfo(_0); } }
VkDescriptorPoolCreateInfo& (VkDescriptorPoolCreateInfo::*AcidSharp_symbols427)(const VkDescriptorPoolCreateInfo&) = &VkDescriptorPoolCreateInfo::operator=;
VkDescriptorPoolCreateInfo& (VkDescriptorPoolCreateInfo::*AcidSharp_symbols428)(VkDescriptorPoolCreateInfo&&) = &VkDescriptorPoolCreateInfo::operator=;
extern "C" { void AcidSharp_symbols429(VkDescriptorPoolCreateInfo* instance) { instance->~VkDescriptorPoolCreateInfo(); } }
extern "C" { void AcidSharp_symbols430(void* instance) { new (instance) VkDescriptorSetAllocateInfo(); } }
extern "C" { void AcidSharp_symbols431(void* instance, const VkDescriptorSetAllocateInfo& _0) { new (instance) VkDescriptorSetAllocateInfo(_0); } }
VkDescriptorSetAllocateInfo& (VkDescriptorSetAllocateInfo::*AcidSharp_symbols432)(const VkDescriptorSetAllocateInfo&) = &VkDescriptorSetAllocateInfo::operator=;
VkDescriptorSetAllocateInfo& (VkDescriptorSetAllocateInfo::*AcidSharp_symbols433)(VkDescriptorSetAllocateInfo&&) = &VkDescriptorSetAllocateInfo::operator=;
extern "C" { void AcidSharp_symbols434(VkDescriptorSetAllocateInfo* instance) { instance->~VkDescriptorSetAllocateInfo(); } }
extern "C" { void AcidSharp_symbols435(void* instance) { new (instance) VkDescriptorImageInfo(); } }
extern "C" { void AcidSharp_symbols436(void* instance, const VkDescriptorImageInfo& _0) { new (instance) VkDescriptorImageInfo(_0); } }
VkDescriptorImageInfo& (VkDescriptorImageInfo::*AcidSharp_symbols437)(const VkDescriptorImageInfo&) = &VkDescriptorImageInfo::operator=;
VkDescriptorImageInfo& (VkDescriptorImageInfo::*AcidSharp_symbols438)(VkDescriptorImageInfo&&) = &VkDescriptorImageInfo::operator=;
extern "C" { void AcidSharp_symbols439(VkDescriptorImageInfo* instance) { instance->~VkDescriptorImageInfo(); } }
extern "C" { void AcidSharp_symbols440(void* instance) { new (instance) VkDescriptorBufferInfo(); } }
extern "C" { void AcidSharp_symbols441(void* instance, const VkDescriptorBufferInfo& _0) { new (instance) VkDescriptorBufferInfo(_0); } }
VkDescriptorBufferInfo& (VkDescriptorBufferInfo::*AcidSharp_symbols442)(const VkDescriptorBufferInfo&) = &VkDescriptorBufferInfo::operator=;
VkDescriptorBufferInfo& (VkDescriptorBufferInfo::*AcidSharp_symbols443)(VkDescriptorBufferInfo&&) = &VkDescriptorBufferInfo::operator=;
extern "C" { void AcidSharp_symbols444(VkDescriptorBufferInfo* instance) { instance->~VkDescriptorBufferInfo(); } }
extern "C" { void AcidSharp_symbols445(void* instance) { new (instance) VkWriteDescriptorSet(); } }
extern "C" { void AcidSharp_symbols446(void* instance, const VkWriteDescriptorSet& _0) { new (instance) VkWriteDescriptorSet(_0); } }
VkWriteDescriptorSet& (VkWriteDescriptorSet::*AcidSharp_symbols447)(const VkWriteDescriptorSet&) = &VkWriteDescriptorSet::operator=;
VkWriteDescriptorSet& (VkWriteDescriptorSet::*AcidSharp_symbols448)(VkWriteDescriptorSet&&) = &VkWriteDescriptorSet::operator=;
extern "C" { void AcidSharp_symbols449(VkWriteDescriptorSet* instance) { instance->~VkWriteDescriptorSet(); } }
extern "C" { void AcidSharp_symbols450(void* instance) { new (instance) VkCopyDescriptorSet(); } }
extern "C" { void AcidSharp_symbols451(void* instance, const VkCopyDescriptorSet& _0) { new (instance) VkCopyDescriptorSet(_0); } }
VkCopyDescriptorSet& (VkCopyDescriptorSet::*AcidSharp_symbols452)(const VkCopyDescriptorSet&) = &VkCopyDescriptorSet::operator=;
VkCopyDescriptorSet& (VkCopyDescriptorSet::*AcidSharp_symbols453)(VkCopyDescriptorSet&&) = &VkCopyDescriptorSet::operator=;
extern "C" { void AcidSharp_symbols454(VkCopyDescriptorSet* instance) { instance->~VkCopyDescriptorSet(); } }
extern "C" { void AcidSharp_symbols455(void* instance) { new (instance) VkFramebufferCreateInfo(); } }
extern "C" { void AcidSharp_symbols456(void* instance, const VkFramebufferCreateInfo& _0) { new (instance) VkFramebufferCreateInfo(_0); } }
VkFramebufferCreateInfo& (VkFramebufferCreateInfo::*AcidSharp_symbols457)(const VkFramebufferCreateInfo&) = &VkFramebufferCreateInfo::operator=;
VkFramebufferCreateInfo& (VkFramebufferCreateInfo::*AcidSharp_symbols458)(VkFramebufferCreateInfo&&) = &VkFramebufferCreateInfo::operator=;
extern "C" { void AcidSharp_symbols459(VkFramebufferCreateInfo* instance) { instance->~VkFramebufferCreateInfo(); } }
extern "C" { void AcidSharp_symbols460(void* instance) { new (instance) VkAttachmentDescription(); } }
extern "C" { void AcidSharp_symbols461(void* instance, const VkAttachmentDescription& _0) { new (instance) VkAttachmentDescription(_0); } }
VkAttachmentDescription& (VkAttachmentDescription::*AcidSharp_symbols462)(const VkAttachmentDescription&) = &VkAttachmentDescription::operator=;
VkAttachmentDescription& (VkAttachmentDescription::*AcidSharp_symbols463)(VkAttachmentDescription&&) = &VkAttachmentDescription::operator=;
extern "C" { void AcidSharp_symbols464(VkAttachmentDescription* instance) { instance->~VkAttachmentDescription(); } }
extern "C" { void AcidSharp_symbols465(void* instance) { new (instance) VkAttachmentReference(); } }
extern "C" { void AcidSharp_symbols466(void* instance, const VkAttachmentReference& _0) { new (instance) VkAttachmentReference(_0); } }
VkAttachmentReference& (VkAttachmentReference::*AcidSharp_symbols467)(const VkAttachmentReference&) = &VkAttachmentReference::operator=;
VkAttachmentReference& (VkAttachmentReference::*AcidSharp_symbols468)(VkAttachmentReference&&) = &VkAttachmentReference::operator=;
extern "C" { void AcidSharp_symbols469(VkAttachmentReference* instance) { instance->~VkAttachmentReference(); } }
extern "C" { void AcidSharp_symbols470(void* instance) { new (instance) VkSubpassDescription(); } }
extern "C" { void AcidSharp_symbols471(void* instance, const VkSubpassDescription& _0) { new (instance) VkSubpassDescription(_0); } }
VkSubpassDescription& (VkSubpassDescription::*AcidSharp_symbols472)(const VkSubpassDescription&) = &VkSubpassDescription::operator=;
VkSubpassDescription& (VkSubpassDescription::*AcidSharp_symbols473)(VkSubpassDescription&&) = &VkSubpassDescription::operator=;
extern "C" { void AcidSharp_symbols474(VkSubpassDescription* instance) { instance->~VkSubpassDescription(); } }
extern "C" { void AcidSharp_symbols475(void* instance) { new (instance) VkSubpassDependency(); } }
extern "C" { void AcidSharp_symbols476(void* instance, const VkSubpassDependency& _0) { new (instance) VkSubpassDependency(_0); } }
VkSubpassDependency& (VkSubpassDependency::*AcidSharp_symbols477)(const VkSubpassDependency&) = &VkSubpassDependency::operator=;
VkSubpassDependency& (VkSubpassDependency::*AcidSharp_symbols478)(VkSubpassDependency&&) = &VkSubpassDependency::operator=;
extern "C" { void AcidSharp_symbols479(VkSubpassDependency* instance) { instance->~VkSubpassDependency(); } }
extern "C" { void AcidSharp_symbols480(void* instance) { new (instance) VkRenderPassCreateInfo(); } }
extern "C" { void AcidSharp_symbols481(void* instance, const VkRenderPassCreateInfo& _0) { new (instance) VkRenderPassCreateInfo(_0); } }
VkRenderPassCreateInfo& (VkRenderPassCreateInfo::*AcidSharp_symbols482)(const VkRenderPassCreateInfo&) = &VkRenderPassCreateInfo::operator=;
VkRenderPassCreateInfo& (VkRenderPassCreateInfo::*AcidSharp_symbols483)(VkRenderPassCreateInfo&&) = &VkRenderPassCreateInfo::operator=;
extern "C" { void AcidSharp_symbols484(VkRenderPassCreateInfo* instance) { instance->~VkRenderPassCreateInfo(); } }
extern "C" { void AcidSharp_symbols485(void* instance) { new (instance) VkCommandPoolCreateInfo(); } }
extern "C" { void AcidSharp_symbols486(void* instance, const VkCommandPoolCreateInfo& _0) { new (instance) VkCommandPoolCreateInfo(_0); } }
VkCommandPoolCreateInfo& (VkCommandPoolCreateInfo::*AcidSharp_symbols487)(const VkCommandPoolCreateInfo&) = &VkCommandPoolCreateInfo::operator=;
VkCommandPoolCreateInfo& (VkCommandPoolCreateInfo::*AcidSharp_symbols488)(VkCommandPoolCreateInfo&&) = &VkCommandPoolCreateInfo::operator=;
extern "C" { void AcidSharp_symbols489(VkCommandPoolCreateInfo* instance) { instance->~VkCommandPoolCreateInfo(); } }
extern "C" { void AcidSharp_symbols490(void* instance) { new (instance) VkCommandBufferAllocateInfo(); } }
extern "C" { void AcidSharp_symbols491(void* instance, const VkCommandBufferAllocateInfo& _0) { new (instance) VkCommandBufferAllocateInfo(_0); } }
VkCommandBufferAllocateInfo& (VkCommandBufferAllocateInfo::*AcidSharp_symbols492)(const VkCommandBufferAllocateInfo&) = &VkCommandBufferAllocateInfo::operator=;
VkCommandBufferAllocateInfo& (VkCommandBufferAllocateInfo::*AcidSharp_symbols493)(VkCommandBufferAllocateInfo&&) = &VkCommandBufferAllocateInfo::operator=;
extern "C" { void AcidSharp_symbols494(VkCommandBufferAllocateInfo* instance) { instance->~VkCommandBufferAllocateInfo(); } }
extern "C" { void AcidSharp_symbols495(void* instance) { new (instance) VkCommandBufferInheritanceInfo(); } }
extern "C" { void AcidSharp_symbols496(void* instance, const VkCommandBufferInheritanceInfo& _0) { new (instance) VkCommandBufferInheritanceInfo(_0); } }
VkCommandBufferInheritanceInfo& (VkCommandBufferInheritanceInfo::*AcidSharp_symbols497)(const VkCommandBufferInheritanceInfo&) = &VkCommandBufferInheritanceInfo::operator=;
VkCommandBufferInheritanceInfo& (VkCommandBufferInheritanceInfo::*AcidSharp_symbols498)(VkCommandBufferInheritanceInfo&&) = &VkCommandBufferInheritanceInfo::operator=;
extern "C" { void AcidSharp_symbols499(VkCommandBufferInheritanceInfo* instance) { instance->~VkCommandBufferInheritanceInfo(); } }
extern "C" { void AcidSharp_symbols500(void* instance) { new (instance) VkCommandBufferBeginInfo(); } }
extern "C" { void AcidSharp_symbols501(void* instance, const VkCommandBufferBeginInfo& _0) { new (instance) VkCommandBufferBeginInfo(_0); } }
VkCommandBufferBeginInfo& (VkCommandBufferBeginInfo::*AcidSharp_symbols502)(const VkCommandBufferBeginInfo&) = &VkCommandBufferBeginInfo::operator=;
VkCommandBufferBeginInfo& (VkCommandBufferBeginInfo::*AcidSharp_symbols503)(VkCommandBufferBeginInfo&&) = &VkCommandBufferBeginInfo::operator=;
extern "C" { void AcidSharp_symbols504(VkCommandBufferBeginInfo* instance) { instance->~VkCommandBufferBeginInfo(); } }
extern "C" { void AcidSharp_symbols505(void* instance) { new (instance) VkBufferCopy(); } }
extern "C" { void AcidSharp_symbols506(void* instance, const VkBufferCopy& _0) { new (instance) VkBufferCopy(_0); } }
VkBufferCopy& (VkBufferCopy::*AcidSharp_symbols507)(const VkBufferCopy&) = &VkBufferCopy::operator=;
VkBufferCopy& (VkBufferCopy::*AcidSharp_symbols508)(VkBufferCopy&&) = &VkBufferCopy::operator=;
extern "C" { void AcidSharp_symbols509(VkBufferCopy* instance) { instance->~VkBufferCopy(); } }
extern "C" { void AcidSharp_symbols510(void* instance) { new (instance) VkImageSubresourceLayers(); } }
extern "C" { void AcidSharp_symbols511(void* instance, const VkImageSubresourceLayers& _0) { new (instance) VkImageSubresourceLayers(_0); } }
VkImageSubresourceLayers& (VkImageSubresourceLayers::*AcidSharp_symbols512)(const VkImageSubresourceLayers&) = &VkImageSubresourceLayers::operator=;
VkImageSubresourceLayers& (VkImageSubresourceLayers::*AcidSharp_symbols513)(VkImageSubresourceLayers&&) = &VkImageSubresourceLayers::operator=;
extern "C" { void AcidSharp_symbols514(VkImageSubresourceLayers* instance) { instance->~VkImageSubresourceLayers(); } }
extern "C" { void AcidSharp_symbols515(void* instance) { new (instance) VkImageCopy(); } }
extern "C" { void AcidSharp_symbols516(void* instance, const VkImageCopy& _0) { new (instance) VkImageCopy(_0); } }
VkImageCopy& (VkImageCopy::*AcidSharp_symbols517)(const VkImageCopy&) = &VkImageCopy::operator=;
VkImageCopy& (VkImageCopy::*AcidSharp_symbols518)(VkImageCopy&&) = &VkImageCopy::operator=;
extern "C" { void AcidSharp_symbols519(VkImageCopy* instance) { instance->~VkImageCopy(); } }
extern "C" { void AcidSharp_symbols520(void* instance) { new (instance) VkImageBlit(); } }
extern "C" { void AcidSharp_symbols521(void* instance, const VkImageBlit& _0) { new (instance) VkImageBlit(_0); } }
VkImageBlit& (VkImageBlit::*AcidSharp_symbols522)(const VkImageBlit&) = &VkImageBlit::operator=;
VkImageBlit& (VkImageBlit::*AcidSharp_symbols523)(VkImageBlit&&) = &VkImageBlit::operator=;
extern "C" { void AcidSharp_symbols524(VkImageBlit* instance) { instance->~VkImageBlit(); } }
extern "C" { void AcidSharp_symbols525(void* instance) { new (instance) VkBufferImageCopy(); } }
extern "C" { void AcidSharp_symbols526(void* instance, const VkBufferImageCopy& _0) { new (instance) VkBufferImageCopy(_0); } }
VkBufferImageCopy& (VkBufferImageCopy::*AcidSharp_symbols527)(const VkBufferImageCopy&) = &VkBufferImageCopy::operator=;
VkBufferImageCopy& (VkBufferImageCopy::*AcidSharp_symbols528)(VkBufferImageCopy&&) = &VkBufferImageCopy::operator=;
extern "C" { void AcidSharp_symbols529(VkBufferImageCopy* instance) { instance->~VkBufferImageCopy(); } }
extern "C" { void AcidSharp_symbols530(void* instance) { new (instance) VkClearColorValue(); } }
extern "C" { void AcidSharp_symbols531(void* instance, const VkClearColorValue& _0) { new (instance) VkClearColorValue(_0); } }
VkClearColorValue& (VkClearColorValue::*AcidSharp_symbols532)(const VkClearColorValue&) = &VkClearColorValue::operator=;
VkClearColorValue& (VkClearColorValue::*AcidSharp_symbols533)(VkClearColorValue&&) = &VkClearColorValue::operator=;
extern "C" { void AcidSharp_symbols534(VkClearColorValue* instance) { instance->~VkClearColorValue(); } }
extern "C" { void AcidSharp_symbols535(void* instance) { new (instance) VkClearDepthStencilValue(); } }
extern "C" { void AcidSharp_symbols536(void* instance, const VkClearDepthStencilValue& _0) { new (instance) VkClearDepthStencilValue(_0); } }
VkClearDepthStencilValue& (VkClearDepthStencilValue::*AcidSharp_symbols537)(const VkClearDepthStencilValue&) = &VkClearDepthStencilValue::operator=;
VkClearDepthStencilValue& (VkClearDepthStencilValue::*AcidSharp_symbols538)(VkClearDepthStencilValue&&) = &VkClearDepthStencilValue::operator=;
extern "C" { void AcidSharp_symbols539(VkClearDepthStencilValue* instance) { instance->~VkClearDepthStencilValue(); } }
extern "C" { void AcidSharp_symbols540(void* instance) { new (instance) VkClearValue(); } }
extern "C" { void AcidSharp_symbols541(void* instance, const VkClearValue& _0) { new (instance) VkClearValue(_0); } }
VkClearValue& (VkClearValue::*AcidSharp_symbols542)(const VkClearValue&) = &VkClearValue::operator=;
VkClearValue& (VkClearValue::*AcidSharp_symbols543)(VkClearValue&&) = &VkClearValue::operator=;
extern "C" { void AcidSharp_symbols544(VkClearValue* instance) { instance->~VkClearValue(); } }
extern "C" { void AcidSharp_symbols545(void* instance) { new (instance) VkClearAttachment(); } }
extern "C" { void AcidSharp_symbols546(void* instance, const VkClearAttachment& _0) { new (instance) VkClearAttachment(_0); } }
VkClearAttachment& (VkClearAttachment::*AcidSharp_symbols547)(const VkClearAttachment&) = &VkClearAttachment::operator=;
VkClearAttachment& (VkClearAttachment::*AcidSharp_symbols548)(VkClearAttachment&&) = &VkClearAttachment::operator=;
extern "C" { void AcidSharp_symbols549(VkClearAttachment* instance) { instance->~VkClearAttachment(); } }
extern "C" { void AcidSharp_symbols550(void* instance) { new (instance) VkClearRect(); } }
extern "C" { void AcidSharp_symbols551(void* instance, const VkClearRect& _0) { new (instance) VkClearRect(_0); } }
VkClearRect& (VkClearRect::*AcidSharp_symbols552)(const VkClearRect&) = &VkClearRect::operator=;
VkClearRect& (VkClearRect::*AcidSharp_symbols553)(VkClearRect&&) = &VkClearRect::operator=;
extern "C" { void AcidSharp_symbols554(VkClearRect* instance) { instance->~VkClearRect(); } }
extern "C" { void AcidSharp_symbols555(void* instance) { new (instance) VkImageResolve(); } }
extern "C" { void AcidSharp_symbols556(void* instance, const VkImageResolve& _0) { new (instance) VkImageResolve(_0); } }
VkImageResolve& (VkImageResolve::*AcidSharp_symbols557)(const VkImageResolve&) = &VkImageResolve::operator=;
VkImageResolve& (VkImageResolve::*AcidSharp_symbols558)(VkImageResolve&&) = &VkImageResolve::operator=;
extern "C" { void AcidSharp_symbols559(VkImageResolve* instance) { instance->~VkImageResolve(); } }
extern "C" { void AcidSharp_symbols560(void* instance) { new (instance) VkMemoryBarrier(); } }
extern "C" { void AcidSharp_symbols561(void* instance, const VkMemoryBarrier& _0) { new (instance) VkMemoryBarrier(_0); } }
VkMemoryBarrier& (VkMemoryBarrier::*AcidSharp_symbols562)(const VkMemoryBarrier&) = &VkMemoryBarrier::operator=;
VkMemoryBarrier& (VkMemoryBarrier::*AcidSharp_symbols563)(VkMemoryBarrier&&) = &VkMemoryBarrier::operator=;
extern "C" { void AcidSharp_symbols564(VkMemoryBarrier* instance) { instance->~VkMemoryBarrier(); } }
extern "C" { void AcidSharp_symbols565(void* instance) { new (instance) VkBufferMemoryBarrier(); } }
extern "C" { void AcidSharp_symbols566(void* instance, const VkBufferMemoryBarrier& _0) { new (instance) VkBufferMemoryBarrier(_0); } }
VkBufferMemoryBarrier& (VkBufferMemoryBarrier::*AcidSharp_symbols567)(const VkBufferMemoryBarrier&) = &VkBufferMemoryBarrier::operator=;
VkBufferMemoryBarrier& (VkBufferMemoryBarrier::*AcidSharp_symbols568)(VkBufferMemoryBarrier&&) = &VkBufferMemoryBarrier::operator=;
extern "C" { void AcidSharp_symbols569(VkBufferMemoryBarrier* instance) { instance->~VkBufferMemoryBarrier(); } }
extern "C" { void AcidSharp_symbols570(void* instance) { new (instance) VkImageMemoryBarrier(); } }
extern "C" { void AcidSharp_symbols571(void* instance, const VkImageMemoryBarrier& _0) { new (instance) VkImageMemoryBarrier(_0); } }
VkImageMemoryBarrier& (VkImageMemoryBarrier::*AcidSharp_symbols572)(const VkImageMemoryBarrier&) = &VkImageMemoryBarrier::operator=;
VkImageMemoryBarrier& (VkImageMemoryBarrier::*AcidSharp_symbols573)(VkImageMemoryBarrier&&) = &VkImageMemoryBarrier::operator=;
extern "C" { void AcidSharp_symbols574(VkImageMemoryBarrier* instance) { instance->~VkImageMemoryBarrier(); } }
extern "C" { void AcidSharp_symbols575(void* instance) { new (instance) VkRenderPassBeginInfo(); } }
extern "C" { void AcidSharp_symbols576(void* instance, const VkRenderPassBeginInfo& _0) { new (instance) VkRenderPassBeginInfo(_0); } }
VkRenderPassBeginInfo& (VkRenderPassBeginInfo::*AcidSharp_symbols577)(const VkRenderPassBeginInfo&) = &VkRenderPassBeginInfo::operator=;
VkRenderPassBeginInfo& (VkRenderPassBeginInfo::*AcidSharp_symbols578)(VkRenderPassBeginInfo&&) = &VkRenderPassBeginInfo::operator=;
extern "C" { void AcidSharp_symbols579(VkRenderPassBeginInfo* instance) { instance->~VkRenderPassBeginInfo(); } }
extern "C" { void AcidSharp_symbols580(void* instance) { new (instance) VkDispatchIndirectCommand(); } }
extern "C" { void AcidSharp_symbols581(void* instance, const VkDispatchIndirectCommand& _0) { new (instance) VkDispatchIndirectCommand(_0); } }
VkDispatchIndirectCommand& (VkDispatchIndirectCommand::*AcidSharp_symbols582)(const VkDispatchIndirectCommand&) = &VkDispatchIndirectCommand::operator=;
VkDispatchIndirectCommand& (VkDispatchIndirectCommand::*AcidSharp_symbols583)(VkDispatchIndirectCommand&&) = &VkDispatchIndirectCommand::operator=;
extern "C" { void AcidSharp_symbols584(VkDispatchIndirectCommand* instance) { instance->~VkDispatchIndirectCommand(); } }
extern "C" { void AcidSharp_symbols585(void* instance) { new (instance) VkDrawIndexedIndirectCommand(); } }
extern "C" { void AcidSharp_symbols586(void* instance, const VkDrawIndexedIndirectCommand& _0) { new (instance) VkDrawIndexedIndirectCommand(_0); } }
VkDrawIndexedIndirectCommand& (VkDrawIndexedIndirectCommand::*AcidSharp_symbols587)(const VkDrawIndexedIndirectCommand&) = &VkDrawIndexedIndirectCommand::operator=;
VkDrawIndexedIndirectCommand& (VkDrawIndexedIndirectCommand::*AcidSharp_symbols588)(VkDrawIndexedIndirectCommand&&) = &VkDrawIndexedIndirectCommand::operator=;
extern "C" { void AcidSharp_symbols589(VkDrawIndexedIndirectCommand* instance) { instance->~VkDrawIndexedIndirectCommand(); } }
extern "C" { void AcidSharp_symbols590(void* instance) { new (instance) VkDrawIndirectCommand(); } }
extern "C" { void AcidSharp_symbols591(void* instance, const VkDrawIndirectCommand& _0) { new (instance) VkDrawIndirectCommand(_0); } }
VkDrawIndirectCommand& (VkDrawIndirectCommand::*AcidSharp_symbols592)(const VkDrawIndirectCommand&) = &VkDrawIndirectCommand::operator=;
VkDrawIndirectCommand& (VkDrawIndirectCommand::*AcidSharp_symbols593)(VkDrawIndirectCommand&&) = &VkDrawIndirectCommand::operator=;
extern "C" { void AcidSharp_symbols594(VkDrawIndirectCommand* instance) { instance->~VkDrawIndirectCommand(); } }
extern "C" { void AcidSharp_symbols595(void* instance) { new (instance) VkBaseOutStructure(); } }
extern "C" { void AcidSharp_symbols596(void* instance, const VkBaseOutStructure& _0) { new (instance) VkBaseOutStructure(_0); } }
VkBaseOutStructure& (VkBaseOutStructure::*AcidSharp_symbols597)(const VkBaseOutStructure&) = &VkBaseOutStructure::operator=;
VkBaseOutStructure& (VkBaseOutStructure::*AcidSharp_symbols598)(VkBaseOutStructure&&) = &VkBaseOutStructure::operator=;
extern "C" { void AcidSharp_symbols599(VkBaseOutStructure* instance) { instance->~VkBaseOutStructure(); } }
extern "C" { void AcidSharp_symbols600(void* instance) { new (instance) VkBaseInStructure(); } }
extern "C" { void AcidSharp_symbols601(void* instance, const VkBaseInStructure& _0) { new (instance) VkBaseInStructure(_0); } }
VkBaseInStructure& (VkBaseInStructure::*AcidSharp_symbols602)(const VkBaseInStructure&) = &VkBaseInStructure::operator=;
VkBaseInStructure& (VkBaseInStructure::*AcidSharp_symbols603)(VkBaseInStructure&&) = &VkBaseInStructure::operator=;
extern "C" { void AcidSharp_symbols604(VkBaseInStructure* instance) { instance->~VkBaseInStructure(); } }
extern "C" { void AcidSharp_symbols605(void* instance) { new (instance) VkPhysicalDeviceSubgroupProperties(); } }
extern "C" { void AcidSharp_symbols606(void* instance, const VkPhysicalDeviceSubgroupProperties& _0) { new (instance) VkPhysicalDeviceSubgroupProperties(_0); } }
VkPhysicalDeviceSubgroupProperties& (VkPhysicalDeviceSubgroupProperties::*AcidSharp_symbols607)(const VkPhysicalDeviceSubgroupProperties&) = &VkPhysicalDeviceSubgroupProperties::operator=;
VkPhysicalDeviceSubgroupProperties& (VkPhysicalDeviceSubgroupProperties::*AcidSharp_symbols608)(VkPhysicalDeviceSubgroupProperties&&) = &VkPhysicalDeviceSubgroupProperties::operator=;
extern "C" { void AcidSharp_symbols609(VkPhysicalDeviceSubgroupProperties* instance) { instance->~VkPhysicalDeviceSubgroupProperties(); } }
extern "C" { void AcidSharp_symbols610(void* instance) { new (instance) VkBindBufferMemoryInfo(); } }
extern "C" { void AcidSharp_symbols611(void* instance, const VkBindBufferMemoryInfo& _0) { new (instance) VkBindBufferMemoryInfo(_0); } }
VkBindBufferMemoryInfo& (VkBindBufferMemoryInfo::*AcidSharp_symbols612)(const VkBindBufferMemoryInfo&) = &VkBindBufferMemoryInfo::operator=;
VkBindBufferMemoryInfo& (VkBindBufferMemoryInfo::*AcidSharp_symbols613)(VkBindBufferMemoryInfo&&) = &VkBindBufferMemoryInfo::operator=;
extern "C" { void AcidSharp_symbols614(VkBindBufferMemoryInfo* instance) { instance->~VkBindBufferMemoryInfo(); } }
extern "C" { void AcidSharp_symbols615(void* instance) { new (instance) VkBindImageMemoryInfo(); } }
extern "C" { void AcidSharp_symbols616(void* instance, const VkBindImageMemoryInfo& _0) { new (instance) VkBindImageMemoryInfo(_0); } }
VkBindImageMemoryInfo& (VkBindImageMemoryInfo::*AcidSharp_symbols617)(const VkBindImageMemoryInfo&) = &VkBindImageMemoryInfo::operator=;
VkBindImageMemoryInfo& (VkBindImageMemoryInfo::*AcidSharp_symbols618)(VkBindImageMemoryInfo&&) = &VkBindImageMemoryInfo::operator=;
extern "C" { void AcidSharp_symbols619(VkBindImageMemoryInfo* instance) { instance->~VkBindImageMemoryInfo(); } }
extern "C" { void AcidSharp_symbols620(void* instance) { new (instance) VkPhysicalDevice16BitStorageFeatures(); } }
extern "C" { void AcidSharp_symbols621(void* instance, const VkPhysicalDevice16BitStorageFeatures& _0) { new (instance) VkPhysicalDevice16BitStorageFeatures(_0); } }
VkPhysicalDevice16BitStorageFeatures& (VkPhysicalDevice16BitStorageFeatures::*AcidSharp_symbols622)(const VkPhysicalDevice16BitStorageFeatures&) = &VkPhysicalDevice16BitStorageFeatures::operator=;
VkPhysicalDevice16BitStorageFeatures& (VkPhysicalDevice16BitStorageFeatures::*AcidSharp_symbols623)(VkPhysicalDevice16BitStorageFeatures&&) = &VkPhysicalDevice16BitStorageFeatures::operator=;
extern "C" { void AcidSharp_symbols624(VkPhysicalDevice16BitStorageFeatures* instance) { instance->~VkPhysicalDevice16BitStorageFeatures(); } }
extern "C" { void AcidSharp_symbols625(void* instance) { new (instance) VkMemoryDedicatedRequirements(); } }
extern "C" { void AcidSharp_symbols626(void* instance, const VkMemoryDedicatedRequirements& _0) { new (instance) VkMemoryDedicatedRequirements(_0); } }
VkMemoryDedicatedRequirements& (VkMemoryDedicatedRequirements::*AcidSharp_symbols627)(const VkMemoryDedicatedRequirements&) = &VkMemoryDedicatedRequirements::operator=;
VkMemoryDedicatedRequirements& (VkMemoryDedicatedRequirements::*AcidSharp_symbols628)(VkMemoryDedicatedRequirements&&) = &VkMemoryDedicatedRequirements::operator=;
extern "C" { void AcidSharp_symbols629(VkMemoryDedicatedRequirements* instance) { instance->~VkMemoryDedicatedRequirements(); } }
extern "C" { void AcidSharp_symbols630(void* instance) { new (instance) VkMemoryDedicatedAllocateInfo(); } }
extern "C" { void AcidSharp_symbols631(void* instance, const VkMemoryDedicatedAllocateInfo& _0) { new (instance) VkMemoryDedicatedAllocateInfo(_0); } }
VkMemoryDedicatedAllocateInfo& (VkMemoryDedicatedAllocateInfo::*AcidSharp_symbols632)(const VkMemoryDedicatedAllocateInfo&) = &VkMemoryDedicatedAllocateInfo::operator=;
VkMemoryDedicatedAllocateInfo& (VkMemoryDedicatedAllocateInfo::*AcidSharp_symbols633)(VkMemoryDedicatedAllocateInfo&&) = &VkMemoryDedicatedAllocateInfo::operator=;
extern "C" { void AcidSharp_symbols634(VkMemoryDedicatedAllocateInfo* instance) { instance->~VkMemoryDedicatedAllocateInfo(); } }
extern "C" { void AcidSharp_symbols635(void* instance) { new (instance) VkMemoryAllocateFlagsInfo(); } }
extern "C" { void AcidSharp_symbols636(void* instance, const VkMemoryAllocateFlagsInfo& _0) { new (instance) VkMemoryAllocateFlagsInfo(_0); } }
VkMemoryAllocateFlagsInfo& (VkMemoryAllocateFlagsInfo::*AcidSharp_symbols637)(const VkMemoryAllocateFlagsInfo&) = &VkMemoryAllocateFlagsInfo::operator=;
VkMemoryAllocateFlagsInfo& (VkMemoryAllocateFlagsInfo::*AcidSharp_symbols638)(VkMemoryAllocateFlagsInfo&&) = &VkMemoryAllocateFlagsInfo::operator=;
extern "C" { void AcidSharp_symbols639(VkMemoryAllocateFlagsInfo* instance) { instance->~VkMemoryAllocateFlagsInfo(); } }
extern "C" { void AcidSharp_symbols640(void* instance) { new (instance) VkDeviceGroupRenderPassBeginInfo(); } }
extern "C" { void AcidSharp_symbols641(void* instance, const VkDeviceGroupRenderPassBeginInfo& _0) { new (instance) VkDeviceGroupRenderPassBeginInfo(_0); } }
VkDeviceGroupRenderPassBeginInfo& (VkDeviceGroupRenderPassBeginInfo::*AcidSharp_symbols642)(const VkDeviceGroupRenderPassBeginInfo&) = &VkDeviceGroupRenderPassBeginInfo::operator=;
VkDeviceGroupRenderPassBeginInfo& (VkDeviceGroupRenderPassBeginInfo::*AcidSharp_symbols643)(VkDeviceGroupRenderPassBeginInfo&&) = &VkDeviceGroupRenderPassBeginInfo::operator=;
extern "C" { void AcidSharp_symbols644(VkDeviceGroupRenderPassBeginInfo* instance) { instance->~VkDeviceGroupRenderPassBeginInfo(); } }
extern "C" { void AcidSharp_symbols645(void* instance) { new (instance) VkDeviceGroupCommandBufferBeginInfo(); } }
extern "C" { void AcidSharp_symbols646(void* instance, const VkDeviceGroupCommandBufferBeginInfo& _0) { new (instance) VkDeviceGroupCommandBufferBeginInfo(_0); } }
VkDeviceGroupCommandBufferBeginInfo& (VkDeviceGroupCommandBufferBeginInfo::*AcidSharp_symbols647)(const VkDeviceGroupCommandBufferBeginInfo&) = &VkDeviceGroupCommandBufferBeginInfo::operator=;
VkDeviceGroupCommandBufferBeginInfo& (VkDeviceGroupCommandBufferBeginInfo::*AcidSharp_symbols648)(VkDeviceGroupCommandBufferBeginInfo&&) = &VkDeviceGroupCommandBufferBeginInfo::operator=;
extern "C" { void AcidSharp_symbols649(VkDeviceGroupCommandBufferBeginInfo* instance) { instance->~VkDeviceGroupCommandBufferBeginInfo(); } }
extern "C" { void AcidSharp_symbols650(void* instance) { new (instance) VkDeviceGroupSubmitInfo(); } }
extern "C" { void AcidSharp_symbols651(void* instance, const VkDeviceGroupSubmitInfo& _0) { new (instance) VkDeviceGroupSubmitInfo(_0); } }
VkDeviceGroupSubmitInfo& (VkDeviceGroupSubmitInfo::*AcidSharp_symbols652)(const VkDeviceGroupSubmitInfo&) = &VkDeviceGroupSubmitInfo::operator=;
VkDeviceGroupSubmitInfo& (VkDeviceGroupSubmitInfo::*AcidSharp_symbols653)(VkDeviceGroupSubmitInfo&&) = &VkDeviceGroupSubmitInfo::operator=;
extern "C" { void AcidSharp_symbols654(VkDeviceGroupSubmitInfo* instance) { instance->~VkDeviceGroupSubmitInfo(); } }
extern "C" { void AcidSharp_symbols655(void* instance) { new (instance) VkDeviceGroupBindSparseInfo(); } }
extern "C" { void AcidSharp_symbols656(void* instance, const VkDeviceGroupBindSparseInfo& _0) { new (instance) VkDeviceGroupBindSparseInfo(_0); } }
VkDeviceGroupBindSparseInfo& (VkDeviceGroupBindSparseInfo::*AcidSharp_symbols657)(const VkDeviceGroupBindSparseInfo&) = &VkDeviceGroupBindSparseInfo::operator=;
VkDeviceGroupBindSparseInfo& (VkDeviceGroupBindSparseInfo::*AcidSharp_symbols658)(VkDeviceGroupBindSparseInfo&&) = &VkDeviceGroupBindSparseInfo::operator=;
extern "C" { void AcidSharp_symbols659(VkDeviceGroupBindSparseInfo* instance) { instance->~VkDeviceGroupBindSparseInfo(); } }
extern "C" { void AcidSharp_symbols660(void* instance) { new (instance) VkBindBufferMemoryDeviceGroupInfo(); } }
extern "C" { void AcidSharp_symbols661(void* instance, const VkBindBufferMemoryDeviceGroupInfo& _0) { new (instance) VkBindBufferMemoryDeviceGroupInfo(_0); } }
VkBindBufferMemoryDeviceGroupInfo& (VkBindBufferMemoryDeviceGroupInfo::*AcidSharp_symbols662)(const VkBindBufferMemoryDeviceGroupInfo&) = &VkBindBufferMemoryDeviceGroupInfo::operator=;
VkBindBufferMemoryDeviceGroupInfo& (VkBindBufferMemoryDeviceGroupInfo::*AcidSharp_symbols663)(VkBindBufferMemoryDeviceGroupInfo&&) = &VkBindBufferMemoryDeviceGroupInfo::operator=;
extern "C" { void AcidSharp_symbols664(VkBindBufferMemoryDeviceGroupInfo* instance) { instance->~VkBindBufferMemoryDeviceGroupInfo(); } }
extern "C" { void AcidSharp_symbols665(void* instance) { new (instance) VkBindImageMemoryDeviceGroupInfo(); } }
extern "C" { void AcidSharp_symbols666(void* instance, const VkBindImageMemoryDeviceGroupInfo& _0) { new (instance) VkBindImageMemoryDeviceGroupInfo(_0); } }
VkBindImageMemoryDeviceGroupInfo& (VkBindImageMemoryDeviceGroupInfo::*AcidSharp_symbols667)(const VkBindImageMemoryDeviceGroupInfo&) = &VkBindImageMemoryDeviceGroupInfo::operator=;
VkBindImageMemoryDeviceGroupInfo& (VkBindImageMemoryDeviceGroupInfo::*AcidSharp_symbols668)(VkBindImageMemoryDeviceGroupInfo&&) = &VkBindImageMemoryDeviceGroupInfo::operator=;
extern "C" { void AcidSharp_symbols669(VkBindImageMemoryDeviceGroupInfo* instance) { instance->~VkBindImageMemoryDeviceGroupInfo(); } }
extern "C" { void AcidSharp_symbols670(void* instance) { new (instance) VkPhysicalDeviceGroupProperties(); } }
extern "C" { void AcidSharp_symbols671(void* instance, const VkPhysicalDeviceGroupProperties& _0) { new (instance) VkPhysicalDeviceGroupProperties(_0); } }
VkPhysicalDeviceGroupProperties& (VkPhysicalDeviceGroupProperties::*AcidSharp_symbols672)(const VkPhysicalDeviceGroupProperties&) = &VkPhysicalDeviceGroupProperties::operator=;
VkPhysicalDeviceGroupProperties& (VkPhysicalDeviceGroupProperties::*AcidSharp_symbols673)(VkPhysicalDeviceGroupProperties&&) = &VkPhysicalDeviceGroupProperties::operator=;
extern "C" { void AcidSharp_symbols674(VkPhysicalDeviceGroupProperties* instance) { instance->~VkPhysicalDeviceGroupProperties(); } }
extern "C" { void AcidSharp_symbols675(void* instance) { new (instance) VkDeviceGroupDeviceCreateInfo(); } }
extern "C" { void AcidSharp_symbols676(void* instance, const VkDeviceGroupDeviceCreateInfo& _0) { new (instance) VkDeviceGroupDeviceCreateInfo(_0); } }
VkDeviceGroupDeviceCreateInfo& (VkDeviceGroupDeviceCreateInfo::*AcidSharp_symbols677)(const VkDeviceGroupDeviceCreateInfo&) = &VkDeviceGroupDeviceCreateInfo::operator=;
VkDeviceGroupDeviceCreateInfo& (VkDeviceGroupDeviceCreateInfo::*AcidSharp_symbols678)(VkDeviceGroupDeviceCreateInfo&&) = &VkDeviceGroupDeviceCreateInfo::operator=;
extern "C" { void AcidSharp_symbols679(VkDeviceGroupDeviceCreateInfo* instance) { instance->~VkDeviceGroupDeviceCreateInfo(); } }
extern "C" { void AcidSharp_symbols680(void* instance) { new (instance) VkBufferMemoryRequirementsInfo2(); } }
extern "C" { void AcidSharp_symbols681(void* instance, const VkBufferMemoryRequirementsInfo2& _0) { new (instance) VkBufferMemoryRequirementsInfo2(_0); } }
VkBufferMemoryRequirementsInfo2& (VkBufferMemoryRequirementsInfo2::*AcidSharp_symbols682)(const VkBufferMemoryRequirementsInfo2&) = &VkBufferMemoryRequirementsInfo2::operator=;
VkBufferMemoryRequirementsInfo2& (VkBufferMemoryRequirementsInfo2::*AcidSharp_symbols683)(VkBufferMemoryRequirementsInfo2&&) = &VkBufferMemoryRequirementsInfo2::operator=;
extern "C" { void AcidSharp_symbols684(VkBufferMemoryRequirementsInfo2* instance) { instance->~VkBufferMemoryRequirementsInfo2(); } }
extern "C" { void AcidSharp_symbols685(void* instance) { new (instance) VkImageMemoryRequirementsInfo2(); } }
extern "C" { void AcidSharp_symbols686(void* instance, const VkImageMemoryRequirementsInfo2& _0) { new (instance) VkImageMemoryRequirementsInfo2(_0); } }
VkImageMemoryRequirementsInfo2& (VkImageMemoryRequirementsInfo2::*AcidSharp_symbols687)(const VkImageMemoryRequirementsInfo2&) = &VkImageMemoryRequirementsInfo2::operator=;
VkImageMemoryRequirementsInfo2& (VkImageMemoryRequirementsInfo2::*AcidSharp_symbols688)(VkImageMemoryRequirementsInfo2&&) = &VkImageMemoryRequirementsInfo2::operator=;
extern "C" { void AcidSharp_symbols689(VkImageMemoryRequirementsInfo2* instance) { instance->~VkImageMemoryRequirementsInfo2(); } }
extern "C" { void AcidSharp_symbols690(void* instance) { new (instance) VkImageSparseMemoryRequirementsInfo2(); } }
extern "C" { void AcidSharp_symbols691(void* instance, const VkImageSparseMemoryRequirementsInfo2& _0) { new (instance) VkImageSparseMemoryRequirementsInfo2(_0); } }
VkImageSparseMemoryRequirementsInfo2& (VkImageSparseMemoryRequirementsInfo2::*AcidSharp_symbols692)(const VkImageSparseMemoryRequirementsInfo2&) = &VkImageSparseMemoryRequirementsInfo2::operator=;
VkImageSparseMemoryRequirementsInfo2& (VkImageSparseMemoryRequirementsInfo2::*AcidSharp_symbols693)(VkImageSparseMemoryRequirementsInfo2&&) = &VkImageSparseMemoryRequirementsInfo2::operator=;
extern "C" { void AcidSharp_symbols694(VkImageSparseMemoryRequirementsInfo2* instance) { instance->~VkImageSparseMemoryRequirementsInfo2(); } }
extern "C" { void AcidSharp_symbols695(void* instance) { new (instance) VkMemoryRequirements2(); } }
extern "C" { void AcidSharp_symbols696(void* instance, const VkMemoryRequirements2& _0) { new (instance) VkMemoryRequirements2(_0); } }
VkMemoryRequirements2& (VkMemoryRequirements2::*AcidSharp_symbols697)(const VkMemoryRequirements2&) = &VkMemoryRequirements2::operator=;
VkMemoryRequirements2& (VkMemoryRequirements2::*AcidSharp_symbols698)(VkMemoryRequirements2&&) = &VkMemoryRequirements2::operator=;
extern "C" { void AcidSharp_symbols699(VkMemoryRequirements2* instance) { instance->~VkMemoryRequirements2(); } }
extern "C" { void AcidSharp_symbols700(void* instance) { new (instance) VkSparseImageMemoryRequirements2(); } }
extern "C" { void AcidSharp_symbols701(void* instance, const VkSparseImageMemoryRequirements2& _0) { new (instance) VkSparseImageMemoryRequirements2(_0); } }
VkSparseImageMemoryRequirements2& (VkSparseImageMemoryRequirements2::*AcidSharp_symbols702)(const VkSparseImageMemoryRequirements2&) = &VkSparseImageMemoryRequirements2::operator=;
VkSparseImageMemoryRequirements2& (VkSparseImageMemoryRequirements2::*AcidSharp_symbols703)(VkSparseImageMemoryRequirements2&&) = &VkSparseImageMemoryRequirements2::operator=;
extern "C" { void AcidSharp_symbols704(VkSparseImageMemoryRequirements2* instance) { instance->~VkSparseImageMemoryRequirements2(); } }
extern "C" { void AcidSharp_symbols705(void* instance) { new (instance) VkPhysicalDeviceFeatures2(); } }
extern "C" { void AcidSharp_symbols706(void* instance, const VkPhysicalDeviceFeatures2& _0) { new (instance) VkPhysicalDeviceFeatures2(_0); } }
VkPhysicalDeviceFeatures2& (VkPhysicalDeviceFeatures2::*AcidSharp_symbols707)(const VkPhysicalDeviceFeatures2&) = &VkPhysicalDeviceFeatures2::operator=;
VkPhysicalDeviceFeatures2& (VkPhysicalDeviceFeatures2::*AcidSharp_symbols708)(VkPhysicalDeviceFeatures2&&) = &VkPhysicalDeviceFeatures2::operator=;
extern "C" { void AcidSharp_symbols709(VkPhysicalDeviceFeatures2* instance) { instance->~VkPhysicalDeviceFeatures2(); } }
extern "C" { void AcidSharp_symbols710(void* instance) { new (instance) VkPhysicalDeviceProperties2(); } }
extern "C" { void AcidSharp_symbols711(void* instance, const VkPhysicalDeviceProperties2& _0) { new (instance) VkPhysicalDeviceProperties2(_0); } }
VkPhysicalDeviceProperties2& (VkPhysicalDeviceProperties2::*AcidSharp_symbols712)(const VkPhysicalDeviceProperties2&) = &VkPhysicalDeviceProperties2::operator=;
VkPhysicalDeviceProperties2& (VkPhysicalDeviceProperties2::*AcidSharp_symbols713)(VkPhysicalDeviceProperties2&&) = &VkPhysicalDeviceProperties2::operator=;
extern "C" { void AcidSharp_symbols714(VkPhysicalDeviceProperties2* instance) { instance->~VkPhysicalDeviceProperties2(); } }
extern "C" { void AcidSharp_symbols715(void* instance) { new (instance) VkFormatProperties2(); } }
extern "C" { void AcidSharp_symbols716(void* instance, const VkFormatProperties2& _0) { new (instance) VkFormatProperties2(_0); } }
VkFormatProperties2& (VkFormatProperties2::*AcidSharp_symbols717)(const VkFormatProperties2&) = &VkFormatProperties2::operator=;
VkFormatProperties2& (VkFormatProperties2::*AcidSharp_symbols718)(VkFormatProperties2&&) = &VkFormatProperties2::operator=;
extern "C" { void AcidSharp_symbols719(VkFormatProperties2* instance) { instance->~VkFormatProperties2(); } }
extern "C" { void AcidSharp_symbols720(void* instance) { new (instance) VkImageFormatProperties2(); } }
extern "C" { void AcidSharp_symbols721(void* instance, const VkImageFormatProperties2& _0) { new (instance) VkImageFormatProperties2(_0); } }
VkImageFormatProperties2& (VkImageFormatProperties2::*AcidSharp_symbols722)(const VkImageFormatProperties2&) = &VkImageFormatProperties2::operator=;
VkImageFormatProperties2& (VkImageFormatProperties2::*AcidSharp_symbols723)(VkImageFormatProperties2&&) = &VkImageFormatProperties2::operator=;
extern "C" { void AcidSharp_symbols724(VkImageFormatProperties2* instance) { instance->~VkImageFormatProperties2(); } }
extern "C" { void AcidSharp_symbols725(void* instance) { new (instance) VkPhysicalDeviceImageFormatInfo2(); } }
extern "C" { void AcidSharp_symbols726(void* instance, const VkPhysicalDeviceImageFormatInfo2& _0) { new (instance) VkPhysicalDeviceImageFormatInfo2(_0); } }
VkPhysicalDeviceImageFormatInfo2& (VkPhysicalDeviceImageFormatInfo2::*AcidSharp_symbols727)(const VkPhysicalDeviceImageFormatInfo2&) = &VkPhysicalDeviceImageFormatInfo2::operator=;
VkPhysicalDeviceImageFormatInfo2& (VkPhysicalDeviceImageFormatInfo2::*AcidSharp_symbols728)(VkPhysicalDeviceImageFormatInfo2&&) = &VkPhysicalDeviceImageFormatInfo2::operator=;
extern "C" { void AcidSharp_symbols729(VkPhysicalDeviceImageFormatInfo2* instance) { instance->~VkPhysicalDeviceImageFormatInfo2(); } }
extern "C" { void AcidSharp_symbols730(void* instance) { new (instance) VkQueueFamilyProperties2(); } }
extern "C" { void AcidSharp_symbols731(void* instance, const VkQueueFamilyProperties2& _0) { new (instance) VkQueueFamilyProperties2(_0); } }
VkQueueFamilyProperties2& (VkQueueFamilyProperties2::*AcidSharp_symbols732)(const VkQueueFamilyProperties2&) = &VkQueueFamilyProperties2::operator=;
VkQueueFamilyProperties2& (VkQueueFamilyProperties2::*AcidSharp_symbols733)(VkQueueFamilyProperties2&&) = &VkQueueFamilyProperties2::operator=;
extern "C" { void AcidSharp_symbols734(VkQueueFamilyProperties2* instance) { instance->~VkQueueFamilyProperties2(); } }
extern "C" { void AcidSharp_symbols735(void* instance) { new (instance) VkPhysicalDeviceMemoryProperties2(); } }
extern "C" { void AcidSharp_symbols736(void* instance, const VkPhysicalDeviceMemoryProperties2& _0) { new (instance) VkPhysicalDeviceMemoryProperties2(_0); } }
VkPhysicalDeviceMemoryProperties2& (VkPhysicalDeviceMemoryProperties2::*AcidSharp_symbols737)(const VkPhysicalDeviceMemoryProperties2&) = &VkPhysicalDeviceMemoryProperties2::operator=;
VkPhysicalDeviceMemoryProperties2& (VkPhysicalDeviceMemoryProperties2::*AcidSharp_symbols738)(VkPhysicalDeviceMemoryProperties2&&) = &VkPhysicalDeviceMemoryProperties2::operator=;
extern "C" { void AcidSharp_symbols739(VkPhysicalDeviceMemoryProperties2* instance) { instance->~VkPhysicalDeviceMemoryProperties2(); } }
extern "C" { void AcidSharp_symbols740(void* instance) { new (instance) VkSparseImageFormatProperties2(); } }
extern "C" { void AcidSharp_symbols741(void* instance, const VkSparseImageFormatProperties2& _0) { new (instance) VkSparseImageFormatProperties2(_0); } }
VkSparseImageFormatProperties2& (VkSparseImageFormatProperties2::*AcidSharp_symbols742)(const VkSparseImageFormatProperties2&) = &VkSparseImageFormatProperties2::operator=;
VkSparseImageFormatProperties2& (VkSparseImageFormatProperties2::*AcidSharp_symbols743)(VkSparseImageFormatProperties2&&) = &VkSparseImageFormatProperties2::operator=;
extern "C" { void AcidSharp_symbols744(VkSparseImageFormatProperties2* instance) { instance->~VkSparseImageFormatProperties2(); } }
extern "C" { void AcidSharp_symbols745(void* instance) { new (instance) VkPhysicalDeviceSparseImageFormatInfo2(); } }
extern "C" { void AcidSharp_symbols746(void* instance, const VkPhysicalDeviceSparseImageFormatInfo2& _0) { new (instance) VkPhysicalDeviceSparseImageFormatInfo2(_0); } }
VkPhysicalDeviceSparseImageFormatInfo2& (VkPhysicalDeviceSparseImageFormatInfo2::*AcidSharp_symbols747)(const VkPhysicalDeviceSparseImageFormatInfo2&) = &VkPhysicalDeviceSparseImageFormatInfo2::operator=;
VkPhysicalDeviceSparseImageFormatInfo2& (VkPhysicalDeviceSparseImageFormatInfo2::*AcidSharp_symbols748)(VkPhysicalDeviceSparseImageFormatInfo2&&) = &VkPhysicalDeviceSparseImageFormatInfo2::operator=;
extern "C" { void AcidSharp_symbols749(VkPhysicalDeviceSparseImageFormatInfo2* instance) { instance->~VkPhysicalDeviceSparseImageFormatInfo2(); } }
extern "C" { void AcidSharp_symbols750(void* instance) { new (instance) VkPhysicalDevicePointClippingProperties(); } }
extern "C" { void AcidSharp_symbols751(void* instance, const VkPhysicalDevicePointClippingProperties& _0) { new (instance) VkPhysicalDevicePointClippingProperties(_0); } }
VkPhysicalDevicePointClippingProperties& (VkPhysicalDevicePointClippingProperties::*AcidSharp_symbols752)(const VkPhysicalDevicePointClippingProperties&) = &VkPhysicalDevicePointClippingProperties::operator=;
VkPhysicalDevicePointClippingProperties& (VkPhysicalDevicePointClippingProperties::*AcidSharp_symbols753)(VkPhysicalDevicePointClippingProperties&&) = &VkPhysicalDevicePointClippingProperties::operator=;
extern "C" { void AcidSharp_symbols754(VkPhysicalDevicePointClippingProperties* instance) { instance->~VkPhysicalDevicePointClippingProperties(); } }
extern "C" { void AcidSharp_symbols755(void* instance) { new (instance) VkInputAttachmentAspectReference(); } }
extern "C" { void AcidSharp_symbols756(void* instance, const VkInputAttachmentAspectReference& _0) { new (instance) VkInputAttachmentAspectReference(_0); } }
VkInputAttachmentAspectReference& (VkInputAttachmentAspectReference::*AcidSharp_symbols757)(const VkInputAttachmentAspectReference&) = &VkInputAttachmentAspectReference::operator=;
VkInputAttachmentAspectReference& (VkInputAttachmentAspectReference::*AcidSharp_symbols758)(VkInputAttachmentAspectReference&&) = &VkInputAttachmentAspectReference::operator=;
extern "C" { void AcidSharp_symbols759(VkInputAttachmentAspectReference* instance) { instance->~VkInputAttachmentAspectReference(); } }
extern "C" { void AcidSharp_symbols760(void* instance) { new (instance) VkRenderPassInputAttachmentAspectCreateInfo(); } }
extern "C" { void AcidSharp_symbols761(void* instance, const VkRenderPassInputAttachmentAspectCreateInfo& _0) { new (instance) VkRenderPassInputAttachmentAspectCreateInfo(_0); } }
VkRenderPassInputAttachmentAspectCreateInfo& (VkRenderPassInputAttachmentAspectCreateInfo::*AcidSharp_symbols762)(const VkRenderPassInputAttachmentAspectCreateInfo&) = &VkRenderPassInputAttachmentAspectCreateInfo::operator=;
VkRenderPassInputAttachmentAspectCreateInfo& (VkRenderPassInputAttachmentAspectCreateInfo::*AcidSharp_symbols763)(VkRenderPassInputAttachmentAspectCreateInfo&&) = &VkRenderPassInputAttachmentAspectCreateInfo::operator=;
extern "C" { void AcidSharp_symbols764(VkRenderPassInputAttachmentAspectCreateInfo* instance) { instance->~VkRenderPassInputAttachmentAspectCreateInfo(); } }
extern "C" { void AcidSharp_symbols765(void* instance) { new (instance) VkImageViewUsageCreateInfo(); } }
extern "C" { void AcidSharp_symbols766(void* instance, const VkImageViewUsageCreateInfo& _0) { new (instance) VkImageViewUsageCreateInfo(_0); } }
VkImageViewUsageCreateInfo& (VkImageViewUsageCreateInfo::*AcidSharp_symbols767)(const VkImageViewUsageCreateInfo&) = &VkImageViewUsageCreateInfo::operator=;
VkImageViewUsageCreateInfo& (VkImageViewUsageCreateInfo::*AcidSharp_symbols768)(VkImageViewUsageCreateInfo&&) = &VkImageViewUsageCreateInfo::operator=;
extern "C" { void AcidSharp_symbols769(VkImageViewUsageCreateInfo* instance) { instance->~VkImageViewUsageCreateInfo(); } }
extern "C" { void AcidSharp_symbols770(void* instance) { new (instance) VkPipelineTessellationDomainOriginStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols771(void* instance, const VkPipelineTessellationDomainOriginStateCreateInfo& _0) { new (instance) VkPipelineTessellationDomainOriginStateCreateInfo(_0); } }
VkPipelineTessellationDomainOriginStateCreateInfo& (VkPipelineTessellationDomainOriginStateCreateInfo::*AcidSharp_symbols772)(const VkPipelineTessellationDomainOriginStateCreateInfo&) = &VkPipelineTessellationDomainOriginStateCreateInfo::operator=;
VkPipelineTessellationDomainOriginStateCreateInfo& (VkPipelineTessellationDomainOriginStateCreateInfo::*AcidSharp_symbols773)(VkPipelineTessellationDomainOriginStateCreateInfo&&) = &VkPipelineTessellationDomainOriginStateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols774(VkPipelineTessellationDomainOriginStateCreateInfo* instance) { instance->~VkPipelineTessellationDomainOriginStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols775(void* instance) { new (instance) VkRenderPassMultiviewCreateInfo(); } }
extern "C" { void AcidSharp_symbols776(void* instance, const VkRenderPassMultiviewCreateInfo& _0) { new (instance) VkRenderPassMultiviewCreateInfo(_0); } }
VkRenderPassMultiviewCreateInfo& (VkRenderPassMultiviewCreateInfo::*AcidSharp_symbols777)(const VkRenderPassMultiviewCreateInfo&) = &VkRenderPassMultiviewCreateInfo::operator=;
VkRenderPassMultiviewCreateInfo& (VkRenderPassMultiviewCreateInfo::*AcidSharp_symbols778)(VkRenderPassMultiviewCreateInfo&&) = &VkRenderPassMultiviewCreateInfo::operator=;
extern "C" { void AcidSharp_symbols779(VkRenderPassMultiviewCreateInfo* instance) { instance->~VkRenderPassMultiviewCreateInfo(); } }
extern "C" { void AcidSharp_symbols780(void* instance) { new (instance) VkPhysicalDeviceMultiviewFeatures(); } }
extern "C" { void AcidSharp_symbols781(void* instance, const VkPhysicalDeviceMultiviewFeatures& _0) { new (instance) VkPhysicalDeviceMultiviewFeatures(_0); } }
VkPhysicalDeviceMultiviewFeatures& (VkPhysicalDeviceMultiviewFeatures::*AcidSharp_symbols782)(const VkPhysicalDeviceMultiviewFeatures&) = &VkPhysicalDeviceMultiviewFeatures::operator=;
VkPhysicalDeviceMultiviewFeatures& (VkPhysicalDeviceMultiviewFeatures::*AcidSharp_symbols783)(VkPhysicalDeviceMultiviewFeatures&&) = &VkPhysicalDeviceMultiviewFeatures::operator=;
extern "C" { void AcidSharp_symbols784(VkPhysicalDeviceMultiviewFeatures* instance) { instance->~VkPhysicalDeviceMultiviewFeatures(); } }
extern "C" { void AcidSharp_symbols785(void* instance) { new (instance) VkPhysicalDeviceMultiviewProperties(); } }
extern "C" { void AcidSharp_symbols786(void* instance, const VkPhysicalDeviceMultiviewProperties& _0) { new (instance) VkPhysicalDeviceMultiviewProperties(_0); } }
VkPhysicalDeviceMultiviewProperties& (VkPhysicalDeviceMultiviewProperties::*AcidSharp_symbols787)(const VkPhysicalDeviceMultiviewProperties&) = &VkPhysicalDeviceMultiviewProperties::operator=;
VkPhysicalDeviceMultiviewProperties& (VkPhysicalDeviceMultiviewProperties::*AcidSharp_symbols788)(VkPhysicalDeviceMultiviewProperties&&) = &VkPhysicalDeviceMultiviewProperties::operator=;
extern "C" { void AcidSharp_symbols789(VkPhysicalDeviceMultiviewProperties* instance) { instance->~VkPhysicalDeviceMultiviewProperties(); } }
extern "C" { void AcidSharp_symbols790(void* instance) { new (instance) VkPhysicalDeviceVariablePointerFeatures(); } }
extern "C" { void AcidSharp_symbols791(void* instance, const VkPhysicalDeviceVariablePointerFeatures& _0) { new (instance) VkPhysicalDeviceVariablePointerFeatures(_0); } }
VkPhysicalDeviceVariablePointerFeatures& (VkPhysicalDeviceVariablePointerFeatures::*AcidSharp_symbols792)(const VkPhysicalDeviceVariablePointerFeatures&) = &VkPhysicalDeviceVariablePointerFeatures::operator=;
VkPhysicalDeviceVariablePointerFeatures& (VkPhysicalDeviceVariablePointerFeatures::*AcidSharp_symbols793)(VkPhysicalDeviceVariablePointerFeatures&&) = &VkPhysicalDeviceVariablePointerFeatures::operator=;
extern "C" { void AcidSharp_symbols794(VkPhysicalDeviceVariablePointerFeatures* instance) { instance->~VkPhysicalDeviceVariablePointerFeatures(); } }
extern "C" { void AcidSharp_symbols795(void* instance) { new (instance) VkPhysicalDeviceProtectedMemoryFeatures(); } }
extern "C" { void AcidSharp_symbols796(void* instance, const VkPhysicalDeviceProtectedMemoryFeatures& _0) { new (instance) VkPhysicalDeviceProtectedMemoryFeatures(_0); } }
VkPhysicalDeviceProtectedMemoryFeatures& (VkPhysicalDeviceProtectedMemoryFeatures::*AcidSharp_symbols797)(const VkPhysicalDeviceProtectedMemoryFeatures&) = &VkPhysicalDeviceProtectedMemoryFeatures::operator=;
VkPhysicalDeviceProtectedMemoryFeatures& (VkPhysicalDeviceProtectedMemoryFeatures::*AcidSharp_symbols798)(VkPhysicalDeviceProtectedMemoryFeatures&&) = &VkPhysicalDeviceProtectedMemoryFeatures::operator=;
extern "C" { void AcidSharp_symbols799(VkPhysicalDeviceProtectedMemoryFeatures* instance) { instance->~VkPhysicalDeviceProtectedMemoryFeatures(); } }
extern "C" { void AcidSharp_symbols800(void* instance) { new (instance) VkPhysicalDeviceProtectedMemoryProperties(); } }
extern "C" { void AcidSharp_symbols801(void* instance, const VkPhysicalDeviceProtectedMemoryProperties& _0) { new (instance) VkPhysicalDeviceProtectedMemoryProperties(_0); } }
VkPhysicalDeviceProtectedMemoryProperties& (VkPhysicalDeviceProtectedMemoryProperties::*AcidSharp_symbols802)(const VkPhysicalDeviceProtectedMemoryProperties&) = &VkPhysicalDeviceProtectedMemoryProperties::operator=;
VkPhysicalDeviceProtectedMemoryProperties& (VkPhysicalDeviceProtectedMemoryProperties::*AcidSharp_symbols803)(VkPhysicalDeviceProtectedMemoryProperties&&) = &VkPhysicalDeviceProtectedMemoryProperties::operator=;
extern "C" { void AcidSharp_symbols804(VkPhysicalDeviceProtectedMemoryProperties* instance) { instance->~VkPhysicalDeviceProtectedMemoryProperties(); } }
extern "C" { void AcidSharp_symbols805(void* instance) { new (instance) VkDeviceQueueInfo2(); } }
extern "C" { void AcidSharp_symbols806(void* instance, const VkDeviceQueueInfo2& _0) { new (instance) VkDeviceQueueInfo2(_0); } }
VkDeviceQueueInfo2& (VkDeviceQueueInfo2::*AcidSharp_symbols807)(const VkDeviceQueueInfo2&) = &VkDeviceQueueInfo2::operator=;
VkDeviceQueueInfo2& (VkDeviceQueueInfo2::*AcidSharp_symbols808)(VkDeviceQueueInfo2&&) = &VkDeviceQueueInfo2::operator=;
extern "C" { void AcidSharp_symbols809(VkDeviceQueueInfo2* instance) { instance->~VkDeviceQueueInfo2(); } }
extern "C" { void AcidSharp_symbols810(void* instance) { new (instance) VkProtectedSubmitInfo(); } }
extern "C" { void AcidSharp_symbols811(void* instance, const VkProtectedSubmitInfo& _0) { new (instance) VkProtectedSubmitInfo(_0); } }
VkProtectedSubmitInfo& (VkProtectedSubmitInfo::*AcidSharp_symbols812)(const VkProtectedSubmitInfo&) = &VkProtectedSubmitInfo::operator=;
VkProtectedSubmitInfo& (VkProtectedSubmitInfo::*AcidSharp_symbols813)(VkProtectedSubmitInfo&&) = &VkProtectedSubmitInfo::operator=;
extern "C" { void AcidSharp_symbols814(VkProtectedSubmitInfo* instance) { instance->~VkProtectedSubmitInfo(); } }
extern "C" { void AcidSharp_symbols815(void* instance) { new (instance) VkSamplerYcbcrConversionCreateInfo(); } }
extern "C" { void AcidSharp_symbols816(void* instance, const VkSamplerYcbcrConversionCreateInfo& _0) { new (instance) VkSamplerYcbcrConversionCreateInfo(_0); } }
VkSamplerYcbcrConversionCreateInfo& (VkSamplerYcbcrConversionCreateInfo::*AcidSharp_symbols817)(const VkSamplerYcbcrConversionCreateInfo&) = &VkSamplerYcbcrConversionCreateInfo::operator=;
VkSamplerYcbcrConversionCreateInfo& (VkSamplerYcbcrConversionCreateInfo::*AcidSharp_symbols818)(VkSamplerYcbcrConversionCreateInfo&&) = &VkSamplerYcbcrConversionCreateInfo::operator=;
extern "C" { void AcidSharp_symbols819(VkSamplerYcbcrConversionCreateInfo* instance) { instance->~VkSamplerYcbcrConversionCreateInfo(); } }
extern "C" { void AcidSharp_symbols820(void* instance) { new (instance) VkSamplerYcbcrConversionInfo(); } }
extern "C" { void AcidSharp_symbols821(void* instance, const VkSamplerYcbcrConversionInfo& _0) { new (instance) VkSamplerYcbcrConversionInfo(_0); } }
VkSamplerYcbcrConversionInfo& (VkSamplerYcbcrConversionInfo::*AcidSharp_symbols822)(const VkSamplerYcbcrConversionInfo&) = &VkSamplerYcbcrConversionInfo::operator=;
VkSamplerYcbcrConversionInfo& (VkSamplerYcbcrConversionInfo::*AcidSharp_symbols823)(VkSamplerYcbcrConversionInfo&&) = &VkSamplerYcbcrConversionInfo::operator=;
extern "C" { void AcidSharp_symbols824(VkSamplerYcbcrConversionInfo* instance) { instance->~VkSamplerYcbcrConversionInfo(); } }
extern "C" { void AcidSharp_symbols825(void* instance) { new (instance) VkBindImagePlaneMemoryInfo(); } }
extern "C" { void AcidSharp_symbols826(void* instance, const VkBindImagePlaneMemoryInfo& _0) { new (instance) VkBindImagePlaneMemoryInfo(_0); } }
VkBindImagePlaneMemoryInfo& (VkBindImagePlaneMemoryInfo::*AcidSharp_symbols827)(const VkBindImagePlaneMemoryInfo&) = &VkBindImagePlaneMemoryInfo::operator=;
VkBindImagePlaneMemoryInfo& (VkBindImagePlaneMemoryInfo::*AcidSharp_symbols828)(VkBindImagePlaneMemoryInfo&&) = &VkBindImagePlaneMemoryInfo::operator=;
extern "C" { void AcidSharp_symbols829(VkBindImagePlaneMemoryInfo* instance) { instance->~VkBindImagePlaneMemoryInfo(); } }
extern "C" { void AcidSharp_symbols830(void* instance) { new (instance) VkImagePlaneMemoryRequirementsInfo(); } }
extern "C" { void AcidSharp_symbols831(void* instance, const VkImagePlaneMemoryRequirementsInfo& _0) { new (instance) VkImagePlaneMemoryRequirementsInfo(_0); } }
VkImagePlaneMemoryRequirementsInfo& (VkImagePlaneMemoryRequirementsInfo::*AcidSharp_symbols832)(const VkImagePlaneMemoryRequirementsInfo&) = &VkImagePlaneMemoryRequirementsInfo::operator=;
VkImagePlaneMemoryRequirementsInfo& (VkImagePlaneMemoryRequirementsInfo::*AcidSharp_symbols833)(VkImagePlaneMemoryRequirementsInfo&&) = &VkImagePlaneMemoryRequirementsInfo::operator=;
extern "C" { void AcidSharp_symbols834(VkImagePlaneMemoryRequirementsInfo* instance) { instance->~VkImagePlaneMemoryRequirementsInfo(); } }
extern "C" { void AcidSharp_symbols835(void* instance) { new (instance) VkPhysicalDeviceSamplerYcbcrConversionFeatures(); } }
extern "C" { void AcidSharp_symbols836(void* instance, const VkPhysicalDeviceSamplerYcbcrConversionFeatures& _0) { new (instance) VkPhysicalDeviceSamplerYcbcrConversionFeatures(_0); } }
VkPhysicalDeviceSamplerYcbcrConversionFeatures& (VkPhysicalDeviceSamplerYcbcrConversionFeatures::*AcidSharp_symbols837)(const VkPhysicalDeviceSamplerYcbcrConversionFeatures&) = &VkPhysicalDeviceSamplerYcbcrConversionFeatures::operator=;
VkPhysicalDeviceSamplerYcbcrConversionFeatures& (VkPhysicalDeviceSamplerYcbcrConversionFeatures::*AcidSharp_symbols838)(VkPhysicalDeviceSamplerYcbcrConversionFeatures&&) = &VkPhysicalDeviceSamplerYcbcrConversionFeatures::operator=;
extern "C" { void AcidSharp_symbols839(VkPhysicalDeviceSamplerYcbcrConversionFeatures* instance) { instance->~VkPhysicalDeviceSamplerYcbcrConversionFeatures(); } }
extern "C" { void AcidSharp_symbols840(void* instance) { new (instance) VkSamplerYcbcrConversionImageFormatProperties(); } }
extern "C" { void AcidSharp_symbols841(void* instance, const VkSamplerYcbcrConversionImageFormatProperties& _0) { new (instance) VkSamplerYcbcrConversionImageFormatProperties(_0); } }
VkSamplerYcbcrConversionImageFormatProperties& (VkSamplerYcbcrConversionImageFormatProperties::*AcidSharp_symbols842)(const VkSamplerYcbcrConversionImageFormatProperties&) = &VkSamplerYcbcrConversionImageFormatProperties::operator=;
VkSamplerYcbcrConversionImageFormatProperties& (VkSamplerYcbcrConversionImageFormatProperties::*AcidSharp_symbols843)(VkSamplerYcbcrConversionImageFormatProperties&&) = &VkSamplerYcbcrConversionImageFormatProperties::operator=;
extern "C" { void AcidSharp_symbols844(VkSamplerYcbcrConversionImageFormatProperties* instance) { instance->~VkSamplerYcbcrConversionImageFormatProperties(); } }
extern "C" { void AcidSharp_symbols845(void* instance) { new (instance) VkDescriptorUpdateTemplateEntry(); } }
extern "C" { void AcidSharp_symbols846(void* instance, const VkDescriptorUpdateTemplateEntry& _0) { new (instance) VkDescriptorUpdateTemplateEntry(_0); } }
VkDescriptorUpdateTemplateEntry& (VkDescriptorUpdateTemplateEntry::*AcidSharp_symbols847)(const VkDescriptorUpdateTemplateEntry&) = &VkDescriptorUpdateTemplateEntry::operator=;
VkDescriptorUpdateTemplateEntry& (VkDescriptorUpdateTemplateEntry::*AcidSharp_symbols848)(VkDescriptorUpdateTemplateEntry&&) = &VkDescriptorUpdateTemplateEntry::operator=;
extern "C" { void AcidSharp_symbols849(VkDescriptorUpdateTemplateEntry* instance) { instance->~VkDescriptorUpdateTemplateEntry(); } }
extern "C" { void AcidSharp_symbols850(void* instance) { new (instance) VkDescriptorUpdateTemplateCreateInfo(); } }
extern "C" { void AcidSharp_symbols851(void* instance, const VkDescriptorUpdateTemplateCreateInfo& _0) { new (instance) VkDescriptorUpdateTemplateCreateInfo(_0); } }
VkDescriptorUpdateTemplateCreateInfo& (VkDescriptorUpdateTemplateCreateInfo::*AcidSharp_symbols852)(const VkDescriptorUpdateTemplateCreateInfo&) = &VkDescriptorUpdateTemplateCreateInfo::operator=;
VkDescriptorUpdateTemplateCreateInfo& (VkDescriptorUpdateTemplateCreateInfo::*AcidSharp_symbols853)(VkDescriptorUpdateTemplateCreateInfo&&) = &VkDescriptorUpdateTemplateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols854(VkDescriptorUpdateTemplateCreateInfo* instance) { instance->~VkDescriptorUpdateTemplateCreateInfo(); } }
extern "C" { void AcidSharp_symbols855(void* instance) { new (instance) VkExternalMemoryProperties(); } }
extern "C" { void AcidSharp_symbols856(void* instance, const VkExternalMemoryProperties& _0) { new (instance) VkExternalMemoryProperties(_0); } }
VkExternalMemoryProperties& (VkExternalMemoryProperties::*AcidSharp_symbols857)(const VkExternalMemoryProperties&) = &VkExternalMemoryProperties::operator=;
VkExternalMemoryProperties& (VkExternalMemoryProperties::*AcidSharp_symbols858)(VkExternalMemoryProperties&&) = &VkExternalMemoryProperties::operator=;
extern "C" { void AcidSharp_symbols859(VkExternalMemoryProperties* instance) { instance->~VkExternalMemoryProperties(); } }
extern "C" { void AcidSharp_symbols860(void* instance) { new (instance) VkPhysicalDeviceExternalImageFormatInfo(); } }
extern "C" { void AcidSharp_symbols861(void* instance, const VkPhysicalDeviceExternalImageFormatInfo& _0) { new (instance) VkPhysicalDeviceExternalImageFormatInfo(_0); } }
VkPhysicalDeviceExternalImageFormatInfo& (VkPhysicalDeviceExternalImageFormatInfo::*AcidSharp_symbols862)(const VkPhysicalDeviceExternalImageFormatInfo&) = &VkPhysicalDeviceExternalImageFormatInfo::operator=;
VkPhysicalDeviceExternalImageFormatInfo& (VkPhysicalDeviceExternalImageFormatInfo::*AcidSharp_symbols863)(VkPhysicalDeviceExternalImageFormatInfo&&) = &VkPhysicalDeviceExternalImageFormatInfo::operator=;
extern "C" { void AcidSharp_symbols864(VkPhysicalDeviceExternalImageFormatInfo* instance) { instance->~VkPhysicalDeviceExternalImageFormatInfo(); } }
extern "C" { void AcidSharp_symbols865(void* instance) { new (instance) VkExternalImageFormatProperties(); } }
extern "C" { void AcidSharp_symbols866(void* instance, const VkExternalImageFormatProperties& _0) { new (instance) VkExternalImageFormatProperties(_0); } }
VkExternalImageFormatProperties& (VkExternalImageFormatProperties::*AcidSharp_symbols867)(const VkExternalImageFormatProperties&) = &VkExternalImageFormatProperties::operator=;
VkExternalImageFormatProperties& (VkExternalImageFormatProperties::*AcidSharp_symbols868)(VkExternalImageFormatProperties&&) = &VkExternalImageFormatProperties::operator=;
extern "C" { void AcidSharp_symbols869(VkExternalImageFormatProperties* instance) { instance->~VkExternalImageFormatProperties(); } }
extern "C" { void AcidSharp_symbols870(void* instance) { new (instance) VkPhysicalDeviceExternalBufferInfo(); } }
extern "C" { void AcidSharp_symbols871(void* instance, const VkPhysicalDeviceExternalBufferInfo& _0) { new (instance) VkPhysicalDeviceExternalBufferInfo(_0); } }
VkPhysicalDeviceExternalBufferInfo& (VkPhysicalDeviceExternalBufferInfo::*AcidSharp_symbols872)(const VkPhysicalDeviceExternalBufferInfo&) = &VkPhysicalDeviceExternalBufferInfo::operator=;
VkPhysicalDeviceExternalBufferInfo& (VkPhysicalDeviceExternalBufferInfo::*AcidSharp_symbols873)(VkPhysicalDeviceExternalBufferInfo&&) = &VkPhysicalDeviceExternalBufferInfo::operator=;
extern "C" { void AcidSharp_symbols874(VkPhysicalDeviceExternalBufferInfo* instance) { instance->~VkPhysicalDeviceExternalBufferInfo(); } }
extern "C" { void AcidSharp_symbols875(void* instance) { new (instance) VkExternalBufferProperties(); } }
extern "C" { void AcidSharp_symbols876(void* instance, const VkExternalBufferProperties& _0) { new (instance) VkExternalBufferProperties(_0); } }
VkExternalBufferProperties& (VkExternalBufferProperties::*AcidSharp_symbols877)(const VkExternalBufferProperties&) = &VkExternalBufferProperties::operator=;
VkExternalBufferProperties& (VkExternalBufferProperties::*AcidSharp_symbols878)(VkExternalBufferProperties&&) = &VkExternalBufferProperties::operator=;
extern "C" { void AcidSharp_symbols879(VkExternalBufferProperties* instance) { instance->~VkExternalBufferProperties(); } }
extern "C" { void AcidSharp_symbols880(void* instance) { new (instance) VkPhysicalDeviceIDProperties(); } }
extern "C" { void AcidSharp_symbols881(void* instance, const VkPhysicalDeviceIDProperties& _0) { new (instance) VkPhysicalDeviceIDProperties(_0); } }
VkPhysicalDeviceIDProperties& (VkPhysicalDeviceIDProperties::*AcidSharp_symbols882)(const VkPhysicalDeviceIDProperties&) = &VkPhysicalDeviceIDProperties::operator=;
VkPhysicalDeviceIDProperties& (VkPhysicalDeviceIDProperties::*AcidSharp_symbols883)(VkPhysicalDeviceIDProperties&&) = &VkPhysicalDeviceIDProperties::operator=;
extern "C" { void AcidSharp_symbols884(VkPhysicalDeviceIDProperties* instance) { instance->~VkPhysicalDeviceIDProperties(); } }
extern "C" { void AcidSharp_symbols885(void* instance) { new (instance) VkExternalMemoryImageCreateInfo(); } }
extern "C" { void AcidSharp_symbols886(void* instance, const VkExternalMemoryImageCreateInfo& _0) { new (instance) VkExternalMemoryImageCreateInfo(_0); } }
VkExternalMemoryImageCreateInfo& (VkExternalMemoryImageCreateInfo::*AcidSharp_symbols887)(const VkExternalMemoryImageCreateInfo&) = &VkExternalMemoryImageCreateInfo::operator=;
VkExternalMemoryImageCreateInfo& (VkExternalMemoryImageCreateInfo::*AcidSharp_symbols888)(VkExternalMemoryImageCreateInfo&&) = &VkExternalMemoryImageCreateInfo::operator=;
extern "C" { void AcidSharp_symbols889(VkExternalMemoryImageCreateInfo* instance) { instance->~VkExternalMemoryImageCreateInfo(); } }
extern "C" { void AcidSharp_symbols890(void* instance) { new (instance) VkExternalMemoryBufferCreateInfo(); } }
extern "C" { void AcidSharp_symbols891(void* instance, const VkExternalMemoryBufferCreateInfo& _0) { new (instance) VkExternalMemoryBufferCreateInfo(_0); } }
VkExternalMemoryBufferCreateInfo& (VkExternalMemoryBufferCreateInfo::*AcidSharp_symbols892)(const VkExternalMemoryBufferCreateInfo&) = &VkExternalMemoryBufferCreateInfo::operator=;
VkExternalMemoryBufferCreateInfo& (VkExternalMemoryBufferCreateInfo::*AcidSharp_symbols893)(VkExternalMemoryBufferCreateInfo&&) = &VkExternalMemoryBufferCreateInfo::operator=;
extern "C" { void AcidSharp_symbols894(VkExternalMemoryBufferCreateInfo* instance) { instance->~VkExternalMemoryBufferCreateInfo(); } }
extern "C" { void AcidSharp_symbols895(void* instance) { new (instance) VkExportMemoryAllocateInfo(); } }
extern "C" { void AcidSharp_symbols896(void* instance, const VkExportMemoryAllocateInfo& _0) { new (instance) VkExportMemoryAllocateInfo(_0); } }
VkExportMemoryAllocateInfo& (VkExportMemoryAllocateInfo::*AcidSharp_symbols897)(const VkExportMemoryAllocateInfo&) = &VkExportMemoryAllocateInfo::operator=;
VkExportMemoryAllocateInfo& (VkExportMemoryAllocateInfo::*AcidSharp_symbols898)(VkExportMemoryAllocateInfo&&) = &VkExportMemoryAllocateInfo::operator=;
extern "C" { void AcidSharp_symbols899(VkExportMemoryAllocateInfo* instance) { instance->~VkExportMemoryAllocateInfo(); } }
extern "C" { void AcidSharp_symbols900(void* instance) { new (instance) VkPhysicalDeviceExternalFenceInfo(); } }
extern "C" { void AcidSharp_symbols901(void* instance, const VkPhysicalDeviceExternalFenceInfo& _0) { new (instance) VkPhysicalDeviceExternalFenceInfo(_0); } }
VkPhysicalDeviceExternalFenceInfo& (VkPhysicalDeviceExternalFenceInfo::*AcidSharp_symbols902)(const VkPhysicalDeviceExternalFenceInfo&) = &VkPhysicalDeviceExternalFenceInfo::operator=;
VkPhysicalDeviceExternalFenceInfo& (VkPhysicalDeviceExternalFenceInfo::*AcidSharp_symbols903)(VkPhysicalDeviceExternalFenceInfo&&) = &VkPhysicalDeviceExternalFenceInfo::operator=;
extern "C" { void AcidSharp_symbols904(VkPhysicalDeviceExternalFenceInfo* instance) { instance->~VkPhysicalDeviceExternalFenceInfo(); } }
extern "C" { void AcidSharp_symbols905(void* instance) { new (instance) VkExternalFenceProperties(); } }
extern "C" { void AcidSharp_symbols906(void* instance, const VkExternalFenceProperties& _0) { new (instance) VkExternalFenceProperties(_0); } }
VkExternalFenceProperties& (VkExternalFenceProperties::*AcidSharp_symbols907)(const VkExternalFenceProperties&) = &VkExternalFenceProperties::operator=;
VkExternalFenceProperties& (VkExternalFenceProperties::*AcidSharp_symbols908)(VkExternalFenceProperties&&) = &VkExternalFenceProperties::operator=;
extern "C" { void AcidSharp_symbols909(VkExternalFenceProperties* instance) { instance->~VkExternalFenceProperties(); } }
extern "C" { void AcidSharp_symbols910(void* instance) { new (instance) VkExportFenceCreateInfo(); } }
extern "C" { void AcidSharp_symbols911(void* instance, const VkExportFenceCreateInfo& _0) { new (instance) VkExportFenceCreateInfo(_0); } }
VkExportFenceCreateInfo& (VkExportFenceCreateInfo::*AcidSharp_symbols912)(const VkExportFenceCreateInfo&) = &VkExportFenceCreateInfo::operator=;
VkExportFenceCreateInfo& (VkExportFenceCreateInfo::*AcidSharp_symbols913)(VkExportFenceCreateInfo&&) = &VkExportFenceCreateInfo::operator=;
extern "C" { void AcidSharp_symbols914(VkExportFenceCreateInfo* instance) { instance->~VkExportFenceCreateInfo(); } }
extern "C" { void AcidSharp_symbols915(void* instance) { new (instance) VkExportSemaphoreCreateInfo(); } }
extern "C" { void AcidSharp_symbols916(void* instance, const VkExportSemaphoreCreateInfo& _0) { new (instance) VkExportSemaphoreCreateInfo(_0); } }
VkExportSemaphoreCreateInfo& (VkExportSemaphoreCreateInfo::*AcidSharp_symbols917)(const VkExportSemaphoreCreateInfo&) = &VkExportSemaphoreCreateInfo::operator=;
VkExportSemaphoreCreateInfo& (VkExportSemaphoreCreateInfo::*AcidSharp_symbols918)(VkExportSemaphoreCreateInfo&&) = &VkExportSemaphoreCreateInfo::operator=;
extern "C" { void AcidSharp_symbols919(VkExportSemaphoreCreateInfo* instance) { instance->~VkExportSemaphoreCreateInfo(); } }
extern "C" { void AcidSharp_symbols920(void* instance) { new (instance) VkPhysicalDeviceExternalSemaphoreInfo(); } }
extern "C" { void AcidSharp_symbols921(void* instance, const VkPhysicalDeviceExternalSemaphoreInfo& _0) { new (instance) VkPhysicalDeviceExternalSemaphoreInfo(_0); } }
VkPhysicalDeviceExternalSemaphoreInfo& (VkPhysicalDeviceExternalSemaphoreInfo::*AcidSharp_symbols922)(const VkPhysicalDeviceExternalSemaphoreInfo&) = &VkPhysicalDeviceExternalSemaphoreInfo::operator=;
VkPhysicalDeviceExternalSemaphoreInfo& (VkPhysicalDeviceExternalSemaphoreInfo::*AcidSharp_symbols923)(VkPhysicalDeviceExternalSemaphoreInfo&&) = &VkPhysicalDeviceExternalSemaphoreInfo::operator=;
extern "C" { void AcidSharp_symbols924(VkPhysicalDeviceExternalSemaphoreInfo* instance) { instance->~VkPhysicalDeviceExternalSemaphoreInfo(); } }
extern "C" { void AcidSharp_symbols925(void* instance) { new (instance) VkExternalSemaphoreProperties(); } }
extern "C" { void AcidSharp_symbols926(void* instance, const VkExternalSemaphoreProperties& _0) { new (instance) VkExternalSemaphoreProperties(_0); } }
VkExternalSemaphoreProperties& (VkExternalSemaphoreProperties::*AcidSharp_symbols927)(const VkExternalSemaphoreProperties&) = &VkExternalSemaphoreProperties::operator=;
VkExternalSemaphoreProperties& (VkExternalSemaphoreProperties::*AcidSharp_symbols928)(VkExternalSemaphoreProperties&&) = &VkExternalSemaphoreProperties::operator=;
extern "C" { void AcidSharp_symbols929(VkExternalSemaphoreProperties* instance) { instance->~VkExternalSemaphoreProperties(); } }
extern "C" { void AcidSharp_symbols930(void* instance) { new (instance) VkPhysicalDeviceMaintenance3Properties(); } }
extern "C" { void AcidSharp_symbols931(void* instance, const VkPhysicalDeviceMaintenance3Properties& _0) { new (instance) VkPhysicalDeviceMaintenance3Properties(_0); } }
VkPhysicalDeviceMaintenance3Properties& (VkPhysicalDeviceMaintenance3Properties::*AcidSharp_symbols932)(const VkPhysicalDeviceMaintenance3Properties&) = &VkPhysicalDeviceMaintenance3Properties::operator=;
VkPhysicalDeviceMaintenance3Properties& (VkPhysicalDeviceMaintenance3Properties::*AcidSharp_symbols933)(VkPhysicalDeviceMaintenance3Properties&&) = &VkPhysicalDeviceMaintenance3Properties::operator=;
extern "C" { void AcidSharp_symbols934(VkPhysicalDeviceMaintenance3Properties* instance) { instance->~VkPhysicalDeviceMaintenance3Properties(); } }
extern "C" { void AcidSharp_symbols935(void* instance) { new (instance) VkDescriptorSetLayoutSupport(); } }
extern "C" { void AcidSharp_symbols936(void* instance, const VkDescriptorSetLayoutSupport& _0) { new (instance) VkDescriptorSetLayoutSupport(_0); } }
VkDescriptorSetLayoutSupport& (VkDescriptorSetLayoutSupport::*AcidSharp_symbols937)(const VkDescriptorSetLayoutSupport&) = &VkDescriptorSetLayoutSupport::operator=;
VkDescriptorSetLayoutSupport& (VkDescriptorSetLayoutSupport::*AcidSharp_symbols938)(VkDescriptorSetLayoutSupport&&) = &VkDescriptorSetLayoutSupport::operator=;
extern "C" { void AcidSharp_symbols939(VkDescriptorSetLayoutSupport* instance) { instance->~VkDescriptorSetLayoutSupport(); } }
extern "C" { void AcidSharp_symbols940(void* instance) { new (instance) VkPhysicalDeviceShaderDrawParameterFeatures(); } }
extern "C" { void AcidSharp_symbols941(void* instance, const VkPhysicalDeviceShaderDrawParameterFeatures& _0) { new (instance) VkPhysicalDeviceShaderDrawParameterFeatures(_0); } }
VkPhysicalDeviceShaderDrawParameterFeatures& (VkPhysicalDeviceShaderDrawParameterFeatures::*AcidSharp_symbols942)(const VkPhysicalDeviceShaderDrawParameterFeatures&) = &VkPhysicalDeviceShaderDrawParameterFeatures::operator=;
VkPhysicalDeviceShaderDrawParameterFeatures& (VkPhysicalDeviceShaderDrawParameterFeatures::*AcidSharp_symbols943)(VkPhysicalDeviceShaderDrawParameterFeatures&&) = &VkPhysicalDeviceShaderDrawParameterFeatures::operator=;
extern "C" { void AcidSharp_symbols944(VkPhysicalDeviceShaderDrawParameterFeatures* instance) { instance->~VkPhysicalDeviceShaderDrawParameterFeatures(); } }
extern "C" { void AcidSharp_symbols945(void* instance, const VkSurfaceCapabilitiesKHR& _0) { new (instance) VkSurfaceCapabilitiesKHR(_0); } }
extern "C" { void AcidSharp_symbols946(VkSurfaceCapabilitiesKHR* instance) { instance->~VkSurfaceCapabilitiesKHR(); } }
VkSurfaceCapabilitiesKHR& (VkSurfaceCapabilitiesKHR::*AcidSharp_symbols947)(const VkSurfaceCapabilitiesKHR&) = &VkSurfaceCapabilitiesKHR::operator=;
VkSurfaceCapabilitiesKHR& (VkSurfaceCapabilitiesKHR::*AcidSharp_symbols948)(VkSurfaceCapabilitiesKHR&&) = &VkSurfaceCapabilitiesKHR::operator=;
extern "C" { void AcidSharp_symbols949(void* instance) { new (instance) VkSurfaceCapabilitiesKHR(); } }
extern "C" { void AcidSharp_symbols950(void* instance, const VkSurfaceFormatKHR& _0) { new (instance) VkSurfaceFormatKHR(_0); } }
extern "C" { void AcidSharp_symbols951(VkSurfaceFormatKHR* instance) { instance->~VkSurfaceFormatKHR(); } }
VkSurfaceFormatKHR& (VkSurfaceFormatKHR::*AcidSharp_symbols952)(const VkSurfaceFormatKHR&) = &VkSurfaceFormatKHR::operator=;
VkSurfaceFormatKHR& (VkSurfaceFormatKHR::*AcidSharp_symbols953)(VkSurfaceFormatKHR&&) = &VkSurfaceFormatKHR::operator=;
extern "C" { void AcidSharp_symbols954(void* instance) { new (instance) VkSurfaceFormatKHR(); } }
extern "C" { void AcidSharp_symbols955(void* instance) { new (instance) VkSwapchainCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols956(void* instance, const VkSwapchainCreateInfoKHR& _0) { new (instance) VkSwapchainCreateInfoKHR(_0); } }
VkSwapchainCreateInfoKHR& (VkSwapchainCreateInfoKHR::*AcidSharp_symbols957)(const VkSwapchainCreateInfoKHR&) = &VkSwapchainCreateInfoKHR::operator=;
VkSwapchainCreateInfoKHR& (VkSwapchainCreateInfoKHR::*AcidSharp_symbols958)(VkSwapchainCreateInfoKHR&&) = &VkSwapchainCreateInfoKHR::operator=;
extern "C" { void AcidSharp_symbols959(VkSwapchainCreateInfoKHR* instance) { instance->~VkSwapchainCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols960(void* instance) { new (instance) VkPresentInfoKHR(); } }
extern "C" { void AcidSharp_symbols961(void* instance, const VkPresentInfoKHR& _0) { new (instance) VkPresentInfoKHR(_0); } }
VkPresentInfoKHR& (VkPresentInfoKHR::*AcidSharp_symbols962)(const VkPresentInfoKHR&) = &VkPresentInfoKHR::operator=;
VkPresentInfoKHR& (VkPresentInfoKHR::*AcidSharp_symbols963)(VkPresentInfoKHR&&) = &VkPresentInfoKHR::operator=;
extern "C" { void AcidSharp_symbols964(VkPresentInfoKHR* instance) { instance->~VkPresentInfoKHR(); } }
extern "C" { void AcidSharp_symbols965(void* instance) { new (instance) VkImageSwapchainCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols966(void* instance, const VkImageSwapchainCreateInfoKHR& _0) { new (instance) VkImageSwapchainCreateInfoKHR(_0); } }
VkImageSwapchainCreateInfoKHR& (VkImageSwapchainCreateInfoKHR::*AcidSharp_symbols967)(const VkImageSwapchainCreateInfoKHR&) = &VkImageSwapchainCreateInfoKHR::operator=;
VkImageSwapchainCreateInfoKHR& (VkImageSwapchainCreateInfoKHR::*AcidSharp_symbols968)(VkImageSwapchainCreateInfoKHR&&) = &VkImageSwapchainCreateInfoKHR::operator=;
extern "C" { void AcidSharp_symbols969(VkImageSwapchainCreateInfoKHR* instance) { instance->~VkImageSwapchainCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols970(void* instance) { new (instance) VkBindImageMemorySwapchainInfoKHR(); } }
extern "C" { void AcidSharp_symbols971(void* instance, const VkBindImageMemorySwapchainInfoKHR& _0) { new (instance) VkBindImageMemorySwapchainInfoKHR(_0); } }
VkBindImageMemorySwapchainInfoKHR& (VkBindImageMemorySwapchainInfoKHR::*AcidSharp_symbols972)(const VkBindImageMemorySwapchainInfoKHR&) = &VkBindImageMemorySwapchainInfoKHR::operator=;
VkBindImageMemorySwapchainInfoKHR& (VkBindImageMemorySwapchainInfoKHR::*AcidSharp_symbols973)(VkBindImageMemorySwapchainInfoKHR&&) = &VkBindImageMemorySwapchainInfoKHR::operator=;
extern "C" { void AcidSharp_symbols974(VkBindImageMemorySwapchainInfoKHR* instance) { instance->~VkBindImageMemorySwapchainInfoKHR(); } }
extern "C" { void AcidSharp_symbols975(void* instance) { new (instance) VkAcquireNextImageInfoKHR(); } }
extern "C" { void AcidSharp_symbols976(void* instance, const VkAcquireNextImageInfoKHR& _0) { new (instance) VkAcquireNextImageInfoKHR(_0); } }
VkAcquireNextImageInfoKHR& (VkAcquireNextImageInfoKHR::*AcidSharp_symbols977)(const VkAcquireNextImageInfoKHR&) = &VkAcquireNextImageInfoKHR::operator=;
VkAcquireNextImageInfoKHR& (VkAcquireNextImageInfoKHR::*AcidSharp_symbols978)(VkAcquireNextImageInfoKHR&&) = &VkAcquireNextImageInfoKHR::operator=;
extern "C" { void AcidSharp_symbols979(VkAcquireNextImageInfoKHR* instance) { instance->~VkAcquireNextImageInfoKHR(); } }
extern "C" { void AcidSharp_symbols980(void* instance) { new (instance) VkDeviceGroupPresentCapabilitiesKHR(); } }
extern "C" { void AcidSharp_symbols981(void* instance, const VkDeviceGroupPresentCapabilitiesKHR& _0) { new (instance) VkDeviceGroupPresentCapabilitiesKHR(_0); } }
VkDeviceGroupPresentCapabilitiesKHR& (VkDeviceGroupPresentCapabilitiesKHR::*AcidSharp_symbols982)(const VkDeviceGroupPresentCapabilitiesKHR&) = &VkDeviceGroupPresentCapabilitiesKHR::operator=;
VkDeviceGroupPresentCapabilitiesKHR& (VkDeviceGroupPresentCapabilitiesKHR::*AcidSharp_symbols983)(VkDeviceGroupPresentCapabilitiesKHR&&) = &VkDeviceGroupPresentCapabilitiesKHR::operator=;
extern "C" { void AcidSharp_symbols984(VkDeviceGroupPresentCapabilitiesKHR* instance) { instance->~VkDeviceGroupPresentCapabilitiesKHR(); } }
extern "C" { void AcidSharp_symbols985(void* instance) { new (instance) VkDeviceGroupPresentInfoKHR(); } }
extern "C" { void AcidSharp_symbols986(void* instance, const VkDeviceGroupPresentInfoKHR& _0) { new (instance) VkDeviceGroupPresentInfoKHR(_0); } }
VkDeviceGroupPresentInfoKHR& (VkDeviceGroupPresentInfoKHR::*AcidSharp_symbols987)(const VkDeviceGroupPresentInfoKHR&) = &VkDeviceGroupPresentInfoKHR::operator=;
VkDeviceGroupPresentInfoKHR& (VkDeviceGroupPresentInfoKHR::*AcidSharp_symbols988)(VkDeviceGroupPresentInfoKHR&&) = &VkDeviceGroupPresentInfoKHR::operator=;
extern "C" { void AcidSharp_symbols989(VkDeviceGroupPresentInfoKHR* instance) { instance->~VkDeviceGroupPresentInfoKHR(); } }
extern "C" { void AcidSharp_symbols990(void* instance) { new (instance) VkDeviceGroupSwapchainCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols991(void* instance, const VkDeviceGroupSwapchainCreateInfoKHR& _0) { new (instance) VkDeviceGroupSwapchainCreateInfoKHR(_0); } }
VkDeviceGroupSwapchainCreateInfoKHR& (VkDeviceGroupSwapchainCreateInfoKHR::*AcidSharp_symbols992)(const VkDeviceGroupSwapchainCreateInfoKHR&) = &VkDeviceGroupSwapchainCreateInfoKHR::operator=;
VkDeviceGroupSwapchainCreateInfoKHR& (VkDeviceGroupSwapchainCreateInfoKHR::*AcidSharp_symbols993)(VkDeviceGroupSwapchainCreateInfoKHR&&) = &VkDeviceGroupSwapchainCreateInfoKHR::operator=;
extern "C" { void AcidSharp_symbols994(VkDeviceGroupSwapchainCreateInfoKHR* instance) { instance->~VkDeviceGroupSwapchainCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols995(void* instance) { new (instance) VkDisplayPropertiesKHR(); } }
extern "C" { void AcidSharp_symbols996(void* instance, const VkDisplayPropertiesKHR& _0) { new (instance) VkDisplayPropertiesKHR(_0); } }
VkDisplayPropertiesKHR& (VkDisplayPropertiesKHR::*AcidSharp_symbols997)(const VkDisplayPropertiesKHR&) = &VkDisplayPropertiesKHR::operator=;
VkDisplayPropertiesKHR& (VkDisplayPropertiesKHR::*AcidSharp_symbols998)(VkDisplayPropertiesKHR&&) = &VkDisplayPropertiesKHR::operator=;
extern "C" { void AcidSharp_symbols999(VkDisplayPropertiesKHR* instance) { instance->~VkDisplayPropertiesKHR(); } }
extern "C" { void AcidSharp_symbols1000(void* instance) { new (instance) VkDisplayModeParametersKHR(); } }
extern "C" { void AcidSharp_symbols1001(void* instance, const VkDisplayModeParametersKHR& _0) { new (instance) VkDisplayModeParametersKHR(_0); } }
VkDisplayModeParametersKHR& (VkDisplayModeParametersKHR::*AcidSharp_symbols1002)(const VkDisplayModeParametersKHR&) = &VkDisplayModeParametersKHR::operator=;
VkDisplayModeParametersKHR& (VkDisplayModeParametersKHR::*AcidSharp_symbols1003)(VkDisplayModeParametersKHR&&) = &VkDisplayModeParametersKHR::operator=;
extern "C" { void AcidSharp_symbols1004(VkDisplayModeParametersKHR* instance) { instance->~VkDisplayModeParametersKHR(); } }
extern "C" { void AcidSharp_symbols1005(void* instance) { new (instance) VkDisplayModePropertiesKHR(); } }
extern "C" { void AcidSharp_symbols1006(void* instance, const VkDisplayModePropertiesKHR& _0) { new (instance) VkDisplayModePropertiesKHR(_0); } }
VkDisplayModePropertiesKHR& (VkDisplayModePropertiesKHR::*AcidSharp_symbols1007)(const VkDisplayModePropertiesKHR&) = &VkDisplayModePropertiesKHR::operator=;
VkDisplayModePropertiesKHR& (VkDisplayModePropertiesKHR::*AcidSharp_symbols1008)(VkDisplayModePropertiesKHR&&) = &VkDisplayModePropertiesKHR::operator=;
extern "C" { void AcidSharp_symbols1009(VkDisplayModePropertiesKHR* instance) { instance->~VkDisplayModePropertiesKHR(); } }
extern "C" { void AcidSharp_symbols1010(void* instance) { new (instance) VkDisplayModeCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols1011(void* instance, const VkDisplayModeCreateInfoKHR& _0) { new (instance) VkDisplayModeCreateInfoKHR(_0); } }
VkDisplayModeCreateInfoKHR& (VkDisplayModeCreateInfoKHR::*AcidSharp_symbols1012)(const VkDisplayModeCreateInfoKHR&) = &VkDisplayModeCreateInfoKHR::operator=;
VkDisplayModeCreateInfoKHR& (VkDisplayModeCreateInfoKHR::*AcidSharp_symbols1013)(VkDisplayModeCreateInfoKHR&&) = &VkDisplayModeCreateInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1014(VkDisplayModeCreateInfoKHR* instance) { instance->~VkDisplayModeCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols1015(void* instance) { new (instance) VkDisplayPlaneCapabilitiesKHR(); } }
extern "C" { void AcidSharp_symbols1016(void* instance, const VkDisplayPlaneCapabilitiesKHR& _0) { new (instance) VkDisplayPlaneCapabilitiesKHR(_0); } }
VkDisplayPlaneCapabilitiesKHR& (VkDisplayPlaneCapabilitiesKHR::*AcidSharp_symbols1017)(const VkDisplayPlaneCapabilitiesKHR&) = &VkDisplayPlaneCapabilitiesKHR::operator=;
VkDisplayPlaneCapabilitiesKHR& (VkDisplayPlaneCapabilitiesKHR::*AcidSharp_symbols1018)(VkDisplayPlaneCapabilitiesKHR&&) = &VkDisplayPlaneCapabilitiesKHR::operator=;
extern "C" { void AcidSharp_symbols1019(VkDisplayPlaneCapabilitiesKHR* instance) { instance->~VkDisplayPlaneCapabilitiesKHR(); } }
extern "C" { void AcidSharp_symbols1020(void* instance) { new (instance) VkDisplayPlanePropertiesKHR(); } }
extern "C" { void AcidSharp_symbols1021(void* instance, const VkDisplayPlanePropertiesKHR& _0) { new (instance) VkDisplayPlanePropertiesKHR(_0); } }
VkDisplayPlanePropertiesKHR& (VkDisplayPlanePropertiesKHR::*AcidSharp_symbols1022)(const VkDisplayPlanePropertiesKHR&) = &VkDisplayPlanePropertiesKHR::operator=;
VkDisplayPlanePropertiesKHR& (VkDisplayPlanePropertiesKHR::*AcidSharp_symbols1023)(VkDisplayPlanePropertiesKHR&&) = &VkDisplayPlanePropertiesKHR::operator=;
extern "C" { void AcidSharp_symbols1024(VkDisplayPlanePropertiesKHR* instance) { instance->~VkDisplayPlanePropertiesKHR(); } }
extern "C" { void AcidSharp_symbols1025(void* instance) { new (instance) VkDisplaySurfaceCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols1026(void* instance, const VkDisplaySurfaceCreateInfoKHR& _0) { new (instance) VkDisplaySurfaceCreateInfoKHR(_0); } }
VkDisplaySurfaceCreateInfoKHR& (VkDisplaySurfaceCreateInfoKHR::*AcidSharp_symbols1027)(const VkDisplaySurfaceCreateInfoKHR&) = &VkDisplaySurfaceCreateInfoKHR::operator=;
VkDisplaySurfaceCreateInfoKHR& (VkDisplaySurfaceCreateInfoKHR::*AcidSharp_symbols1028)(VkDisplaySurfaceCreateInfoKHR&&) = &VkDisplaySurfaceCreateInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1029(VkDisplaySurfaceCreateInfoKHR* instance) { instance->~VkDisplaySurfaceCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols1030(void* instance) { new (instance) VkDisplayPresentInfoKHR(); } }
extern "C" { void AcidSharp_symbols1031(void* instance, const VkDisplayPresentInfoKHR& _0) { new (instance) VkDisplayPresentInfoKHR(_0); } }
VkDisplayPresentInfoKHR& (VkDisplayPresentInfoKHR::*AcidSharp_symbols1032)(const VkDisplayPresentInfoKHR&) = &VkDisplayPresentInfoKHR::operator=;
VkDisplayPresentInfoKHR& (VkDisplayPresentInfoKHR::*AcidSharp_symbols1033)(VkDisplayPresentInfoKHR&&) = &VkDisplayPresentInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1034(VkDisplayPresentInfoKHR* instance) { instance->~VkDisplayPresentInfoKHR(); } }
extern "C" { void AcidSharp_symbols1035(void* instance) { new (instance) VkImportMemoryFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols1036(void* instance, const VkImportMemoryFdInfoKHR& _0) { new (instance) VkImportMemoryFdInfoKHR(_0); } }
VkImportMemoryFdInfoKHR& (VkImportMemoryFdInfoKHR::*AcidSharp_symbols1037)(const VkImportMemoryFdInfoKHR&) = &VkImportMemoryFdInfoKHR::operator=;
VkImportMemoryFdInfoKHR& (VkImportMemoryFdInfoKHR::*AcidSharp_symbols1038)(VkImportMemoryFdInfoKHR&&) = &VkImportMemoryFdInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1039(VkImportMemoryFdInfoKHR* instance) { instance->~VkImportMemoryFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols1040(void* instance) { new (instance) VkMemoryFdPropertiesKHR(); } }
extern "C" { void AcidSharp_symbols1041(void* instance, const VkMemoryFdPropertiesKHR& _0) { new (instance) VkMemoryFdPropertiesKHR(_0); } }
VkMemoryFdPropertiesKHR& (VkMemoryFdPropertiesKHR::*AcidSharp_symbols1042)(const VkMemoryFdPropertiesKHR&) = &VkMemoryFdPropertiesKHR::operator=;
VkMemoryFdPropertiesKHR& (VkMemoryFdPropertiesKHR::*AcidSharp_symbols1043)(VkMemoryFdPropertiesKHR&&) = &VkMemoryFdPropertiesKHR::operator=;
extern "C" { void AcidSharp_symbols1044(VkMemoryFdPropertiesKHR* instance) { instance->~VkMemoryFdPropertiesKHR(); } }
extern "C" { void AcidSharp_symbols1045(void* instance) { new (instance) VkMemoryGetFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols1046(void* instance, const VkMemoryGetFdInfoKHR& _0) { new (instance) VkMemoryGetFdInfoKHR(_0); } }
VkMemoryGetFdInfoKHR& (VkMemoryGetFdInfoKHR::*AcidSharp_symbols1047)(const VkMemoryGetFdInfoKHR&) = &VkMemoryGetFdInfoKHR::operator=;
VkMemoryGetFdInfoKHR& (VkMemoryGetFdInfoKHR::*AcidSharp_symbols1048)(VkMemoryGetFdInfoKHR&&) = &VkMemoryGetFdInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1049(VkMemoryGetFdInfoKHR* instance) { instance->~VkMemoryGetFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols1050(void* instance) { new (instance) VkImportSemaphoreFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols1051(void* instance, const VkImportSemaphoreFdInfoKHR& _0) { new (instance) VkImportSemaphoreFdInfoKHR(_0); } }
VkImportSemaphoreFdInfoKHR& (VkImportSemaphoreFdInfoKHR::*AcidSharp_symbols1052)(const VkImportSemaphoreFdInfoKHR&) = &VkImportSemaphoreFdInfoKHR::operator=;
VkImportSemaphoreFdInfoKHR& (VkImportSemaphoreFdInfoKHR::*AcidSharp_symbols1053)(VkImportSemaphoreFdInfoKHR&&) = &VkImportSemaphoreFdInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1054(VkImportSemaphoreFdInfoKHR* instance) { instance->~VkImportSemaphoreFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols1055(void* instance) { new (instance) VkSemaphoreGetFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols1056(void* instance, const VkSemaphoreGetFdInfoKHR& _0) { new (instance) VkSemaphoreGetFdInfoKHR(_0); } }
VkSemaphoreGetFdInfoKHR& (VkSemaphoreGetFdInfoKHR::*AcidSharp_symbols1057)(const VkSemaphoreGetFdInfoKHR&) = &VkSemaphoreGetFdInfoKHR::operator=;
VkSemaphoreGetFdInfoKHR& (VkSemaphoreGetFdInfoKHR::*AcidSharp_symbols1058)(VkSemaphoreGetFdInfoKHR&&) = &VkSemaphoreGetFdInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1059(VkSemaphoreGetFdInfoKHR* instance) { instance->~VkSemaphoreGetFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols1060(void* instance) { new (instance) VkPhysicalDevicePushDescriptorPropertiesKHR(); } }
extern "C" { void AcidSharp_symbols1061(void* instance, const VkPhysicalDevicePushDescriptorPropertiesKHR& _0) { new (instance) VkPhysicalDevicePushDescriptorPropertiesKHR(_0); } }
VkPhysicalDevicePushDescriptorPropertiesKHR& (VkPhysicalDevicePushDescriptorPropertiesKHR::*AcidSharp_symbols1062)(const VkPhysicalDevicePushDescriptorPropertiesKHR&) = &VkPhysicalDevicePushDescriptorPropertiesKHR::operator=;
VkPhysicalDevicePushDescriptorPropertiesKHR& (VkPhysicalDevicePushDescriptorPropertiesKHR::*AcidSharp_symbols1063)(VkPhysicalDevicePushDescriptorPropertiesKHR&&) = &VkPhysicalDevicePushDescriptorPropertiesKHR::operator=;
extern "C" { void AcidSharp_symbols1064(VkPhysicalDevicePushDescriptorPropertiesKHR* instance) { instance->~VkPhysicalDevicePushDescriptorPropertiesKHR(); } }
extern "C" { void AcidSharp_symbols1065(void* instance) { new (instance) VkRectLayerKHR(); } }
extern "C" { void AcidSharp_symbols1066(void* instance, const VkRectLayerKHR& _0) { new (instance) VkRectLayerKHR(_0); } }
VkRectLayerKHR& (VkRectLayerKHR::*AcidSharp_symbols1067)(const VkRectLayerKHR&) = &VkRectLayerKHR::operator=;
VkRectLayerKHR& (VkRectLayerKHR::*AcidSharp_symbols1068)(VkRectLayerKHR&&) = &VkRectLayerKHR::operator=;
extern "C" { void AcidSharp_symbols1069(VkRectLayerKHR* instance) { instance->~VkRectLayerKHR(); } }
extern "C" { void AcidSharp_symbols1070(void* instance) { new (instance) VkPresentRegionKHR(); } }
extern "C" { void AcidSharp_symbols1071(void* instance, const VkPresentRegionKHR& _0) { new (instance) VkPresentRegionKHR(_0); } }
VkPresentRegionKHR& (VkPresentRegionKHR::*AcidSharp_symbols1072)(const VkPresentRegionKHR&) = &VkPresentRegionKHR::operator=;
VkPresentRegionKHR& (VkPresentRegionKHR::*AcidSharp_symbols1073)(VkPresentRegionKHR&&) = &VkPresentRegionKHR::operator=;
extern "C" { void AcidSharp_symbols1074(VkPresentRegionKHR* instance) { instance->~VkPresentRegionKHR(); } }
extern "C" { void AcidSharp_symbols1075(void* instance) { new (instance) VkPresentRegionsKHR(); } }
extern "C" { void AcidSharp_symbols1076(void* instance, const VkPresentRegionsKHR& _0) { new (instance) VkPresentRegionsKHR(_0); } }
VkPresentRegionsKHR& (VkPresentRegionsKHR::*AcidSharp_symbols1077)(const VkPresentRegionsKHR&) = &VkPresentRegionsKHR::operator=;
VkPresentRegionsKHR& (VkPresentRegionsKHR::*AcidSharp_symbols1078)(VkPresentRegionsKHR&&) = &VkPresentRegionsKHR::operator=;
extern "C" { void AcidSharp_symbols1079(VkPresentRegionsKHR* instance) { instance->~VkPresentRegionsKHR(); } }
extern "C" { void AcidSharp_symbols1080(void* instance) { new (instance) VkAttachmentDescription2KHR(); } }
extern "C" { void AcidSharp_symbols1081(void* instance, const VkAttachmentDescription2KHR& _0) { new (instance) VkAttachmentDescription2KHR(_0); } }
VkAttachmentDescription2KHR& (VkAttachmentDescription2KHR::*AcidSharp_symbols1082)(const VkAttachmentDescription2KHR&) = &VkAttachmentDescription2KHR::operator=;
VkAttachmentDescription2KHR& (VkAttachmentDescription2KHR::*AcidSharp_symbols1083)(VkAttachmentDescription2KHR&&) = &VkAttachmentDescription2KHR::operator=;
extern "C" { void AcidSharp_symbols1084(VkAttachmentDescription2KHR* instance) { instance->~VkAttachmentDescription2KHR(); } }
extern "C" { void AcidSharp_symbols1085(void* instance) { new (instance) VkAttachmentReference2KHR(); } }
extern "C" { void AcidSharp_symbols1086(void* instance, const VkAttachmentReference2KHR& _0) { new (instance) VkAttachmentReference2KHR(_0); } }
VkAttachmentReference2KHR& (VkAttachmentReference2KHR::*AcidSharp_symbols1087)(const VkAttachmentReference2KHR&) = &VkAttachmentReference2KHR::operator=;
VkAttachmentReference2KHR& (VkAttachmentReference2KHR::*AcidSharp_symbols1088)(VkAttachmentReference2KHR&&) = &VkAttachmentReference2KHR::operator=;
extern "C" { void AcidSharp_symbols1089(VkAttachmentReference2KHR* instance) { instance->~VkAttachmentReference2KHR(); } }
extern "C" { void AcidSharp_symbols1090(void* instance) { new (instance) VkSubpassDescription2KHR(); } }
extern "C" { void AcidSharp_symbols1091(void* instance, const VkSubpassDescription2KHR& _0) { new (instance) VkSubpassDescription2KHR(_0); } }
VkSubpassDescription2KHR& (VkSubpassDescription2KHR::*AcidSharp_symbols1092)(const VkSubpassDescription2KHR&) = &VkSubpassDescription2KHR::operator=;
VkSubpassDescription2KHR& (VkSubpassDescription2KHR::*AcidSharp_symbols1093)(VkSubpassDescription2KHR&&) = &VkSubpassDescription2KHR::operator=;
extern "C" { void AcidSharp_symbols1094(VkSubpassDescription2KHR* instance) { instance->~VkSubpassDescription2KHR(); } }
extern "C" { void AcidSharp_symbols1095(void* instance) { new (instance) VkSubpassDependency2KHR(); } }
extern "C" { void AcidSharp_symbols1096(void* instance, const VkSubpassDependency2KHR& _0) { new (instance) VkSubpassDependency2KHR(_0); } }
VkSubpassDependency2KHR& (VkSubpassDependency2KHR::*AcidSharp_symbols1097)(const VkSubpassDependency2KHR&) = &VkSubpassDependency2KHR::operator=;
VkSubpassDependency2KHR& (VkSubpassDependency2KHR::*AcidSharp_symbols1098)(VkSubpassDependency2KHR&&) = &VkSubpassDependency2KHR::operator=;
extern "C" { void AcidSharp_symbols1099(VkSubpassDependency2KHR* instance) { instance->~VkSubpassDependency2KHR(); } }
extern "C" { void AcidSharp_symbols1100(void* instance) { new (instance) VkRenderPassCreateInfo2KHR(); } }
extern "C" { void AcidSharp_symbols1101(void* instance, const VkRenderPassCreateInfo2KHR& _0) { new (instance) VkRenderPassCreateInfo2KHR(_0); } }
VkRenderPassCreateInfo2KHR& (VkRenderPassCreateInfo2KHR::*AcidSharp_symbols1102)(const VkRenderPassCreateInfo2KHR&) = &VkRenderPassCreateInfo2KHR::operator=;
VkRenderPassCreateInfo2KHR& (VkRenderPassCreateInfo2KHR::*AcidSharp_symbols1103)(VkRenderPassCreateInfo2KHR&&) = &VkRenderPassCreateInfo2KHR::operator=;
extern "C" { void AcidSharp_symbols1104(VkRenderPassCreateInfo2KHR* instance) { instance->~VkRenderPassCreateInfo2KHR(); } }
extern "C" { void AcidSharp_symbols1105(void* instance) { new (instance) VkSubpassBeginInfoKHR(); } }
extern "C" { void AcidSharp_symbols1106(void* instance, const VkSubpassBeginInfoKHR& _0) { new (instance) VkSubpassBeginInfoKHR(_0); } }
VkSubpassBeginInfoKHR& (VkSubpassBeginInfoKHR::*AcidSharp_symbols1107)(const VkSubpassBeginInfoKHR&) = &VkSubpassBeginInfoKHR::operator=;
VkSubpassBeginInfoKHR& (VkSubpassBeginInfoKHR::*AcidSharp_symbols1108)(VkSubpassBeginInfoKHR&&) = &VkSubpassBeginInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1109(VkSubpassBeginInfoKHR* instance) { instance->~VkSubpassBeginInfoKHR(); } }
extern "C" { void AcidSharp_symbols1110(void* instance) { new (instance) VkSubpassEndInfoKHR(); } }
extern "C" { void AcidSharp_symbols1111(void* instance, const VkSubpassEndInfoKHR& _0) { new (instance) VkSubpassEndInfoKHR(_0); } }
VkSubpassEndInfoKHR& (VkSubpassEndInfoKHR::*AcidSharp_symbols1112)(const VkSubpassEndInfoKHR&) = &VkSubpassEndInfoKHR::operator=;
VkSubpassEndInfoKHR& (VkSubpassEndInfoKHR::*AcidSharp_symbols1113)(VkSubpassEndInfoKHR&&) = &VkSubpassEndInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1114(VkSubpassEndInfoKHR* instance) { instance->~VkSubpassEndInfoKHR(); } }
extern "C" { void AcidSharp_symbols1115(void* instance) { new (instance) VkSharedPresentSurfaceCapabilitiesKHR(); } }
extern "C" { void AcidSharp_symbols1116(void* instance, const VkSharedPresentSurfaceCapabilitiesKHR& _0) { new (instance) VkSharedPresentSurfaceCapabilitiesKHR(_0); } }
VkSharedPresentSurfaceCapabilitiesKHR& (VkSharedPresentSurfaceCapabilitiesKHR::*AcidSharp_symbols1117)(const VkSharedPresentSurfaceCapabilitiesKHR&) = &VkSharedPresentSurfaceCapabilitiesKHR::operator=;
VkSharedPresentSurfaceCapabilitiesKHR& (VkSharedPresentSurfaceCapabilitiesKHR::*AcidSharp_symbols1118)(VkSharedPresentSurfaceCapabilitiesKHR&&) = &VkSharedPresentSurfaceCapabilitiesKHR::operator=;
extern "C" { void AcidSharp_symbols1119(VkSharedPresentSurfaceCapabilitiesKHR* instance) { instance->~VkSharedPresentSurfaceCapabilitiesKHR(); } }
extern "C" { void AcidSharp_symbols1120(void* instance) { new (instance) VkImportFenceFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols1121(void* instance, const VkImportFenceFdInfoKHR& _0) { new (instance) VkImportFenceFdInfoKHR(_0); } }
VkImportFenceFdInfoKHR& (VkImportFenceFdInfoKHR::*AcidSharp_symbols1122)(const VkImportFenceFdInfoKHR&) = &VkImportFenceFdInfoKHR::operator=;
VkImportFenceFdInfoKHR& (VkImportFenceFdInfoKHR::*AcidSharp_symbols1123)(VkImportFenceFdInfoKHR&&) = &VkImportFenceFdInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1124(VkImportFenceFdInfoKHR* instance) { instance->~VkImportFenceFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols1125(void* instance) { new (instance) VkFenceGetFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols1126(void* instance, const VkFenceGetFdInfoKHR& _0) { new (instance) VkFenceGetFdInfoKHR(_0); } }
VkFenceGetFdInfoKHR& (VkFenceGetFdInfoKHR::*AcidSharp_symbols1127)(const VkFenceGetFdInfoKHR&) = &VkFenceGetFdInfoKHR::operator=;
VkFenceGetFdInfoKHR& (VkFenceGetFdInfoKHR::*AcidSharp_symbols1128)(VkFenceGetFdInfoKHR&&) = &VkFenceGetFdInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1129(VkFenceGetFdInfoKHR* instance) { instance->~VkFenceGetFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols1130(void* instance) { new (instance) VkPhysicalDeviceSurfaceInfo2KHR(); } }
extern "C" { void AcidSharp_symbols1131(void* instance, const VkPhysicalDeviceSurfaceInfo2KHR& _0) { new (instance) VkPhysicalDeviceSurfaceInfo2KHR(_0); } }
VkPhysicalDeviceSurfaceInfo2KHR& (VkPhysicalDeviceSurfaceInfo2KHR::*AcidSharp_symbols1132)(const VkPhysicalDeviceSurfaceInfo2KHR&) = &VkPhysicalDeviceSurfaceInfo2KHR::operator=;
VkPhysicalDeviceSurfaceInfo2KHR& (VkPhysicalDeviceSurfaceInfo2KHR::*AcidSharp_symbols1133)(VkPhysicalDeviceSurfaceInfo2KHR&&) = &VkPhysicalDeviceSurfaceInfo2KHR::operator=;
extern "C" { void AcidSharp_symbols1134(VkPhysicalDeviceSurfaceInfo2KHR* instance) { instance->~VkPhysicalDeviceSurfaceInfo2KHR(); } }
extern "C" { void AcidSharp_symbols1135(void* instance) { new (instance) VkSurfaceCapabilities2KHR(); } }
extern "C" { void AcidSharp_symbols1136(void* instance, const VkSurfaceCapabilities2KHR& _0) { new (instance) VkSurfaceCapabilities2KHR(_0); } }
VkSurfaceCapabilities2KHR& (VkSurfaceCapabilities2KHR::*AcidSharp_symbols1137)(const VkSurfaceCapabilities2KHR&) = &VkSurfaceCapabilities2KHR::operator=;
VkSurfaceCapabilities2KHR& (VkSurfaceCapabilities2KHR::*AcidSharp_symbols1138)(VkSurfaceCapabilities2KHR&&) = &VkSurfaceCapabilities2KHR::operator=;
extern "C" { void AcidSharp_symbols1139(VkSurfaceCapabilities2KHR* instance) { instance->~VkSurfaceCapabilities2KHR(); } }
extern "C" { void AcidSharp_symbols1140(void* instance) { new (instance) VkSurfaceFormat2KHR(); } }
extern "C" { void AcidSharp_symbols1141(void* instance, const VkSurfaceFormat2KHR& _0) { new (instance) VkSurfaceFormat2KHR(_0); } }
VkSurfaceFormat2KHR& (VkSurfaceFormat2KHR::*AcidSharp_symbols1142)(const VkSurfaceFormat2KHR&) = &VkSurfaceFormat2KHR::operator=;
VkSurfaceFormat2KHR& (VkSurfaceFormat2KHR::*AcidSharp_symbols1143)(VkSurfaceFormat2KHR&&) = &VkSurfaceFormat2KHR::operator=;
extern "C" { void AcidSharp_symbols1144(VkSurfaceFormat2KHR* instance) { instance->~VkSurfaceFormat2KHR(); } }
extern "C" { void AcidSharp_symbols1145(void* instance) { new (instance) VkDisplayProperties2KHR(); } }
extern "C" { void AcidSharp_symbols1146(void* instance, const VkDisplayProperties2KHR& _0) { new (instance) VkDisplayProperties2KHR(_0); } }
VkDisplayProperties2KHR& (VkDisplayProperties2KHR::*AcidSharp_symbols1147)(const VkDisplayProperties2KHR&) = &VkDisplayProperties2KHR::operator=;
VkDisplayProperties2KHR& (VkDisplayProperties2KHR::*AcidSharp_symbols1148)(VkDisplayProperties2KHR&&) = &VkDisplayProperties2KHR::operator=;
extern "C" { void AcidSharp_symbols1149(VkDisplayProperties2KHR* instance) { instance->~VkDisplayProperties2KHR(); } }
extern "C" { void AcidSharp_symbols1150(void* instance) { new (instance) VkDisplayPlaneProperties2KHR(); } }
extern "C" { void AcidSharp_symbols1151(void* instance, const VkDisplayPlaneProperties2KHR& _0) { new (instance) VkDisplayPlaneProperties2KHR(_0); } }
VkDisplayPlaneProperties2KHR& (VkDisplayPlaneProperties2KHR::*AcidSharp_symbols1152)(const VkDisplayPlaneProperties2KHR&) = &VkDisplayPlaneProperties2KHR::operator=;
VkDisplayPlaneProperties2KHR& (VkDisplayPlaneProperties2KHR::*AcidSharp_symbols1153)(VkDisplayPlaneProperties2KHR&&) = &VkDisplayPlaneProperties2KHR::operator=;
extern "C" { void AcidSharp_symbols1154(VkDisplayPlaneProperties2KHR* instance) { instance->~VkDisplayPlaneProperties2KHR(); } }
extern "C" { void AcidSharp_symbols1155(void* instance) { new (instance) VkDisplayModeProperties2KHR(); } }
extern "C" { void AcidSharp_symbols1156(void* instance, const VkDisplayModeProperties2KHR& _0) { new (instance) VkDisplayModeProperties2KHR(_0); } }
VkDisplayModeProperties2KHR& (VkDisplayModeProperties2KHR::*AcidSharp_symbols1157)(const VkDisplayModeProperties2KHR&) = &VkDisplayModeProperties2KHR::operator=;
VkDisplayModeProperties2KHR& (VkDisplayModeProperties2KHR::*AcidSharp_symbols1158)(VkDisplayModeProperties2KHR&&) = &VkDisplayModeProperties2KHR::operator=;
extern "C" { void AcidSharp_symbols1159(VkDisplayModeProperties2KHR* instance) { instance->~VkDisplayModeProperties2KHR(); } }
extern "C" { void AcidSharp_symbols1160(void* instance) { new (instance) VkDisplayPlaneInfo2KHR(); } }
extern "C" { void AcidSharp_symbols1161(void* instance, const VkDisplayPlaneInfo2KHR& _0) { new (instance) VkDisplayPlaneInfo2KHR(_0); } }
VkDisplayPlaneInfo2KHR& (VkDisplayPlaneInfo2KHR::*AcidSharp_symbols1162)(const VkDisplayPlaneInfo2KHR&) = &VkDisplayPlaneInfo2KHR::operator=;
VkDisplayPlaneInfo2KHR& (VkDisplayPlaneInfo2KHR::*AcidSharp_symbols1163)(VkDisplayPlaneInfo2KHR&&) = &VkDisplayPlaneInfo2KHR::operator=;
extern "C" { void AcidSharp_symbols1164(VkDisplayPlaneInfo2KHR* instance) { instance->~VkDisplayPlaneInfo2KHR(); } }
extern "C" { void AcidSharp_symbols1165(void* instance) { new (instance) VkDisplayPlaneCapabilities2KHR(); } }
extern "C" { void AcidSharp_symbols1166(void* instance, const VkDisplayPlaneCapabilities2KHR& _0) { new (instance) VkDisplayPlaneCapabilities2KHR(_0); } }
VkDisplayPlaneCapabilities2KHR& (VkDisplayPlaneCapabilities2KHR::*AcidSharp_symbols1167)(const VkDisplayPlaneCapabilities2KHR&) = &VkDisplayPlaneCapabilities2KHR::operator=;
VkDisplayPlaneCapabilities2KHR& (VkDisplayPlaneCapabilities2KHR::*AcidSharp_symbols1168)(VkDisplayPlaneCapabilities2KHR&&) = &VkDisplayPlaneCapabilities2KHR::operator=;
extern "C" { void AcidSharp_symbols1169(VkDisplayPlaneCapabilities2KHR* instance) { instance->~VkDisplayPlaneCapabilities2KHR(); } }
extern "C" { void AcidSharp_symbols1170(void* instance) { new (instance) VkImageFormatListCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols1171(void* instance, const VkImageFormatListCreateInfoKHR& _0) { new (instance) VkImageFormatListCreateInfoKHR(_0); } }
VkImageFormatListCreateInfoKHR& (VkImageFormatListCreateInfoKHR::*AcidSharp_symbols1172)(const VkImageFormatListCreateInfoKHR&) = &VkImageFormatListCreateInfoKHR::operator=;
VkImageFormatListCreateInfoKHR& (VkImageFormatListCreateInfoKHR::*AcidSharp_symbols1173)(VkImageFormatListCreateInfoKHR&&) = &VkImageFormatListCreateInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1174(VkImageFormatListCreateInfoKHR* instance) { instance->~VkImageFormatListCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols1175(void* instance) { new (instance) VkPhysicalDevice8BitStorageFeaturesKHR(); } }
extern "C" { void AcidSharp_symbols1176(void* instance, const VkPhysicalDevice8BitStorageFeaturesKHR& _0) { new (instance) VkPhysicalDevice8BitStorageFeaturesKHR(_0); } }
VkPhysicalDevice8BitStorageFeaturesKHR& (VkPhysicalDevice8BitStorageFeaturesKHR::*AcidSharp_symbols1177)(const VkPhysicalDevice8BitStorageFeaturesKHR&) = &VkPhysicalDevice8BitStorageFeaturesKHR::operator=;
VkPhysicalDevice8BitStorageFeaturesKHR& (VkPhysicalDevice8BitStorageFeaturesKHR::*AcidSharp_symbols1178)(VkPhysicalDevice8BitStorageFeaturesKHR&&) = &VkPhysicalDevice8BitStorageFeaturesKHR::operator=;
extern "C" { void AcidSharp_symbols1179(VkPhysicalDevice8BitStorageFeaturesKHR* instance) { instance->~VkPhysicalDevice8BitStorageFeaturesKHR(); } }
extern "C" { void AcidSharp_symbols1180(void* instance) { new (instance) VkDebugReportCallbackCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1181(void* instance, const VkDebugReportCallbackCreateInfoEXT& _0) { new (instance) VkDebugReportCallbackCreateInfoEXT(_0); } }
VkDebugReportCallbackCreateInfoEXT& (VkDebugReportCallbackCreateInfoEXT::*AcidSharp_symbols1182)(const VkDebugReportCallbackCreateInfoEXT&) = &VkDebugReportCallbackCreateInfoEXT::operator=;
VkDebugReportCallbackCreateInfoEXT& (VkDebugReportCallbackCreateInfoEXT::*AcidSharp_symbols1183)(VkDebugReportCallbackCreateInfoEXT&&) = &VkDebugReportCallbackCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1184(VkDebugReportCallbackCreateInfoEXT* instance) { instance->~VkDebugReportCallbackCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1185(void* instance) { new (instance) VkPipelineRasterizationStateRasterizationOrderAMD(); } }
extern "C" { void AcidSharp_symbols1186(void* instance, const VkPipelineRasterizationStateRasterizationOrderAMD& _0) { new (instance) VkPipelineRasterizationStateRasterizationOrderAMD(_0); } }
VkPipelineRasterizationStateRasterizationOrderAMD& (VkPipelineRasterizationStateRasterizationOrderAMD::*AcidSharp_symbols1187)(const VkPipelineRasterizationStateRasterizationOrderAMD&) = &VkPipelineRasterizationStateRasterizationOrderAMD::operator=;
VkPipelineRasterizationStateRasterizationOrderAMD& (VkPipelineRasterizationStateRasterizationOrderAMD::*AcidSharp_symbols1188)(VkPipelineRasterizationStateRasterizationOrderAMD&&) = &VkPipelineRasterizationStateRasterizationOrderAMD::operator=;
extern "C" { void AcidSharp_symbols1189(VkPipelineRasterizationStateRasterizationOrderAMD* instance) { instance->~VkPipelineRasterizationStateRasterizationOrderAMD(); } }
extern "C" { void AcidSharp_symbols1190(void* instance) { new (instance) VkDebugMarkerObjectNameInfoEXT(); } }
extern "C" { void AcidSharp_symbols1191(void* instance, const VkDebugMarkerObjectNameInfoEXT& _0) { new (instance) VkDebugMarkerObjectNameInfoEXT(_0); } }
VkDebugMarkerObjectNameInfoEXT& (VkDebugMarkerObjectNameInfoEXT::*AcidSharp_symbols1192)(const VkDebugMarkerObjectNameInfoEXT&) = &VkDebugMarkerObjectNameInfoEXT::operator=;
VkDebugMarkerObjectNameInfoEXT& (VkDebugMarkerObjectNameInfoEXT::*AcidSharp_symbols1193)(VkDebugMarkerObjectNameInfoEXT&&) = &VkDebugMarkerObjectNameInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1194(VkDebugMarkerObjectNameInfoEXT* instance) { instance->~VkDebugMarkerObjectNameInfoEXT(); } }
extern "C" { void AcidSharp_symbols1195(void* instance) { new (instance) VkDebugMarkerObjectTagInfoEXT(); } }
extern "C" { void AcidSharp_symbols1196(void* instance, const VkDebugMarkerObjectTagInfoEXT& _0) { new (instance) VkDebugMarkerObjectTagInfoEXT(_0); } }
VkDebugMarkerObjectTagInfoEXT& (VkDebugMarkerObjectTagInfoEXT::*AcidSharp_symbols1197)(const VkDebugMarkerObjectTagInfoEXT&) = &VkDebugMarkerObjectTagInfoEXT::operator=;
VkDebugMarkerObjectTagInfoEXT& (VkDebugMarkerObjectTagInfoEXT::*AcidSharp_symbols1198)(VkDebugMarkerObjectTagInfoEXT&&) = &VkDebugMarkerObjectTagInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1199(VkDebugMarkerObjectTagInfoEXT* instance) { instance->~VkDebugMarkerObjectTagInfoEXT(); } }
extern "C" { void AcidSharp_symbols1200(void* instance) { new (instance) VkDebugMarkerMarkerInfoEXT(); } }
extern "C" { void AcidSharp_symbols1201(void* instance, const VkDebugMarkerMarkerInfoEXT& _0) { new (instance) VkDebugMarkerMarkerInfoEXT(_0); } }
VkDebugMarkerMarkerInfoEXT& (VkDebugMarkerMarkerInfoEXT::*AcidSharp_symbols1202)(const VkDebugMarkerMarkerInfoEXT&) = &VkDebugMarkerMarkerInfoEXT::operator=;
VkDebugMarkerMarkerInfoEXT& (VkDebugMarkerMarkerInfoEXT::*AcidSharp_symbols1203)(VkDebugMarkerMarkerInfoEXT&&) = &VkDebugMarkerMarkerInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1204(VkDebugMarkerMarkerInfoEXT* instance) { instance->~VkDebugMarkerMarkerInfoEXT(); } }
extern "C" { void AcidSharp_symbols1205(void* instance) { new (instance) VkDedicatedAllocationImageCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1206(void* instance, const VkDedicatedAllocationImageCreateInfoNV& _0) { new (instance) VkDedicatedAllocationImageCreateInfoNV(_0); } }
VkDedicatedAllocationImageCreateInfoNV& (VkDedicatedAllocationImageCreateInfoNV::*AcidSharp_symbols1207)(const VkDedicatedAllocationImageCreateInfoNV&) = &VkDedicatedAllocationImageCreateInfoNV::operator=;
VkDedicatedAllocationImageCreateInfoNV& (VkDedicatedAllocationImageCreateInfoNV::*AcidSharp_symbols1208)(VkDedicatedAllocationImageCreateInfoNV&&) = &VkDedicatedAllocationImageCreateInfoNV::operator=;
extern "C" { void AcidSharp_symbols1209(VkDedicatedAllocationImageCreateInfoNV* instance) { instance->~VkDedicatedAllocationImageCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1210(void* instance) { new (instance) VkDedicatedAllocationBufferCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1211(void* instance, const VkDedicatedAllocationBufferCreateInfoNV& _0) { new (instance) VkDedicatedAllocationBufferCreateInfoNV(_0); } }
VkDedicatedAllocationBufferCreateInfoNV& (VkDedicatedAllocationBufferCreateInfoNV::*AcidSharp_symbols1212)(const VkDedicatedAllocationBufferCreateInfoNV&) = &VkDedicatedAllocationBufferCreateInfoNV::operator=;
VkDedicatedAllocationBufferCreateInfoNV& (VkDedicatedAllocationBufferCreateInfoNV::*AcidSharp_symbols1213)(VkDedicatedAllocationBufferCreateInfoNV&&) = &VkDedicatedAllocationBufferCreateInfoNV::operator=;
extern "C" { void AcidSharp_symbols1214(VkDedicatedAllocationBufferCreateInfoNV* instance) { instance->~VkDedicatedAllocationBufferCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1215(void* instance) { new (instance) VkDedicatedAllocationMemoryAllocateInfoNV(); } }
extern "C" { void AcidSharp_symbols1216(void* instance, const VkDedicatedAllocationMemoryAllocateInfoNV& _0) { new (instance) VkDedicatedAllocationMemoryAllocateInfoNV(_0); } }
VkDedicatedAllocationMemoryAllocateInfoNV& (VkDedicatedAllocationMemoryAllocateInfoNV::*AcidSharp_symbols1217)(const VkDedicatedAllocationMemoryAllocateInfoNV&) = &VkDedicatedAllocationMemoryAllocateInfoNV::operator=;
VkDedicatedAllocationMemoryAllocateInfoNV& (VkDedicatedAllocationMemoryAllocateInfoNV::*AcidSharp_symbols1218)(VkDedicatedAllocationMemoryAllocateInfoNV&&) = &VkDedicatedAllocationMemoryAllocateInfoNV::operator=;
extern "C" { void AcidSharp_symbols1219(VkDedicatedAllocationMemoryAllocateInfoNV* instance) { instance->~VkDedicatedAllocationMemoryAllocateInfoNV(); } }
extern "C" { void AcidSharp_symbols1220(void* instance) { new (instance) VkTextureLODGatherFormatPropertiesAMD(); } }
extern "C" { void AcidSharp_symbols1221(void* instance, const VkTextureLODGatherFormatPropertiesAMD& _0) { new (instance) VkTextureLODGatherFormatPropertiesAMD(_0); } }
VkTextureLODGatherFormatPropertiesAMD& (VkTextureLODGatherFormatPropertiesAMD::*AcidSharp_symbols1222)(const VkTextureLODGatherFormatPropertiesAMD&) = &VkTextureLODGatherFormatPropertiesAMD::operator=;
VkTextureLODGatherFormatPropertiesAMD& (VkTextureLODGatherFormatPropertiesAMD::*AcidSharp_symbols1223)(VkTextureLODGatherFormatPropertiesAMD&&) = &VkTextureLODGatherFormatPropertiesAMD::operator=;
extern "C" { void AcidSharp_symbols1224(VkTextureLODGatherFormatPropertiesAMD* instance) { instance->~VkTextureLODGatherFormatPropertiesAMD(); } }
extern "C" { void AcidSharp_symbols1225(void* instance) { new (instance) VkShaderResourceUsageAMD(); } }
extern "C" { void AcidSharp_symbols1226(void* instance, const VkShaderResourceUsageAMD& _0) { new (instance) VkShaderResourceUsageAMD(_0); } }
VkShaderResourceUsageAMD& (VkShaderResourceUsageAMD::*AcidSharp_symbols1227)(const VkShaderResourceUsageAMD&) = &VkShaderResourceUsageAMD::operator=;
VkShaderResourceUsageAMD& (VkShaderResourceUsageAMD::*AcidSharp_symbols1228)(VkShaderResourceUsageAMD&&) = &VkShaderResourceUsageAMD::operator=;
extern "C" { void AcidSharp_symbols1229(VkShaderResourceUsageAMD* instance) { instance->~VkShaderResourceUsageAMD(); } }
extern "C" { void AcidSharp_symbols1230(void* instance) { new (instance) VkShaderStatisticsInfoAMD(); } }
extern "C" { void AcidSharp_symbols1231(void* instance, const VkShaderStatisticsInfoAMD& _0) { new (instance) VkShaderStatisticsInfoAMD(_0); } }
VkShaderStatisticsInfoAMD& (VkShaderStatisticsInfoAMD::*AcidSharp_symbols1232)(const VkShaderStatisticsInfoAMD&) = &VkShaderStatisticsInfoAMD::operator=;
VkShaderStatisticsInfoAMD& (VkShaderStatisticsInfoAMD::*AcidSharp_symbols1233)(VkShaderStatisticsInfoAMD&&) = &VkShaderStatisticsInfoAMD::operator=;
extern "C" { void AcidSharp_symbols1234(VkShaderStatisticsInfoAMD* instance) { instance->~VkShaderStatisticsInfoAMD(); } }
extern "C" { void AcidSharp_symbols1235(void* instance) { new (instance) VkExternalImageFormatPropertiesNV(); } }
extern "C" { void AcidSharp_symbols1236(void* instance, const VkExternalImageFormatPropertiesNV& _0) { new (instance) VkExternalImageFormatPropertiesNV(_0); } }
VkExternalImageFormatPropertiesNV& (VkExternalImageFormatPropertiesNV::*AcidSharp_symbols1237)(const VkExternalImageFormatPropertiesNV&) = &VkExternalImageFormatPropertiesNV::operator=;
VkExternalImageFormatPropertiesNV& (VkExternalImageFormatPropertiesNV::*AcidSharp_symbols1238)(VkExternalImageFormatPropertiesNV&&) = &VkExternalImageFormatPropertiesNV::operator=;
extern "C" { void AcidSharp_symbols1239(VkExternalImageFormatPropertiesNV* instance) { instance->~VkExternalImageFormatPropertiesNV(); } }
extern "C" { void AcidSharp_symbols1240(void* instance) { new (instance) VkExternalMemoryImageCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1241(void* instance, const VkExternalMemoryImageCreateInfoNV& _0) { new (instance) VkExternalMemoryImageCreateInfoNV(_0); } }
VkExternalMemoryImageCreateInfoNV& (VkExternalMemoryImageCreateInfoNV::*AcidSharp_symbols1242)(const VkExternalMemoryImageCreateInfoNV&) = &VkExternalMemoryImageCreateInfoNV::operator=;
VkExternalMemoryImageCreateInfoNV& (VkExternalMemoryImageCreateInfoNV::*AcidSharp_symbols1243)(VkExternalMemoryImageCreateInfoNV&&) = &VkExternalMemoryImageCreateInfoNV::operator=;
extern "C" { void AcidSharp_symbols1244(VkExternalMemoryImageCreateInfoNV* instance) { instance->~VkExternalMemoryImageCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1245(void* instance) { new (instance) VkExportMemoryAllocateInfoNV(); } }
extern "C" { void AcidSharp_symbols1246(void* instance, const VkExportMemoryAllocateInfoNV& _0) { new (instance) VkExportMemoryAllocateInfoNV(_0); } }
VkExportMemoryAllocateInfoNV& (VkExportMemoryAllocateInfoNV::*AcidSharp_symbols1247)(const VkExportMemoryAllocateInfoNV&) = &VkExportMemoryAllocateInfoNV::operator=;
VkExportMemoryAllocateInfoNV& (VkExportMemoryAllocateInfoNV::*AcidSharp_symbols1248)(VkExportMemoryAllocateInfoNV&&) = &VkExportMemoryAllocateInfoNV::operator=;
extern "C" { void AcidSharp_symbols1249(VkExportMemoryAllocateInfoNV* instance) { instance->~VkExportMemoryAllocateInfoNV(); } }
extern "C" { void AcidSharp_symbols1250(void* instance) { new (instance) VkValidationFlagsEXT(); } }
extern "C" { void AcidSharp_symbols1251(void* instance, const VkValidationFlagsEXT& _0) { new (instance) VkValidationFlagsEXT(_0); } }
VkValidationFlagsEXT& (VkValidationFlagsEXT::*AcidSharp_symbols1252)(const VkValidationFlagsEXT&) = &VkValidationFlagsEXT::operator=;
VkValidationFlagsEXT& (VkValidationFlagsEXT::*AcidSharp_symbols1253)(VkValidationFlagsEXT&&) = &VkValidationFlagsEXT::operator=;
extern "C" { void AcidSharp_symbols1254(VkValidationFlagsEXT* instance) { instance->~VkValidationFlagsEXT(); } }
extern "C" { void AcidSharp_symbols1255(void* instance) { new (instance) VkConditionalRenderingBeginInfoEXT(); } }
extern "C" { void AcidSharp_symbols1256(void* instance, const VkConditionalRenderingBeginInfoEXT& _0) { new (instance) VkConditionalRenderingBeginInfoEXT(_0); } }
VkConditionalRenderingBeginInfoEXT& (VkConditionalRenderingBeginInfoEXT::*AcidSharp_symbols1257)(const VkConditionalRenderingBeginInfoEXT&) = &VkConditionalRenderingBeginInfoEXT::operator=;
VkConditionalRenderingBeginInfoEXT& (VkConditionalRenderingBeginInfoEXT::*AcidSharp_symbols1258)(VkConditionalRenderingBeginInfoEXT&&) = &VkConditionalRenderingBeginInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1259(VkConditionalRenderingBeginInfoEXT* instance) { instance->~VkConditionalRenderingBeginInfoEXT(); } }
extern "C" { void AcidSharp_symbols1260(void* instance) { new (instance) VkPhysicalDeviceConditionalRenderingFeaturesEXT(); } }
extern "C" { void AcidSharp_symbols1261(void* instance, const VkPhysicalDeviceConditionalRenderingFeaturesEXT& _0) { new (instance) VkPhysicalDeviceConditionalRenderingFeaturesEXT(_0); } }
VkPhysicalDeviceConditionalRenderingFeaturesEXT& (VkPhysicalDeviceConditionalRenderingFeaturesEXT::*AcidSharp_symbols1262)(const VkPhysicalDeviceConditionalRenderingFeaturesEXT&) = &VkPhysicalDeviceConditionalRenderingFeaturesEXT::operator=;
VkPhysicalDeviceConditionalRenderingFeaturesEXT& (VkPhysicalDeviceConditionalRenderingFeaturesEXT::*AcidSharp_symbols1263)(VkPhysicalDeviceConditionalRenderingFeaturesEXT&&) = &VkPhysicalDeviceConditionalRenderingFeaturesEXT::operator=;
extern "C" { void AcidSharp_symbols1264(VkPhysicalDeviceConditionalRenderingFeaturesEXT* instance) { instance->~VkPhysicalDeviceConditionalRenderingFeaturesEXT(); } }
extern "C" { void AcidSharp_symbols1265(void* instance) { new (instance) VkCommandBufferInheritanceConditionalRenderingInfoEXT(); } }
extern "C" { void AcidSharp_symbols1266(void* instance, const VkCommandBufferInheritanceConditionalRenderingInfoEXT& _0) { new (instance) VkCommandBufferInheritanceConditionalRenderingInfoEXT(_0); } }
VkCommandBufferInheritanceConditionalRenderingInfoEXT& (VkCommandBufferInheritanceConditionalRenderingInfoEXT::*AcidSharp_symbols1267)(const VkCommandBufferInheritanceConditionalRenderingInfoEXT&) = &VkCommandBufferInheritanceConditionalRenderingInfoEXT::operator=;
VkCommandBufferInheritanceConditionalRenderingInfoEXT& (VkCommandBufferInheritanceConditionalRenderingInfoEXT::*AcidSharp_symbols1268)(VkCommandBufferInheritanceConditionalRenderingInfoEXT&&) = &VkCommandBufferInheritanceConditionalRenderingInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1269(VkCommandBufferInheritanceConditionalRenderingInfoEXT* instance) { instance->~VkCommandBufferInheritanceConditionalRenderingInfoEXT(); } }
extern "C" { void AcidSharp_symbols1270(void* instance) { new (instance) VkDeviceGeneratedCommandsFeaturesNVX(); } }
extern "C" { void AcidSharp_symbols1271(void* instance, const VkDeviceGeneratedCommandsFeaturesNVX& _0) { new (instance) VkDeviceGeneratedCommandsFeaturesNVX(_0); } }
VkDeviceGeneratedCommandsFeaturesNVX& (VkDeviceGeneratedCommandsFeaturesNVX::*AcidSharp_symbols1272)(const VkDeviceGeneratedCommandsFeaturesNVX&) = &VkDeviceGeneratedCommandsFeaturesNVX::operator=;
VkDeviceGeneratedCommandsFeaturesNVX& (VkDeviceGeneratedCommandsFeaturesNVX::*AcidSharp_symbols1273)(VkDeviceGeneratedCommandsFeaturesNVX&&) = &VkDeviceGeneratedCommandsFeaturesNVX::operator=;
extern "C" { void AcidSharp_symbols1274(VkDeviceGeneratedCommandsFeaturesNVX* instance) { instance->~VkDeviceGeneratedCommandsFeaturesNVX(); } }
extern "C" { void AcidSharp_symbols1275(void* instance) { new (instance) VkDeviceGeneratedCommandsLimitsNVX(); } }
extern "C" { void AcidSharp_symbols1276(void* instance, const VkDeviceGeneratedCommandsLimitsNVX& _0) { new (instance) VkDeviceGeneratedCommandsLimitsNVX(_0); } }
VkDeviceGeneratedCommandsLimitsNVX& (VkDeviceGeneratedCommandsLimitsNVX::*AcidSharp_symbols1277)(const VkDeviceGeneratedCommandsLimitsNVX&) = &VkDeviceGeneratedCommandsLimitsNVX::operator=;
VkDeviceGeneratedCommandsLimitsNVX& (VkDeviceGeneratedCommandsLimitsNVX::*AcidSharp_symbols1278)(VkDeviceGeneratedCommandsLimitsNVX&&) = &VkDeviceGeneratedCommandsLimitsNVX::operator=;
extern "C" { void AcidSharp_symbols1279(VkDeviceGeneratedCommandsLimitsNVX* instance) { instance->~VkDeviceGeneratedCommandsLimitsNVX(); } }
extern "C" { void AcidSharp_symbols1280(void* instance) { new (instance) VkIndirectCommandsTokenNVX(); } }
extern "C" { void AcidSharp_symbols1281(void* instance, const VkIndirectCommandsTokenNVX& _0) { new (instance) VkIndirectCommandsTokenNVX(_0); } }
VkIndirectCommandsTokenNVX& (VkIndirectCommandsTokenNVX::*AcidSharp_symbols1282)(const VkIndirectCommandsTokenNVX&) = &VkIndirectCommandsTokenNVX::operator=;
VkIndirectCommandsTokenNVX& (VkIndirectCommandsTokenNVX::*AcidSharp_symbols1283)(VkIndirectCommandsTokenNVX&&) = &VkIndirectCommandsTokenNVX::operator=;
extern "C" { void AcidSharp_symbols1284(VkIndirectCommandsTokenNVX* instance) { instance->~VkIndirectCommandsTokenNVX(); } }
extern "C" { void AcidSharp_symbols1285(void* instance) { new (instance) VkIndirectCommandsLayoutTokenNVX(); } }
extern "C" { void AcidSharp_symbols1286(void* instance, const VkIndirectCommandsLayoutTokenNVX& _0) { new (instance) VkIndirectCommandsLayoutTokenNVX(_0); } }
VkIndirectCommandsLayoutTokenNVX& (VkIndirectCommandsLayoutTokenNVX::*AcidSharp_symbols1287)(const VkIndirectCommandsLayoutTokenNVX&) = &VkIndirectCommandsLayoutTokenNVX::operator=;
VkIndirectCommandsLayoutTokenNVX& (VkIndirectCommandsLayoutTokenNVX::*AcidSharp_symbols1288)(VkIndirectCommandsLayoutTokenNVX&&) = &VkIndirectCommandsLayoutTokenNVX::operator=;
extern "C" { void AcidSharp_symbols1289(VkIndirectCommandsLayoutTokenNVX* instance) { instance->~VkIndirectCommandsLayoutTokenNVX(); } }
extern "C" { void AcidSharp_symbols1290(void* instance) { new (instance) VkIndirectCommandsLayoutCreateInfoNVX(); } }
extern "C" { void AcidSharp_symbols1291(void* instance, const VkIndirectCommandsLayoutCreateInfoNVX& _0) { new (instance) VkIndirectCommandsLayoutCreateInfoNVX(_0); } }
VkIndirectCommandsLayoutCreateInfoNVX& (VkIndirectCommandsLayoutCreateInfoNVX::*AcidSharp_symbols1292)(const VkIndirectCommandsLayoutCreateInfoNVX&) = &VkIndirectCommandsLayoutCreateInfoNVX::operator=;
VkIndirectCommandsLayoutCreateInfoNVX& (VkIndirectCommandsLayoutCreateInfoNVX::*AcidSharp_symbols1293)(VkIndirectCommandsLayoutCreateInfoNVX&&) = &VkIndirectCommandsLayoutCreateInfoNVX::operator=;
extern "C" { void AcidSharp_symbols1294(VkIndirectCommandsLayoutCreateInfoNVX* instance) { instance->~VkIndirectCommandsLayoutCreateInfoNVX(); } }
extern "C" { void AcidSharp_symbols1295(void* instance) { new (instance) VkCmdProcessCommandsInfoNVX(); } }
extern "C" { void AcidSharp_symbols1296(void* instance, const VkCmdProcessCommandsInfoNVX& _0) { new (instance) VkCmdProcessCommandsInfoNVX(_0); } }
VkCmdProcessCommandsInfoNVX& (VkCmdProcessCommandsInfoNVX::*AcidSharp_symbols1297)(const VkCmdProcessCommandsInfoNVX&) = &VkCmdProcessCommandsInfoNVX::operator=;
VkCmdProcessCommandsInfoNVX& (VkCmdProcessCommandsInfoNVX::*AcidSharp_symbols1298)(VkCmdProcessCommandsInfoNVX&&) = &VkCmdProcessCommandsInfoNVX::operator=;
extern "C" { void AcidSharp_symbols1299(VkCmdProcessCommandsInfoNVX* instance) { instance->~VkCmdProcessCommandsInfoNVX(); } }
extern "C" { void AcidSharp_symbols1300(void* instance) { new (instance) VkCmdReserveSpaceForCommandsInfoNVX(); } }
extern "C" { void AcidSharp_symbols1301(void* instance, const VkCmdReserveSpaceForCommandsInfoNVX& _0) { new (instance) VkCmdReserveSpaceForCommandsInfoNVX(_0); } }
VkCmdReserveSpaceForCommandsInfoNVX& (VkCmdReserveSpaceForCommandsInfoNVX::*AcidSharp_symbols1302)(const VkCmdReserveSpaceForCommandsInfoNVX&) = &VkCmdReserveSpaceForCommandsInfoNVX::operator=;
VkCmdReserveSpaceForCommandsInfoNVX& (VkCmdReserveSpaceForCommandsInfoNVX::*AcidSharp_symbols1303)(VkCmdReserveSpaceForCommandsInfoNVX&&) = &VkCmdReserveSpaceForCommandsInfoNVX::operator=;
extern "C" { void AcidSharp_symbols1304(VkCmdReserveSpaceForCommandsInfoNVX* instance) { instance->~VkCmdReserveSpaceForCommandsInfoNVX(); } }
extern "C" { void AcidSharp_symbols1305(void* instance) { new (instance) VkObjectTableCreateInfoNVX(); } }
extern "C" { void AcidSharp_symbols1306(void* instance, const VkObjectTableCreateInfoNVX& _0) { new (instance) VkObjectTableCreateInfoNVX(_0); } }
VkObjectTableCreateInfoNVX& (VkObjectTableCreateInfoNVX::*AcidSharp_symbols1307)(const VkObjectTableCreateInfoNVX&) = &VkObjectTableCreateInfoNVX::operator=;
VkObjectTableCreateInfoNVX& (VkObjectTableCreateInfoNVX::*AcidSharp_symbols1308)(VkObjectTableCreateInfoNVX&&) = &VkObjectTableCreateInfoNVX::operator=;
extern "C" { void AcidSharp_symbols1309(VkObjectTableCreateInfoNVX* instance) { instance->~VkObjectTableCreateInfoNVX(); } }
extern "C" { void AcidSharp_symbols1310(void* instance) { new (instance) VkObjectTableEntryNVX(); } }
extern "C" { void AcidSharp_symbols1311(void* instance, const VkObjectTableEntryNVX& _0) { new (instance) VkObjectTableEntryNVX(_0); } }
VkObjectTableEntryNVX& (VkObjectTableEntryNVX::*AcidSharp_symbols1312)(const VkObjectTableEntryNVX&) = &VkObjectTableEntryNVX::operator=;
VkObjectTableEntryNVX& (VkObjectTableEntryNVX::*AcidSharp_symbols1313)(VkObjectTableEntryNVX&&) = &VkObjectTableEntryNVX::operator=;
extern "C" { void AcidSharp_symbols1314(VkObjectTableEntryNVX* instance) { instance->~VkObjectTableEntryNVX(); } }
extern "C" { void AcidSharp_symbols1315(void* instance) { new (instance) VkObjectTablePipelineEntryNVX(); } }
extern "C" { void AcidSharp_symbols1316(void* instance, const VkObjectTablePipelineEntryNVX& _0) { new (instance) VkObjectTablePipelineEntryNVX(_0); } }
VkObjectTablePipelineEntryNVX& (VkObjectTablePipelineEntryNVX::*AcidSharp_symbols1317)(const VkObjectTablePipelineEntryNVX&) = &VkObjectTablePipelineEntryNVX::operator=;
VkObjectTablePipelineEntryNVX& (VkObjectTablePipelineEntryNVX::*AcidSharp_symbols1318)(VkObjectTablePipelineEntryNVX&&) = &VkObjectTablePipelineEntryNVX::operator=;
extern "C" { void AcidSharp_symbols1319(VkObjectTablePipelineEntryNVX* instance) { instance->~VkObjectTablePipelineEntryNVX(); } }
extern "C" { void AcidSharp_symbols1320(void* instance) { new (instance) VkObjectTableDescriptorSetEntryNVX(); } }
extern "C" { void AcidSharp_symbols1321(void* instance, const VkObjectTableDescriptorSetEntryNVX& _0) { new (instance) VkObjectTableDescriptorSetEntryNVX(_0); } }
VkObjectTableDescriptorSetEntryNVX& (VkObjectTableDescriptorSetEntryNVX::*AcidSharp_symbols1322)(const VkObjectTableDescriptorSetEntryNVX&) = &VkObjectTableDescriptorSetEntryNVX::operator=;
VkObjectTableDescriptorSetEntryNVX& (VkObjectTableDescriptorSetEntryNVX::*AcidSharp_symbols1323)(VkObjectTableDescriptorSetEntryNVX&&) = &VkObjectTableDescriptorSetEntryNVX::operator=;
extern "C" { void AcidSharp_symbols1324(VkObjectTableDescriptorSetEntryNVX* instance) { instance->~VkObjectTableDescriptorSetEntryNVX(); } }
extern "C" { void AcidSharp_symbols1325(void* instance) { new (instance) VkObjectTableVertexBufferEntryNVX(); } }
extern "C" { void AcidSharp_symbols1326(void* instance, const VkObjectTableVertexBufferEntryNVX& _0) { new (instance) VkObjectTableVertexBufferEntryNVX(_0); } }
VkObjectTableVertexBufferEntryNVX& (VkObjectTableVertexBufferEntryNVX::*AcidSharp_symbols1327)(const VkObjectTableVertexBufferEntryNVX&) = &VkObjectTableVertexBufferEntryNVX::operator=;
VkObjectTableVertexBufferEntryNVX& (VkObjectTableVertexBufferEntryNVX::*AcidSharp_symbols1328)(VkObjectTableVertexBufferEntryNVX&&) = &VkObjectTableVertexBufferEntryNVX::operator=;
extern "C" { void AcidSharp_symbols1329(VkObjectTableVertexBufferEntryNVX* instance) { instance->~VkObjectTableVertexBufferEntryNVX(); } }
extern "C" { void AcidSharp_symbols1330(void* instance) { new (instance) VkObjectTableIndexBufferEntryNVX(); } }
extern "C" { void AcidSharp_symbols1331(void* instance, const VkObjectTableIndexBufferEntryNVX& _0) { new (instance) VkObjectTableIndexBufferEntryNVX(_0); } }
VkObjectTableIndexBufferEntryNVX& (VkObjectTableIndexBufferEntryNVX::*AcidSharp_symbols1332)(const VkObjectTableIndexBufferEntryNVX&) = &VkObjectTableIndexBufferEntryNVX::operator=;
VkObjectTableIndexBufferEntryNVX& (VkObjectTableIndexBufferEntryNVX::*AcidSharp_symbols1333)(VkObjectTableIndexBufferEntryNVX&&) = &VkObjectTableIndexBufferEntryNVX::operator=;
extern "C" { void AcidSharp_symbols1334(VkObjectTableIndexBufferEntryNVX* instance) { instance->~VkObjectTableIndexBufferEntryNVX(); } }
extern "C" { void AcidSharp_symbols1335(void* instance) { new (instance) VkObjectTablePushConstantEntryNVX(); } }
extern "C" { void AcidSharp_symbols1336(void* instance, const VkObjectTablePushConstantEntryNVX& _0) { new (instance) VkObjectTablePushConstantEntryNVX(_0); } }
VkObjectTablePushConstantEntryNVX& (VkObjectTablePushConstantEntryNVX::*AcidSharp_symbols1337)(const VkObjectTablePushConstantEntryNVX&) = &VkObjectTablePushConstantEntryNVX::operator=;
VkObjectTablePushConstantEntryNVX& (VkObjectTablePushConstantEntryNVX::*AcidSharp_symbols1338)(VkObjectTablePushConstantEntryNVX&&) = &VkObjectTablePushConstantEntryNVX::operator=;
extern "C" { void AcidSharp_symbols1339(VkObjectTablePushConstantEntryNVX* instance) { instance->~VkObjectTablePushConstantEntryNVX(); } }
extern "C" { void AcidSharp_symbols1340(void* instance) { new (instance) VkViewportWScalingNV(); } }
extern "C" { void AcidSharp_symbols1341(void* instance, const VkViewportWScalingNV& _0) { new (instance) VkViewportWScalingNV(_0); } }
VkViewportWScalingNV& (VkViewportWScalingNV::*AcidSharp_symbols1342)(const VkViewportWScalingNV&) = &VkViewportWScalingNV::operator=;
VkViewportWScalingNV& (VkViewportWScalingNV::*AcidSharp_symbols1343)(VkViewportWScalingNV&&) = &VkViewportWScalingNV::operator=;
extern "C" { void AcidSharp_symbols1344(VkViewportWScalingNV* instance) { instance->~VkViewportWScalingNV(); } }
extern "C" { void AcidSharp_symbols1345(void* instance) { new (instance) VkPipelineViewportWScalingStateCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1346(void* instance, const VkPipelineViewportWScalingStateCreateInfoNV& _0) { new (instance) VkPipelineViewportWScalingStateCreateInfoNV(_0); } }
VkPipelineViewportWScalingStateCreateInfoNV& (VkPipelineViewportWScalingStateCreateInfoNV::*AcidSharp_symbols1347)(const VkPipelineViewportWScalingStateCreateInfoNV&) = &VkPipelineViewportWScalingStateCreateInfoNV::operator=;
VkPipelineViewportWScalingStateCreateInfoNV& (VkPipelineViewportWScalingStateCreateInfoNV::*AcidSharp_symbols1348)(VkPipelineViewportWScalingStateCreateInfoNV&&) = &VkPipelineViewportWScalingStateCreateInfoNV::operator=;
extern "C" { void AcidSharp_symbols1349(VkPipelineViewportWScalingStateCreateInfoNV* instance) { instance->~VkPipelineViewportWScalingStateCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1350(void* instance) { new (instance) VkSurfaceCapabilities2EXT(); } }
extern "C" { void AcidSharp_symbols1351(void* instance, const VkSurfaceCapabilities2EXT& _0) { new (instance) VkSurfaceCapabilities2EXT(_0); } }
VkSurfaceCapabilities2EXT& (VkSurfaceCapabilities2EXT::*AcidSharp_symbols1352)(const VkSurfaceCapabilities2EXT&) = &VkSurfaceCapabilities2EXT::operator=;
VkSurfaceCapabilities2EXT& (VkSurfaceCapabilities2EXT::*AcidSharp_symbols1353)(VkSurfaceCapabilities2EXT&&) = &VkSurfaceCapabilities2EXT::operator=;
extern "C" { void AcidSharp_symbols1354(VkSurfaceCapabilities2EXT* instance) { instance->~VkSurfaceCapabilities2EXT(); } }
extern "C" { void AcidSharp_symbols1355(void* instance) { new (instance) VkDisplayPowerInfoEXT(); } }
extern "C" { void AcidSharp_symbols1356(void* instance, const VkDisplayPowerInfoEXT& _0) { new (instance) VkDisplayPowerInfoEXT(_0); } }
VkDisplayPowerInfoEXT& (VkDisplayPowerInfoEXT::*AcidSharp_symbols1357)(const VkDisplayPowerInfoEXT&) = &VkDisplayPowerInfoEXT::operator=;
VkDisplayPowerInfoEXT& (VkDisplayPowerInfoEXT::*AcidSharp_symbols1358)(VkDisplayPowerInfoEXT&&) = &VkDisplayPowerInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1359(VkDisplayPowerInfoEXT* instance) { instance->~VkDisplayPowerInfoEXT(); } }
extern "C" { void AcidSharp_symbols1360(void* instance) { new (instance) VkDeviceEventInfoEXT(); } }
extern "C" { void AcidSharp_symbols1361(void* instance, const VkDeviceEventInfoEXT& _0) { new (instance) VkDeviceEventInfoEXT(_0); } }
VkDeviceEventInfoEXT& (VkDeviceEventInfoEXT::*AcidSharp_symbols1362)(const VkDeviceEventInfoEXT&) = &VkDeviceEventInfoEXT::operator=;
VkDeviceEventInfoEXT& (VkDeviceEventInfoEXT::*AcidSharp_symbols1363)(VkDeviceEventInfoEXT&&) = &VkDeviceEventInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1364(VkDeviceEventInfoEXT* instance) { instance->~VkDeviceEventInfoEXT(); } }
extern "C" { void AcidSharp_symbols1365(void* instance) { new (instance) VkDisplayEventInfoEXT(); } }
extern "C" { void AcidSharp_symbols1366(void* instance, const VkDisplayEventInfoEXT& _0) { new (instance) VkDisplayEventInfoEXT(_0); } }
VkDisplayEventInfoEXT& (VkDisplayEventInfoEXT::*AcidSharp_symbols1367)(const VkDisplayEventInfoEXT&) = &VkDisplayEventInfoEXT::operator=;
VkDisplayEventInfoEXT& (VkDisplayEventInfoEXT::*AcidSharp_symbols1368)(VkDisplayEventInfoEXT&&) = &VkDisplayEventInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1369(VkDisplayEventInfoEXT* instance) { instance->~VkDisplayEventInfoEXT(); } }
extern "C" { void AcidSharp_symbols1370(void* instance) { new (instance) VkSwapchainCounterCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1371(void* instance, const VkSwapchainCounterCreateInfoEXT& _0) { new (instance) VkSwapchainCounterCreateInfoEXT(_0); } }
VkSwapchainCounterCreateInfoEXT& (VkSwapchainCounterCreateInfoEXT::*AcidSharp_symbols1372)(const VkSwapchainCounterCreateInfoEXT&) = &VkSwapchainCounterCreateInfoEXT::operator=;
VkSwapchainCounterCreateInfoEXT& (VkSwapchainCounterCreateInfoEXT::*AcidSharp_symbols1373)(VkSwapchainCounterCreateInfoEXT&&) = &VkSwapchainCounterCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1374(VkSwapchainCounterCreateInfoEXT* instance) { instance->~VkSwapchainCounterCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1375(void* instance) { new (instance) VkRefreshCycleDurationGOOGLE(); } }
extern "C" { void AcidSharp_symbols1376(void* instance, const VkRefreshCycleDurationGOOGLE& _0) { new (instance) VkRefreshCycleDurationGOOGLE(_0); } }
VkRefreshCycleDurationGOOGLE& (VkRefreshCycleDurationGOOGLE::*AcidSharp_symbols1377)(const VkRefreshCycleDurationGOOGLE&) = &VkRefreshCycleDurationGOOGLE::operator=;
VkRefreshCycleDurationGOOGLE& (VkRefreshCycleDurationGOOGLE::*AcidSharp_symbols1378)(VkRefreshCycleDurationGOOGLE&&) = &VkRefreshCycleDurationGOOGLE::operator=;
extern "C" { void AcidSharp_symbols1379(VkRefreshCycleDurationGOOGLE* instance) { instance->~VkRefreshCycleDurationGOOGLE(); } }
extern "C" { void AcidSharp_symbols1380(void* instance) { new (instance) VkPastPresentationTimingGOOGLE(); } }
extern "C" { void AcidSharp_symbols1381(void* instance, const VkPastPresentationTimingGOOGLE& _0) { new (instance) VkPastPresentationTimingGOOGLE(_0); } }
VkPastPresentationTimingGOOGLE& (VkPastPresentationTimingGOOGLE::*AcidSharp_symbols1382)(const VkPastPresentationTimingGOOGLE&) = &VkPastPresentationTimingGOOGLE::operator=;
VkPastPresentationTimingGOOGLE& (VkPastPresentationTimingGOOGLE::*AcidSharp_symbols1383)(VkPastPresentationTimingGOOGLE&&) = &VkPastPresentationTimingGOOGLE::operator=;
extern "C" { void AcidSharp_symbols1384(VkPastPresentationTimingGOOGLE* instance) { instance->~VkPastPresentationTimingGOOGLE(); } }
extern "C" { void AcidSharp_symbols1385(void* instance) { new (instance) VkPresentTimeGOOGLE(); } }
extern "C" { void AcidSharp_symbols1386(void* instance, const VkPresentTimeGOOGLE& _0) { new (instance) VkPresentTimeGOOGLE(_0); } }
VkPresentTimeGOOGLE& (VkPresentTimeGOOGLE::*AcidSharp_symbols1387)(const VkPresentTimeGOOGLE&) = &VkPresentTimeGOOGLE::operator=;
VkPresentTimeGOOGLE& (VkPresentTimeGOOGLE::*AcidSharp_symbols1388)(VkPresentTimeGOOGLE&&) = &VkPresentTimeGOOGLE::operator=;
extern "C" { void AcidSharp_symbols1389(VkPresentTimeGOOGLE* instance) { instance->~VkPresentTimeGOOGLE(); } }
extern "C" { void AcidSharp_symbols1390(void* instance) { new (instance) VkPresentTimesInfoGOOGLE(); } }
extern "C" { void AcidSharp_symbols1391(void* instance, const VkPresentTimesInfoGOOGLE& _0) { new (instance) VkPresentTimesInfoGOOGLE(_0); } }
VkPresentTimesInfoGOOGLE& (VkPresentTimesInfoGOOGLE::*AcidSharp_symbols1392)(const VkPresentTimesInfoGOOGLE&) = &VkPresentTimesInfoGOOGLE::operator=;
VkPresentTimesInfoGOOGLE& (VkPresentTimesInfoGOOGLE::*AcidSharp_symbols1393)(VkPresentTimesInfoGOOGLE&&) = &VkPresentTimesInfoGOOGLE::operator=;
extern "C" { void AcidSharp_symbols1394(VkPresentTimesInfoGOOGLE* instance) { instance->~VkPresentTimesInfoGOOGLE(); } }
extern "C" { void AcidSharp_symbols1395(void* instance) { new (instance) VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(); } }
extern "C" { void AcidSharp_symbols1396(void* instance, const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& _0) { new (instance) VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(_0); } }
VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& (VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::*AcidSharp_symbols1397)(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX&) = &VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::operator=;
VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& (VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::*AcidSharp_symbols1398)(VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX&&) = &VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::operator=;
extern "C" { void AcidSharp_symbols1399(VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX* instance) { instance->~VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(); } }
extern "C" { void AcidSharp_symbols1400(void* instance) { new (instance) VkViewportSwizzleNV(); } }
extern "C" { void AcidSharp_symbols1401(void* instance, const VkViewportSwizzleNV& _0) { new (instance) VkViewportSwizzleNV(_0); } }
VkViewportSwizzleNV& (VkViewportSwizzleNV::*AcidSharp_symbols1402)(const VkViewportSwizzleNV&) = &VkViewportSwizzleNV::operator=;
VkViewportSwizzleNV& (VkViewportSwizzleNV::*AcidSharp_symbols1403)(VkViewportSwizzleNV&&) = &VkViewportSwizzleNV::operator=;
extern "C" { void AcidSharp_symbols1404(VkViewportSwizzleNV* instance) { instance->~VkViewportSwizzleNV(); } }
extern "C" { void AcidSharp_symbols1405(void* instance) { new (instance) VkPipelineViewportSwizzleStateCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1406(void* instance, const VkPipelineViewportSwizzleStateCreateInfoNV& _0) { new (instance) VkPipelineViewportSwizzleStateCreateInfoNV(_0); } }
VkPipelineViewportSwizzleStateCreateInfoNV& (VkPipelineViewportSwizzleStateCreateInfoNV::*AcidSharp_symbols1407)(const VkPipelineViewportSwizzleStateCreateInfoNV&) = &VkPipelineViewportSwizzleStateCreateInfoNV::operator=;
VkPipelineViewportSwizzleStateCreateInfoNV& (VkPipelineViewportSwizzleStateCreateInfoNV::*AcidSharp_symbols1408)(VkPipelineViewportSwizzleStateCreateInfoNV&&) = &VkPipelineViewportSwizzleStateCreateInfoNV::operator=;
extern "C" { void AcidSharp_symbols1409(VkPipelineViewportSwizzleStateCreateInfoNV* instance) { instance->~VkPipelineViewportSwizzleStateCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1410(void* instance) { new (instance) VkPhysicalDeviceDiscardRectanglePropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1411(void* instance, const VkPhysicalDeviceDiscardRectanglePropertiesEXT& _0) { new (instance) VkPhysicalDeviceDiscardRectanglePropertiesEXT(_0); } }
VkPhysicalDeviceDiscardRectanglePropertiesEXT& (VkPhysicalDeviceDiscardRectanglePropertiesEXT::*AcidSharp_symbols1412)(const VkPhysicalDeviceDiscardRectanglePropertiesEXT&) = &VkPhysicalDeviceDiscardRectanglePropertiesEXT::operator=;
VkPhysicalDeviceDiscardRectanglePropertiesEXT& (VkPhysicalDeviceDiscardRectanglePropertiesEXT::*AcidSharp_symbols1413)(VkPhysicalDeviceDiscardRectanglePropertiesEXT&&) = &VkPhysicalDeviceDiscardRectanglePropertiesEXT::operator=;
extern "C" { void AcidSharp_symbols1414(VkPhysicalDeviceDiscardRectanglePropertiesEXT* instance) { instance->~VkPhysicalDeviceDiscardRectanglePropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1415(void* instance) { new (instance) VkPipelineDiscardRectangleStateCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1416(void* instance, const VkPipelineDiscardRectangleStateCreateInfoEXT& _0) { new (instance) VkPipelineDiscardRectangleStateCreateInfoEXT(_0); } }
VkPipelineDiscardRectangleStateCreateInfoEXT& (VkPipelineDiscardRectangleStateCreateInfoEXT::*AcidSharp_symbols1417)(const VkPipelineDiscardRectangleStateCreateInfoEXT&) = &VkPipelineDiscardRectangleStateCreateInfoEXT::operator=;
VkPipelineDiscardRectangleStateCreateInfoEXT& (VkPipelineDiscardRectangleStateCreateInfoEXT::*AcidSharp_symbols1418)(VkPipelineDiscardRectangleStateCreateInfoEXT&&) = &VkPipelineDiscardRectangleStateCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1419(VkPipelineDiscardRectangleStateCreateInfoEXT* instance) { instance->~VkPipelineDiscardRectangleStateCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1420(void* instance) { new (instance) VkPhysicalDeviceConservativeRasterizationPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1421(void* instance, const VkPhysicalDeviceConservativeRasterizationPropertiesEXT& _0) { new (instance) VkPhysicalDeviceConservativeRasterizationPropertiesEXT(_0); } }
VkPhysicalDeviceConservativeRasterizationPropertiesEXT& (VkPhysicalDeviceConservativeRasterizationPropertiesEXT::*AcidSharp_symbols1422)(const VkPhysicalDeviceConservativeRasterizationPropertiesEXT&) = &VkPhysicalDeviceConservativeRasterizationPropertiesEXT::operator=;
VkPhysicalDeviceConservativeRasterizationPropertiesEXT& (VkPhysicalDeviceConservativeRasterizationPropertiesEXT::*AcidSharp_symbols1423)(VkPhysicalDeviceConservativeRasterizationPropertiesEXT&&) = &VkPhysicalDeviceConservativeRasterizationPropertiesEXT::operator=;
extern "C" { void AcidSharp_symbols1424(VkPhysicalDeviceConservativeRasterizationPropertiesEXT* instance) { instance->~VkPhysicalDeviceConservativeRasterizationPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1425(void* instance) { new (instance) VkPipelineRasterizationConservativeStateCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1426(void* instance, const VkPipelineRasterizationConservativeStateCreateInfoEXT& _0) { new (instance) VkPipelineRasterizationConservativeStateCreateInfoEXT(_0); } }
VkPipelineRasterizationConservativeStateCreateInfoEXT& (VkPipelineRasterizationConservativeStateCreateInfoEXT::*AcidSharp_symbols1427)(const VkPipelineRasterizationConservativeStateCreateInfoEXT&) = &VkPipelineRasterizationConservativeStateCreateInfoEXT::operator=;
VkPipelineRasterizationConservativeStateCreateInfoEXT& (VkPipelineRasterizationConservativeStateCreateInfoEXT::*AcidSharp_symbols1428)(VkPipelineRasterizationConservativeStateCreateInfoEXT&&) = &VkPipelineRasterizationConservativeStateCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1429(VkPipelineRasterizationConservativeStateCreateInfoEXT* instance) { instance->~VkPipelineRasterizationConservativeStateCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1430(void* instance) { new (instance) VkXYColorEXT(); } }
extern "C" { void AcidSharp_symbols1431(void* instance, const VkXYColorEXT& _0) { new (instance) VkXYColorEXT(_0); } }
VkXYColorEXT& (VkXYColorEXT::*AcidSharp_symbols1432)(const VkXYColorEXT&) = &VkXYColorEXT::operator=;
VkXYColorEXT& (VkXYColorEXT::*AcidSharp_symbols1433)(VkXYColorEXT&&) = &VkXYColorEXT::operator=;
extern "C" { void AcidSharp_symbols1434(VkXYColorEXT* instance) { instance->~VkXYColorEXT(); } }
extern "C" { void AcidSharp_symbols1435(void* instance) { new (instance) VkHdrMetadataEXT(); } }
extern "C" { void AcidSharp_symbols1436(void* instance, const VkHdrMetadataEXT& _0) { new (instance) VkHdrMetadataEXT(_0); } }
VkHdrMetadataEXT& (VkHdrMetadataEXT::*AcidSharp_symbols1437)(const VkHdrMetadataEXT&) = &VkHdrMetadataEXT::operator=;
VkHdrMetadataEXT& (VkHdrMetadataEXT::*AcidSharp_symbols1438)(VkHdrMetadataEXT&&) = &VkHdrMetadataEXT::operator=;
extern "C" { void AcidSharp_symbols1439(VkHdrMetadataEXT* instance) { instance->~VkHdrMetadataEXT(); } }
extern "C" { void AcidSharp_symbols1440(void* instance) { new (instance) VkDebugUtilsObjectNameInfoEXT(); } }
extern "C" { void AcidSharp_symbols1441(void* instance, const VkDebugUtilsObjectNameInfoEXT& _0) { new (instance) VkDebugUtilsObjectNameInfoEXT(_0); } }
VkDebugUtilsObjectNameInfoEXT& (VkDebugUtilsObjectNameInfoEXT::*AcidSharp_symbols1442)(const VkDebugUtilsObjectNameInfoEXT&) = &VkDebugUtilsObjectNameInfoEXT::operator=;
VkDebugUtilsObjectNameInfoEXT& (VkDebugUtilsObjectNameInfoEXT::*AcidSharp_symbols1443)(VkDebugUtilsObjectNameInfoEXT&&) = &VkDebugUtilsObjectNameInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1444(VkDebugUtilsObjectNameInfoEXT* instance) { instance->~VkDebugUtilsObjectNameInfoEXT(); } }
extern "C" { void AcidSharp_symbols1445(void* instance) { new (instance) VkDebugUtilsObjectTagInfoEXT(); } }
extern "C" { void AcidSharp_symbols1446(void* instance, const VkDebugUtilsObjectTagInfoEXT& _0) { new (instance) VkDebugUtilsObjectTagInfoEXT(_0); } }
VkDebugUtilsObjectTagInfoEXT& (VkDebugUtilsObjectTagInfoEXT::*AcidSharp_symbols1447)(const VkDebugUtilsObjectTagInfoEXT&) = &VkDebugUtilsObjectTagInfoEXT::operator=;
VkDebugUtilsObjectTagInfoEXT& (VkDebugUtilsObjectTagInfoEXT::*AcidSharp_symbols1448)(VkDebugUtilsObjectTagInfoEXT&&) = &VkDebugUtilsObjectTagInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1449(VkDebugUtilsObjectTagInfoEXT* instance) { instance->~VkDebugUtilsObjectTagInfoEXT(); } }
extern "C" { void AcidSharp_symbols1450(void* instance) { new (instance) VkDebugUtilsLabelEXT(); } }
extern "C" { void AcidSharp_symbols1451(void* instance, const VkDebugUtilsLabelEXT& _0) { new (instance) VkDebugUtilsLabelEXT(_0); } }
VkDebugUtilsLabelEXT& (VkDebugUtilsLabelEXT::*AcidSharp_symbols1452)(const VkDebugUtilsLabelEXT&) = &VkDebugUtilsLabelEXT::operator=;
VkDebugUtilsLabelEXT& (VkDebugUtilsLabelEXT::*AcidSharp_symbols1453)(VkDebugUtilsLabelEXT&&) = &VkDebugUtilsLabelEXT::operator=;
extern "C" { void AcidSharp_symbols1454(VkDebugUtilsLabelEXT* instance) { instance->~VkDebugUtilsLabelEXT(); } }
extern "C" { void AcidSharp_symbols1455(void* instance) { new (instance) VkDebugUtilsMessengerCallbackDataEXT(); } }
extern "C" { void AcidSharp_symbols1456(void* instance, const VkDebugUtilsMessengerCallbackDataEXT& _0) { new (instance) VkDebugUtilsMessengerCallbackDataEXT(_0); } }
VkDebugUtilsMessengerCallbackDataEXT& (VkDebugUtilsMessengerCallbackDataEXT::*AcidSharp_symbols1457)(const VkDebugUtilsMessengerCallbackDataEXT&) = &VkDebugUtilsMessengerCallbackDataEXT::operator=;
VkDebugUtilsMessengerCallbackDataEXT& (VkDebugUtilsMessengerCallbackDataEXT::*AcidSharp_symbols1458)(VkDebugUtilsMessengerCallbackDataEXT&&) = &VkDebugUtilsMessengerCallbackDataEXT::operator=;
extern "C" { void AcidSharp_symbols1459(VkDebugUtilsMessengerCallbackDataEXT* instance) { instance->~VkDebugUtilsMessengerCallbackDataEXT(); } }
extern "C" { void AcidSharp_symbols1460(void* instance) { new (instance) VkDebugUtilsMessengerCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1461(void* instance, const VkDebugUtilsMessengerCreateInfoEXT& _0) { new (instance) VkDebugUtilsMessengerCreateInfoEXT(_0); } }
VkDebugUtilsMessengerCreateInfoEXT& (VkDebugUtilsMessengerCreateInfoEXT::*AcidSharp_symbols1462)(const VkDebugUtilsMessengerCreateInfoEXT&) = &VkDebugUtilsMessengerCreateInfoEXT::operator=;
VkDebugUtilsMessengerCreateInfoEXT& (VkDebugUtilsMessengerCreateInfoEXT::*AcidSharp_symbols1463)(VkDebugUtilsMessengerCreateInfoEXT&&) = &VkDebugUtilsMessengerCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1464(VkDebugUtilsMessengerCreateInfoEXT* instance) { instance->~VkDebugUtilsMessengerCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1465(void* instance) { new (instance) VkSamplerReductionModeCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1466(void* instance, const VkSamplerReductionModeCreateInfoEXT& _0) { new (instance) VkSamplerReductionModeCreateInfoEXT(_0); } }
VkSamplerReductionModeCreateInfoEXT& (VkSamplerReductionModeCreateInfoEXT::*AcidSharp_symbols1467)(const VkSamplerReductionModeCreateInfoEXT&) = &VkSamplerReductionModeCreateInfoEXT::operator=;
VkSamplerReductionModeCreateInfoEXT& (VkSamplerReductionModeCreateInfoEXT::*AcidSharp_symbols1468)(VkSamplerReductionModeCreateInfoEXT&&) = &VkSamplerReductionModeCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1469(VkSamplerReductionModeCreateInfoEXT* instance) { instance->~VkSamplerReductionModeCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1470(void* instance) { new (instance) VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1471(void* instance, const VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT& _0) { new (instance) VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT(_0); } }
VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT& (VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT::*AcidSharp_symbols1472)(const VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT&) = &VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT::operator=;
VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT& (VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT::*AcidSharp_symbols1473)(VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT&&) = &VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT::operator=;
extern "C" { void AcidSharp_symbols1474(VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT* instance) { instance->~VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1475(void* instance) { new (instance) VkSampleLocationEXT(); } }
extern "C" { void AcidSharp_symbols1476(void* instance, const VkSampleLocationEXT& _0) { new (instance) VkSampleLocationEXT(_0); } }
VkSampleLocationEXT& (VkSampleLocationEXT::*AcidSharp_symbols1477)(const VkSampleLocationEXT&) = &VkSampleLocationEXT::operator=;
VkSampleLocationEXT& (VkSampleLocationEXT::*AcidSharp_symbols1478)(VkSampleLocationEXT&&) = &VkSampleLocationEXT::operator=;
extern "C" { void AcidSharp_symbols1479(VkSampleLocationEXT* instance) { instance->~VkSampleLocationEXT(); } }
extern "C" { void AcidSharp_symbols1480(void* instance) { new (instance) VkSampleLocationsInfoEXT(); } }
extern "C" { void AcidSharp_symbols1481(void* instance, const VkSampleLocationsInfoEXT& _0) { new (instance) VkSampleLocationsInfoEXT(_0); } }
VkSampleLocationsInfoEXT& (VkSampleLocationsInfoEXT::*AcidSharp_symbols1482)(const VkSampleLocationsInfoEXT&) = &VkSampleLocationsInfoEXT::operator=;
VkSampleLocationsInfoEXT& (VkSampleLocationsInfoEXT::*AcidSharp_symbols1483)(VkSampleLocationsInfoEXT&&) = &VkSampleLocationsInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1484(VkSampleLocationsInfoEXT* instance) { instance->~VkSampleLocationsInfoEXT(); } }
extern "C" { void AcidSharp_symbols1485(void* instance) { new (instance) VkAttachmentSampleLocationsEXT(); } }
extern "C" { void AcidSharp_symbols1486(void* instance, const VkAttachmentSampleLocationsEXT& _0) { new (instance) VkAttachmentSampleLocationsEXT(_0); } }
VkAttachmentSampleLocationsEXT& (VkAttachmentSampleLocationsEXT::*AcidSharp_symbols1487)(const VkAttachmentSampleLocationsEXT&) = &VkAttachmentSampleLocationsEXT::operator=;
VkAttachmentSampleLocationsEXT& (VkAttachmentSampleLocationsEXT::*AcidSharp_symbols1488)(VkAttachmentSampleLocationsEXT&&) = &VkAttachmentSampleLocationsEXT::operator=;
extern "C" { void AcidSharp_symbols1489(VkAttachmentSampleLocationsEXT* instance) { instance->~VkAttachmentSampleLocationsEXT(); } }
extern "C" { void AcidSharp_symbols1490(void* instance) { new (instance) VkSubpassSampleLocationsEXT(); } }
extern "C" { void AcidSharp_symbols1491(void* instance, const VkSubpassSampleLocationsEXT& _0) { new (instance) VkSubpassSampleLocationsEXT(_0); } }
VkSubpassSampleLocationsEXT& (VkSubpassSampleLocationsEXT::*AcidSharp_symbols1492)(const VkSubpassSampleLocationsEXT&) = &VkSubpassSampleLocationsEXT::operator=;
VkSubpassSampleLocationsEXT& (VkSubpassSampleLocationsEXT::*AcidSharp_symbols1493)(VkSubpassSampleLocationsEXT&&) = &VkSubpassSampleLocationsEXT::operator=;
extern "C" { void AcidSharp_symbols1494(VkSubpassSampleLocationsEXT* instance) { instance->~VkSubpassSampleLocationsEXT(); } }
extern "C" { void AcidSharp_symbols1495(void* instance) { new (instance) VkRenderPassSampleLocationsBeginInfoEXT(); } }
extern "C" { void AcidSharp_symbols1496(void* instance, const VkRenderPassSampleLocationsBeginInfoEXT& _0) { new (instance) VkRenderPassSampleLocationsBeginInfoEXT(_0); } }
VkRenderPassSampleLocationsBeginInfoEXT& (VkRenderPassSampleLocationsBeginInfoEXT::*AcidSharp_symbols1497)(const VkRenderPassSampleLocationsBeginInfoEXT&) = &VkRenderPassSampleLocationsBeginInfoEXT::operator=;
VkRenderPassSampleLocationsBeginInfoEXT& (VkRenderPassSampleLocationsBeginInfoEXT::*AcidSharp_symbols1498)(VkRenderPassSampleLocationsBeginInfoEXT&&) = &VkRenderPassSampleLocationsBeginInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1499(VkRenderPassSampleLocationsBeginInfoEXT* instance) { instance->~VkRenderPassSampleLocationsBeginInfoEXT(); } }
extern "C" { void AcidSharp_symbols1500(void* instance) { new (instance) VkPipelineSampleLocationsStateCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1501(void* instance, const VkPipelineSampleLocationsStateCreateInfoEXT& _0) { new (instance) VkPipelineSampleLocationsStateCreateInfoEXT(_0); } }
VkPipelineSampleLocationsStateCreateInfoEXT& (VkPipelineSampleLocationsStateCreateInfoEXT::*AcidSharp_symbols1502)(const VkPipelineSampleLocationsStateCreateInfoEXT&) = &VkPipelineSampleLocationsStateCreateInfoEXT::operator=;
VkPipelineSampleLocationsStateCreateInfoEXT& (VkPipelineSampleLocationsStateCreateInfoEXT::*AcidSharp_symbols1503)(VkPipelineSampleLocationsStateCreateInfoEXT&&) = &VkPipelineSampleLocationsStateCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1504(VkPipelineSampleLocationsStateCreateInfoEXT* instance) { instance->~VkPipelineSampleLocationsStateCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1505(void* instance) { new (instance) VkPhysicalDeviceSampleLocationsPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1506(void* instance, const VkPhysicalDeviceSampleLocationsPropertiesEXT& _0) { new (instance) VkPhysicalDeviceSampleLocationsPropertiesEXT(_0); } }
VkPhysicalDeviceSampleLocationsPropertiesEXT& (VkPhysicalDeviceSampleLocationsPropertiesEXT::*AcidSharp_symbols1507)(const VkPhysicalDeviceSampleLocationsPropertiesEXT&) = &VkPhysicalDeviceSampleLocationsPropertiesEXT::operator=;
VkPhysicalDeviceSampleLocationsPropertiesEXT& (VkPhysicalDeviceSampleLocationsPropertiesEXT::*AcidSharp_symbols1508)(VkPhysicalDeviceSampleLocationsPropertiesEXT&&) = &VkPhysicalDeviceSampleLocationsPropertiesEXT::operator=;
extern "C" { void AcidSharp_symbols1509(VkPhysicalDeviceSampleLocationsPropertiesEXT* instance) { instance->~VkPhysicalDeviceSampleLocationsPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1510(void* instance) { new (instance) VkMultisamplePropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1511(void* instance, const VkMultisamplePropertiesEXT& _0) { new (instance) VkMultisamplePropertiesEXT(_0); } }
VkMultisamplePropertiesEXT& (VkMultisamplePropertiesEXT::*AcidSharp_symbols1512)(const VkMultisamplePropertiesEXT&) = &VkMultisamplePropertiesEXT::operator=;
VkMultisamplePropertiesEXT& (VkMultisamplePropertiesEXT::*AcidSharp_symbols1513)(VkMultisamplePropertiesEXT&&) = &VkMultisamplePropertiesEXT::operator=;
extern "C" { void AcidSharp_symbols1514(VkMultisamplePropertiesEXT* instance) { instance->~VkMultisamplePropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1515(void* instance) { new (instance) VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT(); } }
extern "C" { void AcidSharp_symbols1516(void* instance, const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& _0) { new (instance) VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT(_0); } }
VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& (VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT::*AcidSharp_symbols1517)(const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT&) = &VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT::operator=;
VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& (VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT::*AcidSharp_symbols1518)(VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT&&) = &VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT::operator=;
extern "C" { void AcidSharp_symbols1519(VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT* instance) { instance->~VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT(); } }
extern "C" { void AcidSharp_symbols1520(void* instance) { new (instance) VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1521(void* instance, const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& _0) { new (instance) VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT(_0); } }
VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& (VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::*AcidSharp_symbols1522)(const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT&) = &VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::operator=;
VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& (VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::*AcidSharp_symbols1523)(VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT&&) = &VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::operator=;
extern "C" { void AcidSharp_symbols1524(VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT* instance) { instance->~VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1525(void* instance) { new (instance) VkPipelineColorBlendAdvancedStateCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1526(void* instance, const VkPipelineColorBlendAdvancedStateCreateInfoEXT& _0) { new (instance) VkPipelineColorBlendAdvancedStateCreateInfoEXT(_0); } }
VkPipelineColorBlendAdvancedStateCreateInfoEXT& (VkPipelineColorBlendAdvancedStateCreateInfoEXT::*AcidSharp_symbols1527)(const VkPipelineColorBlendAdvancedStateCreateInfoEXT&) = &VkPipelineColorBlendAdvancedStateCreateInfoEXT::operator=;
VkPipelineColorBlendAdvancedStateCreateInfoEXT& (VkPipelineColorBlendAdvancedStateCreateInfoEXT::*AcidSharp_symbols1528)(VkPipelineColorBlendAdvancedStateCreateInfoEXT&&) = &VkPipelineColorBlendAdvancedStateCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1529(VkPipelineColorBlendAdvancedStateCreateInfoEXT* instance) { instance->~VkPipelineColorBlendAdvancedStateCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1530(void* instance) { new (instance) VkPipelineCoverageToColorStateCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1531(void* instance, const VkPipelineCoverageToColorStateCreateInfoNV& _0) { new (instance) VkPipelineCoverageToColorStateCreateInfoNV(_0); } }
VkPipelineCoverageToColorStateCreateInfoNV& (VkPipelineCoverageToColorStateCreateInfoNV::*AcidSharp_symbols1532)(const VkPipelineCoverageToColorStateCreateInfoNV&) = &VkPipelineCoverageToColorStateCreateInfoNV::operator=;
VkPipelineCoverageToColorStateCreateInfoNV& (VkPipelineCoverageToColorStateCreateInfoNV::*AcidSharp_symbols1533)(VkPipelineCoverageToColorStateCreateInfoNV&&) = &VkPipelineCoverageToColorStateCreateInfoNV::operator=;
extern "C" { void AcidSharp_symbols1534(VkPipelineCoverageToColorStateCreateInfoNV* instance) { instance->~VkPipelineCoverageToColorStateCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1535(void* instance) { new (instance) VkPipelineCoverageModulationStateCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1536(void* instance, const VkPipelineCoverageModulationStateCreateInfoNV& _0) { new (instance) VkPipelineCoverageModulationStateCreateInfoNV(_0); } }
VkPipelineCoverageModulationStateCreateInfoNV& (VkPipelineCoverageModulationStateCreateInfoNV::*AcidSharp_symbols1537)(const VkPipelineCoverageModulationStateCreateInfoNV&) = &VkPipelineCoverageModulationStateCreateInfoNV::operator=;
VkPipelineCoverageModulationStateCreateInfoNV& (VkPipelineCoverageModulationStateCreateInfoNV::*AcidSharp_symbols1538)(VkPipelineCoverageModulationStateCreateInfoNV&&) = &VkPipelineCoverageModulationStateCreateInfoNV::operator=;
extern "C" { void AcidSharp_symbols1539(VkPipelineCoverageModulationStateCreateInfoNV* instance) { instance->~VkPipelineCoverageModulationStateCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1540(void* instance) { new (instance) VkValidationCacheCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1541(void* instance, const VkValidationCacheCreateInfoEXT& _0) { new (instance) VkValidationCacheCreateInfoEXT(_0); } }
VkValidationCacheCreateInfoEXT& (VkValidationCacheCreateInfoEXT::*AcidSharp_symbols1542)(const VkValidationCacheCreateInfoEXT&) = &VkValidationCacheCreateInfoEXT::operator=;
VkValidationCacheCreateInfoEXT& (VkValidationCacheCreateInfoEXT::*AcidSharp_symbols1543)(VkValidationCacheCreateInfoEXT&&) = &VkValidationCacheCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1544(VkValidationCacheCreateInfoEXT* instance) { instance->~VkValidationCacheCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1545(void* instance) { new (instance) VkShaderModuleValidationCacheCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1546(void* instance, const VkShaderModuleValidationCacheCreateInfoEXT& _0) { new (instance) VkShaderModuleValidationCacheCreateInfoEXT(_0); } }
VkShaderModuleValidationCacheCreateInfoEXT& (VkShaderModuleValidationCacheCreateInfoEXT::*AcidSharp_symbols1547)(const VkShaderModuleValidationCacheCreateInfoEXT&) = &VkShaderModuleValidationCacheCreateInfoEXT::operator=;
VkShaderModuleValidationCacheCreateInfoEXT& (VkShaderModuleValidationCacheCreateInfoEXT::*AcidSharp_symbols1548)(VkShaderModuleValidationCacheCreateInfoEXT&&) = &VkShaderModuleValidationCacheCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1549(VkShaderModuleValidationCacheCreateInfoEXT* instance) { instance->~VkShaderModuleValidationCacheCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1550(void* instance) { new (instance) VkDescriptorSetLayoutBindingFlagsCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1551(void* instance, const VkDescriptorSetLayoutBindingFlagsCreateInfoEXT& _0) { new (instance) VkDescriptorSetLayoutBindingFlagsCreateInfoEXT(_0); } }
VkDescriptorSetLayoutBindingFlagsCreateInfoEXT& (VkDescriptorSetLayoutBindingFlagsCreateInfoEXT::*AcidSharp_symbols1552)(const VkDescriptorSetLayoutBindingFlagsCreateInfoEXT&) = &VkDescriptorSetLayoutBindingFlagsCreateInfoEXT::operator=;
VkDescriptorSetLayoutBindingFlagsCreateInfoEXT& (VkDescriptorSetLayoutBindingFlagsCreateInfoEXT::*AcidSharp_symbols1553)(VkDescriptorSetLayoutBindingFlagsCreateInfoEXT&&) = &VkDescriptorSetLayoutBindingFlagsCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1554(VkDescriptorSetLayoutBindingFlagsCreateInfoEXT* instance) { instance->~VkDescriptorSetLayoutBindingFlagsCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1555(void* instance) { new (instance) VkPhysicalDeviceDescriptorIndexingFeaturesEXT(); } }
extern "C" { void AcidSharp_symbols1556(void* instance, const VkPhysicalDeviceDescriptorIndexingFeaturesEXT& _0) { new (instance) VkPhysicalDeviceDescriptorIndexingFeaturesEXT(_0); } }
VkPhysicalDeviceDescriptorIndexingFeaturesEXT& (VkPhysicalDeviceDescriptorIndexingFeaturesEXT::*AcidSharp_symbols1557)(const VkPhysicalDeviceDescriptorIndexingFeaturesEXT&) = &VkPhysicalDeviceDescriptorIndexingFeaturesEXT::operator=;
VkPhysicalDeviceDescriptorIndexingFeaturesEXT& (VkPhysicalDeviceDescriptorIndexingFeaturesEXT::*AcidSharp_symbols1558)(VkPhysicalDeviceDescriptorIndexingFeaturesEXT&&) = &VkPhysicalDeviceDescriptorIndexingFeaturesEXT::operator=;
extern "C" { void AcidSharp_symbols1559(VkPhysicalDeviceDescriptorIndexingFeaturesEXT* instance) { instance->~VkPhysicalDeviceDescriptorIndexingFeaturesEXT(); } }
extern "C" { void AcidSharp_symbols1560(void* instance) { new (instance) VkPhysicalDeviceDescriptorIndexingPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1561(void* instance, const VkPhysicalDeviceDescriptorIndexingPropertiesEXT& _0) { new (instance) VkPhysicalDeviceDescriptorIndexingPropertiesEXT(_0); } }
VkPhysicalDeviceDescriptorIndexingPropertiesEXT& (VkPhysicalDeviceDescriptorIndexingPropertiesEXT::*AcidSharp_symbols1562)(const VkPhysicalDeviceDescriptorIndexingPropertiesEXT&) = &VkPhysicalDeviceDescriptorIndexingPropertiesEXT::operator=;
VkPhysicalDeviceDescriptorIndexingPropertiesEXT& (VkPhysicalDeviceDescriptorIndexingPropertiesEXT::*AcidSharp_symbols1563)(VkPhysicalDeviceDescriptorIndexingPropertiesEXT&&) = &VkPhysicalDeviceDescriptorIndexingPropertiesEXT::operator=;
extern "C" { void AcidSharp_symbols1564(VkPhysicalDeviceDescriptorIndexingPropertiesEXT* instance) { instance->~VkPhysicalDeviceDescriptorIndexingPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1565(void* instance) { new (instance) VkDescriptorSetVariableDescriptorCountAllocateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1566(void* instance, const VkDescriptorSetVariableDescriptorCountAllocateInfoEXT& _0) { new (instance) VkDescriptorSetVariableDescriptorCountAllocateInfoEXT(_0); } }
VkDescriptorSetVariableDescriptorCountAllocateInfoEXT& (VkDescriptorSetVariableDescriptorCountAllocateInfoEXT::*AcidSharp_symbols1567)(const VkDescriptorSetVariableDescriptorCountAllocateInfoEXT&) = &VkDescriptorSetVariableDescriptorCountAllocateInfoEXT::operator=;
VkDescriptorSetVariableDescriptorCountAllocateInfoEXT& (VkDescriptorSetVariableDescriptorCountAllocateInfoEXT::*AcidSharp_symbols1568)(VkDescriptorSetVariableDescriptorCountAllocateInfoEXT&&) = &VkDescriptorSetVariableDescriptorCountAllocateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1569(VkDescriptorSetVariableDescriptorCountAllocateInfoEXT* instance) { instance->~VkDescriptorSetVariableDescriptorCountAllocateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1570(void* instance) { new (instance) VkDescriptorSetVariableDescriptorCountLayoutSupportEXT(); } }
extern "C" { void AcidSharp_symbols1571(void* instance, const VkDescriptorSetVariableDescriptorCountLayoutSupportEXT& _0) { new (instance) VkDescriptorSetVariableDescriptorCountLayoutSupportEXT(_0); } }
VkDescriptorSetVariableDescriptorCountLayoutSupportEXT& (VkDescriptorSetVariableDescriptorCountLayoutSupportEXT::*AcidSharp_symbols1572)(const VkDescriptorSetVariableDescriptorCountLayoutSupportEXT&) = &VkDescriptorSetVariableDescriptorCountLayoutSupportEXT::operator=;
VkDescriptorSetVariableDescriptorCountLayoutSupportEXT& (VkDescriptorSetVariableDescriptorCountLayoutSupportEXT::*AcidSharp_symbols1573)(VkDescriptorSetVariableDescriptorCountLayoutSupportEXT&&) = &VkDescriptorSetVariableDescriptorCountLayoutSupportEXT::operator=;
extern "C" { void AcidSharp_symbols1574(VkDescriptorSetVariableDescriptorCountLayoutSupportEXT* instance) { instance->~VkDescriptorSetVariableDescriptorCountLayoutSupportEXT(); } }
extern "C" { void AcidSharp_symbols1575(void* instance) { new (instance) VkDeviceQueueGlobalPriorityCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1576(void* instance, const VkDeviceQueueGlobalPriorityCreateInfoEXT& _0) { new (instance) VkDeviceQueueGlobalPriorityCreateInfoEXT(_0); } }
VkDeviceQueueGlobalPriorityCreateInfoEXT& (VkDeviceQueueGlobalPriorityCreateInfoEXT::*AcidSharp_symbols1577)(const VkDeviceQueueGlobalPriorityCreateInfoEXT&) = &VkDeviceQueueGlobalPriorityCreateInfoEXT::operator=;
VkDeviceQueueGlobalPriorityCreateInfoEXT& (VkDeviceQueueGlobalPriorityCreateInfoEXT::*AcidSharp_symbols1578)(VkDeviceQueueGlobalPriorityCreateInfoEXT&&) = &VkDeviceQueueGlobalPriorityCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1579(VkDeviceQueueGlobalPriorityCreateInfoEXT* instance) { instance->~VkDeviceQueueGlobalPriorityCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1580(void* instance) { new (instance) VkImportMemoryHostPointerInfoEXT(); } }
extern "C" { void AcidSharp_symbols1581(void* instance, const VkImportMemoryHostPointerInfoEXT& _0) { new (instance) VkImportMemoryHostPointerInfoEXT(_0); } }
VkImportMemoryHostPointerInfoEXT& (VkImportMemoryHostPointerInfoEXT::*AcidSharp_symbols1582)(const VkImportMemoryHostPointerInfoEXT&) = &VkImportMemoryHostPointerInfoEXT::operator=;
VkImportMemoryHostPointerInfoEXT& (VkImportMemoryHostPointerInfoEXT::*AcidSharp_symbols1583)(VkImportMemoryHostPointerInfoEXT&&) = &VkImportMemoryHostPointerInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1584(VkImportMemoryHostPointerInfoEXT* instance) { instance->~VkImportMemoryHostPointerInfoEXT(); } }
extern "C" { void AcidSharp_symbols1585(void* instance) { new (instance) VkMemoryHostPointerPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1586(void* instance, const VkMemoryHostPointerPropertiesEXT& _0) { new (instance) VkMemoryHostPointerPropertiesEXT(_0); } }
VkMemoryHostPointerPropertiesEXT& (VkMemoryHostPointerPropertiesEXT::*AcidSharp_symbols1587)(const VkMemoryHostPointerPropertiesEXT&) = &VkMemoryHostPointerPropertiesEXT::operator=;
VkMemoryHostPointerPropertiesEXT& (VkMemoryHostPointerPropertiesEXT::*AcidSharp_symbols1588)(VkMemoryHostPointerPropertiesEXT&&) = &VkMemoryHostPointerPropertiesEXT::operator=;
extern "C" { void AcidSharp_symbols1589(VkMemoryHostPointerPropertiesEXT* instance) { instance->~VkMemoryHostPointerPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1590(void* instance) { new (instance) VkPhysicalDeviceExternalMemoryHostPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1591(void* instance, const VkPhysicalDeviceExternalMemoryHostPropertiesEXT& _0) { new (instance) VkPhysicalDeviceExternalMemoryHostPropertiesEXT(_0); } }
VkPhysicalDeviceExternalMemoryHostPropertiesEXT& (VkPhysicalDeviceExternalMemoryHostPropertiesEXT::*AcidSharp_symbols1592)(const VkPhysicalDeviceExternalMemoryHostPropertiesEXT&) = &VkPhysicalDeviceExternalMemoryHostPropertiesEXT::operator=;
VkPhysicalDeviceExternalMemoryHostPropertiesEXT& (VkPhysicalDeviceExternalMemoryHostPropertiesEXT::*AcidSharp_symbols1593)(VkPhysicalDeviceExternalMemoryHostPropertiesEXT&&) = &VkPhysicalDeviceExternalMemoryHostPropertiesEXT::operator=;
extern "C" { void AcidSharp_symbols1594(VkPhysicalDeviceExternalMemoryHostPropertiesEXT* instance) { instance->~VkPhysicalDeviceExternalMemoryHostPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1595(void* instance) { new (instance) VkPhysicalDeviceShaderCorePropertiesAMD(); } }
extern "C" { void AcidSharp_symbols1596(void* instance, const VkPhysicalDeviceShaderCorePropertiesAMD& _0) { new (instance) VkPhysicalDeviceShaderCorePropertiesAMD(_0); } }
VkPhysicalDeviceShaderCorePropertiesAMD& (VkPhysicalDeviceShaderCorePropertiesAMD::*AcidSharp_symbols1597)(const VkPhysicalDeviceShaderCorePropertiesAMD&) = &VkPhysicalDeviceShaderCorePropertiesAMD::operator=;
VkPhysicalDeviceShaderCorePropertiesAMD& (VkPhysicalDeviceShaderCorePropertiesAMD::*AcidSharp_symbols1598)(VkPhysicalDeviceShaderCorePropertiesAMD&&) = &VkPhysicalDeviceShaderCorePropertiesAMD::operator=;
extern "C" { void AcidSharp_symbols1599(VkPhysicalDeviceShaderCorePropertiesAMD* instance) { instance->~VkPhysicalDeviceShaderCorePropertiesAMD(); } }
extern "C" { void AcidSharp_symbols1600(void* instance) { new (instance) VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1601(void* instance, const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& _0) { new (instance) VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT(_0); } }
VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& (VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT::*AcidSharp_symbols1602)(const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT&) = &VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT::operator=;
VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& (VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT::*AcidSharp_symbols1603)(VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT&&) = &VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT::operator=;
extern "C" { void AcidSharp_symbols1604(VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT* instance) { instance->~VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1605(void* instance) { new (instance) VkVertexInputBindingDivisorDescriptionEXT(); } }
extern "C" { void AcidSharp_symbols1606(void* instance, const VkVertexInputBindingDivisorDescriptionEXT& _0) { new (instance) VkVertexInputBindingDivisorDescriptionEXT(_0); } }
VkVertexInputBindingDivisorDescriptionEXT& (VkVertexInputBindingDivisorDescriptionEXT::*AcidSharp_symbols1607)(const VkVertexInputBindingDivisorDescriptionEXT&) = &VkVertexInputBindingDivisorDescriptionEXT::operator=;
VkVertexInputBindingDivisorDescriptionEXT& (VkVertexInputBindingDivisorDescriptionEXT::*AcidSharp_symbols1608)(VkVertexInputBindingDivisorDescriptionEXT&&) = &VkVertexInputBindingDivisorDescriptionEXT::operator=;
extern "C" { void AcidSharp_symbols1609(VkVertexInputBindingDivisorDescriptionEXT* instance) { instance->~VkVertexInputBindingDivisorDescriptionEXT(); } }
extern "C" { void AcidSharp_symbols1610(void* instance) { new (instance) VkPipelineVertexInputDivisorStateCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1611(void* instance, const VkPipelineVertexInputDivisorStateCreateInfoEXT& _0) { new (instance) VkPipelineVertexInputDivisorStateCreateInfoEXT(_0); } }
VkPipelineVertexInputDivisorStateCreateInfoEXT& (VkPipelineVertexInputDivisorStateCreateInfoEXT::*AcidSharp_symbols1612)(const VkPipelineVertexInputDivisorStateCreateInfoEXT&) = &VkPipelineVertexInputDivisorStateCreateInfoEXT::operator=;
VkPipelineVertexInputDivisorStateCreateInfoEXT& (VkPipelineVertexInputDivisorStateCreateInfoEXT::*AcidSharp_symbols1613)(VkPipelineVertexInputDivisorStateCreateInfoEXT&&) = &VkPipelineVertexInputDivisorStateCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1614(VkPipelineVertexInputDivisorStateCreateInfoEXT* instance) { instance->~VkPipelineVertexInputDivisorStateCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1615(void* instance) { new (instance) VkQueueFamilyCheckpointPropertiesNV(); } }
extern "C" { void AcidSharp_symbols1616(void* instance, const VkQueueFamilyCheckpointPropertiesNV& _0) { new (instance) VkQueueFamilyCheckpointPropertiesNV(_0); } }
VkQueueFamilyCheckpointPropertiesNV& (VkQueueFamilyCheckpointPropertiesNV::*AcidSharp_symbols1617)(const VkQueueFamilyCheckpointPropertiesNV&) = &VkQueueFamilyCheckpointPropertiesNV::operator=;
VkQueueFamilyCheckpointPropertiesNV& (VkQueueFamilyCheckpointPropertiesNV::*AcidSharp_symbols1618)(VkQueueFamilyCheckpointPropertiesNV&&) = &VkQueueFamilyCheckpointPropertiesNV::operator=;
extern "C" { void AcidSharp_symbols1619(VkQueueFamilyCheckpointPropertiesNV* instance) { instance->~VkQueueFamilyCheckpointPropertiesNV(); } }
extern "C" { void AcidSharp_symbols1620(void* instance) { new (instance) VkCheckpointDataNV(); } }
extern "C" { void AcidSharp_symbols1621(void* instance, const VkCheckpointDataNV& _0) { new (instance) VkCheckpointDataNV(_0); } }
VkCheckpointDataNV& (VkCheckpointDataNV::*AcidSharp_symbols1622)(const VkCheckpointDataNV&) = &VkCheckpointDataNV::operator=;
VkCheckpointDataNV& (VkCheckpointDataNV::*AcidSharp_symbols1623)(VkCheckpointDataNV&&) = &VkCheckpointDataNV::operator=;
extern "C" { void AcidSharp_symbols1624(VkCheckpointDataNV* instance) { instance->~VkCheckpointDataNV(); } }
extern "C" { void AcidSharp_symbols1625(void* instance, const acid::CommandBuffer& _0) { new (instance) acid::CommandBuffer(_0); } }
acid::CommandBuffer& (acid::CommandBuffer::*AcidSharp_symbols1626)(const acid::CommandBuffer&) = &acid::CommandBuffer::operator=;
acid::IModule& (acid::IModule::*AcidSharp_symbols1627)(const acid::IModule&) = &acid::IModule::operator=;
acid::IModule& (acid::IModule::*AcidSharp_symbols1628)(acid::IModule&&) = &acid::IModule::operator=;
extern "C" { void AcidSharp_symbols1629(acid::IModule* instance) { instance->~IModule(); } }
extern "C" { void AcidSharp_symbols1630(void* instance) { new (instance) acid::Log(); } }
extern "C" { void AcidSharp_symbols1631(void* instance, const acid::Log& _0) { new (instance) acid::Log(_0); } }
acid::Log& (acid::Log::*AcidSharp_symbols1632)(const acid::Log&) = &acid::Log::operator=;
acid::Log& (acid::Log::*AcidSharp_symbols1633)(acid::Log&&) = &acid::Log::operator=;
extern "C" { void AcidSharp_symbols1634(acid::Log* instance) { instance->~Log(); } }
::uint32_t (acid::ModuleRegister::*AcidSharp_symbols1635)() const = &acid::ModuleRegister::GetModuleCount;
extern "C" { void AcidSharp_symbols1636(void* instance, const acid::ModuleRegister& _0) { new (instance) acid::ModuleRegister(_0); } }
acid::ModuleRegister& (acid::ModuleRegister::*AcidSharp_symbols1637)(const acid::ModuleRegister&) = &acid::ModuleRegister::operator=;
float (acid::Delta::*AcidSharp_symbols1638)() const = &acid::Delta::GetTime;
extern "C" { void AcidSharp_symbols1639(void* instance, const acid::Delta& _0) { new (instance) acid::Delta(_0); } }
acid::Delta& (acid::Delta::*AcidSharp_symbols1640)(const acid::Delta&) = &acid::Delta::operator=;
extern "C" { void AcidSharp_symbols1641(void* instance, const acid::Timer& _0) { new (instance) acid::Timer(_0); } }
acid::Timer& (acid::Timer::*AcidSharp_symbols1642)(const acid::Timer&) = &acid::Timer::operator=;
extern "C" { void AcidSharp_symbols1643(void* instance, const acid::ModuleUpdater& _0) { new (instance) acid::ModuleUpdater(_0); } }
acid::ModuleUpdater& (acid::ModuleUpdater::*AcidSharp_symbols1644)(const acid::ModuleUpdater&) = &acid::ModuleUpdater::operator=;
acid::IModule* (acid::Engine::*AcidSharp_symbols1645)(acid::IModule*, const acid::ModuleUpdate&) = &acid::Engine::RegisterModule;
bool (acid::Engine::*AcidSharp_symbols1646)(acid::IModule*) = &acid::Engine::DeregisterModule;
float (acid::Engine::*AcidSharp_symbols1647)() const = &acid::Engine::GetTimeOffset;
void (acid::Engine::*AcidSharp_symbols1648)(const float&) = &acid::Engine::SetTimeOffset;
void (acid::Engine::*AcidSharp_symbols1649)(const float&) = &acid::Engine::SetFpsLimit;
bool (acid::Engine::*AcidSharp_symbols1650)() const = &acid::Engine::IsInitialized;
void (acid::Engine::*AcidSharp_symbols1651)(const bool&) = &acid::Engine::SetInitialized;
bool (acid::Engine::*AcidSharp_symbols1652)() const = &acid::Engine::IsRunning;
extern "C" { void AcidSharp_symbols1653(void* instance, const acid::Engine& _0) { new (instance) acid::Engine(_0); } }
acid::Engine& (acid::Engine::*AcidSharp_symbols1654)(const acid::Engine&) = &acid::Engine::operator=;
acid::Files* (*AcidSharp_symbols1655)() = &acid::Files::Get;
acid::Files& (acid::Files::*AcidSharp_symbols1656)(const acid::Files&) = &acid::Files::operator=;
extern "C" { void AcidSharp_symbols1657(void* instance, const acid::Files& _0) { new (instance) acid::Files(_0); } }
extern "C" { void AcidSharp_symbols1658(void* instance, const acid::GraphicsStage& _0) { new (instance) acid::GraphicsStage(_0); } }
acid::GraphicsStage& (acid::GraphicsStage::*AcidSharp_symbols1659)(const acid::GraphicsStage&) = &acid::GraphicsStage::operator=;
acid::GraphicsStage& (acid::GraphicsStage::*AcidSharp_symbols1660)(acid::GraphicsStage&&) = &acid::GraphicsStage::operator=;
extern "C" { void AcidSharp_symbols1661(acid::GraphicsStage* instance) { instance->~GraphicsStage(); } }
acid::VertexInput& (acid::VertexInput::*AcidSharp_symbols1662)(acid::VertexInput&&) = &acid::VertexInput::operator=;
acid::VertexInput& (acid::VertexInput::*AcidSharp_symbols1663)(const acid::VertexInput&) = &acid::VertexInput::operator=;
::VkShaderStageFlags (acid::DescriptorType::*AcidSharp_symbols1664)() const = &acid::DescriptorType::GetStage;
acid::DescriptorType& (acid::DescriptorType::*AcidSharp_symbols1665)(const acid::DescriptorType&) = &acid::DescriptorType::operator=;
acid::DescriptorType& (acid::DescriptorType::*AcidSharp_symbols1666)(acid::DescriptorType&&) = &acid::DescriptorType::operator=;
extern "C" { void AcidSharp_symbols1667(acid::DescriptorType* instance) { instance->~DescriptorType(); } }
extern "C" { void AcidSharp_symbols1668(void* instance, const acid::DescriptorType& _0) { new (instance) acid::DescriptorType(_0); } }
acid::PipelineDefine& (acid::PipelineDefine::*AcidSharp_symbols1669)(acid::PipelineDefine&&) = &acid::PipelineDefine::operator=;
acid::PipelineDefine& (acid::PipelineDefine::*AcidSharp_symbols1670)(const acid::PipelineDefine&) = &acid::PipelineDefine::operator=;
acid::PipelineCreate& (acid::PipelineCreate::*AcidSharp_symbols1671)(acid::PipelineCreate&&) = &acid::PipelineCreate::operator=;
acid::PipelineCreate& (acid::PipelineCreate::*AcidSharp_symbols1672)(const acid::PipelineCreate&) = &acid::PipelineCreate::operator=;
acid::ComputeCreate& (acid::ComputeCreate::*AcidSharp_symbols1673)(acid::ComputeCreate&&) = &acid::ComputeCreate::operator=;
acid::ComputeCreate& (acid::ComputeCreate::*AcidSharp_symbols1674)(const acid::ComputeCreate&) = &acid::ComputeCreate::operator=;
bool (acid::Uniform::*AcidSharp_symbols1675)(const acid::Uniform&) const = &acid::Uniform::operator!=;
extern "C" { void AcidSharp_symbols1676(void* instance, const acid::Uniform& _0) { new (instance) acid::Uniform(_0); } }
acid::Uniform& (acid::Uniform::*AcidSharp_symbols1677)(const acid::Uniform&) = &acid::Uniform::operator=;
extern "C" { void AcidSharp_symbols1678(void* instance, const acid::UniformBlock& _0) { new (instance) acid::UniformBlock(_0); } }
acid::UniformBlock& (acid::UniformBlock::*AcidSharp_symbols1679)(const acid::UniformBlock&) = &acid::UniformBlock::operator=;
extern "C" { void AcidSharp_symbols1680(void* instance, const acid::VertexAttribute& _0) { new (instance) acid::VertexAttribute(_0); } }
acid::VertexAttribute& (acid::VertexAttribute::*AcidSharp_symbols1681)(const acid::VertexAttribute&) = &acid::VertexAttribute::operator=;
extern "C" { void AcidSharp_symbols1682(void* instance, const acid::ShaderProgram& _0) { new (instance) acid::ShaderProgram(_0); } }
acid::ShaderProgram& (acid::ShaderProgram::*AcidSharp_symbols1683)(const acid::ShaderProgram&) = &acid::ShaderProgram::operator=;
acid::IPipeline& (acid::IPipeline::*AcidSharp_symbols1684)(const acid::IPipeline&) = &acid::IPipeline::operator=;
extern "C" { void AcidSharp_symbols1685(void* instance, const acid::DescriptorSet& _0) { new (instance) acid::DescriptorSet(_0); } }
acid::DescriptorSet& (acid::DescriptorSet::*AcidSharp_symbols1686)(const acid::DescriptorSet&) = &acid::DescriptorSet::operator=;
::VkDeviceSize (acid::Buffer::*AcidSharp_symbols1687)() const = &acid::Buffer::GetSize;
acid::Buffer& (acid::Buffer::*AcidSharp_symbols1688)(const acid::Buffer&) = &acid::Buffer::operator=;
extern "C" { void AcidSharp_symbols1689(void* instance, const acid::Buffer& _0) { new (instance) acid::Buffer(_0); } }
extern "C" { void AcidSharp_symbols1690(void* instance, const acid::IndexBuffer& _0) { new (instance) acid::IndexBuffer(_0); } }
acid::IndexBuffer& (acid::IndexBuffer::*AcidSharp_symbols1691)(const acid::IndexBuffer&) = &acid::IndexBuffer::operator=;
extern "C" { void AcidSharp_symbols1692(void* instance, const acid::VertexBuffer& _0) { new (instance) acid::VertexBuffer(_0); } }
acid::VertexBuffer& (acid::VertexBuffer::*AcidSharp_symbols1693)(const acid::VertexBuffer&) = &acid::VertexBuffer::operator=;
acid::IResource& (acid::IResource::*AcidSharp_symbols1694)(const acid::IResource&) = &acid::IResource::operator=;
acid::IResource& (acid::IResource::*AcidSharp_symbols1695)(acid::IResource&&) = &acid::IResource::operator=;
extern "C" { void AcidSharp_symbols1696(acid::IResource* instance) { instance->~IResource(); } }
acid::IVertex& (acid::IVertex::*AcidSharp_symbols1697)(const acid::IVertex&) = &acid::IVertex::operator=;
acid::IVertex& (acid::IVertex::*AcidSharp_symbols1698)(acid::IVertex&&) = &acid::IVertex::operator=;
extern "C" { void AcidSharp_symbols1699(acid::IVertex* instance) { instance->~IVertex(); } }
acid::Vector3 (acid::Model::*AcidSharp_symbols1700)() const = &acid::Model::GetMinExtents;
acid::Vector3 (acid::Model::*AcidSharp_symbols1701)() const = &acid::Model::GetMaxExtents;
float (acid::Model::*AcidSharp_symbols1702)() const = &acid::Model::GetWidth;
float (acid::Model::*AcidSharp_symbols1703)() const = &acid::Model::GetHeight;
float (acid::Model::*AcidSharp_symbols1704)() const = &acid::Model::GetDepth;
float (acid::Model::*AcidSharp_symbols1705)() const = &acid::Model::GetRadius;
acid::VertexBuffer* (acid::Model::*AcidSharp_symbols1706)() const = &acid::Model::GetVertexBuffer;
acid::IndexBuffer* (acid::Model::*AcidSharp_symbols1707)() const = &acid::Model::GetIndexBuffer;
float (acid::Vector2::*AcidSharp_symbols1708)() const = &acid::Vector2::GetX;
void (acid::Vector2::*AcidSharp_symbols1709)(const float&) = &acid::Vector2::SetX;
float (acid::Vector2::*AcidSharp_symbols1710)() const = &acid::Vector2::GetY;
void (acid::Vector2::*AcidSharp_symbols1711)(const float&) = &acid::Vector2::SetY;
acid::Vector2& (acid::Vector2::*AcidSharp_symbols1712)(const acid::Vector2&) = &acid::Vector2::operator=;
acid::Vector2 (acid::VertexAnimated::*AcidSharp_symbols1713)() const = &acid::VertexAnimated::GetUv;
void (acid::VertexAnimated::*AcidSharp_symbols1714)(const acid::Vector2&) = &acid::VertexAnimated::SetUv;
acid::Vector3 (acid::VertexAnimated::*AcidSharp_symbols1715)() const = &acid::VertexAnimated::GetNormal;
void (acid::VertexAnimated::*AcidSharp_symbols1716)(const acid::Vector3&) = &acid::VertexAnimated::SetNormal;
acid::Vector3 (acid::VertexAnimated::*AcidSharp_symbols1717)() const = &acid::VertexAnimated::GetTangent;
void (acid::VertexAnimated::*AcidSharp_symbols1718)(const acid::Vector3&) = &acid::VertexAnimated::SetTangent;
acid::Vector3 (acid::VertexAnimated::*AcidSharp_symbols1719)() const = &acid::VertexAnimated::GetJointId;
void (acid::VertexAnimated::*AcidSharp_symbols1720)(const acid::Vector3&) = &acid::VertexAnimated::SetJointId;
acid::Vector3 (acid::VertexAnimated::*AcidSharp_symbols1721)() const = &acid::VertexAnimated::GetVertexWeight;
void (acid::VertexAnimated::*AcidSharp_symbols1722)(const acid::Vector3&) = &acid::VertexAnimated::SetVertexWeight;
acid::VertexAnimated& (acid::VertexAnimated::*AcidSharp_symbols1723)(const acid::VertexAnimated&) = &acid::VertexAnimated::operator=;
acid::VertexSkinData& (acid::VertexSkinData::*AcidSharp_symbols1724)(acid::VertexSkinData&&) = &acid::VertexSkinData::operator=;
extern "C" { void AcidSharp_symbols1725(void* instance, const acid::VertexAnimatedData& _0) { new (instance) acid::VertexAnimatedData(_0); } }
acid::VertexAnimatedData& (acid::VertexAnimatedData::*AcidSharp_symbols1726)(acid::VertexAnimatedData&&) = &acid::VertexAnimatedData::operator=;
acid::VertexAnimatedData& (acid::VertexAnimatedData::*AcidSharp_symbols1727)(const acid::VertexAnimatedData&) = &acid::VertexAnimatedData::operator=;
extern "C" { void AcidSharp_symbols1728(void* instance, const acid::GeometryLoader& _0) { new (instance) acid::GeometryLoader(_0); } }
acid::GeometryLoader& (acid::GeometryLoader::*AcidSharp_symbols1729)(acid::GeometryLoader&&) = &acid::GeometryLoader::operator=;
acid::GeometryLoader& (acid::GeometryLoader::*AcidSharp_symbols1730)(const acid::GeometryLoader&) = &acid::GeometryLoader::operator=;
extern "C" { void AcidSharp_symbols1731(void* instance, const acid::JointData& _0) { new (instance) acid::JointData(_0); } }
acid::JointData& (acid::JointData::*AcidSharp_symbols1732)(acid::JointData&&) = &acid::JointData::operator=;
acid::JointData& (acid::JointData::*AcidSharp_symbols1733)(const acid::JointData&) = &acid::JointData::operator=;
extern "C" { void AcidSharp_symbols1734(void* instance) { new (instance) acid::Maths(); } }
extern "C" { void AcidSharp_symbols1735(void* instance, const acid::Maths& _0) { new (instance) acid::Maths(_0); } }
acid::Maths& (acid::Maths::*AcidSharp_symbols1736)(const acid::Maths&) = &acid::Maths::operator=;
acid::Maths& (acid::Maths::*AcidSharp_symbols1737)(acid::Maths&&) = &acid::Maths::operator=;
extern "C" { void AcidSharp_symbols1738(acid::Maths* instance) { instance->~Maths(); } }
float (acid::Colour::*AcidSharp_symbols1739)() const = &acid::Colour::GetR;
void (acid::Colour::*AcidSharp_symbols1740)(const float&) = &acid::Colour::SetR;
float (acid::Colour::*AcidSharp_symbols1741)() const = &acid::Colour::GetG;
void (acid::Colour::*AcidSharp_symbols1742)(const float&) = &acid::Colour::SetG;
float (acid::Colour::*AcidSharp_symbols1743)() const = &acid::Colour::GetB;
void (acid::Colour::*AcidSharp_symbols1744)(const float&) = &acid::Colour::SetB;
float (acid::Colour::*AcidSharp_symbols1745)() const = &acid::Colour::GetA;
void (acid::Colour::*AcidSharp_symbols1746)(const float&) = &acid::Colour::SetA;
acid::Colour& (acid::Colour::*AcidSharp_symbols1747)(const acid::Colour&) = &acid::Colour::operator=;
acid::Vector2 (acid::VertexModel::*AcidSharp_symbols1748)() const = &acid::VertexModel::GetUv;
void (acid::VertexModel::*AcidSharp_symbols1749)(const acid::Vector2&) = &acid::VertexModel::SetUv;
acid::Vector3 (acid::VertexModel::*AcidSharp_symbols1750)() const = &acid::VertexModel::GetNormal;
void (acid::VertexModel::*AcidSharp_symbols1751)(const acid::Vector3&) = &acid::VertexModel::SetNormal;
acid::Vector3 (acid::VertexModel::*AcidSharp_symbols1752)() const = &acid::VertexModel::GetTangent;
void (acid::VertexModel::*AcidSharp_symbols1753)(const acid::Vector3&) = &acid::VertexModel::SetTangent;
acid::VertexModel& (acid::VertexModel::*AcidSharp_symbols1754)(const acid::VertexModel&) = &acid::VertexModel::operator=;
void (acid::IComponent::*AcidSharp_symbols1755)(const bool&) = &acid::IComponent::SetEnabled;
acid::IComponent& (acid::IComponent::*AcidSharp_symbols1756)(const acid::IComponent&) = &acid::IComponent::operator=;
acid::IComponent& (acid::IComponent::*AcidSharp_symbols1757)(acid::IComponent&&) = &acid::IComponent::operator=;
extern "C" { void AcidSharp_symbols1758(acid::IComponent* instance) { instance->~IComponent(); } }
extern "C" { void AcidSharp_symbols1759(void* instance, const acid::IComponent& _0) { new (instance) acid::IComponent(_0); } }
extern "C" { void AcidSharp_symbols1760(void* instance, const acid::Mesh& _0) { new (instance) acid::Mesh(_0); } }
acid::Mesh& (acid::Mesh::*AcidSharp_symbols1761)(const acid::Mesh&) = &acid::Mesh::operator=;
::uint32_t (acid::SkeletonLoader::*AcidSharp_symbols1762)() const = &acid::SkeletonLoader::GetJointCount;
extern "C" { void AcidSharp_symbols1763(void* instance, const acid::SkeletonLoader& _0) { new (instance) acid::SkeletonLoader(_0); } }
acid::SkeletonLoader& (acid::SkeletonLoader::*AcidSharp_symbols1764)(acid::SkeletonLoader&&) = &acid::SkeletonLoader::operator=;
acid::SkeletonLoader& (acid::SkeletonLoader::*AcidSharp_symbols1765)(const acid::SkeletonLoader&) = &acid::SkeletonLoader::operator=;
extern "C" { void AcidSharp_symbols1766(void* instance, const acid::SkinLoader& _0) { new (instance) acid::SkinLoader(_0); } }
acid::SkinLoader& (acid::SkinLoader::*AcidSharp_symbols1767)(acid::SkinLoader&&) = &acid::SkinLoader::operator=;
acid::SkinLoader& (acid::SkinLoader::*AcidSharp_symbols1768)(const acid::SkinLoader&) = &acid::SkinLoader::operator=;
acid::MeshAnimated& (acid::MeshAnimated::*AcidSharp_symbols1769)(acid::MeshAnimated&&) = &acid::MeshAnimated::operator=;
extern "C" { void AcidSharp_symbols1770(acid::MeshAnimated* instance) { instance->~MeshAnimated(); } }
acid::Audio* (*AcidSharp_symbols1771)() = &acid::Audio::Get;
::ALCdevice* (acid::Audio::*AcidSharp_symbols1772)() const = &acid::Audio::GetDevice;
::ALCcontext* (acid::Audio::*AcidSharp_symbols1773)() const = &acid::Audio::GetContext;
float (acid::Audio::*AcidSharp_symbols1774)() const = &acid::Audio::GetVolume;
void (acid::Audio::*AcidSharp_symbols1775)(const float&) = &acid::Audio::SetVolume;
acid::Audio& (acid::Audio::*AcidSharp_symbols1776)(const acid::Audio&) = &acid::Audio::operator=;
extern "C" { void AcidSharp_symbols1777(void* instance, const acid::Audio& _0) { new (instance) acid::Audio(_0); } }
extern "C" { void AcidSharp_symbols1778(void* instance, const acid::SoundBuffer& _0) { new (instance) acid::SoundBuffer(_0); } }
acid::SoundBuffer& (acid::SoundBuffer::*AcidSharp_symbols1779)(const acid::SoundBuffer&) = &acid::SoundBuffer::operator=;
bool (acid::Sound::*AcidSharp_symbols1780)() const = &acid::Sound::IsPlaying;
float (acid::Sound::*AcidSharp_symbols1781)() const = &acid::Sound::GetGain;
float (acid::Sound::*AcidSharp_symbols1782)() const = &acid::Sound::GetPitch;
extern "C" { void AcidSharp_symbols1783(void* instance, const acid::Sound& _0) { new (instance) acid::Sound(_0); } }
acid::Sound& (acid::Sound::*AcidSharp_symbols1784)(const acid::Sound&) = &acid::Sound::operator=;
extern "C" { void AcidSharp_symbols1785(void* instance) { new (instance) stb_vorbis_alloc(); } }
extern "C" { void AcidSharp_symbols1786(void* instance, const stb_vorbis_alloc& _0) { new (instance) stb_vorbis_alloc(_0); } }
stb_vorbis_alloc& (stb_vorbis_alloc::*AcidSharp_symbols1787)(const stb_vorbis_alloc&) = &stb_vorbis_alloc::operator=;
stb_vorbis_alloc& (stb_vorbis_alloc::*AcidSharp_symbols1788)(stb_vorbis_alloc&&) = &stb_vorbis_alloc::operator=;
extern "C" { void AcidSharp_symbols1789(stb_vorbis_alloc* instance) { instance->~stb_vorbis_alloc(); } }
extern "C" { void AcidSharp_symbols1790(void* instance) { new (instance) stb_vorbis_info(); } }
extern "C" { void AcidSharp_symbols1791(void* instance, const stb_vorbis_info& _0) { new (instance) stb_vorbis_info(_0); } }
stb_vorbis_info& (stb_vorbis_info::*AcidSharp_symbols1792)(const stb_vorbis_info&) = &stb_vorbis_info::operator=;
stb_vorbis_info& (stb_vorbis_info::*AcidSharp_symbols1793)(stb_vorbis_info&&) = &stb_vorbis_info::operator=;
extern "C" { void AcidSharp_symbols1794(stb_vorbis_info* instance) { instance->~stb_vorbis_info(); } }
::uint32_t (acid::Display::*AcidSharp_symbols1795)() const = &acid::Display::GetWindowWidth;
void (acid::Display::*AcidSharp_symbols1796)(const ::uint32_t&) = &acid::Display::SetWidth;
::uint32_t (acid::Display::*AcidSharp_symbols1797)() const = &acid::Display::GetWindowHeight;
void (acid::Display::*AcidSharp_symbols1798)(const ::uint32_t&) = &acid::Display::SetHeight;
std::string (acid::Display::*AcidSharp_symbols1799)() const = &acid::Display::GetTitle;
std::string (acid::Display::*AcidSharp_symbols1800)() const = &acid::Display::GetIcon;
bool (acid::Display::*AcidSharp_symbols1801)() const = &acid::Display::IsAntialiasing;
void (acid::Display::*AcidSharp_symbols1802)(const bool&) = &acid::Display::SetAntialiasing;
bool (acid::Display::*AcidSharp_symbols1803)() const = &acid::Display::IsFullscreen;
bool (acid::Display::*AcidSharp_symbols1804)() const = &acid::Display::IsClosed;
::uint32_t (acid::Display::*AcidSharp_symbols1805)() const = &acid::Display::GetWindowXPos;
::uint32_t (acid::Display::*AcidSharp_symbols1806)() const = &acid::Display::GetWindowYPos;
::VkInstance (acid::Display::*AcidSharp_symbols1807)() const = &acid::Display::GetInstance;
::VkPhysicalDeviceFeatures (acid::Display::*AcidSharp_symbols1808)() const = &acid::Display::GetPhysicalDeviceFeatures;
::VkPhysicalDeviceMemoryProperties (acid::Display::*AcidSharp_symbols1809)() const = &acid::Display::GetPhysicalDeviceMemoryProperties;
::VkQueue (acid::Display::*AcidSharp_symbols1810)() const = &acid::Display::GetTransferQueue;
::uint32_t (acid::Display::*AcidSharp_symbols1811)() const = &acid::Display::GetTransferFamily;
extern "C" { void AcidSharp_symbols1812(void* instance, const acid::Display& _0) { new (instance) acid::Display(_0); } }
acid::Display& (acid::Display::*AcidSharp_symbols1813)(const acid::Display&) = &acid::Display::operator=;
acid::IEvent& (acid::IEvent::*AcidSharp_symbols1814)(const acid::IEvent&) = &acid::IEvent::operator=;
acid::IEvent& (acid::IEvent::*AcidSharp_symbols1815)(acid::IEvent&&) = &acid::IEvent::operator=;
extern "C" { void AcidSharp_symbols1816(acid::IEvent* instance) { instance->~IEvent(); } }
extern "C" { void AcidSharp_symbols1817(void* instance, const acid::Events& _0) { new (instance) acid::Events(_0); } }
acid::Events& (acid::Events::*AcidSharp_symbols1818)(const acid::Events&) = &acid::Events::operator=;
extern "C" { void AcidSharp_symbols1819(void* instance, const acid::EventStandard& _0) { new (instance) acid::EventStandard(_0); } }
acid::EventStandard& (acid::EventStandard::*AcidSharp_symbols1820)(const acid::EventStandard&) = &acid::EventStandard::operator=;
acid::EventStandard& (acid::EventStandard::*AcidSharp_symbols1821)(acid::EventStandard&&) = &acid::EventStandard::operator=;
extern "C" { void AcidSharp_symbols1822(acid::EventStandard* instance) { instance->~EventStandard(); } }
extern "C" { void AcidSharp_symbols1823(void* instance, const acid::EventTime& _0) { new (instance) acid::EventTime(_0); } }
acid::EventTime& (acid::EventTime::*AcidSharp_symbols1824)(const acid::EventTime&) = &acid::EventTime::operator=;
acid::EventTime& (acid::EventTime::*AcidSharp_symbols1825)(acid::EventTime&&) = &acid::EventTime::operator=;
extern "C" { void AcidSharp_symbols1826(acid::EventTime* instance) { instance->~EventTime(); } }
acid::IFile& (acid::IFile::*AcidSharp_symbols1827)(const acid::IFile&) = &acid::IFile::operator=;
acid::IFile& (acid::IFile::*AcidSharp_symbols1828)(acid::IFile&&) = &acid::IFile::operator=;
extern "C" { void AcidSharp_symbols1829(acid::IFile* instance) { instance->~IFile(); } }
acid::RowCsv& (acid::RowCsv::*AcidSharp_symbols1830)(acid::RowCsv&&) = &acid::RowCsv::operator=;
acid::RowCsv& (acid::RowCsv::*AcidSharp_symbols1831)(const acid::RowCsv&) = &acid::RowCsv::operator=;
char (acid::FileCsv::*AcidSharp_symbols1832)() const = &acid::FileCsv::GetDelimiter;
void (acid::FileCsv::*AcidSharp_symbols1833)(const char&) = &acid::FileCsv::SetDelimiter;
::size_t (acid::FileCsv::*AcidSharp_symbols1834)() const = &acid::FileCsv::GetRowCount;
extern "C" { void AcidSharp_symbols1835(void* instance, const acid::FileCsv& _0) { new (instance) acid::FileCsv(_0); } }
acid::FileCsv& (acid::FileCsv::*AcidSharp_symbols1836)(const acid::FileCsv&) = &acid::FileCsv::operator=;
std::string (acid::JsonSection::*AcidSharp_symbols1837)() const = &acid::JsonSection::GetName;
void (acid::JsonSection::*AcidSharp_symbols1838)(const std::string&) = &acid::JsonSection::SetName;
extern "C" { void AcidSharp_symbols1839(void* instance, const acid::JsonSection& _0) { new (instance) acid::JsonSection(_0); } }
acid::JsonSection& (acid::JsonSection::*AcidSharp_symbols1840)(const acid::JsonSection&) = &acid::JsonSection::operator=;
extern "C" { void AcidSharp_symbols1841(void* instance, const acid::FileJson& _0) { new (instance) acid::FileJson(_0); } }
acid::FileJson& (acid::FileJson::*AcidSharp_symbols1842)(const acid::FileJson&) = &acid::FileJson::operator=;
extern "C" { void AcidSharp_symbols1843(void* instance, const acid::FileXml& _0) { new (instance) acid::FileXml(_0); } }
acid::FileXml& (acid::FileXml::*AcidSharp_symbols1844)(const acid::FileXml&) = &acid::FileXml::operator=;
extern "C" { void AcidSharp_symbols1845(void* instance, const acid::XmlNode& _0) { new (instance) acid::XmlNode(_0); } }
acid::XmlNode& (acid::XmlNode::*AcidSharp_symbols1846)(const acid::XmlNode&) = &acid::XmlNode::operator=;
extern "C" { void AcidSharp_symbols1847(void* instance) { new (instance) acid::FileSystem(); } }
extern "C" { void AcidSharp_symbols1848(void* instance, const acid::FileSystem& _0) { new (instance) acid::FileSystem(_0); } }
acid::FileSystem& (acid::FileSystem::*AcidSharp_symbols1849)(const acid::FileSystem&) = &acid::FileSystem::operator=;
acid::FileSystem& (acid::FileSystem::*AcidSharp_symbols1850)(acid::FileSystem&&) = &acid::FileSystem::operator=;
extern "C" { void AcidSharp_symbols1851(acid::FileSystem* instance) { instance->~FileSystem(); } }
acid::IAxis& (acid::IAxis::*AcidSharp_symbols1852)(const acid::IAxis&) = &acid::IAxis::operator=;
acid::IAxis& (acid::IAxis::*AcidSharp_symbols1853)(acid::IAxis&&) = &acid::IAxis::operator=;
extern "C" { void AcidSharp_symbols1854(acid::IAxis* instance) { instance->~IAxis(); } }
acid::IButton& (acid::IButton::*AcidSharp_symbols1855)(const acid::IButton&) = &acid::IButton::operator=;
acid::IButton& (acid::IButton::*AcidSharp_symbols1856)(acid::IButton&&) = &acid::IButton::operator=;
extern "C" { void AcidSharp_symbols1857(acid::IButton* instance) { instance->~IButton(); } }
extern "C" { void AcidSharp_symbols1858(void* instance, const acid::AxisCompound& _0) { new (instance) acid::AxisCompound(_0); } }
acid::AxisCompound& (acid::AxisCompound::*AcidSharp_symbols1859)(const acid::AxisCompound&) = &acid::AxisCompound::operator=;
extern "C" { void AcidSharp_symbols1860(void* instance, const acid::Joystick& _0) { new (instance) acid::Joystick(_0); } }
acid::Joystick& (acid::Joystick::*AcidSharp_symbols1861)(acid::Joystick&&) = &acid::Joystick::operator=;
std::string (acid::Joysticks::*AcidSharp_symbols1862)(const acid::JoystickPort&) const = &acid::Joysticks::GetName;
acid::Joysticks& (acid::Joysticks::*AcidSharp_symbols1863)(const acid::Joysticks&) = &acid::Joysticks::operator=;
extern "C" { void AcidSharp_symbols1864(void* instance, const acid::Joysticks& _0) { new (instance) acid::Joysticks(_0); } }
acid::JoystickPort (acid::AxisJoystick::*AcidSharp_symbols1865)() const = &acid::AxisJoystick::GetJoystick;
void (acid::AxisJoystick::*AcidSharp_symbols1866)(const acid::JoystickPort&) = &acid::AxisJoystick::SetJoystick;
acid::AxisJoystick& (acid::AxisJoystick::*AcidSharp_symbols1867)(const acid::AxisJoystick&) = &acid::AxisJoystick::operator=;
extern "C" { void AcidSharp_symbols1868(void* instance, const acid::ButtonCompound& _0) { new (instance) acid::ButtonCompound(_0); } }
acid::ButtonCompound& (acid::ButtonCompound::*AcidSharp_symbols1869)(const acid::ButtonCompound&) = &acid::ButtonCompound::operator=;
acid::JoystickPort (acid::ButtonJoystick::*AcidSharp_symbols1870)() const = &acid::ButtonJoystick::GetJoystick;
void (acid::ButtonJoystick::*AcidSharp_symbols1871)(const acid::JoystickPort&) = &acid::ButtonJoystick::SetJoystick;
acid::ButtonJoystick& (acid::ButtonJoystick::*AcidSharp_symbols1872)(const acid::ButtonJoystick&) = &acid::ButtonJoystick::operator=;
acid::Keyboard& (acid::Keyboard::*AcidSharp_symbols1873)(const acid::Keyboard&) = &acid::Keyboard::operator=;
extern "C" { void AcidSharp_symbols1874(void* instance, const acid::Keyboard& _0) { new (instance) acid::Keyboard(_0); } }
extern "C" { void AcidSharp_symbols1875(void* instance, const acid::ButtonKeyboard& _0) { new (instance) acid::ButtonKeyboard(_0); } }
acid::ButtonKeyboard& (acid::ButtonKeyboard::*AcidSharp_symbols1876)(const acid::ButtonKeyboard&) = &acid::ButtonKeyboard::operator=;
std::string (acid::Mouse::*AcidSharp_symbols1877)() const = &acid::Mouse::GetCustomMouse;
float (acid::Mouse::*AcidSharp_symbols1878)() const = &acid::Mouse::GetDeltaX;
float (acid::Mouse::*AcidSharp_symbols1879)() const = &acid::Mouse::GetDeltaY;
float (acid::Mouse::*AcidSharp_symbols1880)() const = &acid::Mouse::GetDeltaWheel;
bool (acid::Mouse::*AcidSharp_symbols1881)() const = &acid::Mouse::IsCursorDisabled;
extern "C" { void AcidSharp_symbols1882(void* instance, const acid::Mouse& _0) { new (instance) acid::Mouse(_0); } }
acid::Mouse& (acid::Mouse::*AcidSharp_symbols1883)(const acid::Mouse&) = &acid::Mouse::operator=;
extern "C" { void AcidSharp_symbols1884(void* instance, const acid::ButtonMouse& _0) { new (instance) acid::ButtonMouse(_0); } }
acid::ButtonMouse& (acid::ButtonMouse::*AcidSharp_symbols1885)(const acid::ButtonMouse&) = &acid::ButtonMouse::operator=;
void (acid::SmoothFloat::*AcidSharp_symbols1886)(const float&) = &acid::SmoothFloat::SetTarget;
float (acid::SmoothFloat::*AcidSharp_symbols1887)() const = &acid::SmoothFloat::GetTarget;
void (acid::SmoothFloat::*AcidSharp_symbols1888)(const float&) = &acid::SmoothFloat::IncreaseTarget;
float (acid::SmoothFloat::*AcidSharp_symbols1889)() const = &acid::SmoothFloat::Get;
extern "C" { void AcidSharp_symbols1890(void* instance, const acid::SmoothFloat& _0) { new (instance) acid::SmoothFloat(_0); } }
acid::SmoothFloat& (acid::SmoothFloat::*AcidSharp_symbols1891)(const acid::SmoothFloat&) = &acid::SmoothFloat::operator=;
acid::Matrix2& (acid::Matrix2::*AcidSharp_symbols1892)(const acid::Matrix2&) = &acid::Matrix2::operator=;
acid::Matrix3& (acid::Matrix3::*AcidSharp_symbols1893)(const acid::Matrix3&) = &acid::Matrix3::operator=;
void (acid::Transform::*AcidSharp_symbols1894)(const acid::Vector3&) = &acid::Transform::SetScaling;
acid::Transform& (acid::Transform::*AcidSharp_symbols1895)(const acid::Transform&) = &acid::Transform::operator=;
acid::IDriver& (acid::IDriver::*AcidSharp_symbols1896)(const acid::IDriver&) = &acid::IDriver::operator=;
extern "C" { void AcidSharp_symbols1897(void* instance, const acid::DriverBounce& _0) { new (instance) acid::DriverBounce(_0); } }
acid::DriverBounce& (acid::DriverBounce::*AcidSharp_symbols1898)(const acid::DriverBounce&) = &acid::DriverBounce::operator=;
extern "C" { void AcidSharp_symbols1899(void* instance, const acid::DriverConstant& _0) { new (instance) acid::DriverConstant(_0); } }
acid::DriverConstant& (acid::DriverConstant::*AcidSharp_symbols1900)(const acid::DriverConstant&) = &acid::DriverConstant::operator=;
float (acid::DriverFade::*AcidSharp_symbols1901)() const = &acid::DriverFade::GetStart;
void (acid::DriverFade::*AcidSharp_symbols1902)(const float&) = &acid::DriverFade::SetStart;
float (acid::DriverFade::*AcidSharp_symbols1903)() const = &acid::DriverFade::GetEnd;
void (acid::DriverFade::*AcidSharp_symbols1904)(const float&) = &acid::DriverFade::SetEnd;
float (acid::DriverFade::*AcidSharp_symbols1905)() const = &acid::DriverFade::GetPeak;
void (acid::DriverFade::*AcidSharp_symbols1906)(const float&) = &acid::DriverFade::SetPeak;
extern "C" { void AcidSharp_symbols1907(void* instance, const acid::DriverFade& _0) { new (instance) acid::DriverFade(_0); } }
acid::DriverFade& (acid::DriverFade::*AcidSharp_symbols1908)(const acid::DriverFade&) = &acid::DriverFade::operator=;
extern "C" { void AcidSharp_symbols1909(void* instance, const acid::DriverLinear& _0) { new (instance) acid::DriverLinear(_0); } }
acid::DriverLinear& (acid::DriverLinear::*AcidSharp_symbols1910)(const acid::DriverLinear&) = &acid::DriverLinear::operator=;
extern "C" { void AcidSharp_symbols1911(void* instance, const acid::DriverSinwave& _0) { new (instance) acid::DriverSinwave(_0); } }
acid::DriverSinwave& (acid::DriverSinwave::*AcidSharp_symbols1912)(const acid::DriverSinwave&) = &acid::DriverSinwave::operator=;
extern "C" { void AcidSharp_symbols1913(void* instance, const acid::DriverSlide& _0) { new (instance) acid::DriverSlide(_0); } }
acid::DriverSlide& (acid::DriverSlide::*AcidSharp_symbols1914)(const acid::DriverSlide&) = &acid::DriverSlide::operator=;
::int32_t (acid::Noise::*AcidSharp_symbols1915)() const = &acid::Noise::GetSeed;
float (acid::Noise::*AcidSharp_symbols1916)() const = &acid::Noise::GetFrequency;
void (acid::Noise::*AcidSharp_symbols1917)(const float&) = &acid::Noise::SetFrequency;
acid::NoiseInterp (acid::Noise::*AcidSharp_symbols1918)() const = &acid::Noise::GetInterp;
void (acid::Noise::*AcidSharp_symbols1919)(const acid::NoiseInterp&) = &acid::Noise::SetInterp;
acid::NoiseType (acid::Noise::*AcidSharp_symbols1920)() const = &acid::Noise::GetNoiseType;
void (acid::Noise::*AcidSharp_symbols1921)(const acid::NoiseType&) = &acid::Noise::SetNoiseType;
::int32_t (acid::Noise::*AcidSharp_symbols1922)() const = &acid::Noise::GetFractalOctaves;
float (acid::Noise::*AcidSharp_symbols1923)() const = &acid::Noise::GetFractalLacunarity;
void (acid::Noise::*AcidSharp_symbols1924)(const float&) = &acid::Noise::SetFractalLacunarity;
float (acid::Noise::*AcidSharp_symbols1925)() const = &acid::Noise::GetFractalGain;
acid::NoiseFractal (acid::Noise::*AcidSharp_symbols1926)() const = &acid::Noise::GetFractalType;
void (acid::Noise::*AcidSharp_symbols1927)(const acid::NoiseFractal&) = &acid::Noise::SetFractalType;
acid::NoiseCellularFunc (acid::Noise::*AcidSharp_symbols1928)() const = &acid::Noise::GetCellularDistanceFunction;
void (acid::Noise::*AcidSharp_symbols1929)(const acid::NoiseCellularFunc&) = &acid::Noise::SetCellularDistanceFunction;
acid::NoiseCellularReturn (acid::Noise::*AcidSharp_symbols1930)() const = &acid::Noise::GetCellularReturnType;
void (acid::Noise::*AcidSharp_symbols1931)(const acid::NoiseCellularReturn&) = &acid::Noise::SetCellularReturnType;
void (acid::Noise::*AcidSharp_symbols1932)(acid::Noise*) = &acid::Noise::SetCellularNoiseLookup;
float (acid::Noise::*AcidSharp_symbols1933)() const = &acid::Noise::GetCellularJitter;
void (acid::Noise::*AcidSharp_symbols1934)(const float&) = &acid::Noise::SetCellularJitter;
float (acid::Noise::*AcidSharp_symbols1935)() const = &acid::Noise::GetGradientPerturbAmp;
void (acid::Noise::*AcidSharp_symbols1936)(const float&) = &acid::Noise::SetGradientPerturbAmp;
acid::ComponentCreate& (acid::ComponentCreate::*AcidSharp_symbols1937)(acid::ComponentCreate&&) = &acid::ComponentCreate::operator=;
extern "C" { void AcidSharp_symbols1938(void* instance) { new (instance) acid::ComponentCreate(); } }
acid::ComponentCreate& (acid::ComponentCreate::*AcidSharp_symbols1939)(const acid::ComponentCreate&) = &acid::ComponentCreate::operator=;
extern "C" { void AcidSharp_symbols1940(void* instance, const acid::ComponentRegister& _0) { new (instance) acid::ComponentRegister(_0); } }
acid::ComponentRegister& (acid::ComponentRegister::*AcidSharp_symbols1941)(const acid::ComponentRegister&) = &acid::ComponentRegister::operator=;
extern "C" { void AcidSharp_symbols1942(void* instance, const acid::Frustum& _0) { new (instance) acid::Frustum(_0); } }
acid::Frustum& (acid::Frustum::*AcidSharp_symbols1943)(const acid::Frustum&) = &acid::Frustum::operator=;
acid::ISpatialStructure& (acid::ISpatialStructure::*AcidSharp_symbols1944)(const acid::ISpatialStructure&) = &acid::ISpatialStructure::operator=;
acid::ISpatialStructure& (acid::ISpatialStructure::*AcidSharp_symbols1945)(acid::ISpatialStructure&&) = &acid::ISpatialStructure::operator=;
extern "C" { void AcidSharp_symbols1946(acid::ISpatialStructure* instance) { instance->~ISpatialStructure(); } }
::uint32_t (acid::GameObject::*AcidSharp_symbols1947)() const = &acid::GameObject::GetComponentCount;
std::string (acid::GameObject::*AcidSharp_symbols1948)() const = &acid::GameObject::GetName;
void (acid::GameObject::*AcidSharp_symbols1949)(const std::string&) = &acid::GameObject::SetName;
acid::ISpatialStructure* (acid::GameObject::*AcidSharp_symbols1950)() const = &acid::GameObject::GetStructure;
acid::GameObject* (acid::GameObject::*AcidSharp_symbols1951)() const = &acid::GameObject::GetParent;
void (acid::GameObject::*AcidSharp_symbols1952)(acid::GameObject*) = &acid::GameObject::SetParent;
extern "C" { void AcidSharp_symbols1953(void* instance, const acid::GameObject& _0) { new (instance) acid::GameObject(_0); } }
acid::GameObject& (acid::GameObject::*AcidSharp_symbols1954)(const acid::GameObject&) = &acid::GameObject::operator=;
void (acid::Force::*AcidSharp_symbols1955)(const acid::Vector3&) = &acid::Force::SetForce;
float (acid::Force::*AcidSharp_symbols1956)() const = &acid::Force::GetTimeLeft;
void (acid::Force::*AcidSharp_symbols1957)(float) = &acid::Force::SetTimeLeft;
void (acid::Force::*AcidSharp_symbols1958)(const acid::Vector3&) = &acid::Force::SetPosition;
extern "C" { void AcidSharp_symbols1959(void* instance, const acid::Force& _0) { new (instance) acid::Force(_0); } }
acid::Force& (acid::Force::*AcidSharp_symbols1960)(const acid::Force&) = &acid::Force::operator=;
acid::Vector3 (acid::Ray::*AcidSharp_symbols1961)() const = &acid::Ray::GetOrigin;
extern "C" { void AcidSharp_symbols1962(void* instance, const acid::Ray& _0) { new (instance) acid::Ray(_0); } }
acid::Ray& (acid::Ray::*AcidSharp_symbols1963)(const acid::Ray&) = &acid::Ray::operator=;
acid::ICamera& (acid::ICamera::*AcidSharp_symbols1964)(const acid::ICamera&) = &acid::ICamera::operator=;
acid::ICamera& (acid::ICamera::*AcidSharp_symbols1965)(acid::ICamera&&) = &acid::ICamera::operator=;
extern "C" { void AcidSharp_symbols1966(acid::ICamera* instance) { instance->~ICamera(); } }
void (acid::UiBound::*AcidSharp_symbols1967)(const acid::Vector2&) = &acid::UiBound::SetReference;
bool (acid::UiBound::*AcidSharp_symbols1968)() const = &acid::UiBound::IsAspectPosition;
void (acid::UiBound::*AcidSharp_symbols1969)(const bool&) = &acid::UiBound::SetAspectPosition;
bool (acid::UiBound::*AcidSharp_symbols1970)() const = &acid::UiBound::IsAspectSize;
void (acid::UiBound::*AcidSharp_symbols1971)(const bool&) = &acid::UiBound::SetAspectSize;
acid::UiBound& (acid::UiBound::*AcidSharp_symbols1972)(const acid::UiBound&) = &acid::UiBound::operator=;
acid::UiObject* (acid::UiObject::*AcidSharp_symbols1973)() const = &acid::UiObject::GetParent;
void (acid::UiObject::*AcidSharp_symbols1974)(const acid::UiBound&) = &acid::UiObject::SetRectangle;
void (acid::UiObject::*AcidSharp_symbols1975)(const acid::Vector4&) = &acid::UiObject::SetScissor;
acid::Vector2 (acid::UiObject::*AcidSharp_symbols1976)() const = &acid::UiObject::GetPositionOffset;
void (acid::UiObject::*AcidSharp_symbols1977)(const acid::Vector2&) = &acid::UiObject::SetPositionOffset;
void (acid::SelectorJoystick::*AcidSharp_symbols1978)(const acid::JoystickPort&) = &acid::SelectorJoystick::SetJoystick;
void (acid::SelectorJoystick::*AcidSharp_symbols1979)(const acid::AxisJoystick&) = &acid::SelectorJoystick::SetAxisX;
void (acid::SelectorJoystick::*AcidSharp_symbols1980)(const acid::AxisJoystick&) = &acid::SelectorJoystick::SetAxisY;
void (acid::SelectorJoystick::*AcidSharp_symbols1981)(const acid::MouseButton&, const acid::ButtonJoystick&) = &acid::SelectorJoystick::SetInputButton;
extern "C" { void AcidSharp_symbols1982(void* instance, const acid::SelectorJoystick& _0) { new (instance) acid::SelectorJoystick(_0); } }
acid::SelectorJoystick& (acid::SelectorJoystick::*AcidSharp_symbols1983)(const acid::SelectorJoystick&) = &acid::SelectorJoystick::operator=;
extern "C" { void AcidSharp_symbols1984(void* instance) { new (instance) acid::UiSelectorMouse(); } }
extern "C" { void AcidSharp_symbols1985(void* instance, const acid::UiSelectorMouse& _0) { new (instance) acid::UiSelectorMouse(_0); } }
acid::UiSelectorMouse& (acid::UiSelectorMouse::*AcidSharp_symbols1986)(const acid::UiSelectorMouse&) = &acid::UiSelectorMouse::operator=;
acid::UiSelectorMouse& (acid::UiSelectorMouse::*AcidSharp_symbols1987)(acid::UiSelectorMouse&&) = &acid::UiSelectorMouse::operator=;
extern "C" { void AcidSharp_symbols1988(acid::UiSelectorMouse* instance) { instance->~UiSelectorMouse(); } }
float (acid::UiSelector::*AcidSharp_symbols1989)() const = &acid::UiSelector::GetCursorY;
extern "C" { void AcidSharp_symbols1990(void* instance, const acid::UiSelector& _0) { new (instance) acid::UiSelector(_0); } }
acid::UiSelector& (acid::UiSelector::*AcidSharp_symbols1991)(const acid::UiSelector&) = &acid::UiSelector::operator=;
float (acid::Rigidbody::*AcidSharp_symbols1992)() const = &acid::Rigidbody::GetMass;
float (acid::Rigidbody::*AcidSharp_symbols1993)() const = &acid::Rigidbody::GetFriction;
acid::Vector3 (acid::Rigidbody::*AcidSharp_symbols1994)() const = &acid::Rigidbody::GetLinearFactor;
acid::Vector3 (acid::Rigidbody::*AcidSharp_symbols1995)() const = &acid::Rigidbody::GetAngularFactor;
const acid::Vector3 (acid::Rigidbody::*AcidSharp_symbols1996)() const = &acid::Rigidbody::GetLinearVelocity;
const acid::Vector3 (acid::Rigidbody::*AcidSharp_symbols1997)() const = &acid::Rigidbody::GetAngularVelocity;
extern "C" { void AcidSharp_symbols1998(void* instance, const acid::SceneStructure& _0) { new (instance) acid::SceneStructure(_0); } }
acid::SceneStructure& (acid::SceneStructure::*AcidSharp_symbols1999)(const acid::SceneStructure&) = &acid::SceneStructure::operator=;
void (acid::IScene::*AcidSharp_symbols2000)(acid::ICamera*) = &acid::IScene::SetCamera;
acid::IScene& (acid::IScene::*AcidSharp_symbols2001)(acid::IScene&&) = &acid::IScene::operator=;
void (acid::Scenes::*AcidSharp_symbols2002)(acid::IScene*) = &acid::Scenes::SetScene;
bool (acid::Scenes::*AcidSharp_symbols2003)(const std::string&) = &acid::Scenes::DeregisterComponent;
