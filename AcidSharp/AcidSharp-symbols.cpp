#include <acid\Acid.hpp>

extern "C" { void AcidSharp_symbols1(void* instance) { new (instance) acid::String(); } }
extern "C" { void AcidSharp_symbols2(void* instance, const acid::String& _0) { new (instance) acid::String(_0); } }
extern "C" { void AcidSharp_symbols3(acid::String* instance) { instance->~String(); } }
extern "C" { void AcidSharp_symbols4(acid::Vector3* instance) { instance->~Vector3(); } }
extern "C" { void AcidSharp_symbols5(acid::Vector4* instance) { instance->~Vector4(); } }
extern "C" { void AcidSharp_symbols6(acid::Matrix4* instance) { instance->~Matrix4(); } }
extern "C" { void AcidSharp_symbols7(acid::Quaternion* instance) { instance->~Quaternion(); } }
extern "C" { void AcidSharp_symbols8(acid::JointTransform* instance) { instance->~JointTransform(); } }
extern "C" { void AcidSharp_symbols9(void* instance, const acid::Animator& _0) { new (instance) acid::Animator(_0); } }
extern "C" { void AcidSharp_symbols10(acid::Animator* instance) { instance->~Animator(); } }
extern "C" { void AcidSharp_symbols11(void* instance) { new (instance) acid::Maths(); } }
extern "C" { void AcidSharp_symbols12(void* instance, const acid::Maths& _0) { new (instance) acid::Maths(_0); } }
extern "C" { void AcidSharp_symbols13(acid::Maths* instance) { instance->~Maths(); } }
extern "C" { void AcidSharp_symbols14(void* instance) { new (instance) VkApplicationInfo(); } }
extern "C" { void AcidSharp_symbols15(void* instance, const VkApplicationInfo& _0) { new (instance) VkApplicationInfo(_0); } }
VkApplicationInfo& (VkApplicationInfo::*AcidSharp_symbols16)(const VkApplicationInfo&) = &VkApplicationInfo::operator=;
VkApplicationInfo& (VkApplicationInfo::*AcidSharp_symbols17)(VkApplicationInfo&&) = &VkApplicationInfo::operator=;
extern "C" { void AcidSharp_symbols18(VkApplicationInfo* instance) { instance->~VkApplicationInfo(); } }
extern "C" { void AcidSharp_symbols19(void* instance) { new (instance) VkInstanceCreateInfo(); } }
extern "C" { void AcidSharp_symbols20(void* instance, const VkInstanceCreateInfo& _0) { new (instance) VkInstanceCreateInfo(_0); } }
VkInstanceCreateInfo& (VkInstanceCreateInfo::*AcidSharp_symbols21)(const VkInstanceCreateInfo&) = &VkInstanceCreateInfo::operator=;
VkInstanceCreateInfo& (VkInstanceCreateInfo::*AcidSharp_symbols22)(VkInstanceCreateInfo&&) = &VkInstanceCreateInfo::operator=;
extern "C" { void AcidSharp_symbols23(VkInstanceCreateInfo* instance) { instance->~VkInstanceCreateInfo(); } }
extern "C" { void AcidSharp_symbols24(void* instance) { new (instance) VkAllocationCallbacks(); } }
extern "C" { void AcidSharp_symbols25(void* instance, const VkAllocationCallbacks& _0) { new (instance) VkAllocationCallbacks(_0); } }
VkAllocationCallbacks& (VkAllocationCallbacks::*AcidSharp_symbols26)(const VkAllocationCallbacks&) = &VkAllocationCallbacks::operator=;
VkAllocationCallbacks& (VkAllocationCallbacks::*AcidSharp_symbols27)(VkAllocationCallbacks&&) = &VkAllocationCallbacks::operator=;
extern "C" { void AcidSharp_symbols28(VkAllocationCallbacks* instance) { instance->~VkAllocationCallbacks(); } }
extern "C" { void AcidSharp_symbols29(void* instance, const VkPhysicalDeviceFeatures& _0) { new (instance) VkPhysicalDeviceFeatures(_0); } }
extern "C" { void AcidSharp_symbols30(VkPhysicalDeviceFeatures* instance) { instance->~VkPhysicalDeviceFeatures(); } }
VkPhysicalDeviceFeatures& (VkPhysicalDeviceFeatures::*AcidSharp_symbols31)(const VkPhysicalDeviceFeatures&) = &VkPhysicalDeviceFeatures::operator=;
VkPhysicalDeviceFeatures& (VkPhysicalDeviceFeatures::*AcidSharp_symbols32)(VkPhysicalDeviceFeatures&&) = &VkPhysicalDeviceFeatures::operator=;
extern "C" { void AcidSharp_symbols33(void* instance) { new (instance) VkPhysicalDeviceFeatures(); } }
extern "C" { void AcidSharp_symbols34(void* instance) { new (instance) VkFormatProperties(); } }
extern "C" { void AcidSharp_symbols35(void* instance, const VkFormatProperties& _0) { new (instance) VkFormatProperties(_0); } }
VkFormatProperties& (VkFormatProperties::*AcidSharp_symbols36)(const VkFormatProperties&) = &VkFormatProperties::operator=;
VkFormatProperties& (VkFormatProperties::*AcidSharp_symbols37)(VkFormatProperties&&) = &VkFormatProperties::operator=;
extern "C" { void AcidSharp_symbols38(VkFormatProperties* instance) { instance->~VkFormatProperties(); } }
extern "C" { void AcidSharp_symbols39(void* instance) { new (instance) VkExtent3D(); } }
extern "C" { void AcidSharp_symbols40(void* instance, const VkExtent3D& _0) { new (instance) VkExtent3D(_0); } }
VkExtent3D& (VkExtent3D::*AcidSharp_symbols41)(const VkExtent3D&) = &VkExtent3D::operator=;
VkExtent3D& (VkExtent3D::*AcidSharp_symbols42)(VkExtent3D&&) = &VkExtent3D::operator=;
extern "C" { void AcidSharp_symbols43(VkExtent3D* instance) { instance->~VkExtent3D(); } }
extern "C" { void AcidSharp_symbols44(void* instance) { new (instance) VkImageFormatProperties(); } }
extern "C" { void AcidSharp_symbols45(void* instance, const VkImageFormatProperties& _0) { new (instance) VkImageFormatProperties(_0); } }
VkImageFormatProperties& (VkImageFormatProperties::*AcidSharp_symbols46)(const VkImageFormatProperties&) = &VkImageFormatProperties::operator=;
VkImageFormatProperties& (VkImageFormatProperties::*AcidSharp_symbols47)(VkImageFormatProperties&&) = &VkImageFormatProperties::operator=;
extern "C" { void AcidSharp_symbols48(VkImageFormatProperties* instance) { instance->~VkImageFormatProperties(); } }
extern "C" { void AcidSharp_symbols49(void* instance, const VkPhysicalDeviceLimits& _0) { new (instance) VkPhysicalDeviceLimits(_0); } }
extern "C" { void AcidSharp_symbols50(VkPhysicalDeviceLimits* instance) { instance->~VkPhysicalDeviceLimits(); } }
VkPhysicalDeviceLimits& (VkPhysicalDeviceLimits::*AcidSharp_symbols51)(const VkPhysicalDeviceLimits&) = &VkPhysicalDeviceLimits::operator=;
VkPhysicalDeviceLimits& (VkPhysicalDeviceLimits::*AcidSharp_symbols52)(VkPhysicalDeviceLimits&&) = &VkPhysicalDeviceLimits::operator=;
extern "C" { void AcidSharp_symbols53(void* instance) { new (instance) VkPhysicalDeviceLimits(); } }
extern "C" { void AcidSharp_symbols54(void* instance, const VkPhysicalDeviceSparseProperties& _0) { new (instance) VkPhysicalDeviceSparseProperties(_0); } }
extern "C" { void AcidSharp_symbols55(VkPhysicalDeviceSparseProperties* instance) { instance->~VkPhysicalDeviceSparseProperties(); } }
VkPhysicalDeviceSparseProperties& (VkPhysicalDeviceSparseProperties::*AcidSharp_symbols56)(const VkPhysicalDeviceSparseProperties&) = &VkPhysicalDeviceSparseProperties::operator=;
VkPhysicalDeviceSparseProperties& (VkPhysicalDeviceSparseProperties::*AcidSharp_symbols57)(VkPhysicalDeviceSparseProperties&&) = &VkPhysicalDeviceSparseProperties::operator=;
extern "C" { void AcidSharp_symbols58(void* instance) { new (instance) VkPhysicalDeviceSparseProperties(); } }
extern "C" { void AcidSharp_symbols59(void* instance, const VkPhysicalDeviceProperties& _0) { new (instance) VkPhysicalDeviceProperties(_0); } }
extern "C" { void AcidSharp_symbols60(VkPhysicalDeviceProperties* instance) { instance->~VkPhysicalDeviceProperties(); } }
VkPhysicalDeviceProperties& (VkPhysicalDeviceProperties::*AcidSharp_symbols61)(const VkPhysicalDeviceProperties&) = &VkPhysicalDeviceProperties::operator=;
VkPhysicalDeviceProperties& (VkPhysicalDeviceProperties::*AcidSharp_symbols62)(VkPhysicalDeviceProperties&&) = &VkPhysicalDeviceProperties::operator=;
extern "C" { void AcidSharp_symbols63(void* instance) { new (instance) VkPhysicalDeviceProperties(); } }
extern "C" { void AcidSharp_symbols64(void* instance) { new (instance) VkQueueFamilyProperties(); } }
extern "C" { void AcidSharp_symbols65(void* instance, const VkQueueFamilyProperties& _0) { new (instance) VkQueueFamilyProperties(_0); } }
VkQueueFamilyProperties& (VkQueueFamilyProperties::*AcidSharp_symbols66)(const VkQueueFamilyProperties&) = &VkQueueFamilyProperties::operator=;
VkQueueFamilyProperties& (VkQueueFamilyProperties::*AcidSharp_symbols67)(VkQueueFamilyProperties&&) = &VkQueueFamilyProperties::operator=;
extern "C" { void AcidSharp_symbols68(VkQueueFamilyProperties* instance) { instance->~VkQueueFamilyProperties(); } }
extern "C" { void AcidSharp_symbols69(void* instance, const VkMemoryType& _0) { new (instance) VkMemoryType(_0); } }
extern "C" { void AcidSharp_symbols70(VkMemoryType* instance) { instance->~VkMemoryType(); } }
VkMemoryType& (VkMemoryType::*AcidSharp_symbols71)(const VkMemoryType&) = &VkMemoryType::operator=;
VkMemoryType& (VkMemoryType::*AcidSharp_symbols72)(VkMemoryType&&) = &VkMemoryType::operator=;
extern "C" { void AcidSharp_symbols73(void* instance) { new (instance) VkMemoryType(); } }
extern "C" { void AcidSharp_symbols74(void* instance, const VkMemoryHeap& _0) { new (instance) VkMemoryHeap(_0); } }
extern "C" { void AcidSharp_symbols75(VkMemoryHeap* instance) { instance->~VkMemoryHeap(); } }
VkMemoryHeap& (VkMemoryHeap::*AcidSharp_symbols76)(const VkMemoryHeap&) = &VkMemoryHeap::operator=;
VkMemoryHeap& (VkMemoryHeap::*AcidSharp_symbols77)(VkMemoryHeap&&) = &VkMemoryHeap::operator=;
extern "C" { void AcidSharp_symbols78(void* instance) { new (instance) VkMemoryHeap(); } }
extern "C" { void AcidSharp_symbols79(void* instance, const VkPhysicalDeviceMemoryProperties& _0) { new (instance) VkPhysicalDeviceMemoryProperties(_0); } }
extern "C" { void AcidSharp_symbols80(VkPhysicalDeviceMemoryProperties* instance) { instance->~VkPhysicalDeviceMemoryProperties(); } }
VkPhysicalDeviceMemoryProperties& (VkPhysicalDeviceMemoryProperties::*AcidSharp_symbols81)(const VkPhysicalDeviceMemoryProperties&) = &VkPhysicalDeviceMemoryProperties::operator=;
VkPhysicalDeviceMemoryProperties& (VkPhysicalDeviceMemoryProperties::*AcidSharp_symbols82)(VkPhysicalDeviceMemoryProperties&&) = &VkPhysicalDeviceMemoryProperties::operator=;
extern "C" { void AcidSharp_symbols83(void* instance) { new (instance) VkPhysicalDeviceMemoryProperties(); } }
extern "C" { void AcidSharp_symbols84(void* instance) { new (instance) VkDeviceQueueCreateInfo(); } }
extern "C" { void AcidSharp_symbols85(void* instance, const VkDeviceQueueCreateInfo& _0) { new (instance) VkDeviceQueueCreateInfo(_0); } }
VkDeviceQueueCreateInfo& (VkDeviceQueueCreateInfo::*AcidSharp_symbols86)(const VkDeviceQueueCreateInfo&) = &VkDeviceQueueCreateInfo::operator=;
VkDeviceQueueCreateInfo& (VkDeviceQueueCreateInfo::*AcidSharp_symbols87)(VkDeviceQueueCreateInfo&&) = &VkDeviceQueueCreateInfo::operator=;
extern "C" { void AcidSharp_symbols88(VkDeviceQueueCreateInfo* instance) { instance->~VkDeviceQueueCreateInfo(); } }
extern "C" { void AcidSharp_symbols89(void* instance) { new (instance) VkDeviceCreateInfo(); } }
extern "C" { void AcidSharp_symbols90(void* instance, const VkDeviceCreateInfo& _0) { new (instance) VkDeviceCreateInfo(_0); } }
VkDeviceCreateInfo& (VkDeviceCreateInfo::*AcidSharp_symbols91)(const VkDeviceCreateInfo&) = &VkDeviceCreateInfo::operator=;
VkDeviceCreateInfo& (VkDeviceCreateInfo::*AcidSharp_symbols92)(VkDeviceCreateInfo&&) = &VkDeviceCreateInfo::operator=;
extern "C" { void AcidSharp_symbols93(VkDeviceCreateInfo* instance) { instance->~VkDeviceCreateInfo(); } }
extern "C" { void AcidSharp_symbols94(void* instance) { new (instance) VkExtensionProperties(); } }
extern "C" { void AcidSharp_symbols95(void* instance, const VkExtensionProperties& _0) { new (instance) VkExtensionProperties(_0); } }
VkExtensionProperties& (VkExtensionProperties::*AcidSharp_symbols96)(const VkExtensionProperties&) = &VkExtensionProperties::operator=;
VkExtensionProperties& (VkExtensionProperties::*AcidSharp_symbols97)(VkExtensionProperties&&) = &VkExtensionProperties::operator=;
extern "C" { void AcidSharp_symbols98(VkExtensionProperties* instance) { instance->~VkExtensionProperties(); } }
extern "C" { void AcidSharp_symbols99(void* instance) { new (instance) VkLayerProperties(); } }
extern "C" { void AcidSharp_symbols100(void* instance, const VkLayerProperties& _0) { new (instance) VkLayerProperties(_0); } }
VkLayerProperties& (VkLayerProperties::*AcidSharp_symbols101)(const VkLayerProperties&) = &VkLayerProperties::operator=;
VkLayerProperties& (VkLayerProperties::*AcidSharp_symbols102)(VkLayerProperties&&) = &VkLayerProperties::operator=;
extern "C" { void AcidSharp_symbols103(VkLayerProperties* instance) { instance->~VkLayerProperties(); } }
extern "C" { void AcidSharp_symbols104(void* instance) { new (instance) VkSubmitInfo(); } }
extern "C" { void AcidSharp_symbols105(void* instance, const VkSubmitInfo& _0) { new (instance) VkSubmitInfo(_0); } }
VkSubmitInfo& (VkSubmitInfo::*AcidSharp_symbols106)(const VkSubmitInfo&) = &VkSubmitInfo::operator=;
VkSubmitInfo& (VkSubmitInfo::*AcidSharp_symbols107)(VkSubmitInfo&&) = &VkSubmitInfo::operator=;
extern "C" { void AcidSharp_symbols108(VkSubmitInfo* instance) { instance->~VkSubmitInfo(); } }
extern "C" { void AcidSharp_symbols109(void* instance) { new (instance) VkMemoryAllocateInfo(); } }
extern "C" { void AcidSharp_symbols110(void* instance, const VkMemoryAllocateInfo& _0) { new (instance) VkMemoryAllocateInfo(_0); } }
VkMemoryAllocateInfo& (VkMemoryAllocateInfo::*AcidSharp_symbols111)(const VkMemoryAllocateInfo&) = &VkMemoryAllocateInfo::operator=;
VkMemoryAllocateInfo& (VkMemoryAllocateInfo::*AcidSharp_symbols112)(VkMemoryAllocateInfo&&) = &VkMemoryAllocateInfo::operator=;
extern "C" { void AcidSharp_symbols113(VkMemoryAllocateInfo* instance) { instance->~VkMemoryAllocateInfo(); } }
extern "C" { void AcidSharp_symbols114(void* instance) { new (instance) VkMappedMemoryRange(); } }
extern "C" { void AcidSharp_symbols115(void* instance, const VkMappedMemoryRange& _0) { new (instance) VkMappedMemoryRange(_0); } }
VkMappedMemoryRange& (VkMappedMemoryRange::*AcidSharp_symbols116)(const VkMappedMemoryRange&) = &VkMappedMemoryRange::operator=;
VkMappedMemoryRange& (VkMappedMemoryRange::*AcidSharp_symbols117)(VkMappedMemoryRange&&) = &VkMappedMemoryRange::operator=;
extern "C" { void AcidSharp_symbols118(VkMappedMemoryRange* instance) { instance->~VkMappedMemoryRange(); } }
extern "C" { void AcidSharp_symbols119(void* instance) { new (instance) VkMemoryRequirements(); } }
extern "C" { void AcidSharp_symbols120(void* instance, const VkMemoryRequirements& _0) { new (instance) VkMemoryRequirements(_0); } }
VkMemoryRequirements& (VkMemoryRequirements::*AcidSharp_symbols121)(const VkMemoryRequirements&) = &VkMemoryRequirements::operator=;
VkMemoryRequirements& (VkMemoryRequirements::*AcidSharp_symbols122)(VkMemoryRequirements&&) = &VkMemoryRequirements::operator=;
extern "C" { void AcidSharp_symbols123(VkMemoryRequirements* instance) { instance->~VkMemoryRequirements(); } }
extern "C" { void AcidSharp_symbols124(void* instance) { new (instance) VkSparseImageFormatProperties(); } }
extern "C" { void AcidSharp_symbols125(void* instance, const VkSparseImageFormatProperties& _0) { new (instance) VkSparseImageFormatProperties(_0); } }
VkSparseImageFormatProperties& (VkSparseImageFormatProperties::*AcidSharp_symbols126)(const VkSparseImageFormatProperties&) = &VkSparseImageFormatProperties::operator=;
VkSparseImageFormatProperties& (VkSparseImageFormatProperties::*AcidSharp_symbols127)(VkSparseImageFormatProperties&&) = &VkSparseImageFormatProperties::operator=;
extern "C" { void AcidSharp_symbols128(VkSparseImageFormatProperties* instance) { instance->~VkSparseImageFormatProperties(); } }
extern "C" { void AcidSharp_symbols129(void* instance) { new (instance) VkSparseImageMemoryRequirements(); } }
extern "C" { void AcidSharp_symbols130(void* instance, const VkSparseImageMemoryRequirements& _0) { new (instance) VkSparseImageMemoryRequirements(_0); } }
VkSparseImageMemoryRequirements& (VkSparseImageMemoryRequirements::*AcidSharp_symbols131)(const VkSparseImageMemoryRequirements&) = &VkSparseImageMemoryRequirements::operator=;
VkSparseImageMemoryRequirements& (VkSparseImageMemoryRequirements::*AcidSharp_symbols132)(VkSparseImageMemoryRequirements&&) = &VkSparseImageMemoryRequirements::operator=;
extern "C" { void AcidSharp_symbols133(VkSparseImageMemoryRequirements* instance) { instance->~VkSparseImageMemoryRequirements(); } }
extern "C" { void AcidSharp_symbols134(void* instance) { new (instance) VkSparseMemoryBind(); } }
extern "C" { void AcidSharp_symbols135(void* instance, const VkSparseMemoryBind& _0) { new (instance) VkSparseMemoryBind(_0); } }
VkSparseMemoryBind& (VkSparseMemoryBind::*AcidSharp_symbols136)(const VkSparseMemoryBind&) = &VkSparseMemoryBind::operator=;
VkSparseMemoryBind& (VkSparseMemoryBind::*AcidSharp_symbols137)(VkSparseMemoryBind&&) = &VkSparseMemoryBind::operator=;
extern "C" { void AcidSharp_symbols138(VkSparseMemoryBind* instance) { instance->~VkSparseMemoryBind(); } }
extern "C" { void AcidSharp_symbols139(void* instance) { new (instance) VkSparseBufferMemoryBindInfo(); } }
extern "C" { void AcidSharp_symbols140(void* instance, const VkSparseBufferMemoryBindInfo& _0) { new (instance) VkSparseBufferMemoryBindInfo(_0); } }
VkSparseBufferMemoryBindInfo& (VkSparseBufferMemoryBindInfo::*AcidSharp_symbols141)(const VkSparseBufferMemoryBindInfo&) = &VkSparseBufferMemoryBindInfo::operator=;
VkSparseBufferMemoryBindInfo& (VkSparseBufferMemoryBindInfo::*AcidSharp_symbols142)(VkSparseBufferMemoryBindInfo&&) = &VkSparseBufferMemoryBindInfo::operator=;
extern "C" { void AcidSharp_symbols143(VkSparseBufferMemoryBindInfo* instance) { instance->~VkSparseBufferMemoryBindInfo(); } }
extern "C" { void AcidSharp_symbols144(void* instance) { new (instance) VkSparseImageOpaqueMemoryBindInfo(); } }
extern "C" { void AcidSharp_symbols145(void* instance, const VkSparseImageOpaqueMemoryBindInfo& _0) { new (instance) VkSparseImageOpaqueMemoryBindInfo(_0); } }
VkSparseImageOpaqueMemoryBindInfo& (VkSparseImageOpaqueMemoryBindInfo::*AcidSharp_symbols146)(const VkSparseImageOpaqueMemoryBindInfo&) = &VkSparseImageOpaqueMemoryBindInfo::operator=;
VkSparseImageOpaqueMemoryBindInfo& (VkSparseImageOpaqueMemoryBindInfo::*AcidSharp_symbols147)(VkSparseImageOpaqueMemoryBindInfo&&) = &VkSparseImageOpaqueMemoryBindInfo::operator=;
extern "C" { void AcidSharp_symbols148(VkSparseImageOpaqueMemoryBindInfo* instance) { instance->~VkSparseImageOpaqueMemoryBindInfo(); } }
extern "C" { void AcidSharp_symbols149(void* instance) { new (instance) VkImageSubresource(); } }
extern "C" { void AcidSharp_symbols150(void* instance, const VkImageSubresource& _0) { new (instance) VkImageSubresource(_0); } }
VkImageSubresource& (VkImageSubresource::*AcidSharp_symbols151)(const VkImageSubresource&) = &VkImageSubresource::operator=;
VkImageSubresource& (VkImageSubresource::*AcidSharp_symbols152)(VkImageSubresource&&) = &VkImageSubresource::operator=;
extern "C" { void AcidSharp_symbols153(VkImageSubresource* instance) { instance->~VkImageSubresource(); } }
extern "C" { void AcidSharp_symbols154(void* instance) { new (instance) VkOffset3D(); } }
extern "C" { void AcidSharp_symbols155(void* instance, const VkOffset3D& _0) { new (instance) VkOffset3D(_0); } }
VkOffset3D& (VkOffset3D::*AcidSharp_symbols156)(const VkOffset3D&) = &VkOffset3D::operator=;
VkOffset3D& (VkOffset3D::*AcidSharp_symbols157)(VkOffset3D&&) = &VkOffset3D::operator=;
extern "C" { void AcidSharp_symbols158(VkOffset3D* instance) { instance->~VkOffset3D(); } }
extern "C" { void AcidSharp_symbols159(void* instance) { new (instance) VkSparseImageMemoryBind(); } }
extern "C" { void AcidSharp_symbols160(void* instance, const VkSparseImageMemoryBind& _0) { new (instance) VkSparseImageMemoryBind(_0); } }
VkSparseImageMemoryBind& (VkSparseImageMemoryBind::*AcidSharp_symbols161)(const VkSparseImageMemoryBind&) = &VkSparseImageMemoryBind::operator=;
VkSparseImageMemoryBind& (VkSparseImageMemoryBind::*AcidSharp_symbols162)(VkSparseImageMemoryBind&&) = &VkSparseImageMemoryBind::operator=;
extern "C" { void AcidSharp_symbols163(VkSparseImageMemoryBind* instance) { instance->~VkSparseImageMemoryBind(); } }
extern "C" { void AcidSharp_symbols164(void* instance) { new (instance) VkSparseImageMemoryBindInfo(); } }
extern "C" { void AcidSharp_symbols165(void* instance, const VkSparseImageMemoryBindInfo& _0) { new (instance) VkSparseImageMemoryBindInfo(_0); } }
VkSparseImageMemoryBindInfo& (VkSparseImageMemoryBindInfo::*AcidSharp_symbols166)(const VkSparseImageMemoryBindInfo&) = &VkSparseImageMemoryBindInfo::operator=;
VkSparseImageMemoryBindInfo& (VkSparseImageMemoryBindInfo::*AcidSharp_symbols167)(VkSparseImageMemoryBindInfo&&) = &VkSparseImageMemoryBindInfo::operator=;
extern "C" { void AcidSharp_symbols168(VkSparseImageMemoryBindInfo* instance) { instance->~VkSparseImageMemoryBindInfo(); } }
extern "C" { void AcidSharp_symbols169(void* instance) { new (instance) VkBindSparseInfo(); } }
extern "C" { void AcidSharp_symbols170(void* instance, const VkBindSparseInfo& _0) { new (instance) VkBindSparseInfo(_0); } }
VkBindSparseInfo& (VkBindSparseInfo::*AcidSharp_symbols171)(const VkBindSparseInfo&) = &VkBindSparseInfo::operator=;
VkBindSparseInfo& (VkBindSparseInfo::*AcidSharp_symbols172)(VkBindSparseInfo&&) = &VkBindSparseInfo::operator=;
extern "C" { void AcidSharp_symbols173(VkBindSparseInfo* instance) { instance->~VkBindSparseInfo(); } }
extern "C" { void AcidSharp_symbols174(void* instance) { new (instance) VkFenceCreateInfo(); } }
extern "C" { void AcidSharp_symbols175(void* instance, const VkFenceCreateInfo& _0) { new (instance) VkFenceCreateInfo(_0); } }
VkFenceCreateInfo& (VkFenceCreateInfo::*AcidSharp_symbols176)(const VkFenceCreateInfo&) = &VkFenceCreateInfo::operator=;
VkFenceCreateInfo& (VkFenceCreateInfo::*AcidSharp_symbols177)(VkFenceCreateInfo&&) = &VkFenceCreateInfo::operator=;
extern "C" { void AcidSharp_symbols178(VkFenceCreateInfo* instance) { instance->~VkFenceCreateInfo(); } }
extern "C" { void AcidSharp_symbols179(void* instance) { new (instance) VkSemaphoreCreateInfo(); } }
extern "C" { void AcidSharp_symbols180(void* instance, const VkSemaphoreCreateInfo& _0) { new (instance) VkSemaphoreCreateInfo(_0); } }
VkSemaphoreCreateInfo& (VkSemaphoreCreateInfo::*AcidSharp_symbols181)(const VkSemaphoreCreateInfo&) = &VkSemaphoreCreateInfo::operator=;
VkSemaphoreCreateInfo& (VkSemaphoreCreateInfo::*AcidSharp_symbols182)(VkSemaphoreCreateInfo&&) = &VkSemaphoreCreateInfo::operator=;
extern "C" { void AcidSharp_symbols183(VkSemaphoreCreateInfo* instance) { instance->~VkSemaphoreCreateInfo(); } }
extern "C" { void AcidSharp_symbols184(void* instance) { new (instance) VkEventCreateInfo(); } }
extern "C" { void AcidSharp_symbols185(void* instance, const VkEventCreateInfo& _0) { new (instance) VkEventCreateInfo(_0); } }
VkEventCreateInfo& (VkEventCreateInfo::*AcidSharp_symbols186)(const VkEventCreateInfo&) = &VkEventCreateInfo::operator=;
VkEventCreateInfo& (VkEventCreateInfo::*AcidSharp_symbols187)(VkEventCreateInfo&&) = &VkEventCreateInfo::operator=;
extern "C" { void AcidSharp_symbols188(VkEventCreateInfo* instance) { instance->~VkEventCreateInfo(); } }
extern "C" { void AcidSharp_symbols189(void* instance) { new (instance) VkQueryPoolCreateInfo(); } }
extern "C" { void AcidSharp_symbols190(void* instance, const VkQueryPoolCreateInfo& _0) { new (instance) VkQueryPoolCreateInfo(_0); } }
VkQueryPoolCreateInfo& (VkQueryPoolCreateInfo::*AcidSharp_symbols191)(const VkQueryPoolCreateInfo&) = &VkQueryPoolCreateInfo::operator=;
VkQueryPoolCreateInfo& (VkQueryPoolCreateInfo::*AcidSharp_symbols192)(VkQueryPoolCreateInfo&&) = &VkQueryPoolCreateInfo::operator=;
extern "C" { void AcidSharp_symbols193(VkQueryPoolCreateInfo* instance) { instance->~VkQueryPoolCreateInfo(); } }
extern "C" { void AcidSharp_symbols194(void* instance) { new (instance) VkBufferCreateInfo(); } }
extern "C" { void AcidSharp_symbols195(void* instance, const VkBufferCreateInfo& _0) { new (instance) VkBufferCreateInfo(_0); } }
VkBufferCreateInfo& (VkBufferCreateInfo::*AcidSharp_symbols196)(const VkBufferCreateInfo&) = &VkBufferCreateInfo::operator=;
VkBufferCreateInfo& (VkBufferCreateInfo::*AcidSharp_symbols197)(VkBufferCreateInfo&&) = &VkBufferCreateInfo::operator=;
extern "C" { void AcidSharp_symbols198(VkBufferCreateInfo* instance) { instance->~VkBufferCreateInfo(); } }
extern "C" { void AcidSharp_symbols199(void* instance) { new (instance) VkBufferViewCreateInfo(); } }
extern "C" { void AcidSharp_symbols200(void* instance, const VkBufferViewCreateInfo& _0) { new (instance) VkBufferViewCreateInfo(_0); } }
VkBufferViewCreateInfo& (VkBufferViewCreateInfo::*AcidSharp_symbols201)(const VkBufferViewCreateInfo&) = &VkBufferViewCreateInfo::operator=;
VkBufferViewCreateInfo& (VkBufferViewCreateInfo::*AcidSharp_symbols202)(VkBufferViewCreateInfo&&) = &VkBufferViewCreateInfo::operator=;
extern "C" { void AcidSharp_symbols203(VkBufferViewCreateInfo* instance) { instance->~VkBufferViewCreateInfo(); } }
extern "C" { void AcidSharp_symbols204(void* instance) { new (instance) VkImageCreateInfo(); } }
extern "C" { void AcidSharp_symbols205(void* instance, const VkImageCreateInfo& _0) { new (instance) VkImageCreateInfo(_0); } }
VkImageCreateInfo& (VkImageCreateInfo::*AcidSharp_symbols206)(const VkImageCreateInfo&) = &VkImageCreateInfo::operator=;
VkImageCreateInfo& (VkImageCreateInfo::*AcidSharp_symbols207)(VkImageCreateInfo&&) = &VkImageCreateInfo::operator=;
extern "C" { void AcidSharp_symbols208(VkImageCreateInfo* instance) { instance->~VkImageCreateInfo(); } }
extern "C" { void AcidSharp_symbols209(void* instance) { new (instance) VkSubresourceLayout(); } }
extern "C" { void AcidSharp_symbols210(void* instance, const VkSubresourceLayout& _0) { new (instance) VkSubresourceLayout(_0); } }
VkSubresourceLayout& (VkSubresourceLayout::*AcidSharp_symbols211)(const VkSubresourceLayout&) = &VkSubresourceLayout::operator=;
VkSubresourceLayout& (VkSubresourceLayout::*AcidSharp_symbols212)(VkSubresourceLayout&&) = &VkSubresourceLayout::operator=;
extern "C" { void AcidSharp_symbols213(VkSubresourceLayout* instance) { instance->~VkSubresourceLayout(); } }
extern "C" { void AcidSharp_symbols214(void* instance) { new (instance) VkComponentMapping(); } }
extern "C" { void AcidSharp_symbols215(void* instance, const VkComponentMapping& _0) { new (instance) VkComponentMapping(_0); } }
VkComponentMapping& (VkComponentMapping::*AcidSharp_symbols216)(const VkComponentMapping&) = &VkComponentMapping::operator=;
VkComponentMapping& (VkComponentMapping::*AcidSharp_symbols217)(VkComponentMapping&&) = &VkComponentMapping::operator=;
extern "C" { void AcidSharp_symbols218(VkComponentMapping* instance) { instance->~VkComponentMapping(); } }
extern "C" { void AcidSharp_symbols219(void* instance) { new (instance) VkImageSubresourceRange(); } }
extern "C" { void AcidSharp_symbols220(void* instance, const VkImageSubresourceRange& _0) { new (instance) VkImageSubresourceRange(_0); } }
VkImageSubresourceRange& (VkImageSubresourceRange::*AcidSharp_symbols221)(const VkImageSubresourceRange&) = &VkImageSubresourceRange::operator=;
VkImageSubresourceRange& (VkImageSubresourceRange::*AcidSharp_symbols222)(VkImageSubresourceRange&&) = &VkImageSubresourceRange::operator=;
extern "C" { void AcidSharp_symbols223(VkImageSubresourceRange* instance) { instance->~VkImageSubresourceRange(); } }
extern "C" { void AcidSharp_symbols224(void* instance) { new (instance) VkImageViewCreateInfo(); } }
extern "C" { void AcidSharp_symbols225(void* instance, const VkImageViewCreateInfo& _0) { new (instance) VkImageViewCreateInfo(_0); } }
VkImageViewCreateInfo& (VkImageViewCreateInfo::*AcidSharp_symbols226)(const VkImageViewCreateInfo&) = &VkImageViewCreateInfo::operator=;
VkImageViewCreateInfo& (VkImageViewCreateInfo::*AcidSharp_symbols227)(VkImageViewCreateInfo&&) = &VkImageViewCreateInfo::operator=;
extern "C" { void AcidSharp_symbols228(VkImageViewCreateInfo* instance) { instance->~VkImageViewCreateInfo(); } }
extern "C" { void AcidSharp_symbols229(void* instance) { new (instance) VkShaderModuleCreateInfo(); } }
extern "C" { void AcidSharp_symbols230(void* instance, const VkShaderModuleCreateInfo& _0) { new (instance) VkShaderModuleCreateInfo(_0); } }
VkShaderModuleCreateInfo& (VkShaderModuleCreateInfo::*AcidSharp_symbols231)(const VkShaderModuleCreateInfo&) = &VkShaderModuleCreateInfo::operator=;
VkShaderModuleCreateInfo& (VkShaderModuleCreateInfo::*AcidSharp_symbols232)(VkShaderModuleCreateInfo&&) = &VkShaderModuleCreateInfo::operator=;
extern "C" { void AcidSharp_symbols233(VkShaderModuleCreateInfo* instance) { instance->~VkShaderModuleCreateInfo(); } }
extern "C" { void AcidSharp_symbols234(void* instance) { new (instance) VkPipelineCacheCreateInfo(); } }
extern "C" { void AcidSharp_symbols235(void* instance, const VkPipelineCacheCreateInfo& _0) { new (instance) VkPipelineCacheCreateInfo(_0); } }
VkPipelineCacheCreateInfo& (VkPipelineCacheCreateInfo::*AcidSharp_symbols236)(const VkPipelineCacheCreateInfo&) = &VkPipelineCacheCreateInfo::operator=;
VkPipelineCacheCreateInfo& (VkPipelineCacheCreateInfo::*AcidSharp_symbols237)(VkPipelineCacheCreateInfo&&) = &VkPipelineCacheCreateInfo::operator=;
extern "C" { void AcidSharp_symbols238(VkPipelineCacheCreateInfo* instance) { instance->~VkPipelineCacheCreateInfo(); } }
extern "C" { void AcidSharp_symbols239(void* instance) { new (instance) VkSpecializationMapEntry(); } }
extern "C" { void AcidSharp_symbols240(void* instance, const VkSpecializationMapEntry& _0) { new (instance) VkSpecializationMapEntry(_0); } }
VkSpecializationMapEntry& (VkSpecializationMapEntry::*AcidSharp_symbols241)(const VkSpecializationMapEntry&) = &VkSpecializationMapEntry::operator=;
VkSpecializationMapEntry& (VkSpecializationMapEntry::*AcidSharp_symbols242)(VkSpecializationMapEntry&&) = &VkSpecializationMapEntry::operator=;
extern "C" { void AcidSharp_symbols243(VkSpecializationMapEntry* instance) { instance->~VkSpecializationMapEntry(); } }
extern "C" { void AcidSharp_symbols244(void* instance) { new (instance) VkSpecializationInfo(); } }
extern "C" { void AcidSharp_symbols245(void* instance, const VkSpecializationInfo& _0) { new (instance) VkSpecializationInfo(_0); } }
VkSpecializationInfo& (VkSpecializationInfo::*AcidSharp_symbols246)(const VkSpecializationInfo&) = &VkSpecializationInfo::operator=;
VkSpecializationInfo& (VkSpecializationInfo::*AcidSharp_symbols247)(VkSpecializationInfo&&) = &VkSpecializationInfo::operator=;
extern "C" { void AcidSharp_symbols248(VkSpecializationInfo* instance) { instance->~VkSpecializationInfo(); } }
extern "C" { void AcidSharp_symbols249(void* instance) { new (instance) VkPipelineShaderStageCreateInfo(); } }
extern "C" { void AcidSharp_symbols250(void* instance, const VkPipelineShaderStageCreateInfo& _0) { new (instance) VkPipelineShaderStageCreateInfo(_0); } }
VkPipelineShaderStageCreateInfo& (VkPipelineShaderStageCreateInfo::*AcidSharp_symbols251)(const VkPipelineShaderStageCreateInfo&) = &VkPipelineShaderStageCreateInfo::operator=;
VkPipelineShaderStageCreateInfo& (VkPipelineShaderStageCreateInfo::*AcidSharp_symbols252)(VkPipelineShaderStageCreateInfo&&) = &VkPipelineShaderStageCreateInfo::operator=;
extern "C" { void AcidSharp_symbols253(VkPipelineShaderStageCreateInfo* instance) { instance->~VkPipelineShaderStageCreateInfo(); } }
VkVertexInputBindingDescription& (VkVertexInputBindingDescription::*AcidSharp_symbols254)(const VkVertexInputBindingDescription&) = &VkVertexInputBindingDescription::operator=;
VkVertexInputBindingDescription& (VkVertexInputBindingDescription::*AcidSharp_symbols255)(VkVertexInputBindingDescription&&) = &VkVertexInputBindingDescription::operator=;
extern "C" { void AcidSharp_symbols256(VkVertexInputBindingDescription* instance) { instance->~VkVertexInputBindingDescription(); } }
extern "C" { void AcidSharp_symbols257(void* instance) { new (instance) VkVertexInputBindingDescription(); } }
extern "C" { void AcidSharp_symbols258(void* instance, const VkVertexInputBindingDescription& _0) { new (instance) VkVertexInputBindingDescription(_0); } }
VkVertexInputAttributeDescription& (VkVertexInputAttributeDescription::*AcidSharp_symbols259)(const VkVertexInputAttributeDescription&) = &VkVertexInputAttributeDescription::operator=;
VkVertexInputAttributeDescription& (VkVertexInputAttributeDescription::*AcidSharp_symbols260)(VkVertexInputAttributeDescription&&) = &VkVertexInputAttributeDescription::operator=;
extern "C" { void AcidSharp_symbols261(VkVertexInputAttributeDescription* instance) { instance->~VkVertexInputAttributeDescription(); } }
extern "C" { void AcidSharp_symbols262(void* instance) { new (instance) VkVertexInputAttributeDescription(); } }
extern "C" { void AcidSharp_symbols263(void* instance, const VkVertexInputAttributeDescription& _0) { new (instance) VkVertexInputAttributeDescription(_0); } }
extern "C" { void AcidSharp_symbols264(void* instance) { new (instance) VkPipelineVertexInputStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols265(void* instance, const VkPipelineVertexInputStateCreateInfo& _0) { new (instance) VkPipelineVertexInputStateCreateInfo(_0); } }
VkPipelineVertexInputStateCreateInfo& (VkPipelineVertexInputStateCreateInfo::*AcidSharp_symbols266)(const VkPipelineVertexInputStateCreateInfo&) = &VkPipelineVertexInputStateCreateInfo::operator=;
VkPipelineVertexInputStateCreateInfo& (VkPipelineVertexInputStateCreateInfo::*AcidSharp_symbols267)(VkPipelineVertexInputStateCreateInfo&&) = &VkPipelineVertexInputStateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols268(VkPipelineVertexInputStateCreateInfo* instance) { instance->~VkPipelineVertexInputStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols269(void* instance) { new (instance) VkPipelineInputAssemblyStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols270(void* instance, const VkPipelineInputAssemblyStateCreateInfo& _0) { new (instance) VkPipelineInputAssemblyStateCreateInfo(_0); } }
VkPipelineInputAssemblyStateCreateInfo& (VkPipelineInputAssemblyStateCreateInfo::*AcidSharp_symbols271)(const VkPipelineInputAssemblyStateCreateInfo&) = &VkPipelineInputAssemblyStateCreateInfo::operator=;
VkPipelineInputAssemblyStateCreateInfo& (VkPipelineInputAssemblyStateCreateInfo::*AcidSharp_symbols272)(VkPipelineInputAssemblyStateCreateInfo&&) = &VkPipelineInputAssemblyStateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols273(VkPipelineInputAssemblyStateCreateInfo* instance) { instance->~VkPipelineInputAssemblyStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols274(void* instance) { new (instance) VkPipelineTessellationStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols275(void* instance, const VkPipelineTessellationStateCreateInfo& _0) { new (instance) VkPipelineTessellationStateCreateInfo(_0); } }
VkPipelineTessellationStateCreateInfo& (VkPipelineTessellationStateCreateInfo::*AcidSharp_symbols276)(const VkPipelineTessellationStateCreateInfo&) = &VkPipelineTessellationStateCreateInfo::operator=;
VkPipelineTessellationStateCreateInfo& (VkPipelineTessellationStateCreateInfo::*AcidSharp_symbols277)(VkPipelineTessellationStateCreateInfo&&) = &VkPipelineTessellationStateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols278(VkPipelineTessellationStateCreateInfo* instance) { instance->~VkPipelineTessellationStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols279(void* instance) { new (instance) VkViewport(); } }
extern "C" { void AcidSharp_symbols280(void* instance, const VkViewport& _0) { new (instance) VkViewport(_0); } }
VkViewport& (VkViewport::*AcidSharp_symbols281)(const VkViewport&) = &VkViewport::operator=;
VkViewport& (VkViewport::*AcidSharp_symbols282)(VkViewport&&) = &VkViewport::operator=;
extern "C" { void AcidSharp_symbols283(VkViewport* instance) { instance->~VkViewport(); } }
extern "C" { void AcidSharp_symbols284(void* instance) { new (instance) VkOffset2D(); } }
extern "C" { void AcidSharp_symbols285(void* instance, const VkOffset2D& _0) { new (instance) VkOffset2D(_0); } }
VkOffset2D& (VkOffset2D::*AcidSharp_symbols286)(const VkOffset2D&) = &VkOffset2D::operator=;
VkOffset2D& (VkOffset2D::*AcidSharp_symbols287)(VkOffset2D&&) = &VkOffset2D::operator=;
extern "C" { void AcidSharp_symbols288(VkOffset2D* instance) { instance->~VkOffset2D(); } }
extern "C" { void AcidSharp_symbols289(void* instance, const VkExtent2D& _0) { new (instance) VkExtent2D(_0); } }
extern "C" { void AcidSharp_symbols290(VkExtent2D* instance) { instance->~VkExtent2D(); } }
VkExtent2D& (VkExtent2D::*AcidSharp_symbols291)(const VkExtent2D&) = &VkExtent2D::operator=;
VkExtent2D& (VkExtent2D::*AcidSharp_symbols292)(VkExtent2D&&) = &VkExtent2D::operator=;
extern "C" { void AcidSharp_symbols293(void* instance) { new (instance) VkExtent2D(); } }
extern "C" { void AcidSharp_symbols294(void* instance) { new (instance) VkRect2D(); } }
extern "C" { void AcidSharp_symbols295(void* instance, const VkRect2D& _0) { new (instance) VkRect2D(_0); } }
VkRect2D& (VkRect2D::*AcidSharp_symbols296)(const VkRect2D&) = &VkRect2D::operator=;
VkRect2D& (VkRect2D::*AcidSharp_symbols297)(VkRect2D&&) = &VkRect2D::operator=;
extern "C" { void AcidSharp_symbols298(VkRect2D* instance) { instance->~VkRect2D(); } }
extern "C" { void AcidSharp_symbols299(void* instance) { new (instance) VkPipelineViewportStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols300(void* instance, const VkPipelineViewportStateCreateInfo& _0) { new (instance) VkPipelineViewportStateCreateInfo(_0); } }
VkPipelineViewportStateCreateInfo& (VkPipelineViewportStateCreateInfo::*AcidSharp_symbols301)(const VkPipelineViewportStateCreateInfo&) = &VkPipelineViewportStateCreateInfo::operator=;
VkPipelineViewportStateCreateInfo& (VkPipelineViewportStateCreateInfo::*AcidSharp_symbols302)(VkPipelineViewportStateCreateInfo&&) = &VkPipelineViewportStateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols303(VkPipelineViewportStateCreateInfo* instance) { instance->~VkPipelineViewportStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols304(void* instance) { new (instance) VkPipelineRasterizationStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols305(void* instance, const VkPipelineRasterizationStateCreateInfo& _0) { new (instance) VkPipelineRasterizationStateCreateInfo(_0); } }
VkPipelineRasterizationStateCreateInfo& (VkPipelineRasterizationStateCreateInfo::*AcidSharp_symbols306)(const VkPipelineRasterizationStateCreateInfo&) = &VkPipelineRasterizationStateCreateInfo::operator=;
VkPipelineRasterizationStateCreateInfo& (VkPipelineRasterizationStateCreateInfo::*AcidSharp_symbols307)(VkPipelineRasterizationStateCreateInfo&&) = &VkPipelineRasterizationStateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols308(VkPipelineRasterizationStateCreateInfo* instance) { instance->~VkPipelineRasterizationStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols309(void* instance) { new (instance) VkPipelineMultisampleStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols310(void* instance, const VkPipelineMultisampleStateCreateInfo& _0) { new (instance) VkPipelineMultisampleStateCreateInfo(_0); } }
VkPipelineMultisampleStateCreateInfo& (VkPipelineMultisampleStateCreateInfo::*AcidSharp_symbols311)(const VkPipelineMultisampleStateCreateInfo&) = &VkPipelineMultisampleStateCreateInfo::operator=;
VkPipelineMultisampleStateCreateInfo& (VkPipelineMultisampleStateCreateInfo::*AcidSharp_symbols312)(VkPipelineMultisampleStateCreateInfo&&) = &VkPipelineMultisampleStateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols313(VkPipelineMultisampleStateCreateInfo* instance) { instance->~VkPipelineMultisampleStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols314(void* instance) { new (instance) VkStencilOpState(); } }
extern "C" { void AcidSharp_symbols315(void* instance, const VkStencilOpState& _0) { new (instance) VkStencilOpState(_0); } }
VkStencilOpState& (VkStencilOpState::*AcidSharp_symbols316)(const VkStencilOpState&) = &VkStencilOpState::operator=;
VkStencilOpState& (VkStencilOpState::*AcidSharp_symbols317)(VkStencilOpState&&) = &VkStencilOpState::operator=;
extern "C" { void AcidSharp_symbols318(VkStencilOpState* instance) { instance->~VkStencilOpState(); } }
extern "C" { void AcidSharp_symbols319(void* instance) { new (instance) VkPipelineDepthStencilStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols320(void* instance, const VkPipelineDepthStencilStateCreateInfo& _0) { new (instance) VkPipelineDepthStencilStateCreateInfo(_0); } }
VkPipelineDepthStencilStateCreateInfo& (VkPipelineDepthStencilStateCreateInfo::*AcidSharp_symbols321)(const VkPipelineDepthStencilStateCreateInfo&) = &VkPipelineDepthStencilStateCreateInfo::operator=;
VkPipelineDepthStencilStateCreateInfo& (VkPipelineDepthStencilStateCreateInfo::*AcidSharp_symbols322)(VkPipelineDepthStencilStateCreateInfo&&) = &VkPipelineDepthStencilStateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols323(VkPipelineDepthStencilStateCreateInfo* instance) { instance->~VkPipelineDepthStencilStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols324(void* instance) { new (instance) VkPipelineColorBlendAttachmentState(); } }
extern "C" { void AcidSharp_symbols325(void* instance, const VkPipelineColorBlendAttachmentState& _0) { new (instance) VkPipelineColorBlendAttachmentState(_0); } }
VkPipelineColorBlendAttachmentState& (VkPipelineColorBlendAttachmentState::*AcidSharp_symbols326)(const VkPipelineColorBlendAttachmentState&) = &VkPipelineColorBlendAttachmentState::operator=;
VkPipelineColorBlendAttachmentState& (VkPipelineColorBlendAttachmentState::*AcidSharp_symbols327)(VkPipelineColorBlendAttachmentState&&) = &VkPipelineColorBlendAttachmentState::operator=;
extern "C" { void AcidSharp_symbols328(VkPipelineColorBlendAttachmentState* instance) { instance->~VkPipelineColorBlendAttachmentState(); } }
extern "C" { void AcidSharp_symbols329(void* instance) { new (instance) VkPipelineColorBlendStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols330(void* instance, const VkPipelineColorBlendStateCreateInfo& _0) { new (instance) VkPipelineColorBlendStateCreateInfo(_0); } }
VkPipelineColorBlendStateCreateInfo& (VkPipelineColorBlendStateCreateInfo::*AcidSharp_symbols331)(const VkPipelineColorBlendStateCreateInfo&) = &VkPipelineColorBlendStateCreateInfo::operator=;
VkPipelineColorBlendStateCreateInfo& (VkPipelineColorBlendStateCreateInfo::*AcidSharp_symbols332)(VkPipelineColorBlendStateCreateInfo&&) = &VkPipelineColorBlendStateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols333(VkPipelineColorBlendStateCreateInfo* instance) { instance->~VkPipelineColorBlendStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols334(void* instance) { new (instance) VkPipelineDynamicStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols335(void* instance, const VkPipelineDynamicStateCreateInfo& _0) { new (instance) VkPipelineDynamicStateCreateInfo(_0); } }
VkPipelineDynamicStateCreateInfo& (VkPipelineDynamicStateCreateInfo::*AcidSharp_symbols336)(const VkPipelineDynamicStateCreateInfo&) = &VkPipelineDynamicStateCreateInfo::operator=;
VkPipelineDynamicStateCreateInfo& (VkPipelineDynamicStateCreateInfo::*AcidSharp_symbols337)(VkPipelineDynamicStateCreateInfo&&) = &VkPipelineDynamicStateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols338(VkPipelineDynamicStateCreateInfo* instance) { instance->~VkPipelineDynamicStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols339(void* instance) { new (instance) VkGraphicsPipelineCreateInfo(); } }
extern "C" { void AcidSharp_symbols340(void* instance, const VkGraphicsPipelineCreateInfo& _0) { new (instance) VkGraphicsPipelineCreateInfo(_0); } }
VkGraphicsPipelineCreateInfo& (VkGraphicsPipelineCreateInfo::*AcidSharp_symbols341)(const VkGraphicsPipelineCreateInfo&) = &VkGraphicsPipelineCreateInfo::operator=;
VkGraphicsPipelineCreateInfo& (VkGraphicsPipelineCreateInfo::*AcidSharp_symbols342)(VkGraphicsPipelineCreateInfo&&) = &VkGraphicsPipelineCreateInfo::operator=;
extern "C" { void AcidSharp_symbols343(VkGraphicsPipelineCreateInfo* instance) { instance->~VkGraphicsPipelineCreateInfo(); } }
extern "C" { void AcidSharp_symbols344(void* instance) { new (instance) VkComputePipelineCreateInfo(); } }
extern "C" { void AcidSharp_symbols345(void* instance, const VkComputePipelineCreateInfo& _0) { new (instance) VkComputePipelineCreateInfo(_0); } }
VkComputePipelineCreateInfo& (VkComputePipelineCreateInfo::*AcidSharp_symbols346)(const VkComputePipelineCreateInfo&) = &VkComputePipelineCreateInfo::operator=;
VkComputePipelineCreateInfo& (VkComputePipelineCreateInfo::*AcidSharp_symbols347)(VkComputePipelineCreateInfo&&) = &VkComputePipelineCreateInfo::operator=;
extern "C" { void AcidSharp_symbols348(VkComputePipelineCreateInfo* instance) { instance->~VkComputePipelineCreateInfo(); } }
extern "C" { void AcidSharp_symbols349(void* instance) { new (instance) VkPushConstantRange(); } }
extern "C" { void AcidSharp_symbols350(void* instance, const VkPushConstantRange& _0) { new (instance) VkPushConstantRange(_0); } }
VkPushConstantRange& (VkPushConstantRange::*AcidSharp_symbols351)(const VkPushConstantRange&) = &VkPushConstantRange::operator=;
VkPushConstantRange& (VkPushConstantRange::*AcidSharp_symbols352)(VkPushConstantRange&&) = &VkPushConstantRange::operator=;
extern "C" { void AcidSharp_symbols353(VkPushConstantRange* instance) { instance->~VkPushConstantRange(); } }
extern "C" { void AcidSharp_symbols354(void* instance) { new (instance) VkPipelineLayoutCreateInfo(); } }
extern "C" { void AcidSharp_symbols355(void* instance, const VkPipelineLayoutCreateInfo& _0) { new (instance) VkPipelineLayoutCreateInfo(_0); } }
VkPipelineLayoutCreateInfo& (VkPipelineLayoutCreateInfo::*AcidSharp_symbols356)(const VkPipelineLayoutCreateInfo&) = &VkPipelineLayoutCreateInfo::operator=;
VkPipelineLayoutCreateInfo& (VkPipelineLayoutCreateInfo::*AcidSharp_symbols357)(VkPipelineLayoutCreateInfo&&) = &VkPipelineLayoutCreateInfo::operator=;
extern "C" { void AcidSharp_symbols358(VkPipelineLayoutCreateInfo* instance) { instance->~VkPipelineLayoutCreateInfo(); } }
extern "C" { void AcidSharp_symbols359(void* instance) { new (instance) VkSamplerCreateInfo(); } }
extern "C" { void AcidSharp_symbols360(void* instance, const VkSamplerCreateInfo& _0) { new (instance) VkSamplerCreateInfo(_0); } }
VkSamplerCreateInfo& (VkSamplerCreateInfo::*AcidSharp_symbols361)(const VkSamplerCreateInfo&) = &VkSamplerCreateInfo::operator=;
VkSamplerCreateInfo& (VkSamplerCreateInfo::*AcidSharp_symbols362)(VkSamplerCreateInfo&&) = &VkSamplerCreateInfo::operator=;
extern "C" { void AcidSharp_symbols363(VkSamplerCreateInfo* instance) { instance->~VkSamplerCreateInfo(); } }
extern "C" { void AcidSharp_symbols364(void* instance) { new (instance) VkDescriptorSetLayoutBinding(); } }
extern "C" { void AcidSharp_symbols365(void* instance, const VkDescriptorSetLayoutBinding& _0) { new (instance) VkDescriptorSetLayoutBinding(_0); } }
VkDescriptorSetLayoutBinding& (VkDescriptorSetLayoutBinding::*AcidSharp_symbols366)(const VkDescriptorSetLayoutBinding&) = &VkDescriptorSetLayoutBinding::operator=;
VkDescriptorSetLayoutBinding& (VkDescriptorSetLayoutBinding::*AcidSharp_symbols367)(VkDescriptorSetLayoutBinding&&) = &VkDescriptorSetLayoutBinding::operator=;
extern "C" { void AcidSharp_symbols368(VkDescriptorSetLayoutBinding* instance) { instance->~VkDescriptorSetLayoutBinding(); } }
extern "C" { void AcidSharp_symbols369(void* instance) { new (instance) VkDescriptorSetLayoutCreateInfo(); } }
extern "C" { void AcidSharp_symbols370(void* instance, const VkDescriptorSetLayoutCreateInfo& _0) { new (instance) VkDescriptorSetLayoutCreateInfo(_0); } }
VkDescriptorSetLayoutCreateInfo& (VkDescriptorSetLayoutCreateInfo::*AcidSharp_symbols371)(const VkDescriptorSetLayoutCreateInfo&) = &VkDescriptorSetLayoutCreateInfo::operator=;
VkDescriptorSetLayoutCreateInfo& (VkDescriptorSetLayoutCreateInfo::*AcidSharp_symbols372)(VkDescriptorSetLayoutCreateInfo&&) = &VkDescriptorSetLayoutCreateInfo::operator=;
extern "C" { void AcidSharp_symbols373(VkDescriptorSetLayoutCreateInfo* instance) { instance->~VkDescriptorSetLayoutCreateInfo(); } }
extern "C" { void AcidSharp_symbols374(void* instance) { new (instance) VkDescriptorPoolSize(); } }
extern "C" { void AcidSharp_symbols375(void* instance, const VkDescriptorPoolSize& _0) { new (instance) VkDescriptorPoolSize(_0); } }
VkDescriptorPoolSize& (VkDescriptorPoolSize::*AcidSharp_symbols376)(const VkDescriptorPoolSize&) = &VkDescriptorPoolSize::operator=;
VkDescriptorPoolSize& (VkDescriptorPoolSize::*AcidSharp_symbols377)(VkDescriptorPoolSize&&) = &VkDescriptorPoolSize::operator=;
extern "C" { void AcidSharp_symbols378(VkDescriptorPoolSize* instance) { instance->~VkDescriptorPoolSize(); } }
extern "C" { void AcidSharp_symbols379(void* instance) { new (instance) VkDescriptorPoolCreateInfo(); } }
extern "C" { void AcidSharp_symbols380(void* instance, const VkDescriptorPoolCreateInfo& _0) { new (instance) VkDescriptorPoolCreateInfo(_0); } }
VkDescriptorPoolCreateInfo& (VkDescriptorPoolCreateInfo::*AcidSharp_symbols381)(const VkDescriptorPoolCreateInfo&) = &VkDescriptorPoolCreateInfo::operator=;
VkDescriptorPoolCreateInfo& (VkDescriptorPoolCreateInfo::*AcidSharp_symbols382)(VkDescriptorPoolCreateInfo&&) = &VkDescriptorPoolCreateInfo::operator=;
extern "C" { void AcidSharp_symbols383(VkDescriptorPoolCreateInfo* instance) { instance->~VkDescriptorPoolCreateInfo(); } }
extern "C" { void AcidSharp_symbols384(void* instance) { new (instance) VkDescriptorSetAllocateInfo(); } }
extern "C" { void AcidSharp_symbols385(void* instance, const VkDescriptorSetAllocateInfo& _0) { new (instance) VkDescriptorSetAllocateInfo(_0); } }
VkDescriptorSetAllocateInfo& (VkDescriptorSetAllocateInfo::*AcidSharp_symbols386)(const VkDescriptorSetAllocateInfo&) = &VkDescriptorSetAllocateInfo::operator=;
VkDescriptorSetAllocateInfo& (VkDescriptorSetAllocateInfo::*AcidSharp_symbols387)(VkDescriptorSetAllocateInfo&&) = &VkDescriptorSetAllocateInfo::operator=;
extern "C" { void AcidSharp_symbols388(VkDescriptorSetAllocateInfo* instance) { instance->~VkDescriptorSetAllocateInfo(); } }
extern "C" { void AcidSharp_symbols389(void* instance, const VkDescriptorImageInfo& _0) { new (instance) VkDescriptorImageInfo(_0); } }
extern "C" { void AcidSharp_symbols390(VkDescriptorImageInfo* instance) { instance->~VkDescriptorImageInfo(); } }
VkDescriptorImageInfo& (VkDescriptorImageInfo::*AcidSharp_symbols391)(const VkDescriptorImageInfo&) = &VkDescriptorImageInfo::operator=;
VkDescriptorImageInfo& (VkDescriptorImageInfo::*AcidSharp_symbols392)(VkDescriptorImageInfo&&) = &VkDescriptorImageInfo::operator=;
extern "C" { void AcidSharp_symbols393(void* instance) { new (instance) VkDescriptorImageInfo(); } }
extern "C" { void AcidSharp_symbols394(void* instance, const VkDescriptorBufferInfo& _0) { new (instance) VkDescriptorBufferInfo(_0); } }
extern "C" { void AcidSharp_symbols395(VkDescriptorBufferInfo* instance) { instance->~VkDescriptorBufferInfo(); } }
VkDescriptorBufferInfo& (VkDescriptorBufferInfo::*AcidSharp_symbols396)(const VkDescriptorBufferInfo&) = &VkDescriptorBufferInfo::operator=;
VkDescriptorBufferInfo& (VkDescriptorBufferInfo::*AcidSharp_symbols397)(VkDescriptorBufferInfo&&) = &VkDescriptorBufferInfo::operator=;
extern "C" { void AcidSharp_symbols398(void* instance) { new (instance) VkDescriptorBufferInfo(); } }
extern "C" { void AcidSharp_symbols399(void* instance) { new (instance) VkWriteDescriptorSet(); } }
extern "C" { void AcidSharp_symbols400(void* instance, const VkWriteDescriptorSet& _0) { new (instance) VkWriteDescriptorSet(_0); } }
VkWriteDescriptorSet& (VkWriteDescriptorSet::*AcidSharp_symbols401)(const VkWriteDescriptorSet&) = &VkWriteDescriptorSet::operator=;
VkWriteDescriptorSet& (VkWriteDescriptorSet::*AcidSharp_symbols402)(VkWriteDescriptorSet&&) = &VkWriteDescriptorSet::operator=;
extern "C" { void AcidSharp_symbols403(VkWriteDescriptorSet* instance) { instance->~VkWriteDescriptorSet(); } }
extern "C" { void AcidSharp_symbols404(void* instance) { new (instance) VkCopyDescriptorSet(); } }
extern "C" { void AcidSharp_symbols405(void* instance, const VkCopyDescriptorSet& _0) { new (instance) VkCopyDescriptorSet(_0); } }
VkCopyDescriptorSet& (VkCopyDescriptorSet::*AcidSharp_symbols406)(const VkCopyDescriptorSet&) = &VkCopyDescriptorSet::operator=;
VkCopyDescriptorSet& (VkCopyDescriptorSet::*AcidSharp_symbols407)(VkCopyDescriptorSet&&) = &VkCopyDescriptorSet::operator=;
extern "C" { void AcidSharp_symbols408(VkCopyDescriptorSet* instance) { instance->~VkCopyDescriptorSet(); } }
extern "C" { void AcidSharp_symbols409(void* instance) { new (instance) VkFramebufferCreateInfo(); } }
extern "C" { void AcidSharp_symbols410(void* instance, const VkFramebufferCreateInfo& _0) { new (instance) VkFramebufferCreateInfo(_0); } }
VkFramebufferCreateInfo& (VkFramebufferCreateInfo::*AcidSharp_symbols411)(const VkFramebufferCreateInfo&) = &VkFramebufferCreateInfo::operator=;
VkFramebufferCreateInfo& (VkFramebufferCreateInfo::*AcidSharp_symbols412)(VkFramebufferCreateInfo&&) = &VkFramebufferCreateInfo::operator=;
extern "C" { void AcidSharp_symbols413(VkFramebufferCreateInfo* instance) { instance->~VkFramebufferCreateInfo(); } }
extern "C" { void AcidSharp_symbols414(void* instance) { new (instance) VkAttachmentDescription(); } }
extern "C" { void AcidSharp_symbols415(void* instance, const VkAttachmentDescription& _0) { new (instance) VkAttachmentDescription(_0); } }
VkAttachmentDescription& (VkAttachmentDescription::*AcidSharp_symbols416)(const VkAttachmentDescription&) = &VkAttachmentDescription::operator=;
VkAttachmentDescription& (VkAttachmentDescription::*AcidSharp_symbols417)(VkAttachmentDescription&&) = &VkAttachmentDescription::operator=;
extern "C" { void AcidSharp_symbols418(VkAttachmentDescription* instance) { instance->~VkAttachmentDescription(); } }
extern "C" { void AcidSharp_symbols419(void* instance) { new (instance) VkAttachmentReference(); } }
extern "C" { void AcidSharp_symbols420(void* instance, const VkAttachmentReference& _0) { new (instance) VkAttachmentReference(_0); } }
VkAttachmentReference& (VkAttachmentReference::*AcidSharp_symbols421)(const VkAttachmentReference&) = &VkAttachmentReference::operator=;
VkAttachmentReference& (VkAttachmentReference::*AcidSharp_symbols422)(VkAttachmentReference&&) = &VkAttachmentReference::operator=;
extern "C" { void AcidSharp_symbols423(VkAttachmentReference* instance) { instance->~VkAttachmentReference(); } }
extern "C" { void AcidSharp_symbols424(void* instance) { new (instance) VkSubpassDescription(); } }
extern "C" { void AcidSharp_symbols425(void* instance, const VkSubpassDescription& _0) { new (instance) VkSubpassDescription(_0); } }
VkSubpassDescription& (VkSubpassDescription::*AcidSharp_symbols426)(const VkSubpassDescription&) = &VkSubpassDescription::operator=;
VkSubpassDescription& (VkSubpassDescription::*AcidSharp_symbols427)(VkSubpassDescription&&) = &VkSubpassDescription::operator=;
extern "C" { void AcidSharp_symbols428(VkSubpassDescription* instance) { instance->~VkSubpassDescription(); } }
extern "C" { void AcidSharp_symbols429(void* instance) { new (instance) VkSubpassDependency(); } }
extern "C" { void AcidSharp_symbols430(void* instance, const VkSubpassDependency& _0) { new (instance) VkSubpassDependency(_0); } }
VkSubpassDependency& (VkSubpassDependency::*AcidSharp_symbols431)(const VkSubpassDependency&) = &VkSubpassDependency::operator=;
VkSubpassDependency& (VkSubpassDependency::*AcidSharp_symbols432)(VkSubpassDependency&&) = &VkSubpassDependency::operator=;
extern "C" { void AcidSharp_symbols433(VkSubpassDependency* instance) { instance->~VkSubpassDependency(); } }
extern "C" { void AcidSharp_symbols434(void* instance) { new (instance) VkRenderPassCreateInfo(); } }
extern "C" { void AcidSharp_symbols435(void* instance, const VkRenderPassCreateInfo& _0) { new (instance) VkRenderPassCreateInfo(_0); } }
VkRenderPassCreateInfo& (VkRenderPassCreateInfo::*AcidSharp_symbols436)(const VkRenderPassCreateInfo&) = &VkRenderPassCreateInfo::operator=;
VkRenderPassCreateInfo& (VkRenderPassCreateInfo::*AcidSharp_symbols437)(VkRenderPassCreateInfo&&) = &VkRenderPassCreateInfo::operator=;
extern "C" { void AcidSharp_symbols438(VkRenderPassCreateInfo* instance) { instance->~VkRenderPassCreateInfo(); } }
extern "C" { void AcidSharp_symbols439(void* instance) { new (instance) VkCommandPoolCreateInfo(); } }
extern "C" { void AcidSharp_symbols440(void* instance, const VkCommandPoolCreateInfo& _0) { new (instance) VkCommandPoolCreateInfo(_0); } }
VkCommandPoolCreateInfo& (VkCommandPoolCreateInfo::*AcidSharp_symbols441)(const VkCommandPoolCreateInfo&) = &VkCommandPoolCreateInfo::operator=;
VkCommandPoolCreateInfo& (VkCommandPoolCreateInfo::*AcidSharp_symbols442)(VkCommandPoolCreateInfo&&) = &VkCommandPoolCreateInfo::operator=;
extern "C" { void AcidSharp_symbols443(VkCommandPoolCreateInfo* instance) { instance->~VkCommandPoolCreateInfo(); } }
extern "C" { void AcidSharp_symbols444(void* instance) { new (instance) VkCommandBufferAllocateInfo(); } }
extern "C" { void AcidSharp_symbols445(void* instance, const VkCommandBufferAllocateInfo& _0) { new (instance) VkCommandBufferAllocateInfo(_0); } }
VkCommandBufferAllocateInfo& (VkCommandBufferAllocateInfo::*AcidSharp_symbols446)(const VkCommandBufferAllocateInfo&) = &VkCommandBufferAllocateInfo::operator=;
VkCommandBufferAllocateInfo& (VkCommandBufferAllocateInfo::*AcidSharp_symbols447)(VkCommandBufferAllocateInfo&&) = &VkCommandBufferAllocateInfo::operator=;
extern "C" { void AcidSharp_symbols448(VkCommandBufferAllocateInfo* instance) { instance->~VkCommandBufferAllocateInfo(); } }
extern "C" { void AcidSharp_symbols449(void* instance) { new (instance) VkCommandBufferInheritanceInfo(); } }
extern "C" { void AcidSharp_symbols450(void* instance, const VkCommandBufferInheritanceInfo& _0) { new (instance) VkCommandBufferInheritanceInfo(_0); } }
VkCommandBufferInheritanceInfo& (VkCommandBufferInheritanceInfo::*AcidSharp_symbols451)(const VkCommandBufferInheritanceInfo&) = &VkCommandBufferInheritanceInfo::operator=;
VkCommandBufferInheritanceInfo& (VkCommandBufferInheritanceInfo::*AcidSharp_symbols452)(VkCommandBufferInheritanceInfo&&) = &VkCommandBufferInheritanceInfo::operator=;
extern "C" { void AcidSharp_symbols453(VkCommandBufferInheritanceInfo* instance) { instance->~VkCommandBufferInheritanceInfo(); } }
extern "C" { void AcidSharp_symbols454(void* instance) { new (instance) VkCommandBufferBeginInfo(); } }
extern "C" { void AcidSharp_symbols455(void* instance, const VkCommandBufferBeginInfo& _0) { new (instance) VkCommandBufferBeginInfo(_0); } }
VkCommandBufferBeginInfo& (VkCommandBufferBeginInfo::*AcidSharp_symbols456)(const VkCommandBufferBeginInfo&) = &VkCommandBufferBeginInfo::operator=;
VkCommandBufferBeginInfo& (VkCommandBufferBeginInfo::*AcidSharp_symbols457)(VkCommandBufferBeginInfo&&) = &VkCommandBufferBeginInfo::operator=;
extern "C" { void AcidSharp_symbols458(VkCommandBufferBeginInfo* instance) { instance->~VkCommandBufferBeginInfo(); } }
extern "C" { void AcidSharp_symbols459(void* instance) { new (instance) VkBufferCopy(); } }
extern "C" { void AcidSharp_symbols460(void* instance, const VkBufferCopy& _0) { new (instance) VkBufferCopy(_0); } }
VkBufferCopy& (VkBufferCopy::*AcidSharp_symbols461)(const VkBufferCopy&) = &VkBufferCopy::operator=;
VkBufferCopy& (VkBufferCopy::*AcidSharp_symbols462)(VkBufferCopy&&) = &VkBufferCopy::operator=;
extern "C" { void AcidSharp_symbols463(VkBufferCopy* instance) { instance->~VkBufferCopy(); } }
extern "C" { void AcidSharp_symbols464(void* instance) { new (instance) VkImageSubresourceLayers(); } }
extern "C" { void AcidSharp_symbols465(void* instance, const VkImageSubresourceLayers& _0) { new (instance) VkImageSubresourceLayers(_0); } }
VkImageSubresourceLayers& (VkImageSubresourceLayers::*AcidSharp_symbols466)(const VkImageSubresourceLayers&) = &VkImageSubresourceLayers::operator=;
VkImageSubresourceLayers& (VkImageSubresourceLayers::*AcidSharp_symbols467)(VkImageSubresourceLayers&&) = &VkImageSubresourceLayers::operator=;
extern "C" { void AcidSharp_symbols468(VkImageSubresourceLayers* instance) { instance->~VkImageSubresourceLayers(); } }
extern "C" { void AcidSharp_symbols469(void* instance) { new (instance) VkImageCopy(); } }
extern "C" { void AcidSharp_symbols470(void* instance, const VkImageCopy& _0) { new (instance) VkImageCopy(_0); } }
VkImageCopy& (VkImageCopy::*AcidSharp_symbols471)(const VkImageCopy&) = &VkImageCopy::operator=;
VkImageCopy& (VkImageCopy::*AcidSharp_symbols472)(VkImageCopy&&) = &VkImageCopy::operator=;
extern "C" { void AcidSharp_symbols473(VkImageCopy* instance) { instance->~VkImageCopy(); } }
extern "C" { void AcidSharp_symbols474(void* instance) { new (instance) VkImageBlit(); } }
extern "C" { void AcidSharp_symbols475(void* instance, const VkImageBlit& _0) { new (instance) VkImageBlit(_0); } }
VkImageBlit& (VkImageBlit::*AcidSharp_symbols476)(const VkImageBlit&) = &VkImageBlit::operator=;
VkImageBlit& (VkImageBlit::*AcidSharp_symbols477)(VkImageBlit&&) = &VkImageBlit::operator=;
extern "C" { void AcidSharp_symbols478(VkImageBlit* instance) { instance->~VkImageBlit(); } }
extern "C" { void AcidSharp_symbols479(void* instance) { new (instance) VkBufferImageCopy(); } }
extern "C" { void AcidSharp_symbols480(void* instance, const VkBufferImageCopy& _0) { new (instance) VkBufferImageCopy(_0); } }
VkBufferImageCopy& (VkBufferImageCopy::*AcidSharp_symbols481)(const VkBufferImageCopy&) = &VkBufferImageCopy::operator=;
VkBufferImageCopy& (VkBufferImageCopy::*AcidSharp_symbols482)(VkBufferImageCopy&&) = &VkBufferImageCopy::operator=;
extern "C" { void AcidSharp_symbols483(VkBufferImageCopy* instance) { instance->~VkBufferImageCopy(); } }
VkClearColorValue& (VkClearColorValue::*AcidSharp_symbols484)(const VkClearColorValue&) = &VkClearColorValue::operator=;
VkClearColorValue& (VkClearColorValue::*AcidSharp_symbols485)(VkClearColorValue&&) = &VkClearColorValue::operator=;
extern "C" { void AcidSharp_symbols486(VkClearColorValue* instance) { instance->~VkClearColorValue(); } }
extern "C" { void AcidSharp_symbols487(void* instance) { new (instance) VkClearColorValue(); } }
extern "C" { void AcidSharp_symbols488(void* instance, const VkClearColorValue& _0) { new (instance) VkClearColorValue(_0); } }
VkClearDepthStencilValue& (VkClearDepthStencilValue::*AcidSharp_symbols489)(const VkClearDepthStencilValue&) = &VkClearDepthStencilValue::operator=;
VkClearDepthStencilValue& (VkClearDepthStencilValue::*AcidSharp_symbols490)(VkClearDepthStencilValue&&) = &VkClearDepthStencilValue::operator=;
extern "C" { void AcidSharp_symbols491(VkClearDepthStencilValue* instance) { instance->~VkClearDepthStencilValue(); } }
extern "C" { void AcidSharp_symbols492(void* instance) { new (instance) VkClearDepthStencilValue(); } }
extern "C" { void AcidSharp_symbols493(void* instance, const VkClearDepthStencilValue& _0) { new (instance) VkClearDepthStencilValue(_0); } }
VkClearValue& (VkClearValue::*AcidSharp_symbols494)(const VkClearValue&) = &VkClearValue::operator=;
VkClearValue& (VkClearValue::*AcidSharp_symbols495)(VkClearValue&&) = &VkClearValue::operator=;
extern "C" { void AcidSharp_symbols496(VkClearValue* instance) { instance->~VkClearValue(); } }
extern "C" { void AcidSharp_symbols497(void* instance) { new (instance) VkClearValue(); } }
extern "C" { void AcidSharp_symbols498(void* instance, const VkClearValue& _0) { new (instance) VkClearValue(_0); } }
extern "C" { void AcidSharp_symbols499(void* instance) { new (instance) VkClearAttachment(); } }
extern "C" { void AcidSharp_symbols500(void* instance, const VkClearAttachment& _0) { new (instance) VkClearAttachment(_0); } }
VkClearAttachment& (VkClearAttachment::*AcidSharp_symbols501)(const VkClearAttachment&) = &VkClearAttachment::operator=;
VkClearAttachment& (VkClearAttachment::*AcidSharp_symbols502)(VkClearAttachment&&) = &VkClearAttachment::operator=;
extern "C" { void AcidSharp_symbols503(VkClearAttachment* instance) { instance->~VkClearAttachment(); } }
extern "C" { void AcidSharp_symbols504(void* instance) { new (instance) VkClearRect(); } }
extern "C" { void AcidSharp_symbols505(void* instance, const VkClearRect& _0) { new (instance) VkClearRect(_0); } }
VkClearRect& (VkClearRect::*AcidSharp_symbols506)(const VkClearRect&) = &VkClearRect::operator=;
VkClearRect& (VkClearRect::*AcidSharp_symbols507)(VkClearRect&&) = &VkClearRect::operator=;
extern "C" { void AcidSharp_symbols508(VkClearRect* instance) { instance->~VkClearRect(); } }
extern "C" { void AcidSharp_symbols509(void* instance) { new (instance) VkImageResolve(); } }
extern "C" { void AcidSharp_symbols510(void* instance, const VkImageResolve& _0) { new (instance) VkImageResolve(_0); } }
VkImageResolve& (VkImageResolve::*AcidSharp_symbols511)(const VkImageResolve&) = &VkImageResolve::operator=;
VkImageResolve& (VkImageResolve::*AcidSharp_symbols512)(VkImageResolve&&) = &VkImageResolve::operator=;
extern "C" { void AcidSharp_symbols513(VkImageResolve* instance) { instance->~VkImageResolve(); } }
extern "C" { void AcidSharp_symbols514(void* instance) { new (instance) VkMemoryBarrier(); } }
extern "C" { void AcidSharp_symbols515(void* instance, const VkMemoryBarrier& _0) { new (instance) VkMemoryBarrier(_0); } }
VkMemoryBarrier& (VkMemoryBarrier::*AcidSharp_symbols516)(const VkMemoryBarrier&) = &VkMemoryBarrier::operator=;
VkMemoryBarrier& (VkMemoryBarrier::*AcidSharp_symbols517)(VkMemoryBarrier&&) = &VkMemoryBarrier::operator=;
extern "C" { void AcidSharp_symbols518(VkMemoryBarrier* instance) { instance->~VkMemoryBarrier(); } }
extern "C" { void AcidSharp_symbols519(void* instance) { new (instance) VkBufferMemoryBarrier(); } }
extern "C" { void AcidSharp_symbols520(void* instance, const VkBufferMemoryBarrier& _0) { new (instance) VkBufferMemoryBarrier(_0); } }
VkBufferMemoryBarrier& (VkBufferMemoryBarrier::*AcidSharp_symbols521)(const VkBufferMemoryBarrier&) = &VkBufferMemoryBarrier::operator=;
VkBufferMemoryBarrier& (VkBufferMemoryBarrier::*AcidSharp_symbols522)(VkBufferMemoryBarrier&&) = &VkBufferMemoryBarrier::operator=;
extern "C" { void AcidSharp_symbols523(VkBufferMemoryBarrier* instance) { instance->~VkBufferMemoryBarrier(); } }
extern "C" { void AcidSharp_symbols524(void* instance) { new (instance) VkImageMemoryBarrier(); } }
extern "C" { void AcidSharp_symbols525(void* instance, const VkImageMemoryBarrier& _0) { new (instance) VkImageMemoryBarrier(_0); } }
VkImageMemoryBarrier& (VkImageMemoryBarrier::*AcidSharp_symbols526)(const VkImageMemoryBarrier&) = &VkImageMemoryBarrier::operator=;
VkImageMemoryBarrier& (VkImageMemoryBarrier::*AcidSharp_symbols527)(VkImageMemoryBarrier&&) = &VkImageMemoryBarrier::operator=;
extern "C" { void AcidSharp_symbols528(VkImageMemoryBarrier* instance) { instance->~VkImageMemoryBarrier(); } }
extern "C" { void AcidSharp_symbols529(void* instance) { new (instance) VkRenderPassBeginInfo(); } }
extern "C" { void AcidSharp_symbols530(void* instance, const VkRenderPassBeginInfo& _0) { new (instance) VkRenderPassBeginInfo(_0); } }
VkRenderPassBeginInfo& (VkRenderPassBeginInfo::*AcidSharp_symbols531)(const VkRenderPassBeginInfo&) = &VkRenderPassBeginInfo::operator=;
VkRenderPassBeginInfo& (VkRenderPassBeginInfo::*AcidSharp_symbols532)(VkRenderPassBeginInfo&&) = &VkRenderPassBeginInfo::operator=;
extern "C" { void AcidSharp_symbols533(VkRenderPassBeginInfo* instance) { instance->~VkRenderPassBeginInfo(); } }
extern "C" { void AcidSharp_symbols534(void* instance) { new (instance) VkDispatchIndirectCommand(); } }
extern "C" { void AcidSharp_symbols535(void* instance, const VkDispatchIndirectCommand& _0) { new (instance) VkDispatchIndirectCommand(_0); } }
VkDispatchIndirectCommand& (VkDispatchIndirectCommand::*AcidSharp_symbols536)(const VkDispatchIndirectCommand&) = &VkDispatchIndirectCommand::operator=;
VkDispatchIndirectCommand& (VkDispatchIndirectCommand::*AcidSharp_symbols537)(VkDispatchIndirectCommand&&) = &VkDispatchIndirectCommand::operator=;
extern "C" { void AcidSharp_symbols538(VkDispatchIndirectCommand* instance) { instance->~VkDispatchIndirectCommand(); } }
extern "C" { void AcidSharp_symbols539(void* instance) { new (instance) VkDrawIndexedIndirectCommand(); } }
extern "C" { void AcidSharp_symbols540(void* instance, const VkDrawIndexedIndirectCommand& _0) { new (instance) VkDrawIndexedIndirectCommand(_0); } }
VkDrawIndexedIndirectCommand& (VkDrawIndexedIndirectCommand::*AcidSharp_symbols541)(const VkDrawIndexedIndirectCommand&) = &VkDrawIndexedIndirectCommand::operator=;
VkDrawIndexedIndirectCommand& (VkDrawIndexedIndirectCommand::*AcidSharp_symbols542)(VkDrawIndexedIndirectCommand&&) = &VkDrawIndexedIndirectCommand::operator=;
extern "C" { void AcidSharp_symbols543(VkDrawIndexedIndirectCommand* instance) { instance->~VkDrawIndexedIndirectCommand(); } }
extern "C" { void AcidSharp_symbols544(void* instance) { new (instance) VkDrawIndirectCommand(); } }
extern "C" { void AcidSharp_symbols545(void* instance, const VkDrawIndirectCommand& _0) { new (instance) VkDrawIndirectCommand(_0); } }
VkDrawIndirectCommand& (VkDrawIndirectCommand::*AcidSharp_symbols546)(const VkDrawIndirectCommand&) = &VkDrawIndirectCommand::operator=;
VkDrawIndirectCommand& (VkDrawIndirectCommand::*AcidSharp_symbols547)(VkDrawIndirectCommand&&) = &VkDrawIndirectCommand::operator=;
extern "C" { void AcidSharp_symbols548(VkDrawIndirectCommand* instance) { instance->~VkDrawIndirectCommand(); } }
extern "C" { void AcidSharp_symbols549(void* instance) { new (instance) VkBaseOutStructure(); } }
extern "C" { void AcidSharp_symbols550(void* instance, const VkBaseOutStructure& _0) { new (instance) VkBaseOutStructure(_0); } }
VkBaseOutStructure& (VkBaseOutStructure::*AcidSharp_symbols551)(const VkBaseOutStructure&) = &VkBaseOutStructure::operator=;
VkBaseOutStructure& (VkBaseOutStructure::*AcidSharp_symbols552)(VkBaseOutStructure&&) = &VkBaseOutStructure::operator=;
extern "C" { void AcidSharp_symbols553(VkBaseOutStructure* instance) { instance->~VkBaseOutStructure(); } }
extern "C" { void AcidSharp_symbols554(void* instance) { new (instance) VkBaseInStructure(); } }
extern "C" { void AcidSharp_symbols555(void* instance, const VkBaseInStructure& _0) { new (instance) VkBaseInStructure(_0); } }
VkBaseInStructure& (VkBaseInStructure::*AcidSharp_symbols556)(const VkBaseInStructure&) = &VkBaseInStructure::operator=;
VkBaseInStructure& (VkBaseInStructure::*AcidSharp_symbols557)(VkBaseInStructure&&) = &VkBaseInStructure::operator=;
extern "C" { void AcidSharp_symbols558(VkBaseInStructure* instance) { instance->~VkBaseInStructure(); } }
extern "C" { void AcidSharp_symbols559(void* instance) { new (instance) VkPhysicalDeviceSubgroupProperties(); } }
extern "C" { void AcidSharp_symbols560(void* instance, const VkPhysicalDeviceSubgroupProperties& _0) { new (instance) VkPhysicalDeviceSubgroupProperties(_0); } }
VkPhysicalDeviceSubgroupProperties& (VkPhysicalDeviceSubgroupProperties::*AcidSharp_symbols561)(const VkPhysicalDeviceSubgroupProperties&) = &VkPhysicalDeviceSubgroupProperties::operator=;
VkPhysicalDeviceSubgroupProperties& (VkPhysicalDeviceSubgroupProperties::*AcidSharp_symbols562)(VkPhysicalDeviceSubgroupProperties&&) = &VkPhysicalDeviceSubgroupProperties::operator=;
extern "C" { void AcidSharp_symbols563(VkPhysicalDeviceSubgroupProperties* instance) { instance->~VkPhysicalDeviceSubgroupProperties(); } }
extern "C" { void AcidSharp_symbols564(void* instance) { new (instance) VkBindBufferMemoryInfo(); } }
extern "C" { void AcidSharp_symbols565(void* instance, const VkBindBufferMemoryInfo& _0) { new (instance) VkBindBufferMemoryInfo(_0); } }
VkBindBufferMemoryInfo& (VkBindBufferMemoryInfo::*AcidSharp_symbols566)(const VkBindBufferMemoryInfo&) = &VkBindBufferMemoryInfo::operator=;
VkBindBufferMemoryInfo& (VkBindBufferMemoryInfo::*AcidSharp_symbols567)(VkBindBufferMemoryInfo&&) = &VkBindBufferMemoryInfo::operator=;
extern "C" { void AcidSharp_symbols568(VkBindBufferMemoryInfo* instance) { instance->~VkBindBufferMemoryInfo(); } }
extern "C" { void AcidSharp_symbols569(void* instance) { new (instance) VkBindImageMemoryInfo(); } }
extern "C" { void AcidSharp_symbols570(void* instance, const VkBindImageMemoryInfo& _0) { new (instance) VkBindImageMemoryInfo(_0); } }
VkBindImageMemoryInfo& (VkBindImageMemoryInfo::*AcidSharp_symbols571)(const VkBindImageMemoryInfo&) = &VkBindImageMemoryInfo::operator=;
VkBindImageMemoryInfo& (VkBindImageMemoryInfo::*AcidSharp_symbols572)(VkBindImageMemoryInfo&&) = &VkBindImageMemoryInfo::operator=;
extern "C" { void AcidSharp_symbols573(VkBindImageMemoryInfo* instance) { instance->~VkBindImageMemoryInfo(); } }
extern "C" { void AcidSharp_symbols574(void* instance) { new (instance) VkPhysicalDevice16BitStorageFeatures(); } }
extern "C" { void AcidSharp_symbols575(void* instance, const VkPhysicalDevice16BitStorageFeatures& _0) { new (instance) VkPhysicalDevice16BitStorageFeatures(_0); } }
VkPhysicalDevice16BitStorageFeatures& (VkPhysicalDevice16BitStorageFeatures::*AcidSharp_symbols576)(const VkPhysicalDevice16BitStorageFeatures&) = &VkPhysicalDevice16BitStorageFeatures::operator=;
VkPhysicalDevice16BitStorageFeatures& (VkPhysicalDevice16BitStorageFeatures::*AcidSharp_symbols577)(VkPhysicalDevice16BitStorageFeatures&&) = &VkPhysicalDevice16BitStorageFeatures::operator=;
extern "C" { void AcidSharp_symbols578(VkPhysicalDevice16BitStorageFeatures* instance) { instance->~VkPhysicalDevice16BitStorageFeatures(); } }
extern "C" { void AcidSharp_symbols579(void* instance) { new (instance) VkMemoryDedicatedRequirements(); } }
extern "C" { void AcidSharp_symbols580(void* instance, const VkMemoryDedicatedRequirements& _0) { new (instance) VkMemoryDedicatedRequirements(_0); } }
VkMemoryDedicatedRequirements& (VkMemoryDedicatedRequirements::*AcidSharp_symbols581)(const VkMemoryDedicatedRequirements&) = &VkMemoryDedicatedRequirements::operator=;
VkMemoryDedicatedRequirements& (VkMemoryDedicatedRequirements::*AcidSharp_symbols582)(VkMemoryDedicatedRequirements&&) = &VkMemoryDedicatedRequirements::operator=;
extern "C" { void AcidSharp_symbols583(VkMemoryDedicatedRequirements* instance) { instance->~VkMemoryDedicatedRequirements(); } }
extern "C" { void AcidSharp_symbols584(void* instance) { new (instance) VkMemoryDedicatedAllocateInfo(); } }
extern "C" { void AcidSharp_symbols585(void* instance, const VkMemoryDedicatedAllocateInfo& _0) { new (instance) VkMemoryDedicatedAllocateInfo(_0); } }
VkMemoryDedicatedAllocateInfo& (VkMemoryDedicatedAllocateInfo::*AcidSharp_symbols586)(const VkMemoryDedicatedAllocateInfo&) = &VkMemoryDedicatedAllocateInfo::operator=;
VkMemoryDedicatedAllocateInfo& (VkMemoryDedicatedAllocateInfo::*AcidSharp_symbols587)(VkMemoryDedicatedAllocateInfo&&) = &VkMemoryDedicatedAllocateInfo::operator=;
extern "C" { void AcidSharp_symbols588(VkMemoryDedicatedAllocateInfo* instance) { instance->~VkMemoryDedicatedAllocateInfo(); } }
extern "C" { void AcidSharp_symbols589(void* instance) { new (instance) VkMemoryAllocateFlagsInfo(); } }
extern "C" { void AcidSharp_symbols590(void* instance, const VkMemoryAllocateFlagsInfo& _0) { new (instance) VkMemoryAllocateFlagsInfo(_0); } }
VkMemoryAllocateFlagsInfo& (VkMemoryAllocateFlagsInfo::*AcidSharp_symbols591)(const VkMemoryAllocateFlagsInfo&) = &VkMemoryAllocateFlagsInfo::operator=;
VkMemoryAllocateFlagsInfo& (VkMemoryAllocateFlagsInfo::*AcidSharp_symbols592)(VkMemoryAllocateFlagsInfo&&) = &VkMemoryAllocateFlagsInfo::operator=;
extern "C" { void AcidSharp_symbols593(VkMemoryAllocateFlagsInfo* instance) { instance->~VkMemoryAllocateFlagsInfo(); } }
extern "C" { void AcidSharp_symbols594(void* instance) { new (instance) VkDeviceGroupRenderPassBeginInfo(); } }
extern "C" { void AcidSharp_symbols595(void* instance, const VkDeviceGroupRenderPassBeginInfo& _0) { new (instance) VkDeviceGroupRenderPassBeginInfo(_0); } }
VkDeviceGroupRenderPassBeginInfo& (VkDeviceGroupRenderPassBeginInfo::*AcidSharp_symbols596)(const VkDeviceGroupRenderPassBeginInfo&) = &VkDeviceGroupRenderPassBeginInfo::operator=;
VkDeviceGroupRenderPassBeginInfo& (VkDeviceGroupRenderPassBeginInfo::*AcidSharp_symbols597)(VkDeviceGroupRenderPassBeginInfo&&) = &VkDeviceGroupRenderPassBeginInfo::operator=;
extern "C" { void AcidSharp_symbols598(VkDeviceGroupRenderPassBeginInfo* instance) { instance->~VkDeviceGroupRenderPassBeginInfo(); } }
extern "C" { void AcidSharp_symbols599(void* instance) { new (instance) VkDeviceGroupCommandBufferBeginInfo(); } }
extern "C" { void AcidSharp_symbols600(void* instance, const VkDeviceGroupCommandBufferBeginInfo& _0) { new (instance) VkDeviceGroupCommandBufferBeginInfo(_0); } }
VkDeviceGroupCommandBufferBeginInfo& (VkDeviceGroupCommandBufferBeginInfo::*AcidSharp_symbols601)(const VkDeviceGroupCommandBufferBeginInfo&) = &VkDeviceGroupCommandBufferBeginInfo::operator=;
VkDeviceGroupCommandBufferBeginInfo& (VkDeviceGroupCommandBufferBeginInfo::*AcidSharp_symbols602)(VkDeviceGroupCommandBufferBeginInfo&&) = &VkDeviceGroupCommandBufferBeginInfo::operator=;
extern "C" { void AcidSharp_symbols603(VkDeviceGroupCommandBufferBeginInfo* instance) { instance->~VkDeviceGroupCommandBufferBeginInfo(); } }
extern "C" { void AcidSharp_symbols604(void* instance) { new (instance) VkDeviceGroupSubmitInfo(); } }
extern "C" { void AcidSharp_symbols605(void* instance, const VkDeviceGroupSubmitInfo& _0) { new (instance) VkDeviceGroupSubmitInfo(_0); } }
VkDeviceGroupSubmitInfo& (VkDeviceGroupSubmitInfo::*AcidSharp_symbols606)(const VkDeviceGroupSubmitInfo&) = &VkDeviceGroupSubmitInfo::operator=;
VkDeviceGroupSubmitInfo& (VkDeviceGroupSubmitInfo::*AcidSharp_symbols607)(VkDeviceGroupSubmitInfo&&) = &VkDeviceGroupSubmitInfo::operator=;
extern "C" { void AcidSharp_symbols608(VkDeviceGroupSubmitInfo* instance) { instance->~VkDeviceGroupSubmitInfo(); } }
extern "C" { void AcidSharp_symbols609(void* instance) { new (instance) VkDeviceGroupBindSparseInfo(); } }
extern "C" { void AcidSharp_symbols610(void* instance, const VkDeviceGroupBindSparseInfo& _0) { new (instance) VkDeviceGroupBindSparseInfo(_0); } }
VkDeviceGroupBindSparseInfo& (VkDeviceGroupBindSparseInfo::*AcidSharp_symbols611)(const VkDeviceGroupBindSparseInfo&) = &VkDeviceGroupBindSparseInfo::operator=;
VkDeviceGroupBindSparseInfo& (VkDeviceGroupBindSparseInfo::*AcidSharp_symbols612)(VkDeviceGroupBindSparseInfo&&) = &VkDeviceGroupBindSparseInfo::operator=;
extern "C" { void AcidSharp_symbols613(VkDeviceGroupBindSparseInfo* instance) { instance->~VkDeviceGroupBindSparseInfo(); } }
extern "C" { void AcidSharp_symbols614(void* instance) { new (instance) VkBindBufferMemoryDeviceGroupInfo(); } }
extern "C" { void AcidSharp_symbols615(void* instance, const VkBindBufferMemoryDeviceGroupInfo& _0) { new (instance) VkBindBufferMemoryDeviceGroupInfo(_0); } }
VkBindBufferMemoryDeviceGroupInfo& (VkBindBufferMemoryDeviceGroupInfo::*AcidSharp_symbols616)(const VkBindBufferMemoryDeviceGroupInfo&) = &VkBindBufferMemoryDeviceGroupInfo::operator=;
VkBindBufferMemoryDeviceGroupInfo& (VkBindBufferMemoryDeviceGroupInfo::*AcidSharp_symbols617)(VkBindBufferMemoryDeviceGroupInfo&&) = &VkBindBufferMemoryDeviceGroupInfo::operator=;
extern "C" { void AcidSharp_symbols618(VkBindBufferMemoryDeviceGroupInfo* instance) { instance->~VkBindBufferMemoryDeviceGroupInfo(); } }
extern "C" { void AcidSharp_symbols619(void* instance) { new (instance) VkBindImageMemoryDeviceGroupInfo(); } }
extern "C" { void AcidSharp_symbols620(void* instance, const VkBindImageMemoryDeviceGroupInfo& _0) { new (instance) VkBindImageMemoryDeviceGroupInfo(_0); } }
VkBindImageMemoryDeviceGroupInfo& (VkBindImageMemoryDeviceGroupInfo::*AcidSharp_symbols621)(const VkBindImageMemoryDeviceGroupInfo&) = &VkBindImageMemoryDeviceGroupInfo::operator=;
VkBindImageMemoryDeviceGroupInfo& (VkBindImageMemoryDeviceGroupInfo::*AcidSharp_symbols622)(VkBindImageMemoryDeviceGroupInfo&&) = &VkBindImageMemoryDeviceGroupInfo::operator=;
extern "C" { void AcidSharp_symbols623(VkBindImageMemoryDeviceGroupInfo* instance) { instance->~VkBindImageMemoryDeviceGroupInfo(); } }
extern "C" { void AcidSharp_symbols624(void* instance) { new (instance) VkPhysicalDeviceGroupProperties(); } }
extern "C" { void AcidSharp_symbols625(void* instance, const VkPhysicalDeviceGroupProperties& _0) { new (instance) VkPhysicalDeviceGroupProperties(_0); } }
VkPhysicalDeviceGroupProperties& (VkPhysicalDeviceGroupProperties::*AcidSharp_symbols626)(const VkPhysicalDeviceGroupProperties&) = &VkPhysicalDeviceGroupProperties::operator=;
VkPhysicalDeviceGroupProperties& (VkPhysicalDeviceGroupProperties::*AcidSharp_symbols627)(VkPhysicalDeviceGroupProperties&&) = &VkPhysicalDeviceGroupProperties::operator=;
extern "C" { void AcidSharp_symbols628(VkPhysicalDeviceGroupProperties* instance) { instance->~VkPhysicalDeviceGroupProperties(); } }
extern "C" { void AcidSharp_symbols629(void* instance) { new (instance) VkDeviceGroupDeviceCreateInfo(); } }
extern "C" { void AcidSharp_symbols630(void* instance, const VkDeviceGroupDeviceCreateInfo& _0) { new (instance) VkDeviceGroupDeviceCreateInfo(_0); } }
VkDeviceGroupDeviceCreateInfo& (VkDeviceGroupDeviceCreateInfo::*AcidSharp_symbols631)(const VkDeviceGroupDeviceCreateInfo&) = &VkDeviceGroupDeviceCreateInfo::operator=;
VkDeviceGroupDeviceCreateInfo& (VkDeviceGroupDeviceCreateInfo::*AcidSharp_symbols632)(VkDeviceGroupDeviceCreateInfo&&) = &VkDeviceGroupDeviceCreateInfo::operator=;
extern "C" { void AcidSharp_symbols633(VkDeviceGroupDeviceCreateInfo* instance) { instance->~VkDeviceGroupDeviceCreateInfo(); } }
extern "C" { void AcidSharp_symbols634(void* instance) { new (instance) VkBufferMemoryRequirementsInfo2(); } }
extern "C" { void AcidSharp_symbols635(void* instance, const VkBufferMemoryRequirementsInfo2& _0) { new (instance) VkBufferMemoryRequirementsInfo2(_0); } }
VkBufferMemoryRequirementsInfo2& (VkBufferMemoryRequirementsInfo2::*AcidSharp_symbols636)(const VkBufferMemoryRequirementsInfo2&) = &VkBufferMemoryRequirementsInfo2::operator=;
VkBufferMemoryRequirementsInfo2& (VkBufferMemoryRequirementsInfo2::*AcidSharp_symbols637)(VkBufferMemoryRequirementsInfo2&&) = &VkBufferMemoryRequirementsInfo2::operator=;
extern "C" { void AcidSharp_symbols638(VkBufferMemoryRequirementsInfo2* instance) { instance->~VkBufferMemoryRequirementsInfo2(); } }
extern "C" { void AcidSharp_symbols639(void* instance) { new (instance) VkImageMemoryRequirementsInfo2(); } }
extern "C" { void AcidSharp_symbols640(void* instance, const VkImageMemoryRequirementsInfo2& _0) { new (instance) VkImageMemoryRequirementsInfo2(_0); } }
VkImageMemoryRequirementsInfo2& (VkImageMemoryRequirementsInfo2::*AcidSharp_symbols641)(const VkImageMemoryRequirementsInfo2&) = &VkImageMemoryRequirementsInfo2::operator=;
VkImageMemoryRequirementsInfo2& (VkImageMemoryRequirementsInfo2::*AcidSharp_symbols642)(VkImageMemoryRequirementsInfo2&&) = &VkImageMemoryRequirementsInfo2::operator=;
extern "C" { void AcidSharp_symbols643(VkImageMemoryRequirementsInfo2* instance) { instance->~VkImageMemoryRequirementsInfo2(); } }
extern "C" { void AcidSharp_symbols644(void* instance) { new (instance) VkImageSparseMemoryRequirementsInfo2(); } }
extern "C" { void AcidSharp_symbols645(void* instance, const VkImageSparseMemoryRequirementsInfo2& _0) { new (instance) VkImageSparseMemoryRequirementsInfo2(_0); } }
VkImageSparseMemoryRequirementsInfo2& (VkImageSparseMemoryRequirementsInfo2::*AcidSharp_symbols646)(const VkImageSparseMemoryRequirementsInfo2&) = &VkImageSparseMemoryRequirementsInfo2::operator=;
VkImageSparseMemoryRequirementsInfo2& (VkImageSparseMemoryRequirementsInfo2::*AcidSharp_symbols647)(VkImageSparseMemoryRequirementsInfo2&&) = &VkImageSparseMemoryRequirementsInfo2::operator=;
extern "C" { void AcidSharp_symbols648(VkImageSparseMemoryRequirementsInfo2* instance) { instance->~VkImageSparseMemoryRequirementsInfo2(); } }
extern "C" { void AcidSharp_symbols649(void* instance) { new (instance) VkMemoryRequirements2(); } }
extern "C" { void AcidSharp_symbols650(void* instance, const VkMemoryRequirements2& _0) { new (instance) VkMemoryRequirements2(_0); } }
VkMemoryRequirements2& (VkMemoryRequirements2::*AcidSharp_symbols651)(const VkMemoryRequirements2&) = &VkMemoryRequirements2::operator=;
VkMemoryRequirements2& (VkMemoryRequirements2::*AcidSharp_symbols652)(VkMemoryRequirements2&&) = &VkMemoryRequirements2::operator=;
extern "C" { void AcidSharp_symbols653(VkMemoryRequirements2* instance) { instance->~VkMemoryRequirements2(); } }
extern "C" { void AcidSharp_symbols654(void* instance) { new (instance) VkSparseImageMemoryRequirements2(); } }
extern "C" { void AcidSharp_symbols655(void* instance, const VkSparseImageMemoryRequirements2& _0) { new (instance) VkSparseImageMemoryRequirements2(_0); } }
VkSparseImageMemoryRequirements2& (VkSparseImageMemoryRequirements2::*AcidSharp_symbols656)(const VkSparseImageMemoryRequirements2&) = &VkSparseImageMemoryRequirements2::operator=;
VkSparseImageMemoryRequirements2& (VkSparseImageMemoryRequirements2::*AcidSharp_symbols657)(VkSparseImageMemoryRequirements2&&) = &VkSparseImageMemoryRequirements2::operator=;
extern "C" { void AcidSharp_symbols658(VkSparseImageMemoryRequirements2* instance) { instance->~VkSparseImageMemoryRequirements2(); } }
extern "C" { void AcidSharp_symbols659(void* instance) { new (instance) VkPhysicalDeviceFeatures2(); } }
extern "C" { void AcidSharp_symbols660(void* instance, const VkPhysicalDeviceFeatures2& _0) { new (instance) VkPhysicalDeviceFeatures2(_0); } }
VkPhysicalDeviceFeatures2& (VkPhysicalDeviceFeatures2::*AcidSharp_symbols661)(const VkPhysicalDeviceFeatures2&) = &VkPhysicalDeviceFeatures2::operator=;
VkPhysicalDeviceFeatures2& (VkPhysicalDeviceFeatures2::*AcidSharp_symbols662)(VkPhysicalDeviceFeatures2&&) = &VkPhysicalDeviceFeatures2::operator=;
extern "C" { void AcidSharp_symbols663(VkPhysicalDeviceFeatures2* instance) { instance->~VkPhysicalDeviceFeatures2(); } }
extern "C" { void AcidSharp_symbols664(void* instance) { new (instance) VkPhysicalDeviceProperties2(); } }
extern "C" { void AcidSharp_symbols665(void* instance, const VkPhysicalDeviceProperties2& _0) { new (instance) VkPhysicalDeviceProperties2(_0); } }
VkPhysicalDeviceProperties2& (VkPhysicalDeviceProperties2::*AcidSharp_symbols666)(const VkPhysicalDeviceProperties2&) = &VkPhysicalDeviceProperties2::operator=;
VkPhysicalDeviceProperties2& (VkPhysicalDeviceProperties2::*AcidSharp_symbols667)(VkPhysicalDeviceProperties2&&) = &VkPhysicalDeviceProperties2::operator=;
extern "C" { void AcidSharp_symbols668(VkPhysicalDeviceProperties2* instance) { instance->~VkPhysicalDeviceProperties2(); } }
extern "C" { void AcidSharp_symbols669(void* instance) { new (instance) VkFormatProperties2(); } }
extern "C" { void AcidSharp_symbols670(void* instance, const VkFormatProperties2& _0) { new (instance) VkFormatProperties2(_0); } }
VkFormatProperties2& (VkFormatProperties2::*AcidSharp_symbols671)(const VkFormatProperties2&) = &VkFormatProperties2::operator=;
VkFormatProperties2& (VkFormatProperties2::*AcidSharp_symbols672)(VkFormatProperties2&&) = &VkFormatProperties2::operator=;
extern "C" { void AcidSharp_symbols673(VkFormatProperties2* instance) { instance->~VkFormatProperties2(); } }
extern "C" { void AcidSharp_symbols674(void* instance) { new (instance) VkImageFormatProperties2(); } }
extern "C" { void AcidSharp_symbols675(void* instance, const VkImageFormatProperties2& _0) { new (instance) VkImageFormatProperties2(_0); } }
VkImageFormatProperties2& (VkImageFormatProperties2::*AcidSharp_symbols676)(const VkImageFormatProperties2&) = &VkImageFormatProperties2::operator=;
VkImageFormatProperties2& (VkImageFormatProperties2::*AcidSharp_symbols677)(VkImageFormatProperties2&&) = &VkImageFormatProperties2::operator=;
extern "C" { void AcidSharp_symbols678(VkImageFormatProperties2* instance) { instance->~VkImageFormatProperties2(); } }
extern "C" { void AcidSharp_symbols679(void* instance) { new (instance) VkPhysicalDeviceImageFormatInfo2(); } }
extern "C" { void AcidSharp_symbols680(void* instance, const VkPhysicalDeviceImageFormatInfo2& _0) { new (instance) VkPhysicalDeviceImageFormatInfo2(_0); } }
VkPhysicalDeviceImageFormatInfo2& (VkPhysicalDeviceImageFormatInfo2::*AcidSharp_symbols681)(const VkPhysicalDeviceImageFormatInfo2&) = &VkPhysicalDeviceImageFormatInfo2::operator=;
VkPhysicalDeviceImageFormatInfo2& (VkPhysicalDeviceImageFormatInfo2::*AcidSharp_symbols682)(VkPhysicalDeviceImageFormatInfo2&&) = &VkPhysicalDeviceImageFormatInfo2::operator=;
extern "C" { void AcidSharp_symbols683(VkPhysicalDeviceImageFormatInfo2* instance) { instance->~VkPhysicalDeviceImageFormatInfo2(); } }
extern "C" { void AcidSharp_symbols684(void* instance) { new (instance) VkQueueFamilyProperties2(); } }
extern "C" { void AcidSharp_symbols685(void* instance, const VkQueueFamilyProperties2& _0) { new (instance) VkQueueFamilyProperties2(_0); } }
VkQueueFamilyProperties2& (VkQueueFamilyProperties2::*AcidSharp_symbols686)(const VkQueueFamilyProperties2&) = &VkQueueFamilyProperties2::operator=;
VkQueueFamilyProperties2& (VkQueueFamilyProperties2::*AcidSharp_symbols687)(VkQueueFamilyProperties2&&) = &VkQueueFamilyProperties2::operator=;
extern "C" { void AcidSharp_symbols688(VkQueueFamilyProperties2* instance) { instance->~VkQueueFamilyProperties2(); } }
extern "C" { void AcidSharp_symbols689(void* instance) { new (instance) VkPhysicalDeviceMemoryProperties2(); } }
extern "C" { void AcidSharp_symbols690(void* instance, const VkPhysicalDeviceMemoryProperties2& _0) { new (instance) VkPhysicalDeviceMemoryProperties2(_0); } }
VkPhysicalDeviceMemoryProperties2& (VkPhysicalDeviceMemoryProperties2::*AcidSharp_symbols691)(const VkPhysicalDeviceMemoryProperties2&) = &VkPhysicalDeviceMemoryProperties2::operator=;
VkPhysicalDeviceMemoryProperties2& (VkPhysicalDeviceMemoryProperties2::*AcidSharp_symbols692)(VkPhysicalDeviceMemoryProperties2&&) = &VkPhysicalDeviceMemoryProperties2::operator=;
extern "C" { void AcidSharp_symbols693(VkPhysicalDeviceMemoryProperties2* instance) { instance->~VkPhysicalDeviceMemoryProperties2(); } }
extern "C" { void AcidSharp_symbols694(void* instance) { new (instance) VkSparseImageFormatProperties2(); } }
extern "C" { void AcidSharp_symbols695(void* instance, const VkSparseImageFormatProperties2& _0) { new (instance) VkSparseImageFormatProperties2(_0); } }
VkSparseImageFormatProperties2& (VkSparseImageFormatProperties2::*AcidSharp_symbols696)(const VkSparseImageFormatProperties2&) = &VkSparseImageFormatProperties2::operator=;
VkSparseImageFormatProperties2& (VkSparseImageFormatProperties2::*AcidSharp_symbols697)(VkSparseImageFormatProperties2&&) = &VkSparseImageFormatProperties2::operator=;
extern "C" { void AcidSharp_symbols698(VkSparseImageFormatProperties2* instance) { instance->~VkSparseImageFormatProperties2(); } }
extern "C" { void AcidSharp_symbols699(void* instance) { new (instance) VkPhysicalDeviceSparseImageFormatInfo2(); } }
extern "C" { void AcidSharp_symbols700(void* instance, const VkPhysicalDeviceSparseImageFormatInfo2& _0) { new (instance) VkPhysicalDeviceSparseImageFormatInfo2(_0); } }
VkPhysicalDeviceSparseImageFormatInfo2& (VkPhysicalDeviceSparseImageFormatInfo2::*AcidSharp_symbols701)(const VkPhysicalDeviceSparseImageFormatInfo2&) = &VkPhysicalDeviceSparseImageFormatInfo2::operator=;
VkPhysicalDeviceSparseImageFormatInfo2& (VkPhysicalDeviceSparseImageFormatInfo2::*AcidSharp_symbols702)(VkPhysicalDeviceSparseImageFormatInfo2&&) = &VkPhysicalDeviceSparseImageFormatInfo2::operator=;
extern "C" { void AcidSharp_symbols703(VkPhysicalDeviceSparseImageFormatInfo2* instance) { instance->~VkPhysicalDeviceSparseImageFormatInfo2(); } }
extern "C" { void AcidSharp_symbols704(void* instance) { new (instance) VkPhysicalDevicePointClippingProperties(); } }
extern "C" { void AcidSharp_symbols705(void* instance, const VkPhysicalDevicePointClippingProperties& _0) { new (instance) VkPhysicalDevicePointClippingProperties(_0); } }
VkPhysicalDevicePointClippingProperties& (VkPhysicalDevicePointClippingProperties::*AcidSharp_symbols706)(const VkPhysicalDevicePointClippingProperties&) = &VkPhysicalDevicePointClippingProperties::operator=;
VkPhysicalDevicePointClippingProperties& (VkPhysicalDevicePointClippingProperties::*AcidSharp_symbols707)(VkPhysicalDevicePointClippingProperties&&) = &VkPhysicalDevicePointClippingProperties::operator=;
extern "C" { void AcidSharp_symbols708(VkPhysicalDevicePointClippingProperties* instance) { instance->~VkPhysicalDevicePointClippingProperties(); } }
extern "C" { void AcidSharp_symbols709(void* instance) { new (instance) VkInputAttachmentAspectReference(); } }
extern "C" { void AcidSharp_symbols710(void* instance, const VkInputAttachmentAspectReference& _0) { new (instance) VkInputAttachmentAspectReference(_0); } }
VkInputAttachmentAspectReference& (VkInputAttachmentAspectReference::*AcidSharp_symbols711)(const VkInputAttachmentAspectReference&) = &VkInputAttachmentAspectReference::operator=;
VkInputAttachmentAspectReference& (VkInputAttachmentAspectReference::*AcidSharp_symbols712)(VkInputAttachmentAspectReference&&) = &VkInputAttachmentAspectReference::operator=;
extern "C" { void AcidSharp_symbols713(VkInputAttachmentAspectReference* instance) { instance->~VkInputAttachmentAspectReference(); } }
extern "C" { void AcidSharp_symbols714(void* instance) { new (instance) VkRenderPassInputAttachmentAspectCreateInfo(); } }
extern "C" { void AcidSharp_symbols715(void* instance, const VkRenderPassInputAttachmentAspectCreateInfo& _0) { new (instance) VkRenderPassInputAttachmentAspectCreateInfo(_0); } }
VkRenderPassInputAttachmentAspectCreateInfo& (VkRenderPassInputAttachmentAspectCreateInfo::*AcidSharp_symbols716)(const VkRenderPassInputAttachmentAspectCreateInfo&) = &VkRenderPassInputAttachmentAspectCreateInfo::operator=;
VkRenderPassInputAttachmentAspectCreateInfo& (VkRenderPassInputAttachmentAspectCreateInfo::*AcidSharp_symbols717)(VkRenderPassInputAttachmentAspectCreateInfo&&) = &VkRenderPassInputAttachmentAspectCreateInfo::operator=;
extern "C" { void AcidSharp_symbols718(VkRenderPassInputAttachmentAspectCreateInfo* instance) { instance->~VkRenderPassInputAttachmentAspectCreateInfo(); } }
extern "C" { void AcidSharp_symbols719(void* instance) { new (instance) VkImageViewUsageCreateInfo(); } }
extern "C" { void AcidSharp_symbols720(void* instance, const VkImageViewUsageCreateInfo& _0) { new (instance) VkImageViewUsageCreateInfo(_0); } }
VkImageViewUsageCreateInfo& (VkImageViewUsageCreateInfo::*AcidSharp_symbols721)(const VkImageViewUsageCreateInfo&) = &VkImageViewUsageCreateInfo::operator=;
VkImageViewUsageCreateInfo& (VkImageViewUsageCreateInfo::*AcidSharp_symbols722)(VkImageViewUsageCreateInfo&&) = &VkImageViewUsageCreateInfo::operator=;
extern "C" { void AcidSharp_symbols723(VkImageViewUsageCreateInfo* instance) { instance->~VkImageViewUsageCreateInfo(); } }
extern "C" { void AcidSharp_symbols724(void* instance) { new (instance) VkPipelineTessellationDomainOriginStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols725(void* instance, const VkPipelineTessellationDomainOriginStateCreateInfo& _0) { new (instance) VkPipelineTessellationDomainOriginStateCreateInfo(_0); } }
VkPipelineTessellationDomainOriginStateCreateInfo& (VkPipelineTessellationDomainOriginStateCreateInfo::*AcidSharp_symbols726)(const VkPipelineTessellationDomainOriginStateCreateInfo&) = &VkPipelineTessellationDomainOriginStateCreateInfo::operator=;
VkPipelineTessellationDomainOriginStateCreateInfo& (VkPipelineTessellationDomainOriginStateCreateInfo::*AcidSharp_symbols727)(VkPipelineTessellationDomainOriginStateCreateInfo&&) = &VkPipelineTessellationDomainOriginStateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols728(VkPipelineTessellationDomainOriginStateCreateInfo* instance) { instance->~VkPipelineTessellationDomainOriginStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols729(void* instance) { new (instance) VkRenderPassMultiviewCreateInfo(); } }
extern "C" { void AcidSharp_symbols730(void* instance, const VkRenderPassMultiviewCreateInfo& _0) { new (instance) VkRenderPassMultiviewCreateInfo(_0); } }
VkRenderPassMultiviewCreateInfo& (VkRenderPassMultiviewCreateInfo::*AcidSharp_symbols731)(const VkRenderPassMultiviewCreateInfo&) = &VkRenderPassMultiviewCreateInfo::operator=;
VkRenderPassMultiviewCreateInfo& (VkRenderPassMultiviewCreateInfo::*AcidSharp_symbols732)(VkRenderPassMultiviewCreateInfo&&) = &VkRenderPassMultiviewCreateInfo::operator=;
extern "C" { void AcidSharp_symbols733(VkRenderPassMultiviewCreateInfo* instance) { instance->~VkRenderPassMultiviewCreateInfo(); } }
extern "C" { void AcidSharp_symbols734(void* instance) { new (instance) VkPhysicalDeviceMultiviewFeatures(); } }
extern "C" { void AcidSharp_symbols735(void* instance, const VkPhysicalDeviceMultiviewFeatures& _0) { new (instance) VkPhysicalDeviceMultiviewFeatures(_0); } }
VkPhysicalDeviceMultiviewFeatures& (VkPhysicalDeviceMultiviewFeatures::*AcidSharp_symbols736)(const VkPhysicalDeviceMultiviewFeatures&) = &VkPhysicalDeviceMultiviewFeatures::operator=;
VkPhysicalDeviceMultiviewFeatures& (VkPhysicalDeviceMultiviewFeatures::*AcidSharp_symbols737)(VkPhysicalDeviceMultiviewFeatures&&) = &VkPhysicalDeviceMultiviewFeatures::operator=;
extern "C" { void AcidSharp_symbols738(VkPhysicalDeviceMultiviewFeatures* instance) { instance->~VkPhysicalDeviceMultiviewFeatures(); } }
extern "C" { void AcidSharp_symbols739(void* instance) { new (instance) VkPhysicalDeviceMultiviewProperties(); } }
extern "C" { void AcidSharp_symbols740(void* instance, const VkPhysicalDeviceMultiviewProperties& _0) { new (instance) VkPhysicalDeviceMultiviewProperties(_0); } }
VkPhysicalDeviceMultiviewProperties& (VkPhysicalDeviceMultiviewProperties::*AcidSharp_symbols741)(const VkPhysicalDeviceMultiviewProperties&) = &VkPhysicalDeviceMultiviewProperties::operator=;
VkPhysicalDeviceMultiviewProperties& (VkPhysicalDeviceMultiviewProperties::*AcidSharp_symbols742)(VkPhysicalDeviceMultiviewProperties&&) = &VkPhysicalDeviceMultiviewProperties::operator=;
extern "C" { void AcidSharp_symbols743(VkPhysicalDeviceMultiviewProperties* instance) { instance->~VkPhysicalDeviceMultiviewProperties(); } }
extern "C" { void AcidSharp_symbols744(void* instance) { new (instance) VkPhysicalDeviceVariablePointerFeatures(); } }
extern "C" { void AcidSharp_symbols745(void* instance, const VkPhysicalDeviceVariablePointerFeatures& _0) { new (instance) VkPhysicalDeviceVariablePointerFeatures(_0); } }
VkPhysicalDeviceVariablePointerFeatures& (VkPhysicalDeviceVariablePointerFeatures::*AcidSharp_symbols746)(const VkPhysicalDeviceVariablePointerFeatures&) = &VkPhysicalDeviceVariablePointerFeatures::operator=;
VkPhysicalDeviceVariablePointerFeatures& (VkPhysicalDeviceVariablePointerFeatures::*AcidSharp_symbols747)(VkPhysicalDeviceVariablePointerFeatures&&) = &VkPhysicalDeviceVariablePointerFeatures::operator=;
extern "C" { void AcidSharp_symbols748(VkPhysicalDeviceVariablePointerFeatures* instance) { instance->~VkPhysicalDeviceVariablePointerFeatures(); } }
extern "C" { void AcidSharp_symbols749(void* instance) { new (instance) VkPhysicalDeviceProtectedMemoryFeatures(); } }
extern "C" { void AcidSharp_symbols750(void* instance, const VkPhysicalDeviceProtectedMemoryFeatures& _0) { new (instance) VkPhysicalDeviceProtectedMemoryFeatures(_0); } }
VkPhysicalDeviceProtectedMemoryFeatures& (VkPhysicalDeviceProtectedMemoryFeatures::*AcidSharp_symbols751)(const VkPhysicalDeviceProtectedMemoryFeatures&) = &VkPhysicalDeviceProtectedMemoryFeatures::operator=;
VkPhysicalDeviceProtectedMemoryFeatures& (VkPhysicalDeviceProtectedMemoryFeatures::*AcidSharp_symbols752)(VkPhysicalDeviceProtectedMemoryFeatures&&) = &VkPhysicalDeviceProtectedMemoryFeatures::operator=;
extern "C" { void AcidSharp_symbols753(VkPhysicalDeviceProtectedMemoryFeatures* instance) { instance->~VkPhysicalDeviceProtectedMemoryFeatures(); } }
extern "C" { void AcidSharp_symbols754(void* instance) { new (instance) VkPhysicalDeviceProtectedMemoryProperties(); } }
extern "C" { void AcidSharp_symbols755(void* instance, const VkPhysicalDeviceProtectedMemoryProperties& _0) { new (instance) VkPhysicalDeviceProtectedMemoryProperties(_0); } }
VkPhysicalDeviceProtectedMemoryProperties& (VkPhysicalDeviceProtectedMemoryProperties::*AcidSharp_symbols756)(const VkPhysicalDeviceProtectedMemoryProperties&) = &VkPhysicalDeviceProtectedMemoryProperties::operator=;
VkPhysicalDeviceProtectedMemoryProperties& (VkPhysicalDeviceProtectedMemoryProperties::*AcidSharp_symbols757)(VkPhysicalDeviceProtectedMemoryProperties&&) = &VkPhysicalDeviceProtectedMemoryProperties::operator=;
extern "C" { void AcidSharp_symbols758(VkPhysicalDeviceProtectedMemoryProperties* instance) { instance->~VkPhysicalDeviceProtectedMemoryProperties(); } }
extern "C" { void AcidSharp_symbols759(void* instance) { new (instance) VkDeviceQueueInfo2(); } }
extern "C" { void AcidSharp_symbols760(void* instance, const VkDeviceQueueInfo2& _0) { new (instance) VkDeviceQueueInfo2(_0); } }
VkDeviceQueueInfo2& (VkDeviceQueueInfo2::*AcidSharp_symbols761)(const VkDeviceQueueInfo2&) = &VkDeviceQueueInfo2::operator=;
VkDeviceQueueInfo2& (VkDeviceQueueInfo2::*AcidSharp_symbols762)(VkDeviceQueueInfo2&&) = &VkDeviceQueueInfo2::operator=;
extern "C" { void AcidSharp_symbols763(VkDeviceQueueInfo2* instance) { instance->~VkDeviceQueueInfo2(); } }
extern "C" { void AcidSharp_symbols764(void* instance) { new (instance) VkProtectedSubmitInfo(); } }
extern "C" { void AcidSharp_symbols765(void* instance, const VkProtectedSubmitInfo& _0) { new (instance) VkProtectedSubmitInfo(_0); } }
VkProtectedSubmitInfo& (VkProtectedSubmitInfo::*AcidSharp_symbols766)(const VkProtectedSubmitInfo&) = &VkProtectedSubmitInfo::operator=;
VkProtectedSubmitInfo& (VkProtectedSubmitInfo::*AcidSharp_symbols767)(VkProtectedSubmitInfo&&) = &VkProtectedSubmitInfo::operator=;
extern "C" { void AcidSharp_symbols768(VkProtectedSubmitInfo* instance) { instance->~VkProtectedSubmitInfo(); } }
extern "C" { void AcidSharp_symbols769(void* instance) { new (instance) VkSamplerYcbcrConversionCreateInfo(); } }
extern "C" { void AcidSharp_symbols770(void* instance, const VkSamplerYcbcrConversionCreateInfo& _0) { new (instance) VkSamplerYcbcrConversionCreateInfo(_0); } }
VkSamplerYcbcrConversionCreateInfo& (VkSamplerYcbcrConversionCreateInfo::*AcidSharp_symbols771)(const VkSamplerYcbcrConversionCreateInfo&) = &VkSamplerYcbcrConversionCreateInfo::operator=;
VkSamplerYcbcrConversionCreateInfo& (VkSamplerYcbcrConversionCreateInfo::*AcidSharp_symbols772)(VkSamplerYcbcrConversionCreateInfo&&) = &VkSamplerYcbcrConversionCreateInfo::operator=;
extern "C" { void AcidSharp_symbols773(VkSamplerYcbcrConversionCreateInfo* instance) { instance->~VkSamplerYcbcrConversionCreateInfo(); } }
extern "C" { void AcidSharp_symbols774(void* instance) { new (instance) VkSamplerYcbcrConversionInfo(); } }
extern "C" { void AcidSharp_symbols775(void* instance, const VkSamplerYcbcrConversionInfo& _0) { new (instance) VkSamplerYcbcrConversionInfo(_0); } }
VkSamplerYcbcrConversionInfo& (VkSamplerYcbcrConversionInfo::*AcidSharp_symbols776)(const VkSamplerYcbcrConversionInfo&) = &VkSamplerYcbcrConversionInfo::operator=;
VkSamplerYcbcrConversionInfo& (VkSamplerYcbcrConversionInfo::*AcidSharp_symbols777)(VkSamplerYcbcrConversionInfo&&) = &VkSamplerYcbcrConversionInfo::operator=;
extern "C" { void AcidSharp_symbols778(VkSamplerYcbcrConversionInfo* instance) { instance->~VkSamplerYcbcrConversionInfo(); } }
extern "C" { void AcidSharp_symbols779(void* instance) { new (instance) VkBindImagePlaneMemoryInfo(); } }
extern "C" { void AcidSharp_symbols780(void* instance, const VkBindImagePlaneMemoryInfo& _0) { new (instance) VkBindImagePlaneMemoryInfo(_0); } }
VkBindImagePlaneMemoryInfo& (VkBindImagePlaneMemoryInfo::*AcidSharp_symbols781)(const VkBindImagePlaneMemoryInfo&) = &VkBindImagePlaneMemoryInfo::operator=;
VkBindImagePlaneMemoryInfo& (VkBindImagePlaneMemoryInfo::*AcidSharp_symbols782)(VkBindImagePlaneMemoryInfo&&) = &VkBindImagePlaneMemoryInfo::operator=;
extern "C" { void AcidSharp_symbols783(VkBindImagePlaneMemoryInfo* instance) { instance->~VkBindImagePlaneMemoryInfo(); } }
extern "C" { void AcidSharp_symbols784(void* instance) { new (instance) VkImagePlaneMemoryRequirementsInfo(); } }
extern "C" { void AcidSharp_symbols785(void* instance, const VkImagePlaneMemoryRequirementsInfo& _0) { new (instance) VkImagePlaneMemoryRequirementsInfo(_0); } }
VkImagePlaneMemoryRequirementsInfo& (VkImagePlaneMemoryRequirementsInfo::*AcidSharp_symbols786)(const VkImagePlaneMemoryRequirementsInfo&) = &VkImagePlaneMemoryRequirementsInfo::operator=;
VkImagePlaneMemoryRequirementsInfo& (VkImagePlaneMemoryRequirementsInfo::*AcidSharp_symbols787)(VkImagePlaneMemoryRequirementsInfo&&) = &VkImagePlaneMemoryRequirementsInfo::operator=;
extern "C" { void AcidSharp_symbols788(VkImagePlaneMemoryRequirementsInfo* instance) { instance->~VkImagePlaneMemoryRequirementsInfo(); } }
extern "C" { void AcidSharp_symbols789(void* instance) { new (instance) VkPhysicalDeviceSamplerYcbcrConversionFeatures(); } }
extern "C" { void AcidSharp_symbols790(void* instance, const VkPhysicalDeviceSamplerYcbcrConversionFeatures& _0) { new (instance) VkPhysicalDeviceSamplerYcbcrConversionFeatures(_0); } }
VkPhysicalDeviceSamplerYcbcrConversionFeatures& (VkPhysicalDeviceSamplerYcbcrConversionFeatures::*AcidSharp_symbols791)(const VkPhysicalDeviceSamplerYcbcrConversionFeatures&) = &VkPhysicalDeviceSamplerYcbcrConversionFeatures::operator=;
VkPhysicalDeviceSamplerYcbcrConversionFeatures& (VkPhysicalDeviceSamplerYcbcrConversionFeatures::*AcidSharp_symbols792)(VkPhysicalDeviceSamplerYcbcrConversionFeatures&&) = &VkPhysicalDeviceSamplerYcbcrConversionFeatures::operator=;
extern "C" { void AcidSharp_symbols793(VkPhysicalDeviceSamplerYcbcrConversionFeatures* instance) { instance->~VkPhysicalDeviceSamplerYcbcrConversionFeatures(); } }
extern "C" { void AcidSharp_symbols794(void* instance) { new (instance) VkSamplerYcbcrConversionImageFormatProperties(); } }
extern "C" { void AcidSharp_symbols795(void* instance, const VkSamplerYcbcrConversionImageFormatProperties& _0) { new (instance) VkSamplerYcbcrConversionImageFormatProperties(_0); } }
VkSamplerYcbcrConversionImageFormatProperties& (VkSamplerYcbcrConversionImageFormatProperties::*AcidSharp_symbols796)(const VkSamplerYcbcrConversionImageFormatProperties&) = &VkSamplerYcbcrConversionImageFormatProperties::operator=;
VkSamplerYcbcrConversionImageFormatProperties& (VkSamplerYcbcrConversionImageFormatProperties::*AcidSharp_symbols797)(VkSamplerYcbcrConversionImageFormatProperties&&) = &VkSamplerYcbcrConversionImageFormatProperties::operator=;
extern "C" { void AcidSharp_symbols798(VkSamplerYcbcrConversionImageFormatProperties* instance) { instance->~VkSamplerYcbcrConversionImageFormatProperties(); } }
extern "C" { void AcidSharp_symbols799(void* instance) { new (instance) VkDescriptorUpdateTemplateEntry(); } }
extern "C" { void AcidSharp_symbols800(void* instance, const VkDescriptorUpdateTemplateEntry& _0) { new (instance) VkDescriptorUpdateTemplateEntry(_0); } }
VkDescriptorUpdateTemplateEntry& (VkDescriptorUpdateTemplateEntry::*AcidSharp_symbols801)(const VkDescriptorUpdateTemplateEntry&) = &VkDescriptorUpdateTemplateEntry::operator=;
VkDescriptorUpdateTemplateEntry& (VkDescriptorUpdateTemplateEntry::*AcidSharp_symbols802)(VkDescriptorUpdateTemplateEntry&&) = &VkDescriptorUpdateTemplateEntry::operator=;
extern "C" { void AcidSharp_symbols803(VkDescriptorUpdateTemplateEntry* instance) { instance->~VkDescriptorUpdateTemplateEntry(); } }
extern "C" { void AcidSharp_symbols804(void* instance) { new (instance) VkDescriptorUpdateTemplateCreateInfo(); } }
extern "C" { void AcidSharp_symbols805(void* instance, const VkDescriptorUpdateTemplateCreateInfo& _0) { new (instance) VkDescriptorUpdateTemplateCreateInfo(_0); } }
VkDescriptorUpdateTemplateCreateInfo& (VkDescriptorUpdateTemplateCreateInfo::*AcidSharp_symbols806)(const VkDescriptorUpdateTemplateCreateInfo&) = &VkDescriptorUpdateTemplateCreateInfo::operator=;
VkDescriptorUpdateTemplateCreateInfo& (VkDescriptorUpdateTemplateCreateInfo::*AcidSharp_symbols807)(VkDescriptorUpdateTemplateCreateInfo&&) = &VkDescriptorUpdateTemplateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols808(VkDescriptorUpdateTemplateCreateInfo* instance) { instance->~VkDescriptorUpdateTemplateCreateInfo(); } }
extern "C" { void AcidSharp_symbols809(void* instance) { new (instance) VkExternalMemoryProperties(); } }
extern "C" { void AcidSharp_symbols810(void* instance, const VkExternalMemoryProperties& _0) { new (instance) VkExternalMemoryProperties(_0); } }
VkExternalMemoryProperties& (VkExternalMemoryProperties::*AcidSharp_symbols811)(const VkExternalMemoryProperties&) = &VkExternalMemoryProperties::operator=;
VkExternalMemoryProperties& (VkExternalMemoryProperties::*AcidSharp_symbols812)(VkExternalMemoryProperties&&) = &VkExternalMemoryProperties::operator=;
extern "C" { void AcidSharp_symbols813(VkExternalMemoryProperties* instance) { instance->~VkExternalMemoryProperties(); } }
extern "C" { void AcidSharp_symbols814(void* instance) { new (instance) VkPhysicalDeviceExternalImageFormatInfo(); } }
extern "C" { void AcidSharp_symbols815(void* instance, const VkPhysicalDeviceExternalImageFormatInfo& _0) { new (instance) VkPhysicalDeviceExternalImageFormatInfo(_0); } }
VkPhysicalDeviceExternalImageFormatInfo& (VkPhysicalDeviceExternalImageFormatInfo::*AcidSharp_symbols816)(const VkPhysicalDeviceExternalImageFormatInfo&) = &VkPhysicalDeviceExternalImageFormatInfo::operator=;
VkPhysicalDeviceExternalImageFormatInfo& (VkPhysicalDeviceExternalImageFormatInfo::*AcidSharp_symbols817)(VkPhysicalDeviceExternalImageFormatInfo&&) = &VkPhysicalDeviceExternalImageFormatInfo::operator=;
extern "C" { void AcidSharp_symbols818(VkPhysicalDeviceExternalImageFormatInfo* instance) { instance->~VkPhysicalDeviceExternalImageFormatInfo(); } }
extern "C" { void AcidSharp_symbols819(void* instance) { new (instance) VkExternalImageFormatProperties(); } }
extern "C" { void AcidSharp_symbols820(void* instance, const VkExternalImageFormatProperties& _0) { new (instance) VkExternalImageFormatProperties(_0); } }
VkExternalImageFormatProperties& (VkExternalImageFormatProperties::*AcidSharp_symbols821)(const VkExternalImageFormatProperties&) = &VkExternalImageFormatProperties::operator=;
VkExternalImageFormatProperties& (VkExternalImageFormatProperties::*AcidSharp_symbols822)(VkExternalImageFormatProperties&&) = &VkExternalImageFormatProperties::operator=;
extern "C" { void AcidSharp_symbols823(VkExternalImageFormatProperties* instance) { instance->~VkExternalImageFormatProperties(); } }
extern "C" { void AcidSharp_symbols824(void* instance) { new (instance) VkPhysicalDeviceExternalBufferInfo(); } }
extern "C" { void AcidSharp_symbols825(void* instance, const VkPhysicalDeviceExternalBufferInfo& _0) { new (instance) VkPhysicalDeviceExternalBufferInfo(_0); } }
VkPhysicalDeviceExternalBufferInfo& (VkPhysicalDeviceExternalBufferInfo::*AcidSharp_symbols826)(const VkPhysicalDeviceExternalBufferInfo&) = &VkPhysicalDeviceExternalBufferInfo::operator=;
VkPhysicalDeviceExternalBufferInfo& (VkPhysicalDeviceExternalBufferInfo::*AcidSharp_symbols827)(VkPhysicalDeviceExternalBufferInfo&&) = &VkPhysicalDeviceExternalBufferInfo::operator=;
extern "C" { void AcidSharp_symbols828(VkPhysicalDeviceExternalBufferInfo* instance) { instance->~VkPhysicalDeviceExternalBufferInfo(); } }
extern "C" { void AcidSharp_symbols829(void* instance) { new (instance) VkExternalBufferProperties(); } }
extern "C" { void AcidSharp_symbols830(void* instance, const VkExternalBufferProperties& _0) { new (instance) VkExternalBufferProperties(_0); } }
VkExternalBufferProperties& (VkExternalBufferProperties::*AcidSharp_symbols831)(const VkExternalBufferProperties&) = &VkExternalBufferProperties::operator=;
VkExternalBufferProperties& (VkExternalBufferProperties::*AcidSharp_symbols832)(VkExternalBufferProperties&&) = &VkExternalBufferProperties::operator=;
extern "C" { void AcidSharp_symbols833(VkExternalBufferProperties* instance) { instance->~VkExternalBufferProperties(); } }
extern "C" { void AcidSharp_symbols834(void* instance) { new (instance) VkPhysicalDeviceIDProperties(); } }
extern "C" { void AcidSharp_symbols835(void* instance, const VkPhysicalDeviceIDProperties& _0) { new (instance) VkPhysicalDeviceIDProperties(_0); } }
VkPhysicalDeviceIDProperties& (VkPhysicalDeviceIDProperties::*AcidSharp_symbols836)(const VkPhysicalDeviceIDProperties&) = &VkPhysicalDeviceIDProperties::operator=;
VkPhysicalDeviceIDProperties& (VkPhysicalDeviceIDProperties::*AcidSharp_symbols837)(VkPhysicalDeviceIDProperties&&) = &VkPhysicalDeviceIDProperties::operator=;
extern "C" { void AcidSharp_symbols838(VkPhysicalDeviceIDProperties* instance) { instance->~VkPhysicalDeviceIDProperties(); } }
extern "C" { void AcidSharp_symbols839(void* instance) { new (instance) VkExternalMemoryImageCreateInfo(); } }
extern "C" { void AcidSharp_symbols840(void* instance, const VkExternalMemoryImageCreateInfo& _0) { new (instance) VkExternalMemoryImageCreateInfo(_0); } }
VkExternalMemoryImageCreateInfo& (VkExternalMemoryImageCreateInfo::*AcidSharp_symbols841)(const VkExternalMemoryImageCreateInfo&) = &VkExternalMemoryImageCreateInfo::operator=;
VkExternalMemoryImageCreateInfo& (VkExternalMemoryImageCreateInfo::*AcidSharp_symbols842)(VkExternalMemoryImageCreateInfo&&) = &VkExternalMemoryImageCreateInfo::operator=;
extern "C" { void AcidSharp_symbols843(VkExternalMemoryImageCreateInfo* instance) { instance->~VkExternalMemoryImageCreateInfo(); } }
extern "C" { void AcidSharp_symbols844(void* instance) { new (instance) VkExternalMemoryBufferCreateInfo(); } }
extern "C" { void AcidSharp_symbols845(void* instance, const VkExternalMemoryBufferCreateInfo& _0) { new (instance) VkExternalMemoryBufferCreateInfo(_0); } }
VkExternalMemoryBufferCreateInfo& (VkExternalMemoryBufferCreateInfo::*AcidSharp_symbols846)(const VkExternalMemoryBufferCreateInfo&) = &VkExternalMemoryBufferCreateInfo::operator=;
VkExternalMemoryBufferCreateInfo& (VkExternalMemoryBufferCreateInfo::*AcidSharp_symbols847)(VkExternalMemoryBufferCreateInfo&&) = &VkExternalMemoryBufferCreateInfo::operator=;
extern "C" { void AcidSharp_symbols848(VkExternalMemoryBufferCreateInfo* instance) { instance->~VkExternalMemoryBufferCreateInfo(); } }
extern "C" { void AcidSharp_symbols849(void* instance) { new (instance) VkExportMemoryAllocateInfo(); } }
extern "C" { void AcidSharp_symbols850(void* instance, const VkExportMemoryAllocateInfo& _0) { new (instance) VkExportMemoryAllocateInfo(_0); } }
VkExportMemoryAllocateInfo& (VkExportMemoryAllocateInfo::*AcidSharp_symbols851)(const VkExportMemoryAllocateInfo&) = &VkExportMemoryAllocateInfo::operator=;
VkExportMemoryAllocateInfo& (VkExportMemoryAllocateInfo::*AcidSharp_symbols852)(VkExportMemoryAllocateInfo&&) = &VkExportMemoryAllocateInfo::operator=;
extern "C" { void AcidSharp_symbols853(VkExportMemoryAllocateInfo* instance) { instance->~VkExportMemoryAllocateInfo(); } }
extern "C" { void AcidSharp_symbols854(void* instance) { new (instance) VkPhysicalDeviceExternalFenceInfo(); } }
extern "C" { void AcidSharp_symbols855(void* instance, const VkPhysicalDeviceExternalFenceInfo& _0) { new (instance) VkPhysicalDeviceExternalFenceInfo(_0); } }
VkPhysicalDeviceExternalFenceInfo& (VkPhysicalDeviceExternalFenceInfo::*AcidSharp_symbols856)(const VkPhysicalDeviceExternalFenceInfo&) = &VkPhysicalDeviceExternalFenceInfo::operator=;
VkPhysicalDeviceExternalFenceInfo& (VkPhysicalDeviceExternalFenceInfo::*AcidSharp_symbols857)(VkPhysicalDeviceExternalFenceInfo&&) = &VkPhysicalDeviceExternalFenceInfo::operator=;
extern "C" { void AcidSharp_symbols858(VkPhysicalDeviceExternalFenceInfo* instance) { instance->~VkPhysicalDeviceExternalFenceInfo(); } }
extern "C" { void AcidSharp_symbols859(void* instance) { new (instance) VkExternalFenceProperties(); } }
extern "C" { void AcidSharp_symbols860(void* instance, const VkExternalFenceProperties& _0) { new (instance) VkExternalFenceProperties(_0); } }
VkExternalFenceProperties& (VkExternalFenceProperties::*AcidSharp_symbols861)(const VkExternalFenceProperties&) = &VkExternalFenceProperties::operator=;
VkExternalFenceProperties& (VkExternalFenceProperties::*AcidSharp_symbols862)(VkExternalFenceProperties&&) = &VkExternalFenceProperties::operator=;
extern "C" { void AcidSharp_symbols863(VkExternalFenceProperties* instance) { instance->~VkExternalFenceProperties(); } }
extern "C" { void AcidSharp_symbols864(void* instance) { new (instance) VkExportFenceCreateInfo(); } }
extern "C" { void AcidSharp_symbols865(void* instance, const VkExportFenceCreateInfo& _0) { new (instance) VkExportFenceCreateInfo(_0); } }
VkExportFenceCreateInfo& (VkExportFenceCreateInfo::*AcidSharp_symbols866)(const VkExportFenceCreateInfo&) = &VkExportFenceCreateInfo::operator=;
VkExportFenceCreateInfo& (VkExportFenceCreateInfo::*AcidSharp_symbols867)(VkExportFenceCreateInfo&&) = &VkExportFenceCreateInfo::operator=;
extern "C" { void AcidSharp_symbols868(VkExportFenceCreateInfo* instance) { instance->~VkExportFenceCreateInfo(); } }
extern "C" { void AcidSharp_symbols869(void* instance) { new (instance) VkExportSemaphoreCreateInfo(); } }
extern "C" { void AcidSharp_symbols870(void* instance, const VkExportSemaphoreCreateInfo& _0) { new (instance) VkExportSemaphoreCreateInfo(_0); } }
VkExportSemaphoreCreateInfo& (VkExportSemaphoreCreateInfo::*AcidSharp_symbols871)(const VkExportSemaphoreCreateInfo&) = &VkExportSemaphoreCreateInfo::operator=;
VkExportSemaphoreCreateInfo& (VkExportSemaphoreCreateInfo::*AcidSharp_symbols872)(VkExportSemaphoreCreateInfo&&) = &VkExportSemaphoreCreateInfo::operator=;
extern "C" { void AcidSharp_symbols873(VkExportSemaphoreCreateInfo* instance) { instance->~VkExportSemaphoreCreateInfo(); } }
extern "C" { void AcidSharp_symbols874(void* instance) { new (instance) VkPhysicalDeviceExternalSemaphoreInfo(); } }
extern "C" { void AcidSharp_symbols875(void* instance, const VkPhysicalDeviceExternalSemaphoreInfo& _0) { new (instance) VkPhysicalDeviceExternalSemaphoreInfo(_0); } }
VkPhysicalDeviceExternalSemaphoreInfo& (VkPhysicalDeviceExternalSemaphoreInfo::*AcidSharp_symbols876)(const VkPhysicalDeviceExternalSemaphoreInfo&) = &VkPhysicalDeviceExternalSemaphoreInfo::operator=;
VkPhysicalDeviceExternalSemaphoreInfo& (VkPhysicalDeviceExternalSemaphoreInfo::*AcidSharp_symbols877)(VkPhysicalDeviceExternalSemaphoreInfo&&) = &VkPhysicalDeviceExternalSemaphoreInfo::operator=;
extern "C" { void AcidSharp_symbols878(VkPhysicalDeviceExternalSemaphoreInfo* instance) { instance->~VkPhysicalDeviceExternalSemaphoreInfo(); } }
extern "C" { void AcidSharp_symbols879(void* instance) { new (instance) VkExternalSemaphoreProperties(); } }
extern "C" { void AcidSharp_symbols880(void* instance, const VkExternalSemaphoreProperties& _0) { new (instance) VkExternalSemaphoreProperties(_0); } }
VkExternalSemaphoreProperties& (VkExternalSemaphoreProperties::*AcidSharp_symbols881)(const VkExternalSemaphoreProperties&) = &VkExternalSemaphoreProperties::operator=;
VkExternalSemaphoreProperties& (VkExternalSemaphoreProperties::*AcidSharp_symbols882)(VkExternalSemaphoreProperties&&) = &VkExternalSemaphoreProperties::operator=;
extern "C" { void AcidSharp_symbols883(VkExternalSemaphoreProperties* instance) { instance->~VkExternalSemaphoreProperties(); } }
extern "C" { void AcidSharp_symbols884(void* instance) { new (instance) VkPhysicalDeviceMaintenance3Properties(); } }
extern "C" { void AcidSharp_symbols885(void* instance, const VkPhysicalDeviceMaintenance3Properties& _0) { new (instance) VkPhysicalDeviceMaintenance3Properties(_0); } }
VkPhysicalDeviceMaintenance3Properties& (VkPhysicalDeviceMaintenance3Properties::*AcidSharp_symbols886)(const VkPhysicalDeviceMaintenance3Properties&) = &VkPhysicalDeviceMaintenance3Properties::operator=;
VkPhysicalDeviceMaintenance3Properties& (VkPhysicalDeviceMaintenance3Properties::*AcidSharp_symbols887)(VkPhysicalDeviceMaintenance3Properties&&) = &VkPhysicalDeviceMaintenance3Properties::operator=;
extern "C" { void AcidSharp_symbols888(VkPhysicalDeviceMaintenance3Properties* instance) { instance->~VkPhysicalDeviceMaintenance3Properties(); } }
extern "C" { void AcidSharp_symbols889(void* instance) { new (instance) VkDescriptorSetLayoutSupport(); } }
extern "C" { void AcidSharp_symbols890(void* instance, const VkDescriptorSetLayoutSupport& _0) { new (instance) VkDescriptorSetLayoutSupport(_0); } }
VkDescriptorSetLayoutSupport& (VkDescriptorSetLayoutSupport::*AcidSharp_symbols891)(const VkDescriptorSetLayoutSupport&) = &VkDescriptorSetLayoutSupport::operator=;
VkDescriptorSetLayoutSupport& (VkDescriptorSetLayoutSupport::*AcidSharp_symbols892)(VkDescriptorSetLayoutSupport&&) = &VkDescriptorSetLayoutSupport::operator=;
extern "C" { void AcidSharp_symbols893(VkDescriptorSetLayoutSupport* instance) { instance->~VkDescriptorSetLayoutSupport(); } }
extern "C" { void AcidSharp_symbols894(void* instance) { new (instance) VkPhysicalDeviceShaderDrawParameterFeatures(); } }
extern "C" { void AcidSharp_symbols895(void* instance, const VkPhysicalDeviceShaderDrawParameterFeatures& _0) { new (instance) VkPhysicalDeviceShaderDrawParameterFeatures(_0); } }
VkPhysicalDeviceShaderDrawParameterFeatures& (VkPhysicalDeviceShaderDrawParameterFeatures::*AcidSharp_symbols896)(const VkPhysicalDeviceShaderDrawParameterFeatures&) = &VkPhysicalDeviceShaderDrawParameterFeatures::operator=;
VkPhysicalDeviceShaderDrawParameterFeatures& (VkPhysicalDeviceShaderDrawParameterFeatures::*AcidSharp_symbols897)(VkPhysicalDeviceShaderDrawParameterFeatures&&) = &VkPhysicalDeviceShaderDrawParameterFeatures::operator=;
extern "C" { void AcidSharp_symbols898(VkPhysicalDeviceShaderDrawParameterFeatures* instance) { instance->~VkPhysicalDeviceShaderDrawParameterFeatures(); } }
extern "C" { void AcidSharp_symbols899(void* instance, const VkSurfaceCapabilitiesKHR& _0) { new (instance) VkSurfaceCapabilitiesKHR(_0); } }
extern "C" { void AcidSharp_symbols900(VkSurfaceCapabilitiesKHR* instance) { instance->~VkSurfaceCapabilitiesKHR(); } }
VkSurfaceCapabilitiesKHR& (VkSurfaceCapabilitiesKHR::*AcidSharp_symbols901)(const VkSurfaceCapabilitiesKHR&) = &VkSurfaceCapabilitiesKHR::operator=;
VkSurfaceCapabilitiesKHR& (VkSurfaceCapabilitiesKHR::*AcidSharp_symbols902)(VkSurfaceCapabilitiesKHR&&) = &VkSurfaceCapabilitiesKHR::operator=;
extern "C" { void AcidSharp_symbols903(void* instance) { new (instance) VkSurfaceCapabilitiesKHR(); } }
extern "C" { void AcidSharp_symbols904(void* instance, const VkSurfaceFormatKHR& _0) { new (instance) VkSurfaceFormatKHR(_0); } }
extern "C" { void AcidSharp_symbols905(VkSurfaceFormatKHR* instance) { instance->~VkSurfaceFormatKHR(); } }
VkSurfaceFormatKHR& (VkSurfaceFormatKHR::*AcidSharp_symbols906)(const VkSurfaceFormatKHR&) = &VkSurfaceFormatKHR::operator=;
VkSurfaceFormatKHR& (VkSurfaceFormatKHR::*AcidSharp_symbols907)(VkSurfaceFormatKHR&&) = &VkSurfaceFormatKHR::operator=;
extern "C" { void AcidSharp_symbols908(void* instance) { new (instance) VkSurfaceFormatKHR(); } }
extern "C" { void AcidSharp_symbols909(void* instance) { new (instance) VkSwapchainCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols910(void* instance, const VkSwapchainCreateInfoKHR& _0) { new (instance) VkSwapchainCreateInfoKHR(_0); } }
VkSwapchainCreateInfoKHR& (VkSwapchainCreateInfoKHR::*AcidSharp_symbols911)(const VkSwapchainCreateInfoKHR&) = &VkSwapchainCreateInfoKHR::operator=;
VkSwapchainCreateInfoKHR& (VkSwapchainCreateInfoKHR::*AcidSharp_symbols912)(VkSwapchainCreateInfoKHR&&) = &VkSwapchainCreateInfoKHR::operator=;
extern "C" { void AcidSharp_symbols913(VkSwapchainCreateInfoKHR* instance) { instance->~VkSwapchainCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols914(void* instance) { new (instance) VkPresentInfoKHR(); } }
extern "C" { void AcidSharp_symbols915(void* instance, const VkPresentInfoKHR& _0) { new (instance) VkPresentInfoKHR(_0); } }
VkPresentInfoKHR& (VkPresentInfoKHR::*AcidSharp_symbols916)(const VkPresentInfoKHR&) = &VkPresentInfoKHR::operator=;
VkPresentInfoKHR& (VkPresentInfoKHR::*AcidSharp_symbols917)(VkPresentInfoKHR&&) = &VkPresentInfoKHR::operator=;
extern "C" { void AcidSharp_symbols918(VkPresentInfoKHR* instance) { instance->~VkPresentInfoKHR(); } }
extern "C" { void AcidSharp_symbols919(void* instance) { new (instance) VkImageSwapchainCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols920(void* instance, const VkImageSwapchainCreateInfoKHR& _0) { new (instance) VkImageSwapchainCreateInfoKHR(_0); } }
VkImageSwapchainCreateInfoKHR& (VkImageSwapchainCreateInfoKHR::*AcidSharp_symbols921)(const VkImageSwapchainCreateInfoKHR&) = &VkImageSwapchainCreateInfoKHR::operator=;
VkImageSwapchainCreateInfoKHR& (VkImageSwapchainCreateInfoKHR::*AcidSharp_symbols922)(VkImageSwapchainCreateInfoKHR&&) = &VkImageSwapchainCreateInfoKHR::operator=;
extern "C" { void AcidSharp_symbols923(VkImageSwapchainCreateInfoKHR* instance) { instance->~VkImageSwapchainCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols924(void* instance) { new (instance) VkBindImageMemorySwapchainInfoKHR(); } }
extern "C" { void AcidSharp_symbols925(void* instance, const VkBindImageMemorySwapchainInfoKHR& _0) { new (instance) VkBindImageMemorySwapchainInfoKHR(_0); } }
VkBindImageMemorySwapchainInfoKHR& (VkBindImageMemorySwapchainInfoKHR::*AcidSharp_symbols926)(const VkBindImageMemorySwapchainInfoKHR&) = &VkBindImageMemorySwapchainInfoKHR::operator=;
VkBindImageMemorySwapchainInfoKHR& (VkBindImageMemorySwapchainInfoKHR::*AcidSharp_symbols927)(VkBindImageMemorySwapchainInfoKHR&&) = &VkBindImageMemorySwapchainInfoKHR::operator=;
extern "C" { void AcidSharp_symbols928(VkBindImageMemorySwapchainInfoKHR* instance) { instance->~VkBindImageMemorySwapchainInfoKHR(); } }
extern "C" { void AcidSharp_symbols929(void* instance) { new (instance) VkAcquireNextImageInfoKHR(); } }
extern "C" { void AcidSharp_symbols930(void* instance, const VkAcquireNextImageInfoKHR& _0) { new (instance) VkAcquireNextImageInfoKHR(_0); } }
VkAcquireNextImageInfoKHR& (VkAcquireNextImageInfoKHR::*AcidSharp_symbols931)(const VkAcquireNextImageInfoKHR&) = &VkAcquireNextImageInfoKHR::operator=;
VkAcquireNextImageInfoKHR& (VkAcquireNextImageInfoKHR::*AcidSharp_symbols932)(VkAcquireNextImageInfoKHR&&) = &VkAcquireNextImageInfoKHR::operator=;
extern "C" { void AcidSharp_symbols933(VkAcquireNextImageInfoKHR* instance) { instance->~VkAcquireNextImageInfoKHR(); } }
extern "C" { void AcidSharp_symbols934(void* instance) { new (instance) VkDeviceGroupPresentCapabilitiesKHR(); } }
extern "C" { void AcidSharp_symbols935(void* instance, const VkDeviceGroupPresentCapabilitiesKHR& _0) { new (instance) VkDeviceGroupPresentCapabilitiesKHR(_0); } }
VkDeviceGroupPresentCapabilitiesKHR& (VkDeviceGroupPresentCapabilitiesKHR::*AcidSharp_symbols936)(const VkDeviceGroupPresentCapabilitiesKHR&) = &VkDeviceGroupPresentCapabilitiesKHR::operator=;
VkDeviceGroupPresentCapabilitiesKHR& (VkDeviceGroupPresentCapabilitiesKHR::*AcidSharp_symbols937)(VkDeviceGroupPresentCapabilitiesKHR&&) = &VkDeviceGroupPresentCapabilitiesKHR::operator=;
extern "C" { void AcidSharp_symbols938(VkDeviceGroupPresentCapabilitiesKHR* instance) { instance->~VkDeviceGroupPresentCapabilitiesKHR(); } }
extern "C" { void AcidSharp_symbols939(void* instance) { new (instance) VkDeviceGroupPresentInfoKHR(); } }
extern "C" { void AcidSharp_symbols940(void* instance, const VkDeviceGroupPresentInfoKHR& _0) { new (instance) VkDeviceGroupPresentInfoKHR(_0); } }
VkDeviceGroupPresentInfoKHR& (VkDeviceGroupPresentInfoKHR::*AcidSharp_symbols941)(const VkDeviceGroupPresentInfoKHR&) = &VkDeviceGroupPresentInfoKHR::operator=;
VkDeviceGroupPresentInfoKHR& (VkDeviceGroupPresentInfoKHR::*AcidSharp_symbols942)(VkDeviceGroupPresentInfoKHR&&) = &VkDeviceGroupPresentInfoKHR::operator=;
extern "C" { void AcidSharp_symbols943(VkDeviceGroupPresentInfoKHR* instance) { instance->~VkDeviceGroupPresentInfoKHR(); } }
extern "C" { void AcidSharp_symbols944(void* instance) { new (instance) VkDeviceGroupSwapchainCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols945(void* instance, const VkDeviceGroupSwapchainCreateInfoKHR& _0) { new (instance) VkDeviceGroupSwapchainCreateInfoKHR(_0); } }
VkDeviceGroupSwapchainCreateInfoKHR& (VkDeviceGroupSwapchainCreateInfoKHR::*AcidSharp_symbols946)(const VkDeviceGroupSwapchainCreateInfoKHR&) = &VkDeviceGroupSwapchainCreateInfoKHR::operator=;
VkDeviceGroupSwapchainCreateInfoKHR& (VkDeviceGroupSwapchainCreateInfoKHR::*AcidSharp_symbols947)(VkDeviceGroupSwapchainCreateInfoKHR&&) = &VkDeviceGroupSwapchainCreateInfoKHR::operator=;
extern "C" { void AcidSharp_symbols948(VkDeviceGroupSwapchainCreateInfoKHR* instance) { instance->~VkDeviceGroupSwapchainCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols949(void* instance) { new (instance) VkDisplayPropertiesKHR(); } }
extern "C" { void AcidSharp_symbols950(void* instance, const VkDisplayPropertiesKHR& _0) { new (instance) VkDisplayPropertiesKHR(_0); } }
VkDisplayPropertiesKHR& (VkDisplayPropertiesKHR::*AcidSharp_symbols951)(const VkDisplayPropertiesKHR&) = &VkDisplayPropertiesKHR::operator=;
VkDisplayPropertiesKHR& (VkDisplayPropertiesKHR::*AcidSharp_symbols952)(VkDisplayPropertiesKHR&&) = &VkDisplayPropertiesKHR::operator=;
extern "C" { void AcidSharp_symbols953(VkDisplayPropertiesKHR* instance) { instance->~VkDisplayPropertiesKHR(); } }
extern "C" { void AcidSharp_symbols954(void* instance) { new (instance) VkDisplayModeParametersKHR(); } }
extern "C" { void AcidSharp_symbols955(void* instance, const VkDisplayModeParametersKHR& _0) { new (instance) VkDisplayModeParametersKHR(_0); } }
VkDisplayModeParametersKHR& (VkDisplayModeParametersKHR::*AcidSharp_symbols956)(const VkDisplayModeParametersKHR&) = &VkDisplayModeParametersKHR::operator=;
VkDisplayModeParametersKHR& (VkDisplayModeParametersKHR::*AcidSharp_symbols957)(VkDisplayModeParametersKHR&&) = &VkDisplayModeParametersKHR::operator=;
extern "C" { void AcidSharp_symbols958(VkDisplayModeParametersKHR* instance) { instance->~VkDisplayModeParametersKHR(); } }
extern "C" { void AcidSharp_symbols959(void* instance) { new (instance) VkDisplayModePropertiesKHR(); } }
extern "C" { void AcidSharp_symbols960(void* instance, const VkDisplayModePropertiesKHR& _0) { new (instance) VkDisplayModePropertiesKHR(_0); } }
VkDisplayModePropertiesKHR& (VkDisplayModePropertiesKHR::*AcidSharp_symbols961)(const VkDisplayModePropertiesKHR&) = &VkDisplayModePropertiesKHR::operator=;
VkDisplayModePropertiesKHR& (VkDisplayModePropertiesKHR::*AcidSharp_symbols962)(VkDisplayModePropertiesKHR&&) = &VkDisplayModePropertiesKHR::operator=;
extern "C" { void AcidSharp_symbols963(VkDisplayModePropertiesKHR* instance) { instance->~VkDisplayModePropertiesKHR(); } }
extern "C" { void AcidSharp_symbols964(void* instance) { new (instance) VkDisplayModeCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols965(void* instance, const VkDisplayModeCreateInfoKHR& _0) { new (instance) VkDisplayModeCreateInfoKHR(_0); } }
VkDisplayModeCreateInfoKHR& (VkDisplayModeCreateInfoKHR::*AcidSharp_symbols966)(const VkDisplayModeCreateInfoKHR&) = &VkDisplayModeCreateInfoKHR::operator=;
VkDisplayModeCreateInfoKHR& (VkDisplayModeCreateInfoKHR::*AcidSharp_symbols967)(VkDisplayModeCreateInfoKHR&&) = &VkDisplayModeCreateInfoKHR::operator=;
extern "C" { void AcidSharp_symbols968(VkDisplayModeCreateInfoKHR* instance) { instance->~VkDisplayModeCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols969(void* instance) { new (instance) VkDisplayPlaneCapabilitiesKHR(); } }
extern "C" { void AcidSharp_symbols970(void* instance, const VkDisplayPlaneCapabilitiesKHR& _0) { new (instance) VkDisplayPlaneCapabilitiesKHR(_0); } }
VkDisplayPlaneCapabilitiesKHR& (VkDisplayPlaneCapabilitiesKHR::*AcidSharp_symbols971)(const VkDisplayPlaneCapabilitiesKHR&) = &VkDisplayPlaneCapabilitiesKHR::operator=;
VkDisplayPlaneCapabilitiesKHR& (VkDisplayPlaneCapabilitiesKHR::*AcidSharp_symbols972)(VkDisplayPlaneCapabilitiesKHR&&) = &VkDisplayPlaneCapabilitiesKHR::operator=;
extern "C" { void AcidSharp_symbols973(VkDisplayPlaneCapabilitiesKHR* instance) { instance->~VkDisplayPlaneCapabilitiesKHR(); } }
extern "C" { void AcidSharp_symbols974(void* instance) { new (instance) VkDisplayPlanePropertiesKHR(); } }
extern "C" { void AcidSharp_symbols975(void* instance, const VkDisplayPlanePropertiesKHR& _0) { new (instance) VkDisplayPlanePropertiesKHR(_0); } }
VkDisplayPlanePropertiesKHR& (VkDisplayPlanePropertiesKHR::*AcidSharp_symbols976)(const VkDisplayPlanePropertiesKHR&) = &VkDisplayPlanePropertiesKHR::operator=;
VkDisplayPlanePropertiesKHR& (VkDisplayPlanePropertiesKHR::*AcidSharp_symbols977)(VkDisplayPlanePropertiesKHR&&) = &VkDisplayPlanePropertiesKHR::operator=;
extern "C" { void AcidSharp_symbols978(VkDisplayPlanePropertiesKHR* instance) { instance->~VkDisplayPlanePropertiesKHR(); } }
extern "C" { void AcidSharp_symbols979(void* instance) { new (instance) VkDisplaySurfaceCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols980(void* instance, const VkDisplaySurfaceCreateInfoKHR& _0) { new (instance) VkDisplaySurfaceCreateInfoKHR(_0); } }
VkDisplaySurfaceCreateInfoKHR& (VkDisplaySurfaceCreateInfoKHR::*AcidSharp_symbols981)(const VkDisplaySurfaceCreateInfoKHR&) = &VkDisplaySurfaceCreateInfoKHR::operator=;
VkDisplaySurfaceCreateInfoKHR& (VkDisplaySurfaceCreateInfoKHR::*AcidSharp_symbols982)(VkDisplaySurfaceCreateInfoKHR&&) = &VkDisplaySurfaceCreateInfoKHR::operator=;
extern "C" { void AcidSharp_symbols983(VkDisplaySurfaceCreateInfoKHR* instance) { instance->~VkDisplaySurfaceCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols984(void* instance) { new (instance) VkDisplayPresentInfoKHR(); } }
extern "C" { void AcidSharp_symbols985(void* instance, const VkDisplayPresentInfoKHR& _0) { new (instance) VkDisplayPresentInfoKHR(_0); } }
VkDisplayPresentInfoKHR& (VkDisplayPresentInfoKHR::*AcidSharp_symbols986)(const VkDisplayPresentInfoKHR&) = &VkDisplayPresentInfoKHR::operator=;
VkDisplayPresentInfoKHR& (VkDisplayPresentInfoKHR::*AcidSharp_symbols987)(VkDisplayPresentInfoKHR&&) = &VkDisplayPresentInfoKHR::operator=;
extern "C" { void AcidSharp_symbols988(VkDisplayPresentInfoKHR* instance) { instance->~VkDisplayPresentInfoKHR(); } }
extern "C" { void AcidSharp_symbols989(void* instance) { new (instance) VkImportMemoryFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols990(void* instance, const VkImportMemoryFdInfoKHR& _0) { new (instance) VkImportMemoryFdInfoKHR(_0); } }
VkImportMemoryFdInfoKHR& (VkImportMemoryFdInfoKHR::*AcidSharp_symbols991)(const VkImportMemoryFdInfoKHR&) = &VkImportMemoryFdInfoKHR::operator=;
VkImportMemoryFdInfoKHR& (VkImportMemoryFdInfoKHR::*AcidSharp_symbols992)(VkImportMemoryFdInfoKHR&&) = &VkImportMemoryFdInfoKHR::operator=;
extern "C" { void AcidSharp_symbols993(VkImportMemoryFdInfoKHR* instance) { instance->~VkImportMemoryFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols994(void* instance) { new (instance) VkMemoryFdPropertiesKHR(); } }
extern "C" { void AcidSharp_symbols995(void* instance, const VkMemoryFdPropertiesKHR& _0) { new (instance) VkMemoryFdPropertiesKHR(_0); } }
VkMemoryFdPropertiesKHR& (VkMemoryFdPropertiesKHR::*AcidSharp_symbols996)(const VkMemoryFdPropertiesKHR&) = &VkMemoryFdPropertiesKHR::operator=;
VkMemoryFdPropertiesKHR& (VkMemoryFdPropertiesKHR::*AcidSharp_symbols997)(VkMemoryFdPropertiesKHR&&) = &VkMemoryFdPropertiesKHR::operator=;
extern "C" { void AcidSharp_symbols998(VkMemoryFdPropertiesKHR* instance) { instance->~VkMemoryFdPropertiesKHR(); } }
extern "C" { void AcidSharp_symbols999(void* instance) { new (instance) VkMemoryGetFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols1000(void* instance, const VkMemoryGetFdInfoKHR& _0) { new (instance) VkMemoryGetFdInfoKHR(_0); } }
VkMemoryGetFdInfoKHR& (VkMemoryGetFdInfoKHR::*AcidSharp_symbols1001)(const VkMemoryGetFdInfoKHR&) = &VkMemoryGetFdInfoKHR::operator=;
VkMemoryGetFdInfoKHR& (VkMemoryGetFdInfoKHR::*AcidSharp_symbols1002)(VkMemoryGetFdInfoKHR&&) = &VkMemoryGetFdInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1003(VkMemoryGetFdInfoKHR* instance) { instance->~VkMemoryGetFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols1004(void* instance) { new (instance) VkImportSemaphoreFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols1005(void* instance, const VkImportSemaphoreFdInfoKHR& _0) { new (instance) VkImportSemaphoreFdInfoKHR(_0); } }
VkImportSemaphoreFdInfoKHR& (VkImportSemaphoreFdInfoKHR::*AcidSharp_symbols1006)(const VkImportSemaphoreFdInfoKHR&) = &VkImportSemaphoreFdInfoKHR::operator=;
VkImportSemaphoreFdInfoKHR& (VkImportSemaphoreFdInfoKHR::*AcidSharp_symbols1007)(VkImportSemaphoreFdInfoKHR&&) = &VkImportSemaphoreFdInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1008(VkImportSemaphoreFdInfoKHR* instance) { instance->~VkImportSemaphoreFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols1009(void* instance) { new (instance) VkSemaphoreGetFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols1010(void* instance, const VkSemaphoreGetFdInfoKHR& _0) { new (instance) VkSemaphoreGetFdInfoKHR(_0); } }
VkSemaphoreGetFdInfoKHR& (VkSemaphoreGetFdInfoKHR::*AcidSharp_symbols1011)(const VkSemaphoreGetFdInfoKHR&) = &VkSemaphoreGetFdInfoKHR::operator=;
VkSemaphoreGetFdInfoKHR& (VkSemaphoreGetFdInfoKHR::*AcidSharp_symbols1012)(VkSemaphoreGetFdInfoKHR&&) = &VkSemaphoreGetFdInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1013(VkSemaphoreGetFdInfoKHR* instance) { instance->~VkSemaphoreGetFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols1014(void* instance) { new (instance) VkPhysicalDevicePushDescriptorPropertiesKHR(); } }
extern "C" { void AcidSharp_symbols1015(void* instance, const VkPhysicalDevicePushDescriptorPropertiesKHR& _0) { new (instance) VkPhysicalDevicePushDescriptorPropertiesKHR(_0); } }
VkPhysicalDevicePushDescriptorPropertiesKHR& (VkPhysicalDevicePushDescriptorPropertiesKHR::*AcidSharp_symbols1016)(const VkPhysicalDevicePushDescriptorPropertiesKHR&) = &VkPhysicalDevicePushDescriptorPropertiesKHR::operator=;
VkPhysicalDevicePushDescriptorPropertiesKHR& (VkPhysicalDevicePushDescriptorPropertiesKHR::*AcidSharp_symbols1017)(VkPhysicalDevicePushDescriptorPropertiesKHR&&) = &VkPhysicalDevicePushDescriptorPropertiesKHR::operator=;
extern "C" { void AcidSharp_symbols1018(VkPhysicalDevicePushDescriptorPropertiesKHR* instance) { instance->~VkPhysicalDevicePushDescriptorPropertiesKHR(); } }
extern "C" { void AcidSharp_symbols1019(void* instance) { new (instance) VkRectLayerKHR(); } }
extern "C" { void AcidSharp_symbols1020(void* instance, const VkRectLayerKHR& _0) { new (instance) VkRectLayerKHR(_0); } }
VkRectLayerKHR& (VkRectLayerKHR::*AcidSharp_symbols1021)(const VkRectLayerKHR&) = &VkRectLayerKHR::operator=;
VkRectLayerKHR& (VkRectLayerKHR::*AcidSharp_symbols1022)(VkRectLayerKHR&&) = &VkRectLayerKHR::operator=;
extern "C" { void AcidSharp_symbols1023(VkRectLayerKHR* instance) { instance->~VkRectLayerKHR(); } }
extern "C" { void AcidSharp_symbols1024(void* instance) { new (instance) VkPresentRegionKHR(); } }
extern "C" { void AcidSharp_symbols1025(void* instance, const VkPresentRegionKHR& _0) { new (instance) VkPresentRegionKHR(_0); } }
VkPresentRegionKHR& (VkPresentRegionKHR::*AcidSharp_symbols1026)(const VkPresentRegionKHR&) = &VkPresentRegionKHR::operator=;
VkPresentRegionKHR& (VkPresentRegionKHR::*AcidSharp_symbols1027)(VkPresentRegionKHR&&) = &VkPresentRegionKHR::operator=;
extern "C" { void AcidSharp_symbols1028(VkPresentRegionKHR* instance) { instance->~VkPresentRegionKHR(); } }
extern "C" { void AcidSharp_symbols1029(void* instance) { new (instance) VkPresentRegionsKHR(); } }
extern "C" { void AcidSharp_symbols1030(void* instance, const VkPresentRegionsKHR& _0) { new (instance) VkPresentRegionsKHR(_0); } }
VkPresentRegionsKHR& (VkPresentRegionsKHR::*AcidSharp_symbols1031)(const VkPresentRegionsKHR&) = &VkPresentRegionsKHR::operator=;
VkPresentRegionsKHR& (VkPresentRegionsKHR::*AcidSharp_symbols1032)(VkPresentRegionsKHR&&) = &VkPresentRegionsKHR::operator=;
extern "C" { void AcidSharp_symbols1033(VkPresentRegionsKHR* instance) { instance->~VkPresentRegionsKHR(); } }
extern "C" { void AcidSharp_symbols1034(void* instance) { new (instance) VkAttachmentDescription2KHR(); } }
extern "C" { void AcidSharp_symbols1035(void* instance, const VkAttachmentDescription2KHR& _0) { new (instance) VkAttachmentDescription2KHR(_0); } }
VkAttachmentDescription2KHR& (VkAttachmentDescription2KHR::*AcidSharp_symbols1036)(const VkAttachmentDescription2KHR&) = &VkAttachmentDescription2KHR::operator=;
VkAttachmentDescription2KHR& (VkAttachmentDescription2KHR::*AcidSharp_symbols1037)(VkAttachmentDescription2KHR&&) = &VkAttachmentDescription2KHR::operator=;
extern "C" { void AcidSharp_symbols1038(VkAttachmentDescription2KHR* instance) { instance->~VkAttachmentDescription2KHR(); } }
extern "C" { void AcidSharp_symbols1039(void* instance) { new (instance) VkAttachmentReference2KHR(); } }
extern "C" { void AcidSharp_symbols1040(void* instance, const VkAttachmentReference2KHR& _0) { new (instance) VkAttachmentReference2KHR(_0); } }
VkAttachmentReference2KHR& (VkAttachmentReference2KHR::*AcidSharp_symbols1041)(const VkAttachmentReference2KHR&) = &VkAttachmentReference2KHR::operator=;
VkAttachmentReference2KHR& (VkAttachmentReference2KHR::*AcidSharp_symbols1042)(VkAttachmentReference2KHR&&) = &VkAttachmentReference2KHR::operator=;
extern "C" { void AcidSharp_symbols1043(VkAttachmentReference2KHR* instance) { instance->~VkAttachmentReference2KHR(); } }
extern "C" { void AcidSharp_symbols1044(void* instance) { new (instance) VkSubpassDescription2KHR(); } }
extern "C" { void AcidSharp_symbols1045(void* instance, const VkSubpassDescription2KHR& _0) { new (instance) VkSubpassDescription2KHR(_0); } }
VkSubpassDescription2KHR& (VkSubpassDescription2KHR::*AcidSharp_symbols1046)(const VkSubpassDescription2KHR&) = &VkSubpassDescription2KHR::operator=;
VkSubpassDescription2KHR& (VkSubpassDescription2KHR::*AcidSharp_symbols1047)(VkSubpassDescription2KHR&&) = &VkSubpassDescription2KHR::operator=;
extern "C" { void AcidSharp_symbols1048(VkSubpassDescription2KHR* instance) { instance->~VkSubpassDescription2KHR(); } }
extern "C" { void AcidSharp_symbols1049(void* instance) { new (instance) VkSubpassDependency2KHR(); } }
extern "C" { void AcidSharp_symbols1050(void* instance, const VkSubpassDependency2KHR& _0) { new (instance) VkSubpassDependency2KHR(_0); } }
VkSubpassDependency2KHR& (VkSubpassDependency2KHR::*AcidSharp_symbols1051)(const VkSubpassDependency2KHR&) = &VkSubpassDependency2KHR::operator=;
VkSubpassDependency2KHR& (VkSubpassDependency2KHR::*AcidSharp_symbols1052)(VkSubpassDependency2KHR&&) = &VkSubpassDependency2KHR::operator=;
extern "C" { void AcidSharp_symbols1053(VkSubpassDependency2KHR* instance) { instance->~VkSubpassDependency2KHR(); } }
extern "C" { void AcidSharp_symbols1054(void* instance) { new (instance) VkRenderPassCreateInfo2KHR(); } }
extern "C" { void AcidSharp_symbols1055(void* instance, const VkRenderPassCreateInfo2KHR& _0) { new (instance) VkRenderPassCreateInfo2KHR(_0); } }
VkRenderPassCreateInfo2KHR& (VkRenderPassCreateInfo2KHR::*AcidSharp_symbols1056)(const VkRenderPassCreateInfo2KHR&) = &VkRenderPassCreateInfo2KHR::operator=;
VkRenderPassCreateInfo2KHR& (VkRenderPassCreateInfo2KHR::*AcidSharp_symbols1057)(VkRenderPassCreateInfo2KHR&&) = &VkRenderPassCreateInfo2KHR::operator=;
extern "C" { void AcidSharp_symbols1058(VkRenderPassCreateInfo2KHR* instance) { instance->~VkRenderPassCreateInfo2KHR(); } }
extern "C" { void AcidSharp_symbols1059(void* instance) { new (instance) VkSubpassBeginInfoKHR(); } }
extern "C" { void AcidSharp_symbols1060(void* instance, const VkSubpassBeginInfoKHR& _0) { new (instance) VkSubpassBeginInfoKHR(_0); } }
VkSubpassBeginInfoKHR& (VkSubpassBeginInfoKHR::*AcidSharp_symbols1061)(const VkSubpassBeginInfoKHR&) = &VkSubpassBeginInfoKHR::operator=;
VkSubpassBeginInfoKHR& (VkSubpassBeginInfoKHR::*AcidSharp_symbols1062)(VkSubpassBeginInfoKHR&&) = &VkSubpassBeginInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1063(VkSubpassBeginInfoKHR* instance) { instance->~VkSubpassBeginInfoKHR(); } }
extern "C" { void AcidSharp_symbols1064(void* instance) { new (instance) VkSubpassEndInfoKHR(); } }
extern "C" { void AcidSharp_symbols1065(void* instance, const VkSubpassEndInfoKHR& _0) { new (instance) VkSubpassEndInfoKHR(_0); } }
VkSubpassEndInfoKHR& (VkSubpassEndInfoKHR::*AcidSharp_symbols1066)(const VkSubpassEndInfoKHR&) = &VkSubpassEndInfoKHR::operator=;
VkSubpassEndInfoKHR& (VkSubpassEndInfoKHR::*AcidSharp_symbols1067)(VkSubpassEndInfoKHR&&) = &VkSubpassEndInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1068(VkSubpassEndInfoKHR* instance) { instance->~VkSubpassEndInfoKHR(); } }
extern "C" { void AcidSharp_symbols1069(void* instance) { new (instance) VkSharedPresentSurfaceCapabilitiesKHR(); } }
extern "C" { void AcidSharp_symbols1070(void* instance, const VkSharedPresentSurfaceCapabilitiesKHR& _0) { new (instance) VkSharedPresentSurfaceCapabilitiesKHR(_0); } }
VkSharedPresentSurfaceCapabilitiesKHR& (VkSharedPresentSurfaceCapabilitiesKHR::*AcidSharp_symbols1071)(const VkSharedPresentSurfaceCapabilitiesKHR&) = &VkSharedPresentSurfaceCapabilitiesKHR::operator=;
VkSharedPresentSurfaceCapabilitiesKHR& (VkSharedPresentSurfaceCapabilitiesKHR::*AcidSharp_symbols1072)(VkSharedPresentSurfaceCapabilitiesKHR&&) = &VkSharedPresentSurfaceCapabilitiesKHR::operator=;
extern "C" { void AcidSharp_symbols1073(VkSharedPresentSurfaceCapabilitiesKHR* instance) { instance->~VkSharedPresentSurfaceCapabilitiesKHR(); } }
extern "C" { void AcidSharp_symbols1074(void* instance) { new (instance) VkImportFenceFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols1075(void* instance, const VkImportFenceFdInfoKHR& _0) { new (instance) VkImportFenceFdInfoKHR(_0); } }
VkImportFenceFdInfoKHR& (VkImportFenceFdInfoKHR::*AcidSharp_symbols1076)(const VkImportFenceFdInfoKHR&) = &VkImportFenceFdInfoKHR::operator=;
VkImportFenceFdInfoKHR& (VkImportFenceFdInfoKHR::*AcidSharp_symbols1077)(VkImportFenceFdInfoKHR&&) = &VkImportFenceFdInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1078(VkImportFenceFdInfoKHR* instance) { instance->~VkImportFenceFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols1079(void* instance) { new (instance) VkFenceGetFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols1080(void* instance, const VkFenceGetFdInfoKHR& _0) { new (instance) VkFenceGetFdInfoKHR(_0); } }
VkFenceGetFdInfoKHR& (VkFenceGetFdInfoKHR::*AcidSharp_symbols1081)(const VkFenceGetFdInfoKHR&) = &VkFenceGetFdInfoKHR::operator=;
VkFenceGetFdInfoKHR& (VkFenceGetFdInfoKHR::*AcidSharp_symbols1082)(VkFenceGetFdInfoKHR&&) = &VkFenceGetFdInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1083(VkFenceGetFdInfoKHR* instance) { instance->~VkFenceGetFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols1084(void* instance) { new (instance) VkPhysicalDeviceSurfaceInfo2KHR(); } }
extern "C" { void AcidSharp_symbols1085(void* instance, const VkPhysicalDeviceSurfaceInfo2KHR& _0) { new (instance) VkPhysicalDeviceSurfaceInfo2KHR(_0); } }
VkPhysicalDeviceSurfaceInfo2KHR& (VkPhysicalDeviceSurfaceInfo2KHR::*AcidSharp_symbols1086)(const VkPhysicalDeviceSurfaceInfo2KHR&) = &VkPhysicalDeviceSurfaceInfo2KHR::operator=;
VkPhysicalDeviceSurfaceInfo2KHR& (VkPhysicalDeviceSurfaceInfo2KHR::*AcidSharp_symbols1087)(VkPhysicalDeviceSurfaceInfo2KHR&&) = &VkPhysicalDeviceSurfaceInfo2KHR::operator=;
extern "C" { void AcidSharp_symbols1088(VkPhysicalDeviceSurfaceInfo2KHR* instance) { instance->~VkPhysicalDeviceSurfaceInfo2KHR(); } }
extern "C" { void AcidSharp_symbols1089(void* instance) { new (instance) VkSurfaceCapabilities2KHR(); } }
extern "C" { void AcidSharp_symbols1090(void* instance, const VkSurfaceCapabilities2KHR& _0) { new (instance) VkSurfaceCapabilities2KHR(_0); } }
VkSurfaceCapabilities2KHR& (VkSurfaceCapabilities2KHR::*AcidSharp_symbols1091)(const VkSurfaceCapabilities2KHR&) = &VkSurfaceCapabilities2KHR::operator=;
VkSurfaceCapabilities2KHR& (VkSurfaceCapabilities2KHR::*AcidSharp_symbols1092)(VkSurfaceCapabilities2KHR&&) = &VkSurfaceCapabilities2KHR::operator=;
extern "C" { void AcidSharp_symbols1093(VkSurfaceCapabilities2KHR* instance) { instance->~VkSurfaceCapabilities2KHR(); } }
extern "C" { void AcidSharp_symbols1094(void* instance) { new (instance) VkSurfaceFormat2KHR(); } }
extern "C" { void AcidSharp_symbols1095(void* instance, const VkSurfaceFormat2KHR& _0) { new (instance) VkSurfaceFormat2KHR(_0); } }
VkSurfaceFormat2KHR& (VkSurfaceFormat2KHR::*AcidSharp_symbols1096)(const VkSurfaceFormat2KHR&) = &VkSurfaceFormat2KHR::operator=;
VkSurfaceFormat2KHR& (VkSurfaceFormat2KHR::*AcidSharp_symbols1097)(VkSurfaceFormat2KHR&&) = &VkSurfaceFormat2KHR::operator=;
extern "C" { void AcidSharp_symbols1098(VkSurfaceFormat2KHR* instance) { instance->~VkSurfaceFormat2KHR(); } }
extern "C" { void AcidSharp_symbols1099(void* instance) { new (instance) VkDisplayProperties2KHR(); } }
extern "C" { void AcidSharp_symbols1100(void* instance, const VkDisplayProperties2KHR& _0) { new (instance) VkDisplayProperties2KHR(_0); } }
VkDisplayProperties2KHR& (VkDisplayProperties2KHR::*AcidSharp_symbols1101)(const VkDisplayProperties2KHR&) = &VkDisplayProperties2KHR::operator=;
VkDisplayProperties2KHR& (VkDisplayProperties2KHR::*AcidSharp_symbols1102)(VkDisplayProperties2KHR&&) = &VkDisplayProperties2KHR::operator=;
extern "C" { void AcidSharp_symbols1103(VkDisplayProperties2KHR* instance) { instance->~VkDisplayProperties2KHR(); } }
extern "C" { void AcidSharp_symbols1104(void* instance) { new (instance) VkDisplayPlaneProperties2KHR(); } }
extern "C" { void AcidSharp_symbols1105(void* instance, const VkDisplayPlaneProperties2KHR& _0) { new (instance) VkDisplayPlaneProperties2KHR(_0); } }
VkDisplayPlaneProperties2KHR& (VkDisplayPlaneProperties2KHR::*AcidSharp_symbols1106)(const VkDisplayPlaneProperties2KHR&) = &VkDisplayPlaneProperties2KHR::operator=;
VkDisplayPlaneProperties2KHR& (VkDisplayPlaneProperties2KHR::*AcidSharp_symbols1107)(VkDisplayPlaneProperties2KHR&&) = &VkDisplayPlaneProperties2KHR::operator=;
extern "C" { void AcidSharp_symbols1108(VkDisplayPlaneProperties2KHR* instance) { instance->~VkDisplayPlaneProperties2KHR(); } }
extern "C" { void AcidSharp_symbols1109(void* instance) { new (instance) VkDisplayModeProperties2KHR(); } }
extern "C" { void AcidSharp_symbols1110(void* instance, const VkDisplayModeProperties2KHR& _0) { new (instance) VkDisplayModeProperties2KHR(_0); } }
VkDisplayModeProperties2KHR& (VkDisplayModeProperties2KHR::*AcidSharp_symbols1111)(const VkDisplayModeProperties2KHR&) = &VkDisplayModeProperties2KHR::operator=;
VkDisplayModeProperties2KHR& (VkDisplayModeProperties2KHR::*AcidSharp_symbols1112)(VkDisplayModeProperties2KHR&&) = &VkDisplayModeProperties2KHR::operator=;
extern "C" { void AcidSharp_symbols1113(VkDisplayModeProperties2KHR* instance) { instance->~VkDisplayModeProperties2KHR(); } }
extern "C" { void AcidSharp_symbols1114(void* instance) { new (instance) VkDisplayPlaneInfo2KHR(); } }
extern "C" { void AcidSharp_symbols1115(void* instance, const VkDisplayPlaneInfo2KHR& _0) { new (instance) VkDisplayPlaneInfo2KHR(_0); } }
VkDisplayPlaneInfo2KHR& (VkDisplayPlaneInfo2KHR::*AcidSharp_symbols1116)(const VkDisplayPlaneInfo2KHR&) = &VkDisplayPlaneInfo2KHR::operator=;
VkDisplayPlaneInfo2KHR& (VkDisplayPlaneInfo2KHR::*AcidSharp_symbols1117)(VkDisplayPlaneInfo2KHR&&) = &VkDisplayPlaneInfo2KHR::operator=;
extern "C" { void AcidSharp_symbols1118(VkDisplayPlaneInfo2KHR* instance) { instance->~VkDisplayPlaneInfo2KHR(); } }
extern "C" { void AcidSharp_symbols1119(void* instance) { new (instance) VkDisplayPlaneCapabilities2KHR(); } }
extern "C" { void AcidSharp_symbols1120(void* instance, const VkDisplayPlaneCapabilities2KHR& _0) { new (instance) VkDisplayPlaneCapabilities2KHR(_0); } }
VkDisplayPlaneCapabilities2KHR& (VkDisplayPlaneCapabilities2KHR::*AcidSharp_symbols1121)(const VkDisplayPlaneCapabilities2KHR&) = &VkDisplayPlaneCapabilities2KHR::operator=;
VkDisplayPlaneCapabilities2KHR& (VkDisplayPlaneCapabilities2KHR::*AcidSharp_symbols1122)(VkDisplayPlaneCapabilities2KHR&&) = &VkDisplayPlaneCapabilities2KHR::operator=;
extern "C" { void AcidSharp_symbols1123(VkDisplayPlaneCapabilities2KHR* instance) { instance->~VkDisplayPlaneCapabilities2KHR(); } }
extern "C" { void AcidSharp_symbols1124(void* instance) { new (instance) VkImageFormatListCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols1125(void* instance, const VkImageFormatListCreateInfoKHR& _0) { new (instance) VkImageFormatListCreateInfoKHR(_0); } }
VkImageFormatListCreateInfoKHR& (VkImageFormatListCreateInfoKHR::*AcidSharp_symbols1126)(const VkImageFormatListCreateInfoKHR&) = &VkImageFormatListCreateInfoKHR::operator=;
VkImageFormatListCreateInfoKHR& (VkImageFormatListCreateInfoKHR::*AcidSharp_symbols1127)(VkImageFormatListCreateInfoKHR&&) = &VkImageFormatListCreateInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1128(VkImageFormatListCreateInfoKHR* instance) { instance->~VkImageFormatListCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols1129(void* instance) { new (instance) VkPhysicalDevice8BitStorageFeaturesKHR(); } }
extern "C" { void AcidSharp_symbols1130(void* instance, const VkPhysicalDevice8BitStorageFeaturesKHR& _0) { new (instance) VkPhysicalDevice8BitStorageFeaturesKHR(_0); } }
VkPhysicalDevice8BitStorageFeaturesKHR& (VkPhysicalDevice8BitStorageFeaturesKHR::*AcidSharp_symbols1131)(const VkPhysicalDevice8BitStorageFeaturesKHR&) = &VkPhysicalDevice8BitStorageFeaturesKHR::operator=;
VkPhysicalDevice8BitStorageFeaturesKHR& (VkPhysicalDevice8BitStorageFeaturesKHR::*AcidSharp_symbols1132)(VkPhysicalDevice8BitStorageFeaturesKHR&&) = &VkPhysicalDevice8BitStorageFeaturesKHR::operator=;
extern "C" { void AcidSharp_symbols1133(VkPhysicalDevice8BitStorageFeaturesKHR* instance) { instance->~VkPhysicalDevice8BitStorageFeaturesKHR(); } }
extern "C" { void AcidSharp_symbols1134(void* instance) { new (instance) VkDebugReportCallbackCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1135(void* instance, const VkDebugReportCallbackCreateInfoEXT& _0) { new (instance) VkDebugReportCallbackCreateInfoEXT(_0); } }
VkDebugReportCallbackCreateInfoEXT& (VkDebugReportCallbackCreateInfoEXT::*AcidSharp_symbols1136)(const VkDebugReportCallbackCreateInfoEXT&) = &VkDebugReportCallbackCreateInfoEXT::operator=;
VkDebugReportCallbackCreateInfoEXT& (VkDebugReportCallbackCreateInfoEXT::*AcidSharp_symbols1137)(VkDebugReportCallbackCreateInfoEXT&&) = &VkDebugReportCallbackCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1138(VkDebugReportCallbackCreateInfoEXT* instance) { instance->~VkDebugReportCallbackCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1139(void* instance) { new (instance) VkPipelineRasterizationStateRasterizationOrderAMD(); } }
extern "C" { void AcidSharp_symbols1140(void* instance, const VkPipelineRasterizationStateRasterizationOrderAMD& _0) { new (instance) VkPipelineRasterizationStateRasterizationOrderAMD(_0); } }
VkPipelineRasterizationStateRasterizationOrderAMD& (VkPipelineRasterizationStateRasterizationOrderAMD::*AcidSharp_symbols1141)(const VkPipelineRasterizationStateRasterizationOrderAMD&) = &VkPipelineRasterizationStateRasterizationOrderAMD::operator=;
VkPipelineRasterizationStateRasterizationOrderAMD& (VkPipelineRasterizationStateRasterizationOrderAMD::*AcidSharp_symbols1142)(VkPipelineRasterizationStateRasterizationOrderAMD&&) = &VkPipelineRasterizationStateRasterizationOrderAMD::operator=;
extern "C" { void AcidSharp_symbols1143(VkPipelineRasterizationStateRasterizationOrderAMD* instance) { instance->~VkPipelineRasterizationStateRasterizationOrderAMD(); } }
extern "C" { void AcidSharp_symbols1144(void* instance) { new (instance) VkDebugMarkerObjectNameInfoEXT(); } }
extern "C" { void AcidSharp_symbols1145(void* instance, const VkDebugMarkerObjectNameInfoEXT& _0) { new (instance) VkDebugMarkerObjectNameInfoEXT(_0); } }
VkDebugMarkerObjectNameInfoEXT& (VkDebugMarkerObjectNameInfoEXT::*AcidSharp_symbols1146)(const VkDebugMarkerObjectNameInfoEXT&) = &VkDebugMarkerObjectNameInfoEXT::operator=;
VkDebugMarkerObjectNameInfoEXT& (VkDebugMarkerObjectNameInfoEXT::*AcidSharp_symbols1147)(VkDebugMarkerObjectNameInfoEXT&&) = &VkDebugMarkerObjectNameInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1148(VkDebugMarkerObjectNameInfoEXT* instance) { instance->~VkDebugMarkerObjectNameInfoEXT(); } }
extern "C" { void AcidSharp_symbols1149(void* instance) { new (instance) VkDebugMarkerObjectTagInfoEXT(); } }
extern "C" { void AcidSharp_symbols1150(void* instance, const VkDebugMarkerObjectTagInfoEXT& _0) { new (instance) VkDebugMarkerObjectTagInfoEXT(_0); } }
VkDebugMarkerObjectTagInfoEXT& (VkDebugMarkerObjectTagInfoEXT::*AcidSharp_symbols1151)(const VkDebugMarkerObjectTagInfoEXT&) = &VkDebugMarkerObjectTagInfoEXT::operator=;
VkDebugMarkerObjectTagInfoEXT& (VkDebugMarkerObjectTagInfoEXT::*AcidSharp_symbols1152)(VkDebugMarkerObjectTagInfoEXT&&) = &VkDebugMarkerObjectTagInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1153(VkDebugMarkerObjectTagInfoEXT* instance) { instance->~VkDebugMarkerObjectTagInfoEXT(); } }
extern "C" { void AcidSharp_symbols1154(void* instance) { new (instance) VkDebugMarkerMarkerInfoEXT(); } }
extern "C" { void AcidSharp_symbols1155(void* instance, const VkDebugMarkerMarkerInfoEXT& _0) { new (instance) VkDebugMarkerMarkerInfoEXT(_0); } }
VkDebugMarkerMarkerInfoEXT& (VkDebugMarkerMarkerInfoEXT::*AcidSharp_symbols1156)(const VkDebugMarkerMarkerInfoEXT&) = &VkDebugMarkerMarkerInfoEXT::operator=;
VkDebugMarkerMarkerInfoEXT& (VkDebugMarkerMarkerInfoEXT::*AcidSharp_symbols1157)(VkDebugMarkerMarkerInfoEXT&&) = &VkDebugMarkerMarkerInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1158(VkDebugMarkerMarkerInfoEXT* instance) { instance->~VkDebugMarkerMarkerInfoEXT(); } }
extern "C" { void AcidSharp_symbols1159(void* instance) { new (instance) VkDedicatedAllocationImageCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1160(void* instance, const VkDedicatedAllocationImageCreateInfoNV& _0) { new (instance) VkDedicatedAllocationImageCreateInfoNV(_0); } }
VkDedicatedAllocationImageCreateInfoNV& (VkDedicatedAllocationImageCreateInfoNV::*AcidSharp_symbols1161)(const VkDedicatedAllocationImageCreateInfoNV&) = &VkDedicatedAllocationImageCreateInfoNV::operator=;
VkDedicatedAllocationImageCreateInfoNV& (VkDedicatedAllocationImageCreateInfoNV::*AcidSharp_symbols1162)(VkDedicatedAllocationImageCreateInfoNV&&) = &VkDedicatedAllocationImageCreateInfoNV::operator=;
extern "C" { void AcidSharp_symbols1163(VkDedicatedAllocationImageCreateInfoNV* instance) { instance->~VkDedicatedAllocationImageCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1164(void* instance) { new (instance) VkDedicatedAllocationBufferCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1165(void* instance, const VkDedicatedAllocationBufferCreateInfoNV& _0) { new (instance) VkDedicatedAllocationBufferCreateInfoNV(_0); } }
VkDedicatedAllocationBufferCreateInfoNV& (VkDedicatedAllocationBufferCreateInfoNV::*AcidSharp_symbols1166)(const VkDedicatedAllocationBufferCreateInfoNV&) = &VkDedicatedAllocationBufferCreateInfoNV::operator=;
VkDedicatedAllocationBufferCreateInfoNV& (VkDedicatedAllocationBufferCreateInfoNV::*AcidSharp_symbols1167)(VkDedicatedAllocationBufferCreateInfoNV&&) = &VkDedicatedAllocationBufferCreateInfoNV::operator=;
extern "C" { void AcidSharp_symbols1168(VkDedicatedAllocationBufferCreateInfoNV* instance) { instance->~VkDedicatedAllocationBufferCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1169(void* instance) { new (instance) VkDedicatedAllocationMemoryAllocateInfoNV(); } }
extern "C" { void AcidSharp_symbols1170(void* instance, const VkDedicatedAllocationMemoryAllocateInfoNV& _0) { new (instance) VkDedicatedAllocationMemoryAllocateInfoNV(_0); } }
VkDedicatedAllocationMemoryAllocateInfoNV& (VkDedicatedAllocationMemoryAllocateInfoNV::*AcidSharp_symbols1171)(const VkDedicatedAllocationMemoryAllocateInfoNV&) = &VkDedicatedAllocationMemoryAllocateInfoNV::operator=;
VkDedicatedAllocationMemoryAllocateInfoNV& (VkDedicatedAllocationMemoryAllocateInfoNV::*AcidSharp_symbols1172)(VkDedicatedAllocationMemoryAllocateInfoNV&&) = &VkDedicatedAllocationMemoryAllocateInfoNV::operator=;
extern "C" { void AcidSharp_symbols1173(VkDedicatedAllocationMemoryAllocateInfoNV* instance) { instance->~VkDedicatedAllocationMemoryAllocateInfoNV(); } }
extern "C" { void AcidSharp_symbols1174(void* instance) { new (instance) VkTextureLODGatherFormatPropertiesAMD(); } }
extern "C" { void AcidSharp_symbols1175(void* instance, const VkTextureLODGatherFormatPropertiesAMD& _0) { new (instance) VkTextureLODGatherFormatPropertiesAMD(_0); } }
VkTextureLODGatherFormatPropertiesAMD& (VkTextureLODGatherFormatPropertiesAMD::*AcidSharp_symbols1176)(const VkTextureLODGatherFormatPropertiesAMD&) = &VkTextureLODGatherFormatPropertiesAMD::operator=;
VkTextureLODGatherFormatPropertiesAMD& (VkTextureLODGatherFormatPropertiesAMD::*AcidSharp_symbols1177)(VkTextureLODGatherFormatPropertiesAMD&&) = &VkTextureLODGatherFormatPropertiesAMD::operator=;
extern "C" { void AcidSharp_symbols1178(VkTextureLODGatherFormatPropertiesAMD* instance) { instance->~VkTextureLODGatherFormatPropertiesAMD(); } }
extern "C" { void AcidSharp_symbols1179(void* instance) { new (instance) VkShaderResourceUsageAMD(); } }
extern "C" { void AcidSharp_symbols1180(void* instance, const VkShaderResourceUsageAMD& _0) { new (instance) VkShaderResourceUsageAMD(_0); } }
VkShaderResourceUsageAMD& (VkShaderResourceUsageAMD::*AcidSharp_symbols1181)(const VkShaderResourceUsageAMD&) = &VkShaderResourceUsageAMD::operator=;
VkShaderResourceUsageAMD& (VkShaderResourceUsageAMD::*AcidSharp_symbols1182)(VkShaderResourceUsageAMD&&) = &VkShaderResourceUsageAMD::operator=;
extern "C" { void AcidSharp_symbols1183(VkShaderResourceUsageAMD* instance) { instance->~VkShaderResourceUsageAMD(); } }
extern "C" { void AcidSharp_symbols1184(void* instance) { new (instance) VkShaderStatisticsInfoAMD(); } }
extern "C" { void AcidSharp_symbols1185(void* instance, const VkShaderStatisticsInfoAMD& _0) { new (instance) VkShaderStatisticsInfoAMD(_0); } }
VkShaderStatisticsInfoAMD& (VkShaderStatisticsInfoAMD::*AcidSharp_symbols1186)(const VkShaderStatisticsInfoAMD&) = &VkShaderStatisticsInfoAMD::operator=;
VkShaderStatisticsInfoAMD& (VkShaderStatisticsInfoAMD::*AcidSharp_symbols1187)(VkShaderStatisticsInfoAMD&&) = &VkShaderStatisticsInfoAMD::operator=;
extern "C" { void AcidSharp_symbols1188(VkShaderStatisticsInfoAMD* instance) { instance->~VkShaderStatisticsInfoAMD(); } }
extern "C" { void AcidSharp_symbols1189(void* instance) { new (instance) VkExternalImageFormatPropertiesNV(); } }
extern "C" { void AcidSharp_symbols1190(void* instance, const VkExternalImageFormatPropertiesNV& _0) { new (instance) VkExternalImageFormatPropertiesNV(_0); } }
VkExternalImageFormatPropertiesNV& (VkExternalImageFormatPropertiesNV::*AcidSharp_symbols1191)(const VkExternalImageFormatPropertiesNV&) = &VkExternalImageFormatPropertiesNV::operator=;
VkExternalImageFormatPropertiesNV& (VkExternalImageFormatPropertiesNV::*AcidSharp_symbols1192)(VkExternalImageFormatPropertiesNV&&) = &VkExternalImageFormatPropertiesNV::operator=;
extern "C" { void AcidSharp_symbols1193(VkExternalImageFormatPropertiesNV* instance) { instance->~VkExternalImageFormatPropertiesNV(); } }
extern "C" { void AcidSharp_symbols1194(void* instance) { new (instance) VkExternalMemoryImageCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1195(void* instance, const VkExternalMemoryImageCreateInfoNV& _0) { new (instance) VkExternalMemoryImageCreateInfoNV(_0); } }
VkExternalMemoryImageCreateInfoNV& (VkExternalMemoryImageCreateInfoNV::*AcidSharp_symbols1196)(const VkExternalMemoryImageCreateInfoNV&) = &VkExternalMemoryImageCreateInfoNV::operator=;
VkExternalMemoryImageCreateInfoNV& (VkExternalMemoryImageCreateInfoNV::*AcidSharp_symbols1197)(VkExternalMemoryImageCreateInfoNV&&) = &VkExternalMemoryImageCreateInfoNV::operator=;
extern "C" { void AcidSharp_symbols1198(VkExternalMemoryImageCreateInfoNV* instance) { instance->~VkExternalMemoryImageCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1199(void* instance) { new (instance) VkExportMemoryAllocateInfoNV(); } }
extern "C" { void AcidSharp_symbols1200(void* instance, const VkExportMemoryAllocateInfoNV& _0) { new (instance) VkExportMemoryAllocateInfoNV(_0); } }
VkExportMemoryAllocateInfoNV& (VkExportMemoryAllocateInfoNV::*AcidSharp_symbols1201)(const VkExportMemoryAllocateInfoNV&) = &VkExportMemoryAllocateInfoNV::operator=;
VkExportMemoryAllocateInfoNV& (VkExportMemoryAllocateInfoNV::*AcidSharp_symbols1202)(VkExportMemoryAllocateInfoNV&&) = &VkExportMemoryAllocateInfoNV::operator=;
extern "C" { void AcidSharp_symbols1203(VkExportMemoryAllocateInfoNV* instance) { instance->~VkExportMemoryAllocateInfoNV(); } }
extern "C" { void AcidSharp_symbols1204(void* instance) { new (instance) VkValidationFlagsEXT(); } }
extern "C" { void AcidSharp_symbols1205(void* instance, const VkValidationFlagsEXT& _0) { new (instance) VkValidationFlagsEXT(_0); } }
VkValidationFlagsEXT& (VkValidationFlagsEXT::*AcidSharp_symbols1206)(const VkValidationFlagsEXT&) = &VkValidationFlagsEXT::operator=;
VkValidationFlagsEXT& (VkValidationFlagsEXT::*AcidSharp_symbols1207)(VkValidationFlagsEXT&&) = &VkValidationFlagsEXT::operator=;
extern "C" { void AcidSharp_symbols1208(VkValidationFlagsEXT* instance) { instance->~VkValidationFlagsEXT(); } }
extern "C" { void AcidSharp_symbols1209(void* instance) { new (instance) VkConditionalRenderingBeginInfoEXT(); } }
extern "C" { void AcidSharp_symbols1210(void* instance, const VkConditionalRenderingBeginInfoEXT& _0) { new (instance) VkConditionalRenderingBeginInfoEXT(_0); } }
VkConditionalRenderingBeginInfoEXT& (VkConditionalRenderingBeginInfoEXT::*AcidSharp_symbols1211)(const VkConditionalRenderingBeginInfoEXT&) = &VkConditionalRenderingBeginInfoEXT::operator=;
VkConditionalRenderingBeginInfoEXT& (VkConditionalRenderingBeginInfoEXT::*AcidSharp_symbols1212)(VkConditionalRenderingBeginInfoEXT&&) = &VkConditionalRenderingBeginInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1213(VkConditionalRenderingBeginInfoEXT* instance) { instance->~VkConditionalRenderingBeginInfoEXT(); } }
extern "C" { void AcidSharp_symbols1214(void* instance) { new (instance) VkPhysicalDeviceConditionalRenderingFeaturesEXT(); } }
extern "C" { void AcidSharp_symbols1215(void* instance, const VkPhysicalDeviceConditionalRenderingFeaturesEXT& _0) { new (instance) VkPhysicalDeviceConditionalRenderingFeaturesEXT(_0); } }
VkPhysicalDeviceConditionalRenderingFeaturesEXT& (VkPhysicalDeviceConditionalRenderingFeaturesEXT::*AcidSharp_symbols1216)(const VkPhysicalDeviceConditionalRenderingFeaturesEXT&) = &VkPhysicalDeviceConditionalRenderingFeaturesEXT::operator=;
VkPhysicalDeviceConditionalRenderingFeaturesEXT& (VkPhysicalDeviceConditionalRenderingFeaturesEXT::*AcidSharp_symbols1217)(VkPhysicalDeviceConditionalRenderingFeaturesEXT&&) = &VkPhysicalDeviceConditionalRenderingFeaturesEXT::operator=;
extern "C" { void AcidSharp_symbols1218(VkPhysicalDeviceConditionalRenderingFeaturesEXT* instance) { instance->~VkPhysicalDeviceConditionalRenderingFeaturesEXT(); } }
extern "C" { void AcidSharp_symbols1219(void* instance) { new (instance) VkCommandBufferInheritanceConditionalRenderingInfoEXT(); } }
extern "C" { void AcidSharp_symbols1220(void* instance, const VkCommandBufferInheritanceConditionalRenderingInfoEXT& _0) { new (instance) VkCommandBufferInheritanceConditionalRenderingInfoEXT(_0); } }
VkCommandBufferInheritanceConditionalRenderingInfoEXT& (VkCommandBufferInheritanceConditionalRenderingInfoEXT::*AcidSharp_symbols1221)(const VkCommandBufferInheritanceConditionalRenderingInfoEXT&) = &VkCommandBufferInheritanceConditionalRenderingInfoEXT::operator=;
VkCommandBufferInheritanceConditionalRenderingInfoEXT& (VkCommandBufferInheritanceConditionalRenderingInfoEXT::*AcidSharp_symbols1222)(VkCommandBufferInheritanceConditionalRenderingInfoEXT&&) = &VkCommandBufferInheritanceConditionalRenderingInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1223(VkCommandBufferInheritanceConditionalRenderingInfoEXT* instance) { instance->~VkCommandBufferInheritanceConditionalRenderingInfoEXT(); } }
extern "C" { void AcidSharp_symbols1224(void* instance) { new (instance) VkDeviceGeneratedCommandsFeaturesNVX(); } }
extern "C" { void AcidSharp_symbols1225(void* instance, const VkDeviceGeneratedCommandsFeaturesNVX& _0) { new (instance) VkDeviceGeneratedCommandsFeaturesNVX(_0); } }
VkDeviceGeneratedCommandsFeaturesNVX& (VkDeviceGeneratedCommandsFeaturesNVX::*AcidSharp_symbols1226)(const VkDeviceGeneratedCommandsFeaturesNVX&) = &VkDeviceGeneratedCommandsFeaturesNVX::operator=;
VkDeviceGeneratedCommandsFeaturesNVX& (VkDeviceGeneratedCommandsFeaturesNVX::*AcidSharp_symbols1227)(VkDeviceGeneratedCommandsFeaturesNVX&&) = &VkDeviceGeneratedCommandsFeaturesNVX::operator=;
extern "C" { void AcidSharp_symbols1228(VkDeviceGeneratedCommandsFeaturesNVX* instance) { instance->~VkDeviceGeneratedCommandsFeaturesNVX(); } }
extern "C" { void AcidSharp_symbols1229(void* instance) { new (instance) VkDeviceGeneratedCommandsLimitsNVX(); } }
extern "C" { void AcidSharp_symbols1230(void* instance, const VkDeviceGeneratedCommandsLimitsNVX& _0) { new (instance) VkDeviceGeneratedCommandsLimitsNVX(_0); } }
VkDeviceGeneratedCommandsLimitsNVX& (VkDeviceGeneratedCommandsLimitsNVX::*AcidSharp_symbols1231)(const VkDeviceGeneratedCommandsLimitsNVX&) = &VkDeviceGeneratedCommandsLimitsNVX::operator=;
VkDeviceGeneratedCommandsLimitsNVX& (VkDeviceGeneratedCommandsLimitsNVX::*AcidSharp_symbols1232)(VkDeviceGeneratedCommandsLimitsNVX&&) = &VkDeviceGeneratedCommandsLimitsNVX::operator=;
extern "C" { void AcidSharp_symbols1233(VkDeviceGeneratedCommandsLimitsNVX* instance) { instance->~VkDeviceGeneratedCommandsLimitsNVX(); } }
extern "C" { void AcidSharp_symbols1234(void* instance) { new (instance) VkIndirectCommandsTokenNVX(); } }
extern "C" { void AcidSharp_symbols1235(void* instance, const VkIndirectCommandsTokenNVX& _0) { new (instance) VkIndirectCommandsTokenNVX(_0); } }
VkIndirectCommandsTokenNVX& (VkIndirectCommandsTokenNVX::*AcidSharp_symbols1236)(const VkIndirectCommandsTokenNVX&) = &VkIndirectCommandsTokenNVX::operator=;
VkIndirectCommandsTokenNVX& (VkIndirectCommandsTokenNVX::*AcidSharp_symbols1237)(VkIndirectCommandsTokenNVX&&) = &VkIndirectCommandsTokenNVX::operator=;
extern "C" { void AcidSharp_symbols1238(VkIndirectCommandsTokenNVX* instance) { instance->~VkIndirectCommandsTokenNVX(); } }
extern "C" { void AcidSharp_symbols1239(void* instance) { new (instance) VkIndirectCommandsLayoutTokenNVX(); } }
extern "C" { void AcidSharp_symbols1240(void* instance, const VkIndirectCommandsLayoutTokenNVX& _0) { new (instance) VkIndirectCommandsLayoutTokenNVX(_0); } }
VkIndirectCommandsLayoutTokenNVX& (VkIndirectCommandsLayoutTokenNVX::*AcidSharp_symbols1241)(const VkIndirectCommandsLayoutTokenNVX&) = &VkIndirectCommandsLayoutTokenNVX::operator=;
VkIndirectCommandsLayoutTokenNVX& (VkIndirectCommandsLayoutTokenNVX::*AcidSharp_symbols1242)(VkIndirectCommandsLayoutTokenNVX&&) = &VkIndirectCommandsLayoutTokenNVX::operator=;
extern "C" { void AcidSharp_symbols1243(VkIndirectCommandsLayoutTokenNVX* instance) { instance->~VkIndirectCommandsLayoutTokenNVX(); } }
extern "C" { void AcidSharp_symbols1244(void* instance) { new (instance) VkIndirectCommandsLayoutCreateInfoNVX(); } }
extern "C" { void AcidSharp_symbols1245(void* instance, const VkIndirectCommandsLayoutCreateInfoNVX& _0) { new (instance) VkIndirectCommandsLayoutCreateInfoNVX(_0); } }
VkIndirectCommandsLayoutCreateInfoNVX& (VkIndirectCommandsLayoutCreateInfoNVX::*AcidSharp_symbols1246)(const VkIndirectCommandsLayoutCreateInfoNVX&) = &VkIndirectCommandsLayoutCreateInfoNVX::operator=;
VkIndirectCommandsLayoutCreateInfoNVX& (VkIndirectCommandsLayoutCreateInfoNVX::*AcidSharp_symbols1247)(VkIndirectCommandsLayoutCreateInfoNVX&&) = &VkIndirectCommandsLayoutCreateInfoNVX::operator=;
extern "C" { void AcidSharp_symbols1248(VkIndirectCommandsLayoutCreateInfoNVX* instance) { instance->~VkIndirectCommandsLayoutCreateInfoNVX(); } }
extern "C" { void AcidSharp_symbols1249(void* instance) { new (instance) VkCmdProcessCommandsInfoNVX(); } }
extern "C" { void AcidSharp_symbols1250(void* instance, const VkCmdProcessCommandsInfoNVX& _0) { new (instance) VkCmdProcessCommandsInfoNVX(_0); } }
VkCmdProcessCommandsInfoNVX& (VkCmdProcessCommandsInfoNVX::*AcidSharp_symbols1251)(const VkCmdProcessCommandsInfoNVX&) = &VkCmdProcessCommandsInfoNVX::operator=;
VkCmdProcessCommandsInfoNVX& (VkCmdProcessCommandsInfoNVX::*AcidSharp_symbols1252)(VkCmdProcessCommandsInfoNVX&&) = &VkCmdProcessCommandsInfoNVX::operator=;
extern "C" { void AcidSharp_symbols1253(VkCmdProcessCommandsInfoNVX* instance) { instance->~VkCmdProcessCommandsInfoNVX(); } }
extern "C" { void AcidSharp_symbols1254(void* instance) { new (instance) VkCmdReserveSpaceForCommandsInfoNVX(); } }
extern "C" { void AcidSharp_symbols1255(void* instance, const VkCmdReserveSpaceForCommandsInfoNVX& _0) { new (instance) VkCmdReserveSpaceForCommandsInfoNVX(_0); } }
VkCmdReserveSpaceForCommandsInfoNVX& (VkCmdReserveSpaceForCommandsInfoNVX::*AcidSharp_symbols1256)(const VkCmdReserveSpaceForCommandsInfoNVX&) = &VkCmdReserveSpaceForCommandsInfoNVX::operator=;
VkCmdReserveSpaceForCommandsInfoNVX& (VkCmdReserveSpaceForCommandsInfoNVX::*AcidSharp_symbols1257)(VkCmdReserveSpaceForCommandsInfoNVX&&) = &VkCmdReserveSpaceForCommandsInfoNVX::operator=;
extern "C" { void AcidSharp_symbols1258(VkCmdReserveSpaceForCommandsInfoNVX* instance) { instance->~VkCmdReserveSpaceForCommandsInfoNVX(); } }
extern "C" { void AcidSharp_symbols1259(void* instance) { new (instance) VkObjectTableCreateInfoNVX(); } }
extern "C" { void AcidSharp_symbols1260(void* instance, const VkObjectTableCreateInfoNVX& _0) { new (instance) VkObjectTableCreateInfoNVX(_0); } }
VkObjectTableCreateInfoNVX& (VkObjectTableCreateInfoNVX::*AcidSharp_symbols1261)(const VkObjectTableCreateInfoNVX&) = &VkObjectTableCreateInfoNVX::operator=;
VkObjectTableCreateInfoNVX& (VkObjectTableCreateInfoNVX::*AcidSharp_symbols1262)(VkObjectTableCreateInfoNVX&&) = &VkObjectTableCreateInfoNVX::operator=;
extern "C" { void AcidSharp_symbols1263(VkObjectTableCreateInfoNVX* instance) { instance->~VkObjectTableCreateInfoNVX(); } }
extern "C" { void AcidSharp_symbols1264(void* instance) { new (instance) VkObjectTableEntryNVX(); } }
extern "C" { void AcidSharp_symbols1265(void* instance, const VkObjectTableEntryNVX& _0) { new (instance) VkObjectTableEntryNVX(_0); } }
VkObjectTableEntryNVX& (VkObjectTableEntryNVX::*AcidSharp_symbols1266)(const VkObjectTableEntryNVX&) = &VkObjectTableEntryNVX::operator=;
VkObjectTableEntryNVX& (VkObjectTableEntryNVX::*AcidSharp_symbols1267)(VkObjectTableEntryNVX&&) = &VkObjectTableEntryNVX::operator=;
extern "C" { void AcidSharp_symbols1268(VkObjectTableEntryNVX* instance) { instance->~VkObjectTableEntryNVX(); } }
extern "C" { void AcidSharp_symbols1269(void* instance) { new (instance) VkObjectTablePipelineEntryNVX(); } }
extern "C" { void AcidSharp_symbols1270(void* instance, const VkObjectTablePipelineEntryNVX& _0) { new (instance) VkObjectTablePipelineEntryNVX(_0); } }
VkObjectTablePipelineEntryNVX& (VkObjectTablePipelineEntryNVX::*AcidSharp_symbols1271)(const VkObjectTablePipelineEntryNVX&) = &VkObjectTablePipelineEntryNVX::operator=;
VkObjectTablePipelineEntryNVX& (VkObjectTablePipelineEntryNVX::*AcidSharp_symbols1272)(VkObjectTablePipelineEntryNVX&&) = &VkObjectTablePipelineEntryNVX::operator=;
extern "C" { void AcidSharp_symbols1273(VkObjectTablePipelineEntryNVX* instance) { instance->~VkObjectTablePipelineEntryNVX(); } }
extern "C" { void AcidSharp_symbols1274(void* instance) { new (instance) VkObjectTableDescriptorSetEntryNVX(); } }
extern "C" { void AcidSharp_symbols1275(void* instance, const VkObjectTableDescriptorSetEntryNVX& _0) { new (instance) VkObjectTableDescriptorSetEntryNVX(_0); } }
VkObjectTableDescriptorSetEntryNVX& (VkObjectTableDescriptorSetEntryNVX::*AcidSharp_symbols1276)(const VkObjectTableDescriptorSetEntryNVX&) = &VkObjectTableDescriptorSetEntryNVX::operator=;
VkObjectTableDescriptorSetEntryNVX& (VkObjectTableDescriptorSetEntryNVX::*AcidSharp_symbols1277)(VkObjectTableDescriptorSetEntryNVX&&) = &VkObjectTableDescriptorSetEntryNVX::operator=;
extern "C" { void AcidSharp_symbols1278(VkObjectTableDescriptorSetEntryNVX* instance) { instance->~VkObjectTableDescriptorSetEntryNVX(); } }
extern "C" { void AcidSharp_symbols1279(void* instance) { new (instance) VkObjectTableVertexBufferEntryNVX(); } }
extern "C" { void AcidSharp_symbols1280(void* instance, const VkObjectTableVertexBufferEntryNVX& _0) { new (instance) VkObjectTableVertexBufferEntryNVX(_0); } }
VkObjectTableVertexBufferEntryNVX& (VkObjectTableVertexBufferEntryNVX::*AcidSharp_symbols1281)(const VkObjectTableVertexBufferEntryNVX&) = &VkObjectTableVertexBufferEntryNVX::operator=;
VkObjectTableVertexBufferEntryNVX& (VkObjectTableVertexBufferEntryNVX::*AcidSharp_symbols1282)(VkObjectTableVertexBufferEntryNVX&&) = &VkObjectTableVertexBufferEntryNVX::operator=;
extern "C" { void AcidSharp_symbols1283(VkObjectTableVertexBufferEntryNVX* instance) { instance->~VkObjectTableVertexBufferEntryNVX(); } }
extern "C" { void AcidSharp_symbols1284(void* instance) { new (instance) VkObjectTableIndexBufferEntryNVX(); } }
extern "C" { void AcidSharp_symbols1285(void* instance, const VkObjectTableIndexBufferEntryNVX& _0) { new (instance) VkObjectTableIndexBufferEntryNVX(_0); } }
VkObjectTableIndexBufferEntryNVX& (VkObjectTableIndexBufferEntryNVX::*AcidSharp_symbols1286)(const VkObjectTableIndexBufferEntryNVX&) = &VkObjectTableIndexBufferEntryNVX::operator=;
VkObjectTableIndexBufferEntryNVX& (VkObjectTableIndexBufferEntryNVX::*AcidSharp_symbols1287)(VkObjectTableIndexBufferEntryNVX&&) = &VkObjectTableIndexBufferEntryNVX::operator=;
extern "C" { void AcidSharp_symbols1288(VkObjectTableIndexBufferEntryNVX* instance) { instance->~VkObjectTableIndexBufferEntryNVX(); } }
extern "C" { void AcidSharp_symbols1289(void* instance) { new (instance) VkObjectTablePushConstantEntryNVX(); } }
extern "C" { void AcidSharp_symbols1290(void* instance, const VkObjectTablePushConstantEntryNVX& _0) { new (instance) VkObjectTablePushConstantEntryNVX(_0); } }
VkObjectTablePushConstantEntryNVX& (VkObjectTablePushConstantEntryNVX::*AcidSharp_symbols1291)(const VkObjectTablePushConstantEntryNVX&) = &VkObjectTablePushConstantEntryNVX::operator=;
VkObjectTablePushConstantEntryNVX& (VkObjectTablePushConstantEntryNVX::*AcidSharp_symbols1292)(VkObjectTablePushConstantEntryNVX&&) = &VkObjectTablePushConstantEntryNVX::operator=;
extern "C" { void AcidSharp_symbols1293(VkObjectTablePushConstantEntryNVX* instance) { instance->~VkObjectTablePushConstantEntryNVX(); } }
extern "C" { void AcidSharp_symbols1294(void* instance) { new (instance) VkViewportWScalingNV(); } }
extern "C" { void AcidSharp_symbols1295(void* instance, const VkViewportWScalingNV& _0) { new (instance) VkViewportWScalingNV(_0); } }
VkViewportWScalingNV& (VkViewportWScalingNV::*AcidSharp_symbols1296)(const VkViewportWScalingNV&) = &VkViewportWScalingNV::operator=;
VkViewportWScalingNV& (VkViewportWScalingNV::*AcidSharp_symbols1297)(VkViewportWScalingNV&&) = &VkViewportWScalingNV::operator=;
extern "C" { void AcidSharp_symbols1298(VkViewportWScalingNV* instance) { instance->~VkViewportWScalingNV(); } }
extern "C" { void AcidSharp_symbols1299(void* instance) { new (instance) VkPipelineViewportWScalingStateCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1300(void* instance, const VkPipelineViewportWScalingStateCreateInfoNV& _0) { new (instance) VkPipelineViewportWScalingStateCreateInfoNV(_0); } }
VkPipelineViewportWScalingStateCreateInfoNV& (VkPipelineViewportWScalingStateCreateInfoNV::*AcidSharp_symbols1301)(const VkPipelineViewportWScalingStateCreateInfoNV&) = &VkPipelineViewportWScalingStateCreateInfoNV::operator=;
VkPipelineViewportWScalingStateCreateInfoNV& (VkPipelineViewportWScalingStateCreateInfoNV::*AcidSharp_symbols1302)(VkPipelineViewportWScalingStateCreateInfoNV&&) = &VkPipelineViewportWScalingStateCreateInfoNV::operator=;
extern "C" { void AcidSharp_symbols1303(VkPipelineViewportWScalingStateCreateInfoNV* instance) { instance->~VkPipelineViewportWScalingStateCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1304(void* instance) { new (instance) VkSurfaceCapabilities2EXT(); } }
extern "C" { void AcidSharp_symbols1305(void* instance, const VkSurfaceCapabilities2EXT& _0) { new (instance) VkSurfaceCapabilities2EXT(_0); } }
VkSurfaceCapabilities2EXT& (VkSurfaceCapabilities2EXT::*AcidSharp_symbols1306)(const VkSurfaceCapabilities2EXT&) = &VkSurfaceCapabilities2EXT::operator=;
VkSurfaceCapabilities2EXT& (VkSurfaceCapabilities2EXT::*AcidSharp_symbols1307)(VkSurfaceCapabilities2EXT&&) = &VkSurfaceCapabilities2EXT::operator=;
extern "C" { void AcidSharp_symbols1308(VkSurfaceCapabilities2EXT* instance) { instance->~VkSurfaceCapabilities2EXT(); } }
extern "C" { void AcidSharp_symbols1309(void* instance) { new (instance) VkDisplayPowerInfoEXT(); } }
extern "C" { void AcidSharp_symbols1310(void* instance, const VkDisplayPowerInfoEXT& _0) { new (instance) VkDisplayPowerInfoEXT(_0); } }
VkDisplayPowerInfoEXT& (VkDisplayPowerInfoEXT::*AcidSharp_symbols1311)(const VkDisplayPowerInfoEXT&) = &VkDisplayPowerInfoEXT::operator=;
VkDisplayPowerInfoEXT& (VkDisplayPowerInfoEXT::*AcidSharp_symbols1312)(VkDisplayPowerInfoEXT&&) = &VkDisplayPowerInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1313(VkDisplayPowerInfoEXT* instance) { instance->~VkDisplayPowerInfoEXT(); } }
extern "C" { void AcidSharp_symbols1314(void* instance) { new (instance) VkDeviceEventInfoEXT(); } }
extern "C" { void AcidSharp_symbols1315(void* instance, const VkDeviceEventInfoEXT& _0) { new (instance) VkDeviceEventInfoEXT(_0); } }
VkDeviceEventInfoEXT& (VkDeviceEventInfoEXT::*AcidSharp_symbols1316)(const VkDeviceEventInfoEXT&) = &VkDeviceEventInfoEXT::operator=;
VkDeviceEventInfoEXT& (VkDeviceEventInfoEXT::*AcidSharp_symbols1317)(VkDeviceEventInfoEXT&&) = &VkDeviceEventInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1318(VkDeviceEventInfoEXT* instance) { instance->~VkDeviceEventInfoEXT(); } }
extern "C" { void AcidSharp_symbols1319(void* instance) { new (instance) VkDisplayEventInfoEXT(); } }
extern "C" { void AcidSharp_symbols1320(void* instance, const VkDisplayEventInfoEXT& _0) { new (instance) VkDisplayEventInfoEXT(_0); } }
VkDisplayEventInfoEXT& (VkDisplayEventInfoEXT::*AcidSharp_symbols1321)(const VkDisplayEventInfoEXT&) = &VkDisplayEventInfoEXT::operator=;
VkDisplayEventInfoEXT& (VkDisplayEventInfoEXT::*AcidSharp_symbols1322)(VkDisplayEventInfoEXT&&) = &VkDisplayEventInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1323(VkDisplayEventInfoEXT* instance) { instance->~VkDisplayEventInfoEXT(); } }
extern "C" { void AcidSharp_symbols1324(void* instance) { new (instance) VkSwapchainCounterCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1325(void* instance, const VkSwapchainCounterCreateInfoEXT& _0) { new (instance) VkSwapchainCounterCreateInfoEXT(_0); } }
VkSwapchainCounterCreateInfoEXT& (VkSwapchainCounterCreateInfoEXT::*AcidSharp_symbols1326)(const VkSwapchainCounterCreateInfoEXT&) = &VkSwapchainCounterCreateInfoEXT::operator=;
VkSwapchainCounterCreateInfoEXT& (VkSwapchainCounterCreateInfoEXT::*AcidSharp_symbols1327)(VkSwapchainCounterCreateInfoEXT&&) = &VkSwapchainCounterCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1328(VkSwapchainCounterCreateInfoEXT* instance) { instance->~VkSwapchainCounterCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1329(void* instance) { new (instance) VkRefreshCycleDurationGOOGLE(); } }
extern "C" { void AcidSharp_symbols1330(void* instance, const VkRefreshCycleDurationGOOGLE& _0) { new (instance) VkRefreshCycleDurationGOOGLE(_0); } }
VkRefreshCycleDurationGOOGLE& (VkRefreshCycleDurationGOOGLE::*AcidSharp_symbols1331)(const VkRefreshCycleDurationGOOGLE&) = &VkRefreshCycleDurationGOOGLE::operator=;
VkRefreshCycleDurationGOOGLE& (VkRefreshCycleDurationGOOGLE::*AcidSharp_symbols1332)(VkRefreshCycleDurationGOOGLE&&) = &VkRefreshCycleDurationGOOGLE::operator=;
extern "C" { void AcidSharp_symbols1333(VkRefreshCycleDurationGOOGLE* instance) { instance->~VkRefreshCycleDurationGOOGLE(); } }
extern "C" { void AcidSharp_symbols1334(void* instance) { new (instance) VkPastPresentationTimingGOOGLE(); } }
extern "C" { void AcidSharp_symbols1335(void* instance, const VkPastPresentationTimingGOOGLE& _0) { new (instance) VkPastPresentationTimingGOOGLE(_0); } }
VkPastPresentationTimingGOOGLE& (VkPastPresentationTimingGOOGLE::*AcidSharp_symbols1336)(const VkPastPresentationTimingGOOGLE&) = &VkPastPresentationTimingGOOGLE::operator=;
VkPastPresentationTimingGOOGLE& (VkPastPresentationTimingGOOGLE::*AcidSharp_symbols1337)(VkPastPresentationTimingGOOGLE&&) = &VkPastPresentationTimingGOOGLE::operator=;
extern "C" { void AcidSharp_symbols1338(VkPastPresentationTimingGOOGLE* instance) { instance->~VkPastPresentationTimingGOOGLE(); } }
extern "C" { void AcidSharp_symbols1339(void* instance) { new (instance) VkPresentTimeGOOGLE(); } }
extern "C" { void AcidSharp_symbols1340(void* instance, const VkPresentTimeGOOGLE& _0) { new (instance) VkPresentTimeGOOGLE(_0); } }
VkPresentTimeGOOGLE& (VkPresentTimeGOOGLE::*AcidSharp_symbols1341)(const VkPresentTimeGOOGLE&) = &VkPresentTimeGOOGLE::operator=;
VkPresentTimeGOOGLE& (VkPresentTimeGOOGLE::*AcidSharp_symbols1342)(VkPresentTimeGOOGLE&&) = &VkPresentTimeGOOGLE::operator=;
extern "C" { void AcidSharp_symbols1343(VkPresentTimeGOOGLE* instance) { instance->~VkPresentTimeGOOGLE(); } }
extern "C" { void AcidSharp_symbols1344(void* instance) { new (instance) VkPresentTimesInfoGOOGLE(); } }
extern "C" { void AcidSharp_symbols1345(void* instance, const VkPresentTimesInfoGOOGLE& _0) { new (instance) VkPresentTimesInfoGOOGLE(_0); } }
VkPresentTimesInfoGOOGLE& (VkPresentTimesInfoGOOGLE::*AcidSharp_symbols1346)(const VkPresentTimesInfoGOOGLE&) = &VkPresentTimesInfoGOOGLE::operator=;
VkPresentTimesInfoGOOGLE& (VkPresentTimesInfoGOOGLE::*AcidSharp_symbols1347)(VkPresentTimesInfoGOOGLE&&) = &VkPresentTimesInfoGOOGLE::operator=;
extern "C" { void AcidSharp_symbols1348(VkPresentTimesInfoGOOGLE* instance) { instance->~VkPresentTimesInfoGOOGLE(); } }
extern "C" { void AcidSharp_symbols1349(void* instance) { new (instance) VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(); } }
extern "C" { void AcidSharp_symbols1350(void* instance, const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& _0) { new (instance) VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(_0); } }
VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& (VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::*AcidSharp_symbols1351)(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX&) = &VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::operator=;
VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& (VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::*AcidSharp_symbols1352)(VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX&&) = &VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::operator=;
extern "C" { void AcidSharp_symbols1353(VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX* instance) { instance->~VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(); } }
extern "C" { void AcidSharp_symbols1354(void* instance) { new (instance) VkViewportSwizzleNV(); } }
extern "C" { void AcidSharp_symbols1355(void* instance, const VkViewportSwizzleNV& _0) { new (instance) VkViewportSwizzleNV(_0); } }
VkViewportSwizzleNV& (VkViewportSwizzleNV::*AcidSharp_symbols1356)(const VkViewportSwizzleNV&) = &VkViewportSwizzleNV::operator=;
VkViewportSwizzleNV& (VkViewportSwizzleNV::*AcidSharp_symbols1357)(VkViewportSwizzleNV&&) = &VkViewportSwizzleNV::operator=;
extern "C" { void AcidSharp_symbols1358(VkViewportSwizzleNV* instance) { instance->~VkViewportSwizzleNV(); } }
extern "C" { void AcidSharp_symbols1359(void* instance) { new (instance) VkPipelineViewportSwizzleStateCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1360(void* instance, const VkPipelineViewportSwizzleStateCreateInfoNV& _0) { new (instance) VkPipelineViewportSwizzleStateCreateInfoNV(_0); } }
VkPipelineViewportSwizzleStateCreateInfoNV& (VkPipelineViewportSwizzleStateCreateInfoNV::*AcidSharp_symbols1361)(const VkPipelineViewportSwizzleStateCreateInfoNV&) = &VkPipelineViewportSwizzleStateCreateInfoNV::operator=;
VkPipelineViewportSwizzleStateCreateInfoNV& (VkPipelineViewportSwizzleStateCreateInfoNV::*AcidSharp_symbols1362)(VkPipelineViewportSwizzleStateCreateInfoNV&&) = &VkPipelineViewportSwizzleStateCreateInfoNV::operator=;
extern "C" { void AcidSharp_symbols1363(VkPipelineViewportSwizzleStateCreateInfoNV* instance) { instance->~VkPipelineViewportSwizzleStateCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1364(void* instance) { new (instance) VkPhysicalDeviceDiscardRectanglePropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1365(void* instance, const VkPhysicalDeviceDiscardRectanglePropertiesEXT& _0) { new (instance) VkPhysicalDeviceDiscardRectanglePropertiesEXT(_0); } }
VkPhysicalDeviceDiscardRectanglePropertiesEXT& (VkPhysicalDeviceDiscardRectanglePropertiesEXT::*AcidSharp_symbols1366)(const VkPhysicalDeviceDiscardRectanglePropertiesEXT&) = &VkPhysicalDeviceDiscardRectanglePropertiesEXT::operator=;
VkPhysicalDeviceDiscardRectanglePropertiesEXT& (VkPhysicalDeviceDiscardRectanglePropertiesEXT::*AcidSharp_symbols1367)(VkPhysicalDeviceDiscardRectanglePropertiesEXT&&) = &VkPhysicalDeviceDiscardRectanglePropertiesEXT::operator=;
extern "C" { void AcidSharp_symbols1368(VkPhysicalDeviceDiscardRectanglePropertiesEXT* instance) { instance->~VkPhysicalDeviceDiscardRectanglePropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1369(void* instance) { new (instance) VkPipelineDiscardRectangleStateCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1370(void* instance, const VkPipelineDiscardRectangleStateCreateInfoEXT& _0) { new (instance) VkPipelineDiscardRectangleStateCreateInfoEXT(_0); } }
VkPipelineDiscardRectangleStateCreateInfoEXT& (VkPipelineDiscardRectangleStateCreateInfoEXT::*AcidSharp_symbols1371)(const VkPipelineDiscardRectangleStateCreateInfoEXT&) = &VkPipelineDiscardRectangleStateCreateInfoEXT::operator=;
VkPipelineDiscardRectangleStateCreateInfoEXT& (VkPipelineDiscardRectangleStateCreateInfoEXT::*AcidSharp_symbols1372)(VkPipelineDiscardRectangleStateCreateInfoEXT&&) = &VkPipelineDiscardRectangleStateCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1373(VkPipelineDiscardRectangleStateCreateInfoEXT* instance) { instance->~VkPipelineDiscardRectangleStateCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1374(void* instance) { new (instance) VkPhysicalDeviceConservativeRasterizationPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1375(void* instance, const VkPhysicalDeviceConservativeRasterizationPropertiesEXT& _0) { new (instance) VkPhysicalDeviceConservativeRasterizationPropertiesEXT(_0); } }
VkPhysicalDeviceConservativeRasterizationPropertiesEXT& (VkPhysicalDeviceConservativeRasterizationPropertiesEXT::*AcidSharp_symbols1376)(const VkPhysicalDeviceConservativeRasterizationPropertiesEXT&) = &VkPhysicalDeviceConservativeRasterizationPropertiesEXT::operator=;
VkPhysicalDeviceConservativeRasterizationPropertiesEXT& (VkPhysicalDeviceConservativeRasterizationPropertiesEXT::*AcidSharp_symbols1377)(VkPhysicalDeviceConservativeRasterizationPropertiesEXT&&) = &VkPhysicalDeviceConservativeRasterizationPropertiesEXT::operator=;
extern "C" { void AcidSharp_symbols1378(VkPhysicalDeviceConservativeRasterizationPropertiesEXT* instance) { instance->~VkPhysicalDeviceConservativeRasterizationPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1379(void* instance) { new (instance) VkPipelineRasterizationConservativeStateCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1380(void* instance, const VkPipelineRasterizationConservativeStateCreateInfoEXT& _0) { new (instance) VkPipelineRasterizationConservativeStateCreateInfoEXT(_0); } }
VkPipelineRasterizationConservativeStateCreateInfoEXT& (VkPipelineRasterizationConservativeStateCreateInfoEXT::*AcidSharp_symbols1381)(const VkPipelineRasterizationConservativeStateCreateInfoEXT&) = &VkPipelineRasterizationConservativeStateCreateInfoEXT::operator=;
VkPipelineRasterizationConservativeStateCreateInfoEXT& (VkPipelineRasterizationConservativeStateCreateInfoEXT::*AcidSharp_symbols1382)(VkPipelineRasterizationConservativeStateCreateInfoEXT&&) = &VkPipelineRasterizationConservativeStateCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1383(VkPipelineRasterizationConservativeStateCreateInfoEXT* instance) { instance->~VkPipelineRasterizationConservativeStateCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1384(void* instance) { new (instance) VkXYColorEXT(); } }
extern "C" { void AcidSharp_symbols1385(void* instance, const VkXYColorEXT& _0) { new (instance) VkXYColorEXT(_0); } }
VkXYColorEXT& (VkXYColorEXT::*AcidSharp_symbols1386)(const VkXYColorEXT&) = &VkXYColorEXT::operator=;
VkXYColorEXT& (VkXYColorEXT::*AcidSharp_symbols1387)(VkXYColorEXT&&) = &VkXYColorEXT::operator=;
extern "C" { void AcidSharp_symbols1388(VkXYColorEXT* instance) { instance->~VkXYColorEXT(); } }
extern "C" { void AcidSharp_symbols1389(void* instance) { new (instance) VkHdrMetadataEXT(); } }
extern "C" { void AcidSharp_symbols1390(void* instance, const VkHdrMetadataEXT& _0) { new (instance) VkHdrMetadataEXT(_0); } }
VkHdrMetadataEXT& (VkHdrMetadataEXT::*AcidSharp_symbols1391)(const VkHdrMetadataEXT&) = &VkHdrMetadataEXT::operator=;
VkHdrMetadataEXT& (VkHdrMetadataEXT::*AcidSharp_symbols1392)(VkHdrMetadataEXT&&) = &VkHdrMetadataEXT::operator=;
extern "C" { void AcidSharp_symbols1393(VkHdrMetadataEXT* instance) { instance->~VkHdrMetadataEXT(); } }
extern "C" { void AcidSharp_symbols1394(void* instance) { new (instance) VkDebugUtilsObjectNameInfoEXT(); } }
extern "C" { void AcidSharp_symbols1395(void* instance, const VkDebugUtilsObjectNameInfoEXT& _0) { new (instance) VkDebugUtilsObjectNameInfoEXT(_0); } }
VkDebugUtilsObjectNameInfoEXT& (VkDebugUtilsObjectNameInfoEXT::*AcidSharp_symbols1396)(const VkDebugUtilsObjectNameInfoEXT&) = &VkDebugUtilsObjectNameInfoEXT::operator=;
VkDebugUtilsObjectNameInfoEXT& (VkDebugUtilsObjectNameInfoEXT::*AcidSharp_symbols1397)(VkDebugUtilsObjectNameInfoEXT&&) = &VkDebugUtilsObjectNameInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1398(VkDebugUtilsObjectNameInfoEXT* instance) { instance->~VkDebugUtilsObjectNameInfoEXT(); } }
extern "C" { void AcidSharp_symbols1399(void* instance) { new (instance) VkDebugUtilsObjectTagInfoEXT(); } }
extern "C" { void AcidSharp_symbols1400(void* instance, const VkDebugUtilsObjectTagInfoEXT& _0) { new (instance) VkDebugUtilsObjectTagInfoEXT(_0); } }
VkDebugUtilsObjectTagInfoEXT& (VkDebugUtilsObjectTagInfoEXT::*AcidSharp_symbols1401)(const VkDebugUtilsObjectTagInfoEXT&) = &VkDebugUtilsObjectTagInfoEXT::operator=;
VkDebugUtilsObjectTagInfoEXT& (VkDebugUtilsObjectTagInfoEXT::*AcidSharp_symbols1402)(VkDebugUtilsObjectTagInfoEXT&&) = &VkDebugUtilsObjectTagInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1403(VkDebugUtilsObjectTagInfoEXT* instance) { instance->~VkDebugUtilsObjectTagInfoEXT(); } }
extern "C" { void AcidSharp_symbols1404(void* instance) { new (instance) VkDebugUtilsLabelEXT(); } }
extern "C" { void AcidSharp_symbols1405(void* instance, const VkDebugUtilsLabelEXT& _0) { new (instance) VkDebugUtilsLabelEXT(_0); } }
VkDebugUtilsLabelEXT& (VkDebugUtilsLabelEXT::*AcidSharp_symbols1406)(const VkDebugUtilsLabelEXT&) = &VkDebugUtilsLabelEXT::operator=;
VkDebugUtilsLabelEXT& (VkDebugUtilsLabelEXT::*AcidSharp_symbols1407)(VkDebugUtilsLabelEXT&&) = &VkDebugUtilsLabelEXT::operator=;
extern "C" { void AcidSharp_symbols1408(VkDebugUtilsLabelEXT* instance) { instance->~VkDebugUtilsLabelEXT(); } }
extern "C" { void AcidSharp_symbols1409(void* instance) { new (instance) VkDebugUtilsMessengerCallbackDataEXT(); } }
extern "C" { void AcidSharp_symbols1410(void* instance, const VkDebugUtilsMessengerCallbackDataEXT& _0) { new (instance) VkDebugUtilsMessengerCallbackDataEXT(_0); } }
VkDebugUtilsMessengerCallbackDataEXT& (VkDebugUtilsMessengerCallbackDataEXT::*AcidSharp_symbols1411)(const VkDebugUtilsMessengerCallbackDataEXT&) = &VkDebugUtilsMessengerCallbackDataEXT::operator=;
VkDebugUtilsMessengerCallbackDataEXT& (VkDebugUtilsMessengerCallbackDataEXT::*AcidSharp_symbols1412)(VkDebugUtilsMessengerCallbackDataEXT&&) = &VkDebugUtilsMessengerCallbackDataEXT::operator=;
extern "C" { void AcidSharp_symbols1413(VkDebugUtilsMessengerCallbackDataEXT* instance) { instance->~VkDebugUtilsMessengerCallbackDataEXT(); } }
extern "C" { void AcidSharp_symbols1414(void* instance) { new (instance) VkDebugUtilsMessengerCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1415(void* instance, const VkDebugUtilsMessengerCreateInfoEXT& _0) { new (instance) VkDebugUtilsMessengerCreateInfoEXT(_0); } }
VkDebugUtilsMessengerCreateInfoEXT& (VkDebugUtilsMessengerCreateInfoEXT::*AcidSharp_symbols1416)(const VkDebugUtilsMessengerCreateInfoEXT&) = &VkDebugUtilsMessengerCreateInfoEXT::operator=;
VkDebugUtilsMessengerCreateInfoEXT& (VkDebugUtilsMessengerCreateInfoEXT::*AcidSharp_symbols1417)(VkDebugUtilsMessengerCreateInfoEXT&&) = &VkDebugUtilsMessengerCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1418(VkDebugUtilsMessengerCreateInfoEXT* instance) { instance->~VkDebugUtilsMessengerCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1419(void* instance) { new (instance) VkSamplerReductionModeCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1420(void* instance, const VkSamplerReductionModeCreateInfoEXT& _0) { new (instance) VkSamplerReductionModeCreateInfoEXT(_0); } }
VkSamplerReductionModeCreateInfoEXT& (VkSamplerReductionModeCreateInfoEXT::*AcidSharp_symbols1421)(const VkSamplerReductionModeCreateInfoEXT&) = &VkSamplerReductionModeCreateInfoEXT::operator=;
VkSamplerReductionModeCreateInfoEXT& (VkSamplerReductionModeCreateInfoEXT::*AcidSharp_symbols1422)(VkSamplerReductionModeCreateInfoEXT&&) = &VkSamplerReductionModeCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1423(VkSamplerReductionModeCreateInfoEXT* instance) { instance->~VkSamplerReductionModeCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1424(void* instance) { new (instance) VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1425(void* instance, const VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT& _0) { new (instance) VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT(_0); } }
VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT& (VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT::*AcidSharp_symbols1426)(const VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT&) = &VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT::operator=;
VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT& (VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT::*AcidSharp_symbols1427)(VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT&&) = &VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT::operator=;
extern "C" { void AcidSharp_symbols1428(VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT* instance) { instance->~VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1429(void* instance) { new (instance) VkSampleLocationEXT(); } }
extern "C" { void AcidSharp_symbols1430(void* instance, const VkSampleLocationEXT& _0) { new (instance) VkSampleLocationEXT(_0); } }
VkSampleLocationEXT& (VkSampleLocationEXT::*AcidSharp_symbols1431)(const VkSampleLocationEXT&) = &VkSampleLocationEXT::operator=;
VkSampleLocationEXT& (VkSampleLocationEXT::*AcidSharp_symbols1432)(VkSampleLocationEXT&&) = &VkSampleLocationEXT::operator=;
extern "C" { void AcidSharp_symbols1433(VkSampleLocationEXT* instance) { instance->~VkSampleLocationEXT(); } }
extern "C" { void AcidSharp_symbols1434(void* instance) { new (instance) VkSampleLocationsInfoEXT(); } }
extern "C" { void AcidSharp_symbols1435(void* instance, const VkSampleLocationsInfoEXT& _0) { new (instance) VkSampleLocationsInfoEXT(_0); } }
VkSampleLocationsInfoEXT& (VkSampleLocationsInfoEXT::*AcidSharp_symbols1436)(const VkSampleLocationsInfoEXT&) = &VkSampleLocationsInfoEXT::operator=;
VkSampleLocationsInfoEXT& (VkSampleLocationsInfoEXT::*AcidSharp_symbols1437)(VkSampleLocationsInfoEXT&&) = &VkSampleLocationsInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1438(VkSampleLocationsInfoEXT* instance) { instance->~VkSampleLocationsInfoEXT(); } }
extern "C" { void AcidSharp_symbols1439(void* instance) { new (instance) VkAttachmentSampleLocationsEXT(); } }
extern "C" { void AcidSharp_symbols1440(void* instance, const VkAttachmentSampleLocationsEXT& _0) { new (instance) VkAttachmentSampleLocationsEXT(_0); } }
VkAttachmentSampleLocationsEXT& (VkAttachmentSampleLocationsEXT::*AcidSharp_symbols1441)(const VkAttachmentSampleLocationsEXT&) = &VkAttachmentSampleLocationsEXT::operator=;
VkAttachmentSampleLocationsEXT& (VkAttachmentSampleLocationsEXT::*AcidSharp_symbols1442)(VkAttachmentSampleLocationsEXT&&) = &VkAttachmentSampleLocationsEXT::operator=;
extern "C" { void AcidSharp_symbols1443(VkAttachmentSampleLocationsEXT* instance) { instance->~VkAttachmentSampleLocationsEXT(); } }
extern "C" { void AcidSharp_symbols1444(void* instance) { new (instance) VkSubpassSampleLocationsEXT(); } }
extern "C" { void AcidSharp_symbols1445(void* instance, const VkSubpassSampleLocationsEXT& _0) { new (instance) VkSubpassSampleLocationsEXT(_0); } }
VkSubpassSampleLocationsEXT& (VkSubpassSampleLocationsEXT::*AcidSharp_symbols1446)(const VkSubpassSampleLocationsEXT&) = &VkSubpassSampleLocationsEXT::operator=;
VkSubpassSampleLocationsEXT& (VkSubpassSampleLocationsEXT::*AcidSharp_symbols1447)(VkSubpassSampleLocationsEXT&&) = &VkSubpassSampleLocationsEXT::operator=;
extern "C" { void AcidSharp_symbols1448(VkSubpassSampleLocationsEXT* instance) { instance->~VkSubpassSampleLocationsEXT(); } }
extern "C" { void AcidSharp_symbols1449(void* instance) { new (instance) VkRenderPassSampleLocationsBeginInfoEXT(); } }
extern "C" { void AcidSharp_symbols1450(void* instance, const VkRenderPassSampleLocationsBeginInfoEXT& _0) { new (instance) VkRenderPassSampleLocationsBeginInfoEXT(_0); } }
VkRenderPassSampleLocationsBeginInfoEXT& (VkRenderPassSampleLocationsBeginInfoEXT::*AcidSharp_symbols1451)(const VkRenderPassSampleLocationsBeginInfoEXT&) = &VkRenderPassSampleLocationsBeginInfoEXT::operator=;
VkRenderPassSampleLocationsBeginInfoEXT& (VkRenderPassSampleLocationsBeginInfoEXT::*AcidSharp_symbols1452)(VkRenderPassSampleLocationsBeginInfoEXT&&) = &VkRenderPassSampleLocationsBeginInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1453(VkRenderPassSampleLocationsBeginInfoEXT* instance) { instance->~VkRenderPassSampleLocationsBeginInfoEXT(); } }
extern "C" { void AcidSharp_symbols1454(void* instance) { new (instance) VkPipelineSampleLocationsStateCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1455(void* instance, const VkPipelineSampleLocationsStateCreateInfoEXT& _0) { new (instance) VkPipelineSampleLocationsStateCreateInfoEXT(_0); } }
VkPipelineSampleLocationsStateCreateInfoEXT& (VkPipelineSampleLocationsStateCreateInfoEXT::*AcidSharp_symbols1456)(const VkPipelineSampleLocationsStateCreateInfoEXT&) = &VkPipelineSampleLocationsStateCreateInfoEXT::operator=;
VkPipelineSampleLocationsStateCreateInfoEXT& (VkPipelineSampleLocationsStateCreateInfoEXT::*AcidSharp_symbols1457)(VkPipelineSampleLocationsStateCreateInfoEXT&&) = &VkPipelineSampleLocationsStateCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1458(VkPipelineSampleLocationsStateCreateInfoEXT* instance) { instance->~VkPipelineSampleLocationsStateCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1459(void* instance) { new (instance) VkPhysicalDeviceSampleLocationsPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1460(void* instance, const VkPhysicalDeviceSampleLocationsPropertiesEXT& _0) { new (instance) VkPhysicalDeviceSampleLocationsPropertiesEXT(_0); } }
VkPhysicalDeviceSampleLocationsPropertiesEXT& (VkPhysicalDeviceSampleLocationsPropertiesEXT::*AcidSharp_symbols1461)(const VkPhysicalDeviceSampleLocationsPropertiesEXT&) = &VkPhysicalDeviceSampleLocationsPropertiesEXT::operator=;
VkPhysicalDeviceSampleLocationsPropertiesEXT& (VkPhysicalDeviceSampleLocationsPropertiesEXT::*AcidSharp_symbols1462)(VkPhysicalDeviceSampleLocationsPropertiesEXT&&) = &VkPhysicalDeviceSampleLocationsPropertiesEXT::operator=;
extern "C" { void AcidSharp_symbols1463(VkPhysicalDeviceSampleLocationsPropertiesEXT* instance) { instance->~VkPhysicalDeviceSampleLocationsPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1464(void* instance) { new (instance) VkMultisamplePropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1465(void* instance, const VkMultisamplePropertiesEXT& _0) { new (instance) VkMultisamplePropertiesEXT(_0); } }
VkMultisamplePropertiesEXT& (VkMultisamplePropertiesEXT::*AcidSharp_symbols1466)(const VkMultisamplePropertiesEXT&) = &VkMultisamplePropertiesEXT::operator=;
VkMultisamplePropertiesEXT& (VkMultisamplePropertiesEXT::*AcidSharp_symbols1467)(VkMultisamplePropertiesEXT&&) = &VkMultisamplePropertiesEXT::operator=;
extern "C" { void AcidSharp_symbols1468(VkMultisamplePropertiesEXT* instance) { instance->~VkMultisamplePropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1469(void* instance) { new (instance) VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT(); } }
extern "C" { void AcidSharp_symbols1470(void* instance, const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& _0) { new (instance) VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT(_0); } }
VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& (VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT::*AcidSharp_symbols1471)(const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT&) = &VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT::operator=;
VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& (VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT::*AcidSharp_symbols1472)(VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT&&) = &VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT::operator=;
extern "C" { void AcidSharp_symbols1473(VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT* instance) { instance->~VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT(); } }
extern "C" { void AcidSharp_symbols1474(void* instance) { new (instance) VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1475(void* instance, const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& _0) { new (instance) VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT(_0); } }
VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& (VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::*AcidSharp_symbols1476)(const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT&) = &VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::operator=;
VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& (VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::*AcidSharp_symbols1477)(VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT&&) = &VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::operator=;
extern "C" { void AcidSharp_symbols1478(VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT* instance) { instance->~VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1479(void* instance) { new (instance) VkPipelineColorBlendAdvancedStateCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1480(void* instance, const VkPipelineColorBlendAdvancedStateCreateInfoEXT& _0) { new (instance) VkPipelineColorBlendAdvancedStateCreateInfoEXT(_0); } }
VkPipelineColorBlendAdvancedStateCreateInfoEXT& (VkPipelineColorBlendAdvancedStateCreateInfoEXT::*AcidSharp_symbols1481)(const VkPipelineColorBlendAdvancedStateCreateInfoEXT&) = &VkPipelineColorBlendAdvancedStateCreateInfoEXT::operator=;
VkPipelineColorBlendAdvancedStateCreateInfoEXT& (VkPipelineColorBlendAdvancedStateCreateInfoEXT::*AcidSharp_symbols1482)(VkPipelineColorBlendAdvancedStateCreateInfoEXT&&) = &VkPipelineColorBlendAdvancedStateCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1483(VkPipelineColorBlendAdvancedStateCreateInfoEXT* instance) { instance->~VkPipelineColorBlendAdvancedStateCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1484(void* instance) { new (instance) VkPipelineCoverageToColorStateCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1485(void* instance, const VkPipelineCoverageToColorStateCreateInfoNV& _0) { new (instance) VkPipelineCoverageToColorStateCreateInfoNV(_0); } }
VkPipelineCoverageToColorStateCreateInfoNV& (VkPipelineCoverageToColorStateCreateInfoNV::*AcidSharp_symbols1486)(const VkPipelineCoverageToColorStateCreateInfoNV&) = &VkPipelineCoverageToColorStateCreateInfoNV::operator=;
VkPipelineCoverageToColorStateCreateInfoNV& (VkPipelineCoverageToColorStateCreateInfoNV::*AcidSharp_symbols1487)(VkPipelineCoverageToColorStateCreateInfoNV&&) = &VkPipelineCoverageToColorStateCreateInfoNV::operator=;
extern "C" { void AcidSharp_symbols1488(VkPipelineCoverageToColorStateCreateInfoNV* instance) { instance->~VkPipelineCoverageToColorStateCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1489(void* instance) { new (instance) VkPipelineCoverageModulationStateCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1490(void* instance, const VkPipelineCoverageModulationStateCreateInfoNV& _0) { new (instance) VkPipelineCoverageModulationStateCreateInfoNV(_0); } }
VkPipelineCoverageModulationStateCreateInfoNV& (VkPipelineCoverageModulationStateCreateInfoNV::*AcidSharp_symbols1491)(const VkPipelineCoverageModulationStateCreateInfoNV&) = &VkPipelineCoverageModulationStateCreateInfoNV::operator=;
VkPipelineCoverageModulationStateCreateInfoNV& (VkPipelineCoverageModulationStateCreateInfoNV::*AcidSharp_symbols1492)(VkPipelineCoverageModulationStateCreateInfoNV&&) = &VkPipelineCoverageModulationStateCreateInfoNV::operator=;
extern "C" { void AcidSharp_symbols1493(VkPipelineCoverageModulationStateCreateInfoNV* instance) { instance->~VkPipelineCoverageModulationStateCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1494(void* instance) { new (instance) VkValidationCacheCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1495(void* instance, const VkValidationCacheCreateInfoEXT& _0) { new (instance) VkValidationCacheCreateInfoEXT(_0); } }
VkValidationCacheCreateInfoEXT& (VkValidationCacheCreateInfoEXT::*AcidSharp_symbols1496)(const VkValidationCacheCreateInfoEXT&) = &VkValidationCacheCreateInfoEXT::operator=;
VkValidationCacheCreateInfoEXT& (VkValidationCacheCreateInfoEXT::*AcidSharp_symbols1497)(VkValidationCacheCreateInfoEXT&&) = &VkValidationCacheCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1498(VkValidationCacheCreateInfoEXT* instance) { instance->~VkValidationCacheCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1499(void* instance) { new (instance) VkShaderModuleValidationCacheCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1500(void* instance, const VkShaderModuleValidationCacheCreateInfoEXT& _0) { new (instance) VkShaderModuleValidationCacheCreateInfoEXT(_0); } }
VkShaderModuleValidationCacheCreateInfoEXT& (VkShaderModuleValidationCacheCreateInfoEXT::*AcidSharp_symbols1501)(const VkShaderModuleValidationCacheCreateInfoEXT&) = &VkShaderModuleValidationCacheCreateInfoEXT::operator=;
VkShaderModuleValidationCacheCreateInfoEXT& (VkShaderModuleValidationCacheCreateInfoEXT::*AcidSharp_symbols1502)(VkShaderModuleValidationCacheCreateInfoEXT&&) = &VkShaderModuleValidationCacheCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1503(VkShaderModuleValidationCacheCreateInfoEXT* instance) { instance->~VkShaderModuleValidationCacheCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1504(void* instance) { new (instance) VkDescriptorSetLayoutBindingFlagsCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1505(void* instance, const VkDescriptorSetLayoutBindingFlagsCreateInfoEXT& _0) { new (instance) VkDescriptorSetLayoutBindingFlagsCreateInfoEXT(_0); } }
VkDescriptorSetLayoutBindingFlagsCreateInfoEXT& (VkDescriptorSetLayoutBindingFlagsCreateInfoEXT::*AcidSharp_symbols1506)(const VkDescriptorSetLayoutBindingFlagsCreateInfoEXT&) = &VkDescriptorSetLayoutBindingFlagsCreateInfoEXT::operator=;
VkDescriptorSetLayoutBindingFlagsCreateInfoEXT& (VkDescriptorSetLayoutBindingFlagsCreateInfoEXT::*AcidSharp_symbols1507)(VkDescriptorSetLayoutBindingFlagsCreateInfoEXT&&) = &VkDescriptorSetLayoutBindingFlagsCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1508(VkDescriptorSetLayoutBindingFlagsCreateInfoEXT* instance) { instance->~VkDescriptorSetLayoutBindingFlagsCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1509(void* instance) { new (instance) VkPhysicalDeviceDescriptorIndexingFeaturesEXT(); } }
extern "C" { void AcidSharp_symbols1510(void* instance, const VkPhysicalDeviceDescriptorIndexingFeaturesEXT& _0) { new (instance) VkPhysicalDeviceDescriptorIndexingFeaturesEXT(_0); } }
VkPhysicalDeviceDescriptorIndexingFeaturesEXT& (VkPhysicalDeviceDescriptorIndexingFeaturesEXT::*AcidSharp_symbols1511)(const VkPhysicalDeviceDescriptorIndexingFeaturesEXT&) = &VkPhysicalDeviceDescriptorIndexingFeaturesEXT::operator=;
VkPhysicalDeviceDescriptorIndexingFeaturesEXT& (VkPhysicalDeviceDescriptorIndexingFeaturesEXT::*AcidSharp_symbols1512)(VkPhysicalDeviceDescriptorIndexingFeaturesEXT&&) = &VkPhysicalDeviceDescriptorIndexingFeaturesEXT::operator=;
extern "C" { void AcidSharp_symbols1513(VkPhysicalDeviceDescriptorIndexingFeaturesEXT* instance) { instance->~VkPhysicalDeviceDescriptorIndexingFeaturesEXT(); } }
extern "C" { void AcidSharp_symbols1514(void* instance) { new (instance) VkPhysicalDeviceDescriptorIndexingPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1515(void* instance, const VkPhysicalDeviceDescriptorIndexingPropertiesEXT& _0) { new (instance) VkPhysicalDeviceDescriptorIndexingPropertiesEXT(_0); } }
VkPhysicalDeviceDescriptorIndexingPropertiesEXT& (VkPhysicalDeviceDescriptorIndexingPropertiesEXT::*AcidSharp_symbols1516)(const VkPhysicalDeviceDescriptorIndexingPropertiesEXT&) = &VkPhysicalDeviceDescriptorIndexingPropertiesEXT::operator=;
VkPhysicalDeviceDescriptorIndexingPropertiesEXT& (VkPhysicalDeviceDescriptorIndexingPropertiesEXT::*AcidSharp_symbols1517)(VkPhysicalDeviceDescriptorIndexingPropertiesEXT&&) = &VkPhysicalDeviceDescriptorIndexingPropertiesEXT::operator=;
extern "C" { void AcidSharp_symbols1518(VkPhysicalDeviceDescriptorIndexingPropertiesEXT* instance) { instance->~VkPhysicalDeviceDescriptorIndexingPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1519(void* instance) { new (instance) VkDescriptorSetVariableDescriptorCountAllocateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1520(void* instance, const VkDescriptorSetVariableDescriptorCountAllocateInfoEXT& _0) { new (instance) VkDescriptorSetVariableDescriptorCountAllocateInfoEXT(_0); } }
VkDescriptorSetVariableDescriptorCountAllocateInfoEXT& (VkDescriptorSetVariableDescriptorCountAllocateInfoEXT::*AcidSharp_symbols1521)(const VkDescriptorSetVariableDescriptorCountAllocateInfoEXT&) = &VkDescriptorSetVariableDescriptorCountAllocateInfoEXT::operator=;
VkDescriptorSetVariableDescriptorCountAllocateInfoEXT& (VkDescriptorSetVariableDescriptorCountAllocateInfoEXT::*AcidSharp_symbols1522)(VkDescriptorSetVariableDescriptorCountAllocateInfoEXT&&) = &VkDescriptorSetVariableDescriptorCountAllocateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1523(VkDescriptorSetVariableDescriptorCountAllocateInfoEXT* instance) { instance->~VkDescriptorSetVariableDescriptorCountAllocateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1524(void* instance) { new (instance) VkDescriptorSetVariableDescriptorCountLayoutSupportEXT(); } }
extern "C" { void AcidSharp_symbols1525(void* instance, const VkDescriptorSetVariableDescriptorCountLayoutSupportEXT& _0) { new (instance) VkDescriptorSetVariableDescriptorCountLayoutSupportEXT(_0); } }
VkDescriptorSetVariableDescriptorCountLayoutSupportEXT& (VkDescriptorSetVariableDescriptorCountLayoutSupportEXT::*AcidSharp_symbols1526)(const VkDescriptorSetVariableDescriptorCountLayoutSupportEXT&) = &VkDescriptorSetVariableDescriptorCountLayoutSupportEXT::operator=;
VkDescriptorSetVariableDescriptorCountLayoutSupportEXT& (VkDescriptorSetVariableDescriptorCountLayoutSupportEXT::*AcidSharp_symbols1527)(VkDescriptorSetVariableDescriptorCountLayoutSupportEXT&&) = &VkDescriptorSetVariableDescriptorCountLayoutSupportEXT::operator=;
extern "C" { void AcidSharp_symbols1528(VkDescriptorSetVariableDescriptorCountLayoutSupportEXT* instance) { instance->~VkDescriptorSetVariableDescriptorCountLayoutSupportEXT(); } }
extern "C" { void AcidSharp_symbols1529(void* instance) { new (instance) VkDeviceQueueGlobalPriorityCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1530(void* instance, const VkDeviceQueueGlobalPriorityCreateInfoEXT& _0) { new (instance) VkDeviceQueueGlobalPriorityCreateInfoEXT(_0); } }
VkDeviceQueueGlobalPriorityCreateInfoEXT& (VkDeviceQueueGlobalPriorityCreateInfoEXT::*AcidSharp_symbols1531)(const VkDeviceQueueGlobalPriorityCreateInfoEXT&) = &VkDeviceQueueGlobalPriorityCreateInfoEXT::operator=;
VkDeviceQueueGlobalPriorityCreateInfoEXT& (VkDeviceQueueGlobalPriorityCreateInfoEXT::*AcidSharp_symbols1532)(VkDeviceQueueGlobalPriorityCreateInfoEXT&&) = &VkDeviceQueueGlobalPriorityCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1533(VkDeviceQueueGlobalPriorityCreateInfoEXT* instance) { instance->~VkDeviceQueueGlobalPriorityCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1534(void* instance) { new (instance) VkImportMemoryHostPointerInfoEXT(); } }
extern "C" { void AcidSharp_symbols1535(void* instance, const VkImportMemoryHostPointerInfoEXT& _0) { new (instance) VkImportMemoryHostPointerInfoEXT(_0); } }
VkImportMemoryHostPointerInfoEXT& (VkImportMemoryHostPointerInfoEXT::*AcidSharp_symbols1536)(const VkImportMemoryHostPointerInfoEXT&) = &VkImportMemoryHostPointerInfoEXT::operator=;
VkImportMemoryHostPointerInfoEXT& (VkImportMemoryHostPointerInfoEXT::*AcidSharp_symbols1537)(VkImportMemoryHostPointerInfoEXT&&) = &VkImportMemoryHostPointerInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1538(VkImportMemoryHostPointerInfoEXT* instance) { instance->~VkImportMemoryHostPointerInfoEXT(); } }
extern "C" { void AcidSharp_symbols1539(void* instance) { new (instance) VkMemoryHostPointerPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1540(void* instance, const VkMemoryHostPointerPropertiesEXT& _0) { new (instance) VkMemoryHostPointerPropertiesEXT(_0); } }
VkMemoryHostPointerPropertiesEXT& (VkMemoryHostPointerPropertiesEXT::*AcidSharp_symbols1541)(const VkMemoryHostPointerPropertiesEXT&) = &VkMemoryHostPointerPropertiesEXT::operator=;
VkMemoryHostPointerPropertiesEXT& (VkMemoryHostPointerPropertiesEXT::*AcidSharp_symbols1542)(VkMemoryHostPointerPropertiesEXT&&) = &VkMemoryHostPointerPropertiesEXT::operator=;
extern "C" { void AcidSharp_symbols1543(VkMemoryHostPointerPropertiesEXT* instance) { instance->~VkMemoryHostPointerPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1544(void* instance) { new (instance) VkPhysicalDeviceExternalMemoryHostPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1545(void* instance, const VkPhysicalDeviceExternalMemoryHostPropertiesEXT& _0) { new (instance) VkPhysicalDeviceExternalMemoryHostPropertiesEXT(_0); } }
VkPhysicalDeviceExternalMemoryHostPropertiesEXT& (VkPhysicalDeviceExternalMemoryHostPropertiesEXT::*AcidSharp_symbols1546)(const VkPhysicalDeviceExternalMemoryHostPropertiesEXT&) = &VkPhysicalDeviceExternalMemoryHostPropertiesEXT::operator=;
VkPhysicalDeviceExternalMemoryHostPropertiesEXT& (VkPhysicalDeviceExternalMemoryHostPropertiesEXT::*AcidSharp_symbols1547)(VkPhysicalDeviceExternalMemoryHostPropertiesEXT&&) = &VkPhysicalDeviceExternalMemoryHostPropertiesEXT::operator=;
extern "C" { void AcidSharp_symbols1548(VkPhysicalDeviceExternalMemoryHostPropertiesEXT* instance) { instance->~VkPhysicalDeviceExternalMemoryHostPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1549(void* instance) { new (instance) VkPhysicalDeviceShaderCorePropertiesAMD(); } }
extern "C" { void AcidSharp_symbols1550(void* instance, const VkPhysicalDeviceShaderCorePropertiesAMD& _0) { new (instance) VkPhysicalDeviceShaderCorePropertiesAMD(_0); } }
VkPhysicalDeviceShaderCorePropertiesAMD& (VkPhysicalDeviceShaderCorePropertiesAMD::*AcidSharp_symbols1551)(const VkPhysicalDeviceShaderCorePropertiesAMD&) = &VkPhysicalDeviceShaderCorePropertiesAMD::operator=;
VkPhysicalDeviceShaderCorePropertiesAMD& (VkPhysicalDeviceShaderCorePropertiesAMD::*AcidSharp_symbols1552)(VkPhysicalDeviceShaderCorePropertiesAMD&&) = &VkPhysicalDeviceShaderCorePropertiesAMD::operator=;
extern "C" { void AcidSharp_symbols1553(VkPhysicalDeviceShaderCorePropertiesAMD* instance) { instance->~VkPhysicalDeviceShaderCorePropertiesAMD(); } }
extern "C" { void AcidSharp_symbols1554(void* instance) { new (instance) VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1555(void* instance, const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& _0) { new (instance) VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT(_0); } }
VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& (VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT::*AcidSharp_symbols1556)(const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT&) = &VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT::operator=;
VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& (VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT::*AcidSharp_symbols1557)(VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT&&) = &VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT::operator=;
extern "C" { void AcidSharp_symbols1558(VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT* instance) { instance->~VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1559(void* instance) { new (instance) VkVertexInputBindingDivisorDescriptionEXT(); } }
extern "C" { void AcidSharp_symbols1560(void* instance, const VkVertexInputBindingDivisorDescriptionEXT& _0) { new (instance) VkVertexInputBindingDivisorDescriptionEXT(_0); } }
VkVertexInputBindingDivisorDescriptionEXT& (VkVertexInputBindingDivisorDescriptionEXT::*AcidSharp_symbols1561)(const VkVertexInputBindingDivisorDescriptionEXT&) = &VkVertexInputBindingDivisorDescriptionEXT::operator=;
VkVertexInputBindingDivisorDescriptionEXT& (VkVertexInputBindingDivisorDescriptionEXT::*AcidSharp_symbols1562)(VkVertexInputBindingDivisorDescriptionEXT&&) = &VkVertexInputBindingDivisorDescriptionEXT::operator=;
extern "C" { void AcidSharp_symbols1563(VkVertexInputBindingDivisorDescriptionEXT* instance) { instance->~VkVertexInputBindingDivisorDescriptionEXT(); } }
extern "C" { void AcidSharp_symbols1564(void* instance) { new (instance) VkPipelineVertexInputDivisorStateCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1565(void* instance, const VkPipelineVertexInputDivisorStateCreateInfoEXT& _0) { new (instance) VkPipelineVertexInputDivisorStateCreateInfoEXT(_0); } }
VkPipelineVertexInputDivisorStateCreateInfoEXT& (VkPipelineVertexInputDivisorStateCreateInfoEXT::*AcidSharp_symbols1566)(const VkPipelineVertexInputDivisorStateCreateInfoEXT&) = &VkPipelineVertexInputDivisorStateCreateInfoEXT::operator=;
VkPipelineVertexInputDivisorStateCreateInfoEXT& (VkPipelineVertexInputDivisorStateCreateInfoEXT::*AcidSharp_symbols1567)(VkPipelineVertexInputDivisorStateCreateInfoEXT&&) = &VkPipelineVertexInputDivisorStateCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1568(VkPipelineVertexInputDivisorStateCreateInfoEXT* instance) { instance->~VkPipelineVertexInputDivisorStateCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1569(void* instance) { new (instance) VkQueueFamilyCheckpointPropertiesNV(); } }
extern "C" { void AcidSharp_symbols1570(void* instance, const VkQueueFamilyCheckpointPropertiesNV& _0) { new (instance) VkQueueFamilyCheckpointPropertiesNV(_0); } }
VkQueueFamilyCheckpointPropertiesNV& (VkQueueFamilyCheckpointPropertiesNV::*AcidSharp_symbols1571)(const VkQueueFamilyCheckpointPropertiesNV&) = &VkQueueFamilyCheckpointPropertiesNV::operator=;
VkQueueFamilyCheckpointPropertiesNV& (VkQueueFamilyCheckpointPropertiesNV::*AcidSharp_symbols1572)(VkQueueFamilyCheckpointPropertiesNV&&) = &VkQueueFamilyCheckpointPropertiesNV::operator=;
extern "C" { void AcidSharp_symbols1573(VkQueueFamilyCheckpointPropertiesNV* instance) { instance->~VkQueueFamilyCheckpointPropertiesNV(); } }
extern "C" { void AcidSharp_symbols1574(void* instance) { new (instance) VkCheckpointDataNV(); } }
extern "C" { void AcidSharp_symbols1575(void* instance, const VkCheckpointDataNV& _0) { new (instance) VkCheckpointDataNV(_0); } }
VkCheckpointDataNV& (VkCheckpointDataNV::*AcidSharp_symbols1576)(const VkCheckpointDataNV&) = &VkCheckpointDataNV::operator=;
VkCheckpointDataNV& (VkCheckpointDataNV::*AcidSharp_symbols1577)(VkCheckpointDataNV&&) = &VkCheckpointDataNV::operator=;
extern "C" { void AcidSharp_symbols1578(VkCheckpointDataNV* instance) { instance->~VkCheckpointDataNV(); } }
extern "C" { void AcidSharp_symbols1579(void* instance, const acid::CommandBuffer& _0) { new (instance) acid::CommandBuffer(_0); } }
extern "C" { void AcidSharp_symbols1580(void* instance) { new (instance) acid::Log(); } }
extern "C" { void AcidSharp_symbols1581(void* instance, const acid::Log& _0) { new (instance) acid::Log(_0); } }
extern "C" { void AcidSharp_symbols1582(acid::Log* instance) { instance->~Log(); } }
extern "C" { void AcidSharp_symbols1583(acid::IModule* instance) { instance->~IModule(); } }
extern "C" { void AcidSharp_symbols1584(void* instance, const acid::Delta& _0) { new (instance) acid::Delta(_0); } }
extern "C" { void AcidSharp_symbols1585(acid::Delta* instance) { instance->~Delta(); } }
extern "C" { void AcidSharp_symbols1586(void* instance, const acid::Timer& _0) { new (instance) acid::Timer(_0); } }
extern "C" { void AcidSharp_symbols1587(acid::Timer* instance) { instance->~Timer(); } }
extern "C" { void AcidSharp_symbols1588(void* instance, const acid::ModuleUpdater& _0) { new (instance) acid::ModuleUpdater(_0); } }
extern "C" { void AcidSharp_symbols1589(acid::ModuleUpdater* instance) { instance->~ModuleUpdater(); } }
extern "C" { void AcidSharp_symbols1590(acid::GraphicsStage* instance) { instance->~GraphicsStage(); } }
extern "C" { void AcidSharp_symbols1591(void* instance, const acid::GraphicsStage& _0) { new (instance) acid::GraphicsStage(_0); } }
extern "C" { void AcidSharp_symbols1592(acid::DescriptorType* instance) { instance->~DescriptorType(); } }
extern "C" { void AcidSharp_symbols1593(void* instance, const acid::DescriptorType& _0) { new (instance) acid::DescriptorType(_0); } }
extern "C" { void AcidSharp_symbols1594(acid::IPipeline* instance) { instance->~IPipeline(); } }
extern "C" { void AcidSharp_symbols1595(void* instance, const acid::DescriptorSet& _0) { new (instance) acid::DescriptorSet(_0); } }
extern "C" { void AcidSharp_symbols1596(void* instance, const acid::Buffer& _0) { new (instance) acid::Buffer(_0); } }
extern "C" { void AcidSharp_symbols1597(void* instance, const acid::IndexBuffer& _0) { new (instance) acid::IndexBuffer(_0); } }
extern "C" { void AcidSharp_symbols1598(void* instance, const acid::VertexBuffer& _0) { new (instance) acid::VertexBuffer(_0); } }
extern "C" { void AcidSharp_symbols1599(acid::IResource* instance) { instance->~IResource(); } }
extern "C" { void AcidSharp_symbols1600(acid::IVertex* instance) { instance->~IVertex(); } }
extern "C" { void AcidSharp_symbols1601(acid::Colour* instance) { instance->~Colour(); } }
extern "C" { void AcidSharp_symbols1602(acid::Vector2* instance) { instance->~Vector2(); } }
extern "C" { void AcidSharp_symbols1603(acid::VertexModel* instance) { instance->~VertexModel(); } }
extern "C" { void AcidSharp_symbols1604(acid::IComponent* instance) { instance->~IComponent(); } }
extern "C" { void AcidSharp_symbols1605(acid::VertexAnimated* instance) { instance->~VertexAnimated(); } }
extern "C" { void AcidSharp_symbols1606(acid::IEvent* instance) { instance->~IEvent(); } }
extern "C" { void AcidSharp_symbols1607(acid::IFile* instance) { instance->~IFile(); } }
extern "C" { void AcidSharp_symbols1608(acid::FontCharacter* instance) { instance->~FontCharacter(); } }
extern "C" { void AcidSharp_symbols1609(void* instance, const acid::FontCharacter& _0) { new (instance) acid::FontCharacter(_0); } }
extern "C" { void AcidSharp_symbols1610(acid::IDescriptor* instance) { instance->~IDescriptor(); } }
extern "C" { void AcidSharp_symbols1611(void* instance, const acid::Frustum& _0) { new (instance) acid::Frustum(_0); } }
extern "C" { void AcidSharp_symbols1612(acid::Frustum* instance) { instance->~Frustum(); } }
extern "C" { void AcidSharp_symbols1613(acid::Ray* instance) { instance->~Ray(); } }
extern "C" { void AcidSharp_symbols1614(acid::ICamera* instance) { instance->~ICamera(); } }
extern "C" { void AcidSharp_symbols1615(acid::IRenderer* instance) { instance->~IRenderer(); } }
extern "C" { void AcidSharp_symbols1616(acid::IDriver* instance) { instance->~IDriver(); } }
extern "C" { void AcidSharp_symbols1617(void* instance, const acid::PushHandler& _0) { new (instance) acid::PushHandler(_0); } }
extern "C" { void AcidSharp_symbols1618(acid::UiBound* instance) { instance->~UiBound(); } }
extern "C" { void AcidSharp_symbols1619(void* instance) { new (instance) acid::FileSystem(); } }
extern "C" { void AcidSharp_symbols1620(void* instance, const acid::FileSystem& _0) { new (instance) acid::FileSystem(_0); } }
extern "C" { void AcidSharp_symbols1621(acid::FileSystem* instance) { instance->~FileSystem(); } }
extern "C" { void AcidSharp_symbols1622(acid::IAxis* instance) { instance->~IAxis(); } }
extern "C" { void AcidSharp_symbols1623(acid::IButton* instance) { instance->~IButton(); } }
extern "C" { void AcidSharp_symbols1624(acid::Keyboard* instance) { instance->~Keyboard(); } }
extern "C" { void AcidSharp_symbols1625(acid::Fog* instance) { instance->~Fog(); } }
extern "C" { void AcidSharp_symbols1626(acid::Light* instance) { instance->~Light(); } }
extern "C" { void AcidSharp_symbols1627(acid::Attachment* instance) { instance->~Attachment(); } }
extern "C" { void AcidSharp_symbols1628(acid::IMaterial* instance) { instance->~IMaterial(); } }
extern "C" { void AcidSharp_symbols1629(acid::Matrix2* instance) { instance->~Matrix2(); } }
extern "C" { void AcidSharp_symbols1630(acid::Matrix3* instance) { instance->~Matrix3(); } }
extern "C" { void AcidSharp_symbols1631(acid::Transform* instance) { instance->~Transform(); } }
extern "C" { void AcidSharp_symbols1632(void* instance, const acid::SmoothFloat& _0) { new (instance) acid::SmoothFloat(_0); } }
extern "C" { void AcidSharp_symbols1633(acid::SmoothFloat* instance) { instance->~SmoothFloat(); } }
extern "C" { void AcidSharp_symbols1634(acid::DriverBounce* instance) { instance->~DriverBounce(); } }
extern "C" { void AcidSharp_symbols1635(acid::DriverConstant* instance) { instance->~DriverConstant(); } }
extern "C" { void AcidSharp_symbols1636(acid::DriverFade* instance) { instance->~DriverFade(); } }
extern "C" { void AcidSharp_symbols1637(acid::DriverLinear* instance) { instance->~DriverLinear(); } }
extern "C" { void AcidSharp_symbols1638(acid::DriverSinwave* instance) { instance->~DriverSinwave(); } }
extern "C" { void AcidSharp_symbols1639(acid::DriverSlide* instance) { instance->~DriverSlide(); } }
acid::ComponentCreate& (acid::ComponentCreate::*AcidSharp_symbols1640)(acid::ComponentCreate&&) = &acid::ComponentCreate::operator=;
extern "C" { void AcidSharp_symbols1641(void* instance) { new (instance) acid::ComponentCreate(); } }
acid::ComponentCreate& (acid::ComponentCreate::*AcidSharp_symbols1642)(const acid::ComponentCreate&) = &acid::ComponentCreate::operator=;
extern "C" { void AcidSharp_symbols1643(acid::ISpatialStructure* instance) { instance->~ISpatialStructure(); } }
acid::ParticleData& (acid::ParticleData::*AcidSharp_symbols1644)(acid::ParticleData&&) = &acid::ParticleData::operator=;
acid::ParticleData& (acid::ParticleData::*AcidSharp_symbols1645)(const acid::ParticleData&) = &acid::ParticleData::operator=;
extern "C" { void AcidSharp_symbols1646(acid::ParticleData* instance) { instance->~ParticleData(); } }
extern "C" { void AcidSharp_symbols1647(acid::ISpawnParticle* instance) { instance->~ISpawnParticle(); } }
extern "C" { void AcidSharp_symbols1648(acid::SpawnCircle* instance) { instance->~SpawnCircle(); } }
extern "C" { void AcidSharp_symbols1649(acid::SpawnLine* instance) { instance->~SpawnLine(); } }
extern "C" { void AcidSharp_symbols1650(acid::SpawnPoint* instance) { instance->~SpawnPoint(); } }
extern "C" { void AcidSharp_symbols1651(acid::SpawnSphere* instance) { instance->~SpawnSphere(); } }
extern "C" { void AcidSharp_symbols1652(acid::Collider* instance) { instance->~Collider(); } }
extern "C" { void AcidSharp_symbols1653(acid::Force* instance) { instance->~Force(); } }
extern "C" { void AcidSharp_symbols1654(acid::IPostPipeline* instance) { instance->~IPostPipeline(); } }
extern "C" { void AcidSharp_symbols1655(void* instance, const acid::InstanceBuffer& _0) { new (instance) acid::InstanceBuffer(_0); } }
extern "C" { void AcidSharp_symbols1656(void* instance, const acid::UiSelectorMouse& _0) { new (instance) acid::UiSelectorMouse(_0); } }
extern "C" { void AcidSharp_symbols1657(acid::UiSelectorMouse* instance) { instance->~UiSelectorMouse(); } }
acid::UiSelectorMouse& (acid::UiSelectorMouse::*AcidSharp_symbols1658)(const acid::UiSelectorMouse&) = &acid::UiSelectorMouse::operator=;
acid::UiSelectorMouse& (acid::UiSelectorMouse::*AcidSharp_symbols1659)(acid::UiSelectorMouse&&) = &acid::UiSelectorMouse::operator=;
extern "C" { void AcidSharp_symbols1660(void* instance) { new (instance) acid::UiSelectorMouse(); } }
extern "C" { void AcidSharp_symbols1661(void* instance, const acid::UiSelector& _0) { new (instance) acid::UiSelector(_0); } }
extern "C" { void AcidSharp_symbols1662(acid::UiSelector* instance) { instance->~UiSelector(); } }
extern "C" { void AcidSharp_symbols1663(void* instance) { new (instance) acid::Serialize(); } }
extern "C" { void AcidSharp_symbols1664(void* instance, const acid::Serialize& _0) { new (instance) acid::Serialize(_0); } }
extern "C" { void AcidSharp_symbols1665(acid::Serialize* instance) { instance->~Serialize(); } }
extern "C" { void AcidSharp_symbols1666(acid::ShadowBox* instance) { instance->~ShadowBox(); } }
extern "C" { void AcidSharp_symbols1667(acid::Shadows* instance) { instance->~Shadows(); } }
extern "C" { void AcidSharp_symbols1668(acid::UiInputDelay* instance) { instance->~UiInputDelay(); } }
extern "C" { void AcidSharp_symbols1669(void* instance, const acid::UiInputDelay& _0) { new (instance) acid::UiInputDelay(_0); } }
extern "C" { void AcidSharp_symbols1670(acid::IUiGrabber* instance) { instance->~IUiGrabber(); } }
extern "C" { void AcidSharp_symbols1671(acid::UiGrabberJoystick* instance) { instance->~UiGrabberJoystick(); } }
extern "C" { void AcidSharp_symbols1672(acid::UiGrabberKeyboard* instance) { instance->~UiGrabberKeyboard(); } }
extern "C" { void AcidSharp_symbols1673(acid::UiGrabberMouse* instance) { instance->~UiGrabberMouse(); } }
