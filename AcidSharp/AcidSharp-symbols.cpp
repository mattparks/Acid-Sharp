#include <acid\Acid.hpp>

extern "C" { void AcidSharp_symbols1(void* instance) { new (instance) acid::String(); } }
extern "C" { void AcidSharp_symbols2(void* instance, const acid::String& _0) { new (instance) acid::String(_0); } }
extern "C" { void AcidSharp_symbols3(acid::String* instance) { instance->~String(); } }
extern "C" { void AcidSharp_symbols4(void* instance, const acid::Animator& _0) { new (instance) acid::Animator(_0); } }
extern "C" { void AcidSharp_symbols5(acid::Animator* instance) { instance->~Animator(); } }
extern "C" { void AcidSharp_symbols6(void* instance) { new (instance) VkApplicationInfo(); } }
extern "C" { void AcidSharp_symbols7(void* instance, const VkApplicationInfo& _0) { new (instance) VkApplicationInfo(_0); } }
VkApplicationInfo& (VkApplicationInfo::*AcidSharp_symbols8)(const VkApplicationInfo&) = &VkApplicationInfo::operator=;
VkApplicationInfo& (VkApplicationInfo::*AcidSharp_symbols9)(VkApplicationInfo&&) = &VkApplicationInfo::operator=;
extern "C" { void AcidSharp_symbols10(VkApplicationInfo* instance) { instance->~VkApplicationInfo(); } }
extern "C" { void AcidSharp_symbols11(void* instance) { new (instance) VkInstanceCreateInfo(); } }
extern "C" { void AcidSharp_symbols12(void* instance, const VkInstanceCreateInfo& _0) { new (instance) VkInstanceCreateInfo(_0); } }
VkInstanceCreateInfo& (VkInstanceCreateInfo::*AcidSharp_symbols13)(const VkInstanceCreateInfo&) = &VkInstanceCreateInfo::operator=;
VkInstanceCreateInfo& (VkInstanceCreateInfo::*AcidSharp_symbols14)(VkInstanceCreateInfo&&) = &VkInstanceCreateInfo::operator=;
extern "C" { void AcidSharp_symbols15(VkInstanceCreateInfo* instance) { instance->~VkInstanceCreateInfo(); } }
extern "C" { void AcidSharp_symbols16(void* instance) { new (instance) VkAllocationCallbacks(); } }
extern "C" { void AcidSharp_symbols17(void* instance, const VkAllocationCallbacks& _0) { new (instance) VkAllocationCallbacks(_0); } }
VkAllocationCallbacks& (VkAllocationCallbacks::*AcidSharp_symbols18)(const VkAllocationCallbacks&) = &VkAllocationCallbacks::operator=;
VkAllocationCallbacks& (VkAllocationCallbacks::*AcidSharp_symbols19)(VkAllocationCallbacks&&) = &VkAllocationCallbacks::operator=;
extern "C" { void AcidSharp_symbols20(VkAllocationCallbacks* instance) { instance->~VkAllocationCallbacks(); } }
extern "C" { void AcidSharp_symbols21(void* instance, const VkPhysicalDeviceFeatures& _0) { new (instance) VkPhysicalDeviceFeatures(_0); } }
extern "C" { void AcidSharp_symbols22(VkPhysicalDeviceFeatures* instance) { instance->~VkPhysicalDeviceFeatures(); } }
VkPhysicalDeviceFeatures& (VkPhysicalDeviceFeatures::*AcidSharp_symbols23)(const VkPhysicalDeviceFeatures&) = &VkPhysicalDeviceFeatures::operator=;
VkPhysicalDeviceFeatures& (VkPhysicalDeviceFeatures::*AcidSharp_symbols24)(VkPhysicalDeviceFeatures&&) = &VkPhysicalDeviceFeatures::operator=;
extern "C" { void AcidSharp_symbols25(void* instance) { new (instance) VkPhysicalDeviceFeatures(); } }
extern "C" { void AcidSharp_symbols26(void* instance) { new (instance) VkFormatProperties(); } }
extern "C" { void AcidSharp_symbols27(void* instance, const VkFormatProperties& _0) { new (instance) VkFormatProperties(_0); } }
VkFormatProperties& (VkFormatProperties::*AcidSharp_symbols28)(const VkFormatProperties&) = &VkFormatProperties::operator=;
VkFormatProperties& (VkFormatProperties::*AcidSharp_symbols29)(VkFormatProperties&&) = &VkFormatProperties::operator=;
extern "C" { void AcidSharp_symbols30(VkFormatProperties* instance) { instance->~VkFormatProperties(); } }
extern "C" { void AcidSharp_symbols31(void* instance) { new (instance) VkExtent3D(); } }
extern "C" { void AcidSharp_symbols32(void* instance, const VkExtent3D& _0) { new (instance) VkExtent3D(_0); } }
VkExtent3D& (VkExtent3D::*AcidSharp_symbols33)(const VkExtent3D&) = &VkExtent3D::operator=;
VkExtent3D& (VkExtent3D::*AcidSharp_symbols34)(VkExtent3D&&) = &VkExtent3D::operator=;
extern "C" { void AcidSharp_symbols35(VkExtent3D* instance) { instance->~VkExtent3D(); } }
extern "C" { void AcidSharp_symbols36(void* instance) { new (instance) VkImageFormatProperties(); } }
extern "C" { void AcidSharp_symbols37(void* instance, const VkImageFormatProperties& _0) { new (instance) VkImageFormatProperties(_0); } }
VkImageFormatProperties& (VkImageFormatProperties::*AcidSharp_symbols38)(const VkImageFormatProperties&) = &VkImageFormatProperties::operator=;
VkImageFormatProperties& (VkImageFormatProperties::*AcidSharp_symbols39)(VkImageFormatProperties&&) = &VkImageFormatProperties::operator=;
extern "C" { void AcidSharp_symbols40(VkImageFormatProperties* instance) { instance->~VkImageFormatProperties(); } }
extern "C" { void AcidSharp_symbols41(void* instance, const VkPhysicalDeviceLimits& _0) { new (instance) VkPhysicalDeviceLimits(_0); } }
extern "C" { void AcidSharp_symbols42(VkPhysicalDeviceLimits* instance) { instance->~VkPhysicalDeviceLimits(); } }
VkPhysicalDeviceLimits& (VkPhysicalDeviceLimits::*AcidSharp_symbols43)(const VkPhysicalDeviceLimits&) = &VkPhysicalDeviceLimits::operator=;
VkPhysicalDeviceLimits& (VkPhysicalDeviceLimits::*AcidSharp_symbols44)(VkPhysicalDeviceLimits&&) = &VkPhysicalDeviceLimits::operator=;
extern "C" { void AcidSharp_symbols45(void* instance) { new (instance) VkPhysicalDeviceLimits(); } }
extern "C" { void AcidSharp_symbols46(void* instance, const VkPhysicalDeviceSparseProperties& _0) { new (instance) VkPhysicalDeviceSparseProperties(_0); } }
extern "C" { void AcidSharp_symbols47(VkPhysicalDeviceSparseProperties* instance) { instance->~VkPhysicalDeviceSparseProperties(); } }
VkPhysicalDeviceSparseProperties& (VkPhysicalDeviceSparseProperties::*AcidSharp_symbols48)(const VkPhysicalDeviceSparseProperties&) = &VkPhysicalDeviceSparseProperties::operator=;
VkPhysicalDeviceSparseProperties& (VkPhysicalDeviceSparseProperties::*AcidSharp_symbols49)(VkPhysicalDeviceSparseProperties&&) = &VkPhysicalDeviceSparseProperties::operator=;
extern "C" { void AcidSharp_symbols50(void* instance) { new (instance) VkPhysicalDeviceSparseProperties(); } }
extern "C" { void AcidSharp_symbols51(void* instance, const VkPhysicalDeviceProperties& _0) { new (instance) VkPhysicalDeviceProperties(_0); } }
extern "C" { void AcidSharp_symbols52(VkPhysicalDeviceProperties* instance) { instance->~VkPhysicalDeviceProperties(); } }
VkPhysicalDeviceProperties& (VkPhysicalDeviceProperties::*AcidSharp_symbols53)(const VkPhysicalDeviceProperties&) = &VkPhysicalDeviceProperties::operator=;
VkPhysicalDeviceProperties& (VkPhysicalDeviceProperties::*AcidSharp_symbols54)(VkPhysicalDeviceProperties&&) = &VkPhysicalDeviceProperties::operator=;
extern "C" { void AcidSharp_symbols55(void* instance) { new (instance) VkPhysicalDeviceProperties(); } }
extern "C" { void AcidSharp_symbols56(void* instance) { new (instance) VkQueueFamilyProperties(); } }
extern "C" { void AcidSharp_symbols57(void* instance, const VkQueueFamilyProperties& _0) { new (instance) VkQueueFamilyProperties(_0); } }
VkQueueFamilyProperties& (VkQueueFamilyProperties::*AcidSharp_symbols58)(const VkQueueFamilyProperties&) = &VkQueueFamilyProperties::operator=;
VkQueueFamilyProperties& (VkQueueFamilyProperties::*AcidSharp_symbols59)(VkQueueFamilyProperties&&) = &VkQueueFamilyProperties::operator=;
extern "C" { void AcidSharp_symbols60(VkQueueFamilyProperties* instance) { instance->~VkQueueFamilyProperties(); } }
extern "C" { void AcidSharp_symbols61(void* instance, const VkMemoryType& _0) { new (instance) VkMemoryType(_0); } }
extern "C" { void AcidSharp_symbols62(VkMemoryType* instance) { instance->~VkMemoryType(); } }
VkMemoryType& (VkMemoryType::*AcidSharp_symbols63)(const VkMemoryType&) = &VkMemoryType::operator=;
VkMemoryType& (VkMemoryType::*AcidSharp_symbols64)(VkMemoryType&&) = &VkMemoryType::operator=;
extern "C" { void AcidSharp_symbols65(void* instance) { new (instance) VkMemoryType(); } }
extern "C" { void AcidSharp_symbols66(void* instance, const VkMemoryHeap& _0) { new (instance) VkMemoryHeap(_0); } }
extern "C" { void AcidSharp_symbols67(VkMemoryHeap* instance) { instance->~VkMemoryHeap(); } }
VkMemoryHeap& (VkMemoryHeap::*AcidSharp_symbols68)(const VkMemoryHeap&) = &VkMemoryHeap::operator=;
VkMemoryHeap& (VkMemoryHeap::*AcidSharp_symbols69)(VkMemoryHeap&&) = &VkMemoryHeap::operator=;
extern "C" { void AcidSharp_symbols70(void* instance) { new (instance) VkMemoryHeap(); } }
extern "C" { void AcidSharp_symbols71(void* instance, const VkPhysicalDeviceMemoryProperties& _0) { new (instance) VkPhysicalDeviceMemoryProperties(_0); } }
extern "C" { void AcidSharp_symbols72(VkPhysicalDeviceMemoryProperties* instance) { instance->~VkPhysicalDeviceMemoryProperties(); } }
VkPhysicalDeviceMemoryProperties& (VkPhysicalDeviceMemoryProperties::*AcidSharp_symbols73)(const VkPhysicalDeviceMemoryProperties&) = &VkPhysicalDeviceMemoryProperties::operator=;
VkPhysicalDeviceMemoryProperties& (VkPhysicalDeviceMemoryProperties::*AcidSharp_symbols74)(VkPhysicalDeviceMemoryProperties&&) = &VkPhysicalDeviceMemoryProperties::operator=;
extern "C" { void AcidSharp_symbols75(void* instance) { new (instance) VkPhysicalDeviceMemoryProperties(); } }
extern "C" { void AcidSharp_symbols76(void* instance) { new (instance) VkDeviceQueueCreateInfo(); } }
extern "C" { void AcidSharp_symbols77(void* instance, const VkDeviceQueueCreateInfo& _0) { new (instance) VkDeviceQueueCreateInfo(_0); } }
VkDeviceQueueCreateInfo& (VkDeviceQueueCreateInfo::*AcidSharp_symbols78)(const VkDeviceQueueCreateInfo&) = &VkDeviceQueueCreateInfo::operator=;
VkDeviceQueueCreateInfo& (VkDeviceQueueCreateInfo::*AcidSharp_symbols79)(VkDeviceQueueCreateInfo&&) = &VkDeviceQueueCreateInfo::operator=;
extern "C" { void AcidSharp_symbols80(VkDeviceQueueCreateInfo* instance) { instance->~VkDeviceQueueCreateInfo(); } }
extern "C" { void AcidSharp_symbols81(void* instance) { new (instance) VkDeviceCreateInfo(); } }
extern "C" { void AcidSharp_symbols82(void* instance, const VkDeviceCreateInfo& _0) { new (instance) VkDeviceCreateInfo(_0); } }
VkDeviceCreateInfo& (VkDeviceCreateInfo::*AcidSharp_symbols83)(const VkDeviceCreateInfo&) = &VkDeviceCreateInfo::operator=;
VkDeviceCreateInfo& (VkDeviceCreateInfo::*AcidSharp_symbols84)(VkDeviceCreateInfo&&) = &VkDeviceCreateInfo::operator=;
extern "C" { void AcidSharp_symbols85(VkDeviceCreateInfo* instance) { instance->~VkDeviceCreateInfo(); } }
extern "C" { void AcidSharp_symbols86(void* instance) { new (instance) VkExtensionProperties(); } }
extern "C" { void AcidSharp_symbols87(void* instance, const VkExtensionProperties& _0) { new (instance) VkExtensionProperties(_0); } }
VkExtensionProperties& (VkExtensionProperties::*AcidSharp_symbols88)(const VkExtensionProperties&) = &VkExtensionProperties::operator=;
VkExtensionProperties& (VkExtensionProperties::*AcidSharp_symbols89)(VkExtensionProperties&&) = &VkExtensionProperties::operator=;
extern "C" { void AcidSharp_symbols90(VkExtensionProperties* instance) { instance->~VkExtensionProperties(); } }
extern "C" { void AcidSharp_symbols91(void* instance) { new (instance) VkLayerProperties(); } }
extern "C" { void AcidSharp_symbols92(void* instance, const VkLayerProperties& _0) { new (instance) VkLayerProperties(_0); } }
VkLayerProperties& (VkLayerProperties::*AcidSharp_symbols93)(const VkLayerProperties&) = &VkLayerProperties::operator=;
VkLayerProperties& (VkLayerProperties::*AcidSharp_symbols94)(VkLayerProperties&&) = &VkLayerProperties::operator=;
extern "C" { void AcidSharp_symbols95(VkLayerProperties* instance) { instance->~VkLayerProperties(); } }
extern "C" { void AcidSharp_symbols96(void* instance) { new (instance) VkSubmitInfo(); } }
extern "C" { void AcidSharp_symbols97(void* instance, const VkSubmitInfo& _0) { new (instance) VkSubmitInfo(_0); } }
VkSubmitInfo& (VkSubmitInfo::*AcidSharp_symbols98)(const VkSubmitInfo&) = &VkSubmitInfo::operator=;
VkSubmitInfo& (VkSubmitInfo::*AcidSharp_symbols99)(VkSubmitInfo&&) = &VkSubmitInfo::operator=;
extern "C" { void AcidSharp_symbols100(VkSubmitInfo* instance) { instance->~VkSubmitInfo(); } }
extern "C" { void AcidSharp_symbols101(void* instance) { new (instance) VkMemoryAllocateInfo(); } }
extern "C" { void AcidSharp_symbols102(void* instance, const VkMemoryAllocateInfo& _0) { new (instance) VkMemoryAllocateInfo(_0); } }
VkMemoryAllocateInfo& (VkMemoryAllocateInfo::*AcidSharp_symbols103)(const VkMemoryAllocateInfo&) = &VkMemoryAllocateInfo::operator=;
VkMemoryAllocateInfo& (VkMemoryAllocateInfo::*AcidSharp_symbols104)(VkMemoryAllocateInfo&&) = &VkMemoryAllocateInfo::operator=;
extern "C" { void AcidSharp_symbols105(VkMemoryAllocateInfo* instance) { instance->~VkMemoryAllocateInfo(); } }
extern "C" { void AcidSharp_symbols106(void* instance) { new (instance) VkMappedMemoryRange(); } }
extern "C" { void AcidSharp_symbols107(void* instance, const VkMappedMemoryRange& _0) { new (instance) VkMappedMemoryRange(_0); } }
VkMappedMemoryRange& (VkMappedMemoryRange::*AcidSharp_symbols108)(const VkMappedMemoryRange&) = &VkMappedMemoryRange::operator=;
VkMappedMemoryRange& (VkMappedMemoryRange::*AcidSharp_symbols109)(VkMappedMemoryRange&&) = &VkMappedMemoryRange::operator=;
extern "C" { void AcidSharp_symbols110(VkMappedMemoryRange* instance) { instance->~VkMappedMemoryRange(); } }
extern "C" { void AcidSharp_symbols111(void* instance) { new (instance) VkMemoryRequirements(); } }
extern "C" { void AcidSharp_symbols112(void* instance, const VkMemoryRequirements& _0) { new (instance) VkMemoryRequirements(_0); } }
VkMemoryRequirements& (VkMemoryRequirements::*AcidSharp_symbols113)(const VkMemoryRequirements&) = &VkMemoryRequirements::operator=;
VkMemoryRequirements& (VkMemoryRequirements::*AcidSharp_symbols114)(VkMemoryRequirements&&) = &VkMemoryRequirements::operator=;
extern "C" { void AcidSharp_symbols115(VkMemoryRequirements* instance) { instance->~VkMemoryRequirements(); } }
extern "C" { void AcidSharp_symbols116(void* instance) { new (instance) VkSparseImageFormatProperties(); } }
extern "C" { void AcidSharp_symbols117(void* instance, const VkSparseImageFormatProperties& _0) { new (instance) VkSparseImageFormatProperties(_0); } }
VkSparseImageFormatProperties& (VkSparseImageFormatProperties::*AcidSharp_symbols118)(const VkSparseImageFormatProperties&) = &VkSparseImageFormatProperties::operator=;
VkSparseImageFormatProperties& (VkSparseImageFormatProperties::*AcidSharp_symbols119)(VkSparseImageFormatProperties&&) = &VkSparseImageFormatProperties::operator=;
extern "C" { void AcidSharp_symbols120(VkSparseImageFormatProperties* instance) { instance->~VkSparseImageFormatProperties(); } }
extern "C" { void AcidSharp_symbols121(void* instance) { new (instance) VkSparseImageMemoryRequirements(); } }
extern "C" { void AcidSharp_symbols122(void* instance, const VkSparseImageMemoryRequirements& _0) { new (instance) VkSparseImageMemoryRequirements(_0); } }
VkSparseImageMemoryRequirements& (VkSparseImageMemoryRequirements::*AcidSharp_symbols123)(const VkSparseImageMemoryRequirements&) = &VkSparseImageMemoryRequirements::operator=;
VkSparseImageMemoryRequirements& (VkSparseImageMemoryRequirements::*AcidSharp_symbols124)(VkSparseImageMemoryRequirements&&) = &VkSparseImageMemoryRequirements::operator=;
extern "C" { void AcidSharp_symbols125(VkSparseImageMemoryRequirements* instance) { instance->~VkSparseImageMemoryRequirements(); } }
extern "C" { void AcidSharp_symbols126(void* instance) { new (instance) VkSparseMemoryBind(); } }
extern "C" { void AcidSharp_symbols127(void* instance, const VkSparseMemoryBind& _0) { new (instance) VkSparseMemoryBind(_0); } }
VkSparseMemoryBind& (VkSparseMemoryBind::*AcidSharp_symbols128)(const VkSparseMemoryBind&) = &VkSparseMemoryBind::operator=;
VkSparseMemoryBind& (VkSparseMemoryBind::*AcidSharp_symbols129)(VkSparseMemoryBind&&) = &VkSparseMemoryBind::operator=;
extern "C" { void AcidSharp_symbols130(VkSparseMemoryBind* instance) { instance->~VkSparseMemoryBind(); } }
extern "C" { void AcidSharp_symbols131(void* instance) { new (instance) VkSparseBufferMemoryBindInfo(); } }
extern "C" { void AcidSharp_symbols132(void* instance, const VkSparseBufferMemoryBindInfo& _0) { new (instance) VkSparseBufferMemoryBindInfo(_0); } }
VkSparseBufferMemoryBindInfo& (VkSparseBufferMemoryBindInfo::*AcidSharp_symbols133)(const VkSparseBufferMemoryBindInfo&) = &VkSparseBufferMemoryBindInfo::operator=;
VkSparseBufferMemoryBindInfo& (VkSparseBufferMemoryBindInfo::*AcidSharp_symbols134)(VkSparseBufferMemoryBindInfo&&) = &VkSparseBufferMemoryBindInfo::operator=;
extern "C" { void AcidSharp_symbols135(VkSparseBufferMemoryBindInfo* instance) { instance->~VkSparseBufferMemoryBindInfo(); } }
extern "C" { void AcidSharp_symbols136(void* instance) { new (instance) VkSparseImageOpaqueMemoryBindInfo(); } }
extern "C" { void AcidSharp_symbols137(void* instance, const VkSparseImageOpaqueMemoryBindInfo& _0) { new (instance) VkSparseImageOpaqueMemoryBindInfo(_0); } }
VkSparseImageOpaqueMemoryBindInfo& (VkSparseImageOpaqueMemoryBindInfo::*AcidSharp_symbols138)(const VkSparseImageOpaqueMemoryBindInfo&) = &VkSparseImageOpaqueMemoryBindInfo::operator=;
VkSparseImageOpaqueMemoryBindInfo& (VkSparseImageOpaqueMemoryBindInfo::*AcidSharp_symbols139)(VkSparseImageOpaqueMemoryBindInfo&&) = &VkSparseImageOpaqueMemoryBindInfo::operator=;
extern "C" { void AcidSharp_symbols140(VkSparseImageOpaqueMemoryBindInfo* instance) { instance->~VkSparseImageOpaqueMemoryBindInfo(); } }
extern "C" { void AcidSharp_symbols141(void* instance) { new (instance) VkImageSubresource(); } }
extern "C" { void AcidSharp_symbols142(void* instance, const VkImageSubresource& _0) { new (instance) VkImageSubresource(_0); } }
VkImageSubresource& (VkImageSubresource::*AcidSharp_symbols143)(const VkImageSubresource&) = &VkImageSubresource::operator=;
VkImageSubresource& (VkImageSubresource::*AcidSharp_symbols144)(VkImageSubresource&&) = &VkImageSubresource::operator=;
extern "C" { void AcidSharp_symbols145(VkImageSubresource* instance) { instance->~VkImageSubresource(); } }
extern "C" { void AcidSharp_symbols146(void* instance) { new (instance) VkOffset3D(); } }
extern "C" { void AcidSharp_symbols147(void* instance, const VkOffset3D& _0) { new (instance) VkOffset3D(_0); } }
VkOffset3D& (VkOffset3D::*AcidSharp_symbols148)(const VkOffset3D&) = &VkOffset3D::operator=;
VkOffset3D& (VkOffset3D::*AcidSharp_symbols149)(VkOffset3D&&) = &VkOffset3D::operator=;
extern "C" { void AcidSharp_symbols150(VkOffset3D* instance) { instance->~VkOffset3D(); } }
extern "C" { void AcidSharp_symbols151(void* instance) { new (instance) VkSparseImageMemoryBind(); } }
extern "C" { void AcidSharp_symbols152(void* instance, const VkSparseImageMemoryBind& _0) { new (instance) VkSparseImageMemoryBind(_0); } }
VkSparseImageMemoryBind& (VkSparseImageMemoryBind::*AcidSharp_symbols153)(const VkSparseImageMemoryBind&) = &VkSparseImageMemoryBind::operator=;
VkSparseImageMemoryBind& (VkSparseImageMemoryBind::*AcidSharp_symbols154)(VkSparseImageMemoryBind&&) = &VkSparseImageMemoryBind::operator=;
extern "C" { void AcidSharp_symbols155(VkSparseImageMemoryBind* instance) { instance->~VkSparseImageMemoryBind(); } }
extern "C" { void AcidSharp_symbols156(void* instance) { new (instance) VkSparseImageMemoryBindInfo(); } }
extern "C" { void AcidSharp_symbols157(void* instance, const VkSparseImageMemoryBindInfo& _0) { new (instance) VkSparseImageMemoryBindInfo(_0); } }
VkSparseImageMemoryBindInfo& (VkSparseImageMemoryBindInfo::*AcidSharp_symbols158)(const VkSparseImageMemoryBindInfo&) = &VkSparseImageMemoryBindInfo::operator=;
VkSparseImageMemoryBindInfo& (VkSparseImageMemoryBindInfo::*AcidSharp_symbols159)(VkSparseImageMemoryBindInfo&&) = &VkSparseImageMemoryBindInfo::operator=;
extern "C" { void AcidSharp_symbols160(VkSparseImageMemoryBindInfo* instance) { instance->~VkSparseImageMemoryBindInfo(); } }
extern "C" { void AcidSharp_symbols161(void* instance) { new (instance) VkBindSparseInfo(); } }
extern "C" { void AcidSharp_symbols162(void* instance, const VkBindSparseInfo& _0) { new (instance) VkBindSparseInfo(_0); } }
VkBindSparseInfo& (VkBindSparseInfo::*AcidSharp_symbols163)(const VkBindSparseInfo&) = &VkBindSparseInfo::operator=;
VkBindSparseInfo& (VkBindSparseInfo::*AcidSharp_symbols164)(VkBindSparseInfo&&) = &VkBindSparseInfo::operator=;
extern "C" { void AcidSharp_symbols165(VkBindSparseInfo* instance) { instance->~VkBindSparseInfo(); } }
extern "C" { void AcidSharp_symbols166(void* instance) { new (instance) VkFenceCreateInfo(); } }
extern "C" { void AcidSharp_symbols167(void* instance, const VkFenceCreateInfo& _0) { new (instance) VkFenceCreateInfo(_0); } }
VkFenceCreateInfo& (VkFenceCreateInfo::*AcidSharp_symbols168)(const VkFenceCreateInfo&) = &VkFenceCreateInfo::operator=;
VkFenceCreateInfo& (VkFenceCreateInfo::*AcidSharp_symbols169)(VkFenceCreateInfo&&) = &VkFenceCreateInfo::operator=;
extern "C" { void AcidSharp_symbols170(VkFenceCreateInfo* instance) { instance->~VkFenceCreateInfo(); } }
extern "C" { void AcidSharp_symbols171(void* instance) { new (instance) VkSemaphoreCreateInfo(); } }
extern "C" { void AcidSharp_symbols172(void* instance, const VkSemaphoreCreateInfo& _0) { new (instance) VkSemaphoreCreateInfo(_0); } }
VkSemaphoreCreateInfo& (VkSemaphoreCreateInfo::*AcidSharp_symbols173)(const VkSemaphoreCreateInfo&) = &VkSemaphoreCreateInfo::operator=;
VkSemaphoreCreateInfo& (VkSemaphoreCreateInfo::*AcidSharp_symbols174)(VkSemaphoreCreateInfo&&) = &VkSemaphoreCreateInfo::operator=;
extern "C" { void AcidSharp_symbols175(VkSemaphoreCreateInfo* instance) { instance->~VkSemaphoreCreateInfo(); } }
extern "C" { void AcidSharp_symbols176(void* instance) { new (instance) VkEventCreateInfo(); } }
extern "C" { void AcidSharp_symbols177(void* instance, const VkEventCreateInfo& _0) { new (instance) VkEventCreateInfo(_0); } }
VkEventCreateInfo& (VkEventCreateInfo::*AcidSharp_symbols178)(const VkEventCreateInfo&) = &VkEventCreateInfo::operator=;
VkEventCreateInfo& (VkEventCreateInfo::*AcidSharp_symbols179)(VkEventCreateInfo&&) = &VkEventCreateInfo::operator=;
extern "C" { void AcidSharp_symbols180(VkEventCreateInfo* instance) { instance->~VkEventCreateInfo(); } }
extern "C" { void AcidSharp_symbols181(void* instance) { new (instance) VkQueryPoolCreateInfo(); } }
extern "C" { void AcidSharp_symbols182(void* instance, const VkQueryPoolCreateInfo& _0) { new (instance) VkQueryPoolCreateInfo(_0); } }
VkQueryPoolCreateInfo& (VkQueryPoolCreateInfo::*AcidSharp_symbols183)(const VkQueryPoolCreateInfo&) = &VkQueryPoolCreateInfo::operator=;
VkQueryPoolCreateInfo& (VkQueryPoolCreateInfo::*AcidSharp_symbols184)(VkQueryPoolCreateInfo&&) = &VkQueryPoolCreateInfo::operator=;
extern "C" { void AcidSharp_symbols185(VkQueryPoolCreateInfo* instance) { instance->~VkQueryPoolCreateInfo(); } }
extern "C" { void AcidSharp_symbols186(void* instance) { new (instance) VkBufferCreateInfo(); } }
extern "C" { void AcidSharp_symbols187(void* instance, const VkBufferCreateInfo& _0) { new (instance) VkBufferCreateInfo(_0); } }
VkBufferCreateInfo& (VkBufferCreateInfo::*AcidSharp_symbols188)(const VkBufferCreateInfo&) = &VkBufferCreateInfo::operator=;
VkBufferCreateInfo& (VkBufferCreateInfo::*AcidSharp_symbols189)(VkBufferCreateInfo&&) = &VkBufferCreateInfo::operator=;
extern "C" { void AcidSharp_symbols190(VkBufferCreateInfo* instance) { instance->~VkBufferCreateInfo(); } }
extern "C" { void AcidSharp_symbols191(void* instance) { new (instance) VkBufferViewCreateInfo(); } }
extern "C" { void AcidSharp_symbols192(void* instance, const VkBufferViewCreateInfo& _0) { new (instance) VkBufferViewCreateInfo(_0); } }
VkBufferViewCreateInfo& (VkBufferViewCreateInfo::*AcidSharp_symbols193)(const VkBufferViewCreateInfo&) = &VkBufferViewCreateInfo::operator=;
VkBufferViewCreateInfo& (VkBufferViewCreateInfo::*AcidSharp_symbols194)(VkBufferViewCreateInfo&&) = &VkBufferViewCreateInfo::operator=;
extern "C" { void AcidSharp_symbols195(VkBufferViewCreateInfo* instance) { instance->~VkBufferViewCreateInfo(); } }
extern "C" { void AcidSharp_symbols196(void* instance) { new (instance) VkImageCreateInfo(); } }
extern "C" { void AcidSharp_symbols197(void* instance, const VkImageCreateInfo& _0) { new (instance) VkImageCreateInfo(_0); } }
VkImageCreateInfo& (VkImageCreateInfo::*AcidSharp_symbols198)(const VkImageCreateInfo&) = &VkImageCreateInfo::operator=;
VkImageCreateInfo& (VkImageCreateInfo::*AcidSharp_symbols199)(VkImageCreateInfo&&) = &VkImageCreateInfo::operator=;
extern "C" { void AcidSharp_symbols200(VkImageCreateInfo* instance) { instance->~VkImageCreateInfo(); } }
extern "C" { void AcidSharp_symbols201(void* instance) { new (instance) VkSubresourceLayout(); } }
extern "C" { void AcidSharp_symbols202(void* instance, const VkSubresourceLayout& _0) { new (instance) VkSubresourceLayout(_0); } }
VkSubresourceLayout& (VkSubresourceLayout::*AcidSharp_symbols203)(const VkSubresourceLayout&) = &VkSubresourceLayout::operator=;
VkSubresourceLayout& (VkSubresourceLayout::*AcidSharp_symbols204)(VkSubresourceLayout&&) = &VkSubresourceLayout::operator=;
extern "C" { void AcidSharp_symbols205(VkSubresourceLayout* instance) { instance->~VkSubresourceLayout(); } }
extern "C" { void AcidSharp_symbols206(void* instance) { new (instance) VkComponentMapping(); } }
extern "C" { void AcidSharp_symbols207(void* instance, const VkComponentMapping& _0) { new (instance) VkComponentMapping(_0); } }
VkComponentMapping& (VkComponentMapping::*AcidSharp_symbols208)(const VkComponentMapping&) = &VkComponentMapping::operator=;
VkComponentMapping& (VkComponentMapping::*AcidSharp_symbols209)(VkComponentMapping&&) = &VkComponentMapping::operator=;
extern "C" { void AcidSharp_symbols210(VkComponentMapping* instance) { instance->~VkComponentMapping(); } }
extern "C" { void AcidSharp_symbols211(void* instance) { new (instance) VkImageSubresourceRange(); } }
extern "C" { void AcidSharp_symbols212(void* instance, const VkImageSubresourceRange& _0) { new (instance) VkImageSubresourceRange(_0); } }
VkImageSubresourceRange& (VkImageSubresourceRange::*AcidSharp_symbols213)(const VkImageSubresourceRange&) = &VkImageSubresourceRange::operator=;
VkImageSubresourceRange& (VkImageSubresourceRange::*AcidSharp_symbols214)(VkImageSubresourceRange&&) = &VkImageSubresourceRange::operator=;
extern "C" { void AcidSharp_symbols215(VkImageSubresourceRange* instance) { instance->~VkImageSubresourceRange(); } }
extern "C" { void AcidSharp_symbols216(void* instance) { new (instance) VkImageViewCreateInfo(); } }
extern "C" { void AcidSharp_symbols217(void* instance, const VkImageViewCreateInfo& _0) { new (instance) VkImageViewCreateInfo(_0); } }
VkImageViewCreateInfo& (VkImageViewCreateInfo::*AcidSharp_symbols218)(const VkImageViewCreateInfo&) = &VkImageViewCreateInfo::operator=;
VkImageViewCreateInfo& (VkImageViewCreateInfo::*AcidSharp_symbols219)(VkImageViewCreateInfo&&) = &VkImageViewCreateInfo::operator=;
extern "C" { void AcidSharp_symbols220(VkImageViewCreateInfo* instance) { instance->~VkImageViewCreateInfo(); } }
extern "C" { void AcidSharp_symbols221(void* instance) { new (instance) VkShaderModuleCreateInfo(); } }
extern "C" { void AcidSharp_symbols222(void* instance, const VkShaderModuleCreateInfo& _0) { new (instance) VkShaderModuleCreateInfo(_0); } }
VkShaderModuleCreateInfo& (VkShaderModuleCreateInfo::*AcidSharp_symbols223)(const VkShaderModuleCreateInfo&) = &VkShaderModuleCreateInfo::operator=;
VkShaderModuleCreateInfo& (VkShaderModuleCreateInfo::*AcidSharp_symbols224)(VkShaderModuleCreateInfo&&) = &VkShaderModuleCreateInfo::operator=;
extern "C" { void AcidSharp_symbols225(VkShaderModuleCreateInfo* instance) { instance->~VkShaderModuleCreateInfo(); } }
extern "C" { void AcidSharp_symbols226(void* instance) { new (instance) VkPipelineCacheCreateInfo(); } }
extern "C" { void AcidSharp_symbols227(void* instance, const VkPipelineCacheCreateInfo& _0) { new (instance) VkPipelineCacheCreateInfo(_0); } }
VkPipelineCacheCreateInfo& (VkPipelineCacheCreateInfo::*AcidSharp_symbols228)(const VkPipelineCacheCreateInfo&) = &VkPipelineCacheCreateInfo::operator=;
VkPipelineCacheCreateInfo& (VkPipelineCacheCreateInfo::*AcidSharp_symbols229)(VkPipelineCacheCreateInfo&&) = &VkPipelineCacheCreateInfo::operator=;
extern "C" { void AcidSharp_symbols230(VkPipelineCacheCreateInfo* instance) { instance->~VkPipelineCacheCreateInfo(); } }
extern "C" { void AcidSharp_symbols231(void* instance) { new (instance) VkSpecializationMapEntry(); } }
extern "C" { void AcidSharp_symbols232(void* instance, const VkSpecializationMapEntry& _0) { new (instance) VkSpecializationMapEntry(_0); } }
VkSpecializationMapEntry& (VkSpecializationMapEntry::*AcidSharp_symbols233)(const VkSpecializationMapEntry&) = &VkSpecializationMapEntry::operator=;
VkSpecializationMapEntry& (VkSpecializationMapEntry::*AcidSharp_symbols234)(VkSpecializationMapEntry&&) = &VkSpecializationMapEntry::operator=;
extern "C" { void AcidSharp_symbols235(VkSpecializationMapEntry* instance) { instance->~VkSpecializationMapEntry(); } }
extern "C" { void AcidSharp_symbols236(void* instance) { new (instance) VkSpecializationInfo(); } }
extern "C" { void AcidSharp_symbols237(void* instance, const VkSpecializationInfo& _0) { new (instance) VkSpecializationInfo(_0); } }
VkSpecializationInfo& (VkSpecializationInfo::*AcidSharp_symbols238)(const VkSpecializationInfo&) = &VkSpecializationInfo::operator=;
VkSpecializationInfo& (VkSpecializationInfo::*AcidSharp_symbols239)(VkSpecializationInfo&&) = &VkSpecializationInfo::operator=;
extern "C" { void AcidSharp_symbols240(VkSpecializationInfo* instance) { instance->~VkSpecializationInfo(); } }
extern "C" { void AcidSharp_symbols241(void* instance) { new (instance) VkPipelineShaderStageCreateInfo(); } }
extern "C" { void AcidSharp_symbols242(void* instance, const VkPipelineShaderStageCreateInfo& _0) { new (instance) VkPipelineShaderStageCreateInfo(_0); } }
VkPipelineShaderStageCreateInfo& (VkPipelineShaderStageCreateInfo::*AcidSharp_symbols243)(const VkPipelineShaderStageCreateInfo&) = &VkPipelineShaderStageCreateInfo::operator=;
VkPipelineShaderStageCreateInfo& (VkPipelineShaderStageCreateInfo::*AcidSharp_symbols244)(VkPipelineShaderStageCreateInfo&&) = &VkPipelineShaderStageCreateInfo::operator=;
extern "C" { void AcidSharp_symbols245(VkPipelineShaderStageCreateInfo* instance) { instance->~VkPipelineShaderStageCreateInfo(); } }
VkVertexInputBindingDescription& (VkVertexInputBindingDescription::*AcidSharp_symbols246)(const VkVertexInputBindingDescription&) = &VkVertexInputBindingDescription::operator=;
VkVertexInputBindingDescription& (VkVertexInputBindingDescription::*AcidSharp_symbols247)(VkVertexInputBindingDescription&&) = &VkVertexInputBindingDescription::operator=;
extern "C" { void AcidSharp_symbols248(VkVertexInputBindingDescription* instance) { instance->~VkVertexInputBindingDescription(); } }
extern "C" { void AcidSharp_symbols249(void* instance) { new (instance) VkVertexInputBindingDescription(); } }
extern "C" { void AcidSharp_symbols250(void* instance, const VkVertexInputBindingDescription& _0) { new (instance) VkVertexInputBindingDescription(_0); } }
VkVertexInputAttributeDescription& (VkVertexInputAttributeDescription::*AcidSharp_symbols251)(const VkVertexInputAttributeDescription&) = &VkVertexInputAttributeDescription::operator=;
VkVertexInputAttributeDescription& (VkVertexInputAttributeDescription::*AcidSharp_symbols252)(VkVertexInputAttributeDescription&&) = &VkVertexInputAttributeDescription::operator=;
extern "C" { void AcidSharp_symbols253(VkVertexInputAttributeDescription* instance) { instance->~VkVertexInputAttributeDescription(); } }
extern "C" { void AcidSharp_symbols254(void* instance) { new (instance) VkVertexInputAttributeDescription(); } }
extern "C" { void AcidSharp_symbols255(void* instance, const VkVertexInputAttributeDescription& _0) { new (instance) VkVertexInputAttributeDescription(_0); } }
extern "C" { void AcidSharp_symbols256(void* instance) { new (instance) VkPipelineVertexInputStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols257(void* instance, const VkPipelineVertexInputStateCreateInfo& _0) { new (instance) VkPipelineVertexInputStateCreateInfo(_0); } }
VkPipelineVertexInputStateCreateInfo& (VkPipelineVertexInputStateCreateInfo::*AcidSharp_symbols258)(const VkPipelineVertexInputStateCreateInfo&) = &VkPipelineVertexInputStateCreateInfo::operator=;
VkPipelineVertexInputStateCreateInfo& (VkPipelineVertexInputStateCreateInfo::*AcidSharp_symbols259)(VkPipelineVertexInputStateCreateInfo&&) = &VkPipelineVertexInputStateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols260(VkPipelineVertexInputStateCreateInfo* instance) { instance->~VkPipelineVertexInputStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols261(void* instance) { new (instance) VkPipelineInputAssemblyStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols262(void* instance, const VkPipelineInputAssemblyStateCreateInfo& _0) { new (instance) VkPipelineInputAssemblyStateCreateInfo(_0); } }
VkPipelineInputAssemblyStateCreateInfo& (VkPipelineInputAssemblyStateCreateInfo::*AcidSharp_symbols263)(const VkPipelineInputAssemblyStateCreateInfo&) = &VkPipelineInputAssemblyStateCreateInfo::operator=;
VkPipelineInputAssemblyStateCreateInfo& (VkPipelineInputAssemblyStateCreateInfo::*AcidSharp_symbols264)(VkPipelineInputAssemblyStateCreateInfo&&) = &VkPipelineInputAssemblyStateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols265(VkPipelineInputAssemblyStateCreateInfo* instance) { instance->~VkPipelineInputAssemblyStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols266(void* instance) { new (instance) VkPipelineTessellationStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols267(void* instance, const VkPipelineTessellationStateCreateInfo& _0) { new (instance) VkPipelineTessellationStateCreateInfo(_0); } }
VkPipelineTessellationStateCreateInfo& (VkPipelineTessellationStateCreateInfo::*AcidSharp_symbols268)(const VkPipelineTessellationStateCreateInfo&) = &VkPipelineTessellationStateCreateInfo::operator=;
VkPipelineTessellationStateCreateInfo& (VkPipelineTessellationStateCreateInfo::*AcidSharp_symbols269)(VkPipelineTessellationStateCreateInfo&&) = &VkPipelineTessellationStateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols270(VkPipelineTessellationStateCreateInfo* instance) { instance->~VkPipelineTessellationStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols271(void* instance) { new (instance) VkViewport(); } }
extern "C" { void AcidSharp_symbols272(void* instance, const VkViewport& _0) { new (instance) VkViewport(_0); } }
VkViewport& (VkViewport::*AcidSharp_symbols273)(const VkViewport&) = &VkViewport::operator=;
VkViewport& (VkViewport::*AcidSharp_symbols274)(VkViewport&&) = &VkViewport::operator=;
extern "C" { void AcidSharp_symbols275(VkViewport* instance) { instance->~VkViewport(); } }
extern "C" { void AcidSharp_symbols276(void* instance) { new (instance) VkOffset2D(); } }
extern "C" { void AcidSharp_symbols277(void* instance, const VkOffset2D& _0) { new (instance) VkOffset2D(_0); } }
VkOffset2D& (VkOffset2D::*AcidSharp_symbols278)(const VkOffset2D&) = &VkOffset2D::operator=;
VkOffset2D& (VkOffset2D::*AcidSharp_symbols279)(VkOffset2D&&) = &VkOffset2D::operator=;
extern "C" { void AcidSharp_symbols280(VkOffset2D* instance) { instance->~VkOffset2D(); } }
extern "C" { void AcidSharp_symbols281(void* instance, const VkExtent2D& _0) { new (instance) VkExtent2D(_0); } }
extern "C" { void AcidSharp_symbols282(VkExtent2D* instance) { instance->~VkExtent2D(); } }
VkExtent2D& (VkExtent2D::*AcidSharp_symbols283)(const VkExtent2D&) = &VkExtent2D::operator=;
VkExtent2D& (VkExtent2D::*AcidSharp_symbols284)(VkExtent2D&&) = &VkExtent2D::operator=;
extern "C" { void AcidSharp_symbols285(void* instance) { new (instance) VkExtent2D(); } }
extern "C" { void AcidSharp_symbols286(void* instance) { new (instance) VkRect2D(); } }
extern "C" { void AcidSharp_symbols287(void* instance, const VkRect2D& _0) { new (instance) VkRect2D(_0); } }
VkRect2D& (VkRect2D::*AcidSharp_symbols288)(const VkRect2D&) = &VkRect2D::operator=;
VkRect2D& (VkRect2D::*AcidSharp_symbols289)(VkRect2D&&) = &VkRect2D::operator=;
extern "C" { void AcidSharp_symbols290(VkRect2D* instance) { instance->~VkRect2D(); } }
extern "C" { void AcidSharp_symbols291(void* instance) { new (instance) VkPipelineViewportStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols292(void* instance, const VkPipelineViewportStateCreateInfo& _0) { new (instance) VkPipelineViewportStateCreateInfo(_0); } }
VkPipelineViewportStateCreateInfo& (VkPipelineViewportStateCreateInfo::*AcidSharp_symbols293)(const VkPipelineViewportStateCreateInfo&) = &VkPipelineViewportStateCreateInfo::operator=;
VkPipelineViewportStateCreateInfo& (VkPipelineViewportStateCreateInfo::*AcidSharp_symbols294)(VkPipelineViewportStateCreateInfo&&) = &VkPipelineViewportStateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols295(VkPipelineViewportStateCreateInfo* instance) { instance->~VkPipelineViewportStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols296(void* instance) { new (instance) VkPipelineRasterizationStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols297(void* instance, const VkPipelineRasterizationStateCreateInfo& _0) { new (instance) VkPipelineRasterizationStateCreateInfo(_0); } }
VkPipelineRasterizationStateCreateInfo& (VkPipelineRasterizationStateCreateInfo::*AcidSharp_symbols298)(const VkPipelineRasterizationStateCreateInfo&) = &VkPipelineRasterizationStateCreateInfo::operator=;
VkPipelineRasterizationStateCreateInfo& (VkPipelineRasterizationStateCreateInfo::*AcidSharp_symbols299)(VkPipelineRasterizationStateCreateInfo&&) = &VkPipelineRasterizationStateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols300(VkPipelineRasterizationStateCreateInfo* instance) { instance->~VkPipelineRasterizationStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols301(void* instance) { new (instance) VkPipelineMultisampleStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols302(void* instance, const VkPipelineMultisampleStateCreateInfo& _0) { new (instance) VkPipelineMultisampleStateCreateInfo(_0); } }
VkPipelineMultisampleStateCreateInfo& (VkPipelineMultisampleStateCreateInfo::*AcidSharp_symbols303)(const VkPipelineMultisampleStateCreateInfo&) = &VkPipelineMultisampleStateCreateInfo::operator=;
VkPipelineMultisampleStateCreateInfo& (VkPipelineMultisampleStateCreateInfo::*AcidSharp_symbols304)(VkPipelineMultisampleStateCreateInfo&&) = &VkPipelineMultisampleStateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols305(VkPipelineMultisampleStateCreateInfo* instance) { instance->~VkPipelineMultisampleStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols306(void* instance) { new (instance) VkStencilOpState(); } }
extern "C" { void AcidSharp_symbols307(void* instance, const VkStencilOpState& _0) { new (instance) VkStencilOpState(_0); } }
VkStencilOpState& (VkStencilOpState::*AcidSharp_symbols308)(const VkStencilOpState&) = &VkStencilOpState::operator=;
VkStencilOpState& (VkStencilOpState::*AcidSharp_symbols309)(VkStencilOpState&&) = &VkStencilOpState::operator=;
extern "C" { void AcidSharp_symbols310(VkStencilOpState* instance) { instance->~VkStencilOpState(); } }
extern "C" { void AcidSharp_symbols311(void* instance) { new (instance) VkPipelineDepthStencilStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols312(void* instance, const VkPipelineDepthStencilStateCreateInfo& _0) { new (instance) VkPipelineDepthStencilStateCreateInfo(_0); } }
VkPipelineDepthStencilStateCreateInfo& (VkPipelineDepthStencilStateCreateInfo::*AcidSharp_symbols313)(const VkPipelineDepthStencilStateCreateInfo&) = &VkPipelineDepthStencilStateCreateInfo::operator=;
VkPipelineDepthStencilStateCreateInfo& (VkPipelineDepthStencilStateCreateInfo::*AcidSharp_symbols314)(VkPipelineDepthStencilStateCreateInfo&&) = &VkPipelineDepthStencilStateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols315(VkPipelineDepthStencilStateCreateInfo* instance) { instance->~VkPipelineDepthStencilStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols316(void* instance) { new (instance) VkPipelineColorBlendAttachmentState(); } }
extern "C" { void AcidSharp_symbols317(void* instance, const VkPipelineColorBlendAttachmentState& _0) { new (instance) VkPipelineColorBlendAttachmentState(_0); } }
VkPipelineColorBlendAttachmentState& (VkPipelineColorBlendAttachmentState::*AcidSharp_symbols318)(const VkPipelineColorBlendAttachmentState&) = &VkPipelineColorBlendAttachmentState::operator=;
VkPipelineColorBlendAttachmentState& (VkPipelineColorBlendAttachmentState::*AcidSharp_symbols319)(VkPipelineColorBlendAttachmentState&&) = &VkPipelineColorBlendAttachmentState::operator=;
extern "C" { void AcidSharp_symbols320(VkPipelineColorBlendAttachmentState* instance) { instance->~VkPipelineColorBlendAttachmentState(); } }
extern "C" { void AcidSharp_symbols321(void* instance) { new (instance) VkPipelineColorBlendStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols322(void* instance, const VkPipelineColorBlendStateCreateInfo& _0) { new (instance) VkPipelineColorBlendStateCreateInfo(_0); } }
VkPipelineColorBlendStateCreateInfo& (VkPipelineColorBlendStateCreateInfo::*AcidSharp_symbols323)(const VkPipelineColorBlendStateCreateInfo&) = &VkPipelineColorBlendStateCreateInfo::operator=;
VkPipelineColorBlendStateCreateInfo& (VkPipelineColorBlendStateCreateInfo::*AcidSharp_symbols324)(VkPipelineColorBlendStateCreateInfo&&) = &VkPipelineColorBlendStateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols325(VkPipelineColorBlendStateCreateInfo* instance) { instance->~VkPipelineColorBlendStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols326(void* instance) { new (instance) VkPipelineDynamicStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols327(void* instance, const VkPipelineDynamicStateCreateInfo& _0) { new (instance) VkPipelineDynamicStateCreateInfo(_0); } }
VkPipelineDynamicStateCreateInfo& (VkPipelineDynamicStateCreateInfo::*AcidSharp_symbols328)(const VkPipelineDynamicStateCreateInfo&) = &VkPipelineDynamicStateCreateInfo::operator=;
VkPipelineDynamicStateCreateInfo& (VkPipelineDynamicStateCreateInfo::*AcidSharp_symbols329)(VkPipelineDynamicStateCreateInfo&&) = &VkPipelineDynamicStateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols330(VkPipelineDynamicStateCreateInfo* instance) { instance->~VkPipelineDynamicStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols331(void* instance) { new (instance) VkGraphicsPipelineCreateInfo(); } }
extern "C" { void AcidSharp_symbols332(void* instance, const VkGraphicsPipelineCreateInfo& _0) { new (instance) VkGraphicsPipelineCreateInfo(_0); } }
VkGraphicsPipelineCreateInfo& (VkGraphicsPipelineCreateInfo::*AcidSharp_symbols333)(const VkGraphicsPipelineCreateInfo&) = &VkGraphicsPipelineCreateInfo::operator=;
VkGraphicsPipelineCreateInfo& (VkGraphicsPipelineCreateInfo::*AcidSharp_symbols334)(VkGraphicsPipelineCreateInfo&&) = &VkGraphicsPipelineCreateInfo::operator=;
extern "C" { void AcidSharp_symbols335(VkGraphicsPipelineCreateInfo* instance) { instance->~VkGraphicsPipelineCreateInfo(); } }
extern "C" { void AcidSharp_symbols336(void* instance) { new (instance) VkComputePipelineCreateInfo(); } }
extern "C" { void AcidSharp_symbols337(void* instance, const VkComputePipelineCreateInfo& _0) { new (instance) VkComputePipelineCreateInfo(_0); } }
VkComputePipelineCreateInfo& (VkComputePipelineCreateInfo::*AcidSharp_symbols338)(const VkComputePipelineCreateInfo&) = &VkComputePipelineCreateInfo::operator=;
VkComputePipelineCreateInfo& (VkComputePipelineCreateInfo::*AcidSharp_symbols339)(VkComputePipelineCreateInfo&&) = &VkComputePipelineCreateInfo::operator=;
extern "C" { void AcidSharp_symbols340(VkComputePipelineCreateInfo* instance) { instance->~VkComputePipelineCreateInfo(); } }
extern "C" { void AcidSharp_symbols341(void* instance) { new (instance) VkPushConstantRange(); } }
extern "C" { void AcidSharp_symbols342(void* instance, const VkPushConstantRange& _0) { new (instance) VkPushConstantRange(_0); } }
VkPushConstantRange& (VkPushConstantRange::*AcidSharp_symbols343)(const VkPushConstantRange&) = &VkPushConstantRange::operator=;
VkPushConstantRange& (VkPushConstantRange::*AcidSharp_symbols344)(VkPushConstantRange&&) = &VkPushConstantRange::operator=;
extern "C" { void AcidSharp_symbols345(VkPushConstantRange* instance) { instance->~VkPushConstantRange(); } }
extern "C" { void AcidSharp_symbols346(void* instance) { new (instance) VkPipelineLayoutCreateInfo(); } }
extern "C" { void AcidSharp_symbols347(void* instance, const VkPipelineLayoutCreateInfo& _0) { new (instance) VkPipelineLayoutCreateInfo(_0); } }
VkPipelineLayoutCreateInfo& (VkPipelineLayoutCreateInfo::*AcidSharp_symbols348)(const VkPipelineLayoutCreateInfo&) = &VkPipelineLayoutCreateInfo::operator=;
VkPipelineLayoutCreateInfo& (VkPipelineLayoutCreateInfo::*AcidSharp_symbols349)(VkPipelineLayoutCreateInfo&&) = &VkPipelineLayoutCreateInfo::operator=;
extern "C" { void AcidSharp_symbols350(VkPipelineLayoutCreateInfo* instance) { instance->~VkPipelineLayoutCreateInfo(); } }
extern "C" { void AcidSharp_symbols351(void* instance) { new (instance) VkSamplerCreateInfo(); } }
extern "C" { void AcidSharp_symbols352(void* instance, const VkSamplerCreateInfo& _0) { new (instance) VkSamplerCreateInfo(_0); } }
VkSamplerCreateInfo& (VkSamplerCreateInfo::*AcidSharp_symbols353)(const VkSamplerCreateInfo&) = &VkSamplerCreateInfo::operator=;
VkSamplerCreateInfo& (VkSamplerCreateInfo::*AcidSharp_symbols354)(VkSamplerCreateInfo&&) = &VkSamplerCreateInfo::operator=;
extern "C" { void AcidSharp_symbols355(VkSamplerCreateInfo* instance) { instance->~VkSamplerCreateInfo(); } }
extern "C" { void AcidSharp_symbols356(void* instance) { new (instance) VkDescriptorSetLayoutBinding(); } }
extern "C" { void AcidSharp_symbols357(void* instance, const VkDescriptorSetLayoutBinding& _0) { new (instance) VkDescriptorSetLayoutBinding(_0); } }
VkDescriptorSetLayoutBinding& (VkDescriptorSetLayoutBinding::*AcidSharp_symbols358)(const VkDescriptorSetLayoutBinding&) = &VkDescriptorSetLayoutBinding::operator=;
VkDescriptorSetLayoutBinding& (VkDescriptorSetLayoutBinding::*AcidSharp_symbols359)(VkDescriptorSetLayoutBinding&&) = &VkDescriptorSetLayoutBinding::operator=;
extern "C" { void AcidSharp_symbols360(VkDescriptorSetLayoutBinding* instance) { instance->~VkDescriptorSetLayoutBinding(); } }
extern "C" { void AcidSharp_symbols361(void* instance) { new (instance) VkDescriptorSetLayoutCreateInfo(); } }
extern "C" { void AcidSharp_symbols362(void* instance, const VkDescriptorSetLayoutCreateInfo& _0) { new (instance) VkDescriptorSetLayoutCreateInfo(_0); } }
VkDescriptorSetLayoutCreateInfo& (VkDescriptorSetLayoutCreateInfo::*AcidSharp_symbols363)(const VkDescriptorSetLayoutCreateInfo&) = &VkDescriptorSetLayoutCreateInfo::operator=;
VkDescriptorSetLayoutCreateInfo& (VkDescriptorSetLayoutCreateInfo::*AcidSharp_symbols364)(VkDescriptorSetLayoutCreateInfo&&) = &VkDescriptorSetLayoutCreateInfo::operator=;
extern "C" { void AcidSharp_symbols365(VkDescriptorSetLayoutCreateInfo* instance) { instance->~VkDescriptorSetLayoutCreateInfo(); } }
extern "C" { void AcidSharp_symbols366(void* instance) { new (instance) VkDescriptorPoolSize(); } }
extern "C" { void AcidSharp_symbols367(void* instance, const VkDescriptorPoolSize& _0) { new (instance) VkDescriptorPoolSize(_0); } }
VkDescriptorPoolSize& (VkDescriptorPoolSize::*AcidSharp_symbols368)(const VkDescriptorPoolSize&) = &VkDescriptorPoolSize::operator=;
VkDescriptorPoolSize& (VkDescriptorPoolSize::*AcidSharp_symbols369)(VkDescriptorPoolSize&&) = &VkDescriptorPoolSize::operator=;
extern "C" { void AcidSharp_symbols370(VkDescriptorPoolSize* instance) { instance->~VkDescriptorPoolSize(); } }
extern "C" { void AcidSharp_symbols371(void* instance) { new (instance) VkDescriptorPoolCreateInfo(); } }
extern "C" { void AcidSharp_symbols372(void* instance, const VkDescriptorPoolCreateInfo& _0) { new (instance) VkDescriptorPoolCreateInfo(_0); } }
VkDescriptorPoolCreateInfo& (VkDescriptorPoolCreateInfo::*AcidSharp_symbols373)(const VkDescriptorPoolCreateInfo&) = &VkDescriptorPoolCreateInfo::operator=;
VkDescriptorPoolCreateInfo& (VkDescriptorPoolCreateInfo::*AcidSharp_symbols374)(VkDescriptorPoolCreateInfo&&) = &VkDescriptorPoolCreateInfo::operator=;
extern "C" { void AcidSharp_symbols375(VkDescriptorPoolCreateInfo* instance) { instance->~VkDescriptorPoolCreateInfo(); } }
extern "C" { void AcidSharp_symbols376(void* instance) { new (instance) VkDescriptorSetAllocateInfo(); } }
extern "C" { void AcidSharp_symbols377(void* instance, const VkDescriptorSetAllocateInfo& _0) { new (instance) VkDescriptorSetAllocateInfo(_0); } }
VkDescriptorSetAllocateInfo& (VkDescriptorSetAllocateInfo::*AcidSharp_symbols378)(const VkDescriptorSetAllocateInfo&) = &VkDescriptorSetAllocateInfo::operator=;
VkDescriptorSetAllocateInfo& (VkDescriptorSetAllocateInfo::*AcidSharp_symbols379)(VkDescriptorSetAllocateInfo&&) = &VkDescriptorSetAllocateInfo::operator=;
extern "C" { void AcidSharp_symbols380(VkDescriptorSetAllocateInfo* instance) { instance->~VkDescriptorSetAllocateInfo(); } }
extern "C" { void AcidSharp_symbols381(void* instance) { new (instance) VkDescriptorImageInfo(); } }
extern "C" { void AcidSharp_symbols382(void* instance, const VkDescriptorImageInfo& _0) { new (instance) VkDescriptorImageInfo(_0); } }
VkDescriptorImageInfo& (VkDescriptorImageInfo::*AcidSharp_symbols383)(const VkDescriptorImageInfo&) = &VkDescriptorImageInfo::operator=;
VkDescriptorImageInfo& (VkDescriptorImageInfo::*AcidSharp_symbols384)(VkDescriptorImageInfo&&) = &VkDescriptorImageInfo::operator=;
extern "C" { void AcidSharp_symbols385(VkDescriptorImageInfo* instance) { instance->~VkDescriptorImageInfo(); } }
extern "C" { void AcidSharp_symbols386(void* instance, const VkDescriptorBufferInfo& _0) { new (instance) VkDescriptorBufferInfo(_0); } }
extern "C" { void AcidSharp_symbols387(VkDescriptorBufferInfo* instance) { instance->~VkDescriptorBufferInfo(); } }
VkDescriptorBufferInfo& (VkDescriptorBufferInfo::*AcidSharp_symbols388)(const VkDescriptorBufferInfo&) = &VkDescriptorBufferInfo::operator=;
VkDescriptorBufferInfo& (VkDescriptorBufferInfo::*AcidSharp_symbols389)(VkDescriptorBufferInfo&&) = &VkDescriptorBufferInfo::operator=;
extern "C" { void AcidSharp_symbols390(void* instance) { new (instance) VkDescriptorBufferInfo(); } }
extern "C" { void AcidSharp_symbols391(void* instance) { new (instance) VkWriteDescriptorSet(); } }
extern "C" { void AcidSharp_symbols392(void* instance, const VkWriteDescriptorSet& _0) { new (instance) VkWriteDescriptorSet(_0); } }
VkWriteDescriptorSet& (VkWriteDescriptorSet::*AcidSharp_symbols393)(const VkWriteDescriptorSet&) = &VkWriteDescriptorSet::operator=;
VkWriteDescriptorSet& (VkWriteDescriptorSet::*AcidSharp_symbols394)(VkWriteDescriptorSet&&) = &VkWriteDescriptorSet::operator=;
extern "C" { void AcidSharp_symbols395(VkWriteDescriptorSet* instance) { instance->~VkWriteDescriptorSet(); } }
extern "C" { void AcidSharp_symbols396(void* instance) { new (instance) VkCopyDescriptorSet(); } }
extern "C" { void AcidSharp_symbols397(void* instance, const VkCopyDescriptorSet& _0) { new (instance) VkCopyDescriptorSet(_0); } }
VkCopyDescriptorSet& (VkCopyDescriptorSet::*AcidSharp_symbols398)(const VkCopyDescriptorSet&) = &VkCopyDescriptorSet::operator=;
VkCopyDescriptorSet& (VkCopyDescriptorSet::*AcidSharp_symbols399)(VkCopyDescriptorSet&&) = &VkCopyDescriptorSet::operator=;
extern "C" { void AcidSharp_symbols400(VkCopyDescriptorSet* instance) { instance->~VkCopyDescriptorSet(); } }
extern "C" { void AcidSharp_symbols401(void* instance) { new (instance) VkFramebufferCreateInfo(); } }
extern "C" { void AcidSharp_symbols402(void* instance, const VkFramebufferCreateInfo& _0) { new (instance) VkFramebufferCreateInfo(_0); } }
VkFramebufferCreateInfo& (VkFramebufferCreateInfo::*AcidSharp_symbols403)(const VkFramebufferCreateInfo&) = &VkFramebufferCreateInfo::operator=;
VkFramebufferCreateInfo& (VkFramebufferCreateInfo::*AcidSharp_symbols404)(VkFramebufferCreateInfo&&) = &VkFramebufferCreateInfo::operator=;
extern "C" { void AcidSharp_symbols405(VkFramebufferCreateInfo* instance) { instance->~VkFramebufferCreateInfo(); } }
extern "C" { void AcidSharp_symbols406(void* instance) { new (instance) VkAttachmentDescription(); } }
extern "C" { void AcidSharp_symbols407(void* instance, const VkAttachmentDescription& _0) { new (instance) VkAttachmentDescription(_0); } }
VkAttachmentDescription& (VkAttachmentDescription::*AcidSharp_symbols408)(const VkAttachmentDescription&) = &VkAttachmentDescription::operator=;
VkAttachmentDescription& (VkAttachmentDescription::*AcidSharp_symbols409)(VkAttachmentDescription&&) = &VkAttachmentDescription::operator=;
extern "C" { void AcidSharp_symbols410(VkAttachmentDescription* instance) { instance->~VkAttachmentDescription(); } }
extern "C" { void AcidSharp_symbols411(void* instance) { new (instance) VkAttachmentReference(); } }
extern "C" { void AcidSharp_symbols412(void* instance, const VkAttachmentReference& _0) { new (instance) VkAttachmentReference(_0); } }
VkAttachmentReference& (VkAttachmentReference::*AcidSharp_symbols413)(const VkAttachmentReference&) = &VkAttachmentReference::operator=;
VkAttachmentReference& (VkAttachmentReference::*AcidSharp_symbols414)(VkAttachmentReference&&) = &VkAttachmentReference::operator=;
extern "C" { void AcidSharp_symbols415(VkAttachmentReference* instance) { instance->~VkAttachmentReference(); } }
extern "C" { void AcidSharp_symbols416(void* instance) { new (instance) VkSubpassDescription(); } }
extern "C" { void AcidSharp_symbols417(void* instance, const VkSubpassDescription& _0) { new (instance) VkSubpassDescription(_0); } }
VkSubpassDescription& (VkSubpassDescription::*AcidSharp_symbols418)(const VkSubpassDescription&) = &VkSubpassDescription::operator=;
VkSubpassDescription& (VkSubpassDescription::*AcidSharp_symbols419)(VkSubpassDescription&&) = &VkSubpassDescription::operator=;
extern "C" { void AcidSharp_symbols420(VkSubpassDescription* instance) { instance->~VkSubpassDescription(); } }
extern "C" { void AcidSharp_symbols421(void* instance) { new (instance) VkSubpassDependency(); } }
extern "C" { void AcidSharp_symbols422(void* instance, const VkSubpassDependency& _0) { new (instance) VkSubpassDependency(_0); } }
VkSubpassDependency& (VkSubpassDependency::*AcidSharp_symbols423)(const VkSubpassDependency&) = &VkSubpassDependency::operator=;
VkSubpassDependency& (VkSubpassDependency::*AcidSharp_symbols424)(VkSubpassDependency&&) = &VkSubpassDependency::operator=;
extern "C" { void AcidSharp_symbols425(VkSubpassDependency* instance) { instance->~VkSubpassDependency(); } }
extern "C" { void AcidSharp_symbols426(void* instance) { new (instance) VkRenderPassCreateInfo(); } }
extern "C" { void AcidSharp_symbols427(void* instance, const VkRenderPassCreateInfo& _0) { new (instance) VkRenderPassCreateInfo(_0); } }
VkRenderPassCreateInfo& (VkRenderPassCreateInfo::*AcidSharp_symbols428)(const VkRenderPassCreateInfo&) = &VkRenderPassCreateInfo::operator=;
VkRenderPassCreateInfo& (VkRenderPassCreateInfo::*AcidSharp_symbols429)(VkRenderPassCreateInfo&&) = &VkRenderPassCreateInfo::operator=;
extern "C" { void AcidSharp_symbols430(VkRenderPassCreateInfo* instance) { instance->~VkRenderPassCreateInfo(); } }
extern "C" { void AcidSharp_symbols431(void* instance) { new (instance) VkCommandPoolCreateInfo(); } }
extern "C" { void AcidSharp_symbols432(void* instance, const VkCommandPoolCreateInfo& _0) { new (instance) VkCommandPoolCreateInfo(_0); } }
VkCommandPoolCreateInfo& (VkCommandPoolCreateInfo::*AcidSharp_symbols433)(const VkCommandPoolCreateInfo&) = &VkCommandPoolCreateInfo::operator=;
VkCommandPoolCreateInfo& (VkCommandPoolCreateInfo::*AcidSharp_symbols434)(VkCommandPoolCreateInfo&&) = &VkCommandPoolCreateInfo::operator=;
extern "C" { void AcidSharp_symbols435(VkCommandPoolCreateInfo* instance) { instance->~VkCommandPoolCreateInfo(); } }
extern "C" { void AcidSharp_symbols436(void* instance) { new (instance) VkCommandBufferAllocateInfo(); } }
extern "C" { void AcidSharp_symbols437(void* instance, const VkCommandBufferAllocateInfo& _0) { new (instance) VkCommandBufferAllocateInfo(_0); } }
VkCommandBufferAllocateInfo& (VkCommandBufferAllocateInfo::*AcidSharp_symbols438)(const VkCommandBufferAllocateInfo&) = &VkCommandBufferAllocateInfo::operator=;
VkCommandBufferAllocateInfo& (VkCommandBufferAllocateInfo::*AcidSharp_symbols439)(VkCommandBufferAllocateInfo&&) = &VkCommandBufferAllocateInfo::operator=;
extern "C" { void AcidSharp_symbols440(VkCommandBufferAllocateInfo* instance) { instance->~VkCommandBufferAllocateInfo(); } }
extern "C" { void AcidSharp_symbols441(void* instance) { new (instance) VkCommandBufferInheritanceInfo(); } }
extern "C" { void AcidSharp_symbols442(void* instance, const VkCommandBufferInheritanceInfo& _0) { new (instance) VkCommandBufferInheritanceInfo(_0); } }
VkCommandBufferInheritanceInfo& (VkCommandBufferInheritanceInfo::*AcidSharp_symbols443)(const VkCommandBufferInheritanceInfo&) = &VkCommandBufferInheritanceInfo::operator=;
VkCommandBufferInheritanceInfo& (VkCommandBufferInheritanceInfo::*AcidSharp_symbols444)(VkCommandBufferInheritanceInfo&&) = &VkCommandBufferInheritanceInfo::operator=;
extern "C" { void AcidSharp_symbols445(VkCommandBufferInheritanceInfo* instance) { instance->~VkCommandBufferInheritanceInfo(); } }
extern "C" { void AcidSharp_symbols446(void* instance) { new (instance) VkCommandBufferBeginInfo(); } }
extern "C" { void AcidSharp_symbols447(void* instance, const VkCommandBufferBeginInfo& _0) { new (instance) VkCommandBufferBeginInfo(_0); } }
VkCommandBufferBeginInfo& (VkCommandBufferBeginInfo::*AcidSharp_symbols448)(const VkCommandBufferBeginInfo&) = &VkCommandBufferBeginInfo::operator=;
VkCommandBufferBeginInfo& (VkCommandBufferBeginInfo::*AcidSharp_symbols449)(VkCommandBufferBeginInfo&&) = &VkCommandBufferBeginInfo::operator=;
extern "C" { void AcidSharp_symbols450(VkCommandBufferBeginInfo* instance) { instance->~VkCommandBufferBeginInfo(); } }
extern "C" { void AcidSharp_symbols451(void* instance) { new (instance) VkBufferCopy(); } }
extern "C" { void AcidSharp_symbols452(void* instance, const VkBufferCopy& _0) { new (instance) VkBufferCopy(_0); } }
VkBufferCopy& (VkBufferCopy::*AcidSharp_symbols453)(const VkBufferCopy&) = &VkBufferCopy::operator=;
VkBufferCopy& (VkBufferCopy::*AcidSharp_symbols454)(VkBufferCopy&&) = &VkBufferCopy::operator=;
extern "C" { void AcidSharp_symbols455(VkBufferCopy* instance) { instance->~VkBufferCopy(); } }
extern "C" { void AcidSharp_symbols456(void* instance) { new (instance) VkImageSubresourceLayers(); } }
extern "C" { void AcidSharp_symbols457(void* instance, const VkImageSubresourceLayers& _0) { new (instance) VkImageSubresourceLayers(_0); } }
VkImageSubresourceLayers& (VkImageSubresourceLayers::*AcidSharp_symbols458)(const VkImageSubresourceLayers&) = &VkImageSubresourceLayers::operator=;
VkImageSubresourceLayers& (VkImageSubresourceLayers::*AcidSharp_symbols459)(VkImageSubresourceLayers&&) = &VkImageSubresourceLayers::operator=;
extern "C" { void AcidSharp_symbols460(VkImageSubresourceLayers* instance) { instance->~VkImageSubresourceLayers(); } }
extern "C" { void AcidSharp_symbols461(void* instance) { new (instance) VkImageCopy(); } }
extern "C" { void AcidSharp_symbols462(void* instance, const VkImageCopy& _0) { new (instance) VkImageCopy(_0); } }
VkImageCopy& (VkImageCopy::*AcidSharp_symbols463)(const VkImageCopy&) = &VkImageCopy::operator=;
VkImageCopy& (VkImageCopy::*AcidSharp_symbols464)(VkImageCopy&&) = &VkImageCopy::operator=;
extern "C" { void AcidSharp_symbols465(VkImageCopy* instance) { instance->~VkImageCopy(); } }
extern "C" { void AcidSharp_symbols466(void* instance) { new (instance) VkImageBlit(); } }
extern "C" { void AcidSharp_symbols467(void* instance, const VkImageBlit& _0) { new (instance) VkImageBlit(_0); } }
VkImageBlit& (VkImageBlit::*AcidSharp_symbols468)(const VkImageBlit&) = &VkImageBlit::operator=;
VkImageBlit& (VkImageBlit::*AcidSharp_symbols469)(VkImageBlit&&) = &VkImageBlit::operator=;
extern "C" { void AcidSharp_symbols470(VkImageBlit* instance) { instance->~VkImageBlit(); } }
extern "C" { void AcidSharp_symbols471(void* instance) { new (instance) VkBufferImageCopy(); } }
extern "C" { void AcidSharp_symbols472(void* instance, const VkBufferImageCopy& _0) { new (instance) VkBufferImageCopy(_0); } }
VkBufferImageCopy& (VkBufferImageCopy::*AcidSharp_symbols473)(const VkBufferImageCopy&) = &VkBufferImageCopy::operator=;
VkBufferImageCopy& (VkBufferImageCopy::*AcidSharp_symbols474)(VkBufferImageCopy&&) = &VkBufferImageCopy::operator=;
extern "C" { void AcidSharp_symbols475(VkBufferImageCopy* instance) { instance->~VkBufferImageCopy(); } }
extern "C" { void AcidSharp_symbols476(void* instance) { new (instance) VkClearColorValue(); } }
extern "C" { void AcidSharp_symbols477(void* instance, const VkClearColorValue& _0) { new (instance) VkClearColorValue(_0); } }
VkClearColorValue& (VkClearColorValue::*AcidSharp_symbols478)(const VkClearColorValue&) = &VkClearColorValue::operator=;
VkClearColorValue& (VkClearColorValue::*AcidSharp_symbols479)(VkClearColorValue&&) = &VkClearColorValue::operator=;
extern "C" { void AcidSharp_symbols480(VkClearColorValue* instance) { instance->~VkClearColorValue(); } }
extern "C" { void AcidSharp_symbols481(void* instance) { new (instance) VkClearDepthStencilValue(); } }
extern "C" { void AcidSharp_symbols482(void* instance, const VkClearDepthStencilValue& _0) { new (instance) VkClearDepthStencilValue(_0); } }
VkClearDepthStencilValue& (VkClearDepthStencilValue::*AcidSharp_symbols483)(const VkClearDepthStencilValue&) = &VkClearDepthStencilValue::operator=;
VkClearDepthStencilValue& (VkClearDepthStencilValue::*AcidSharp_symbols484)(VkClearDepthStencilValue&&) = &VkClearDepthStencilValue::operator=;
extern "C" { void AcidSharp_symbols485(VkClearDepthStencilValue* instance) { instance->~VkClearDepthStencilValue(); } }
extern "C" { void AcidSharp_symbols486(void* instance) { new (instance) VkClearValue(); } }
extern "C" { void AcidSharp_symbols487(void* instance, const VkClearValue& _0) { new (instance) VkClearValue(_0); } }
VkClearValue& (VkClearValue::*AcidSharp_symbols488)(const VkClearValue&) = &VkClearValue::operator=;
VkClearValue& (VkClearValue::*AcidSharp_symbols489)(VkClearValue&&) = &VkClearValue::operator=;
extern "C" { void AcidSharp_symbols490(VkClearValue* instance) { instance->~VkClearValue(); } }
extern "C" { void AcidSharp_symbols491(void* instance) { new (instance) VkClearAttachment(); } }
extern "C" { void AcidSharp_symbols492(void* instance, const VkClearAttachment& _0) { new (instance) VkClearAttachment(_0); } }
VkClearAttachment& (VkClearAttachment::*AcidSharp_symbols493)(const VkClearAttachment&) = &VkClearAttachment::operator=;
VkClearAttachment& (VkClearAttachment::*AcidSharp_symbols494)(VkClearAttachment&&) = &VkClearAttachment::operator=;
extern "C" { void AcidSharp_symbols495(VkClearAttachment* instance) { instance->~VkClearAttachment(); } }
extern "C" { void AcidSharp_symbols496(void* instance) { new (instance) VkClearRect(); } }
extern "C" { void AcidSharp_symbols497(void* instance, const VkClearRect& _0) { new (instance) VkClearRect(_0); } }
VkClearRect& (VkClearRect::*AcidSharp_symbols498)(const VkClearRect&) = &VkClearRect::operator=;
VkClearRect& (VkClearRect::*AcidSharp_symbols499)(VkClearRect&&) = &VkClearRect::operator=;
extern "C" { void AcidSharp_symbols500(VkClearRect* instance) { instance->~VkClearRect(); } }
extern "C" { void AcidSharp_symbols501(void* instance) { new (instance) VkImageResolve(); } }
extern "C" { void AcidSharp_symbols502(void* instance, const VkImageResolve& _0) { new (instance) VkImageResolve(_0); } }
VkImageResolve& (VkImageResolve::*AcidSharp_symbols503)(const VkImageResolve&) = &VkImageResolve::operator=;
VkImageResolve& (VkImageResolve::*AcidSharp_symbols504)(VkImageResolve&&) = &VkImageResolve::operator=;
extern "C" { void AcidSharp_symbols505(VkImageResolve* instance) { instance->~VkImageResolve(); } }
extern "C" { void AcidSharp_symbols506(void* instance) { new (instance) VkMemoryBarrier(); } }
extern "C" { void AcidSharp_symbols507(void* instance, const VkMemoryBarrier& _0) { new (instance) VkMemoryBarrier(_0); } }
VkMemoryBarrier& (VkMemoryBarrier::*AcidSharp_symbols508)(const VkMemoryBarrier&) = &VkMemoryBarrier::operator=;
VkMemoryBarrier& (VkMemoryBarrier::*AcidSharp_symbols509)(VkMemoryBarrier&&) = &VkMemoryBarrier::operator=;
extern "C" { void AcidSharp_symbols510(VkMemoryBarrier* instance) { instance->~VkMemoryBarrier(); } }
extern "C" { void AcidSharp_symbols511(void* instance) { new (instance) VkBufferMemoryBarrier(); } }
extern "C" { void AcidSharp_symbols512(void* instance, const VkBufferMemoryBarrier& _0) { new (instance) VkBufferMemoryBarrier(_0); } }
VkBufferMemoryBarrier& (VkBufferMemoryBarrier::*AcidSharp_symbols513)(const VkBufferMemoryBarrier&) = &VkBufferMemoryBarrier::operator=;
VkBufferMemoryBarrier& (VkBufferMemoryBarrier::*AcidSharp_symbols514)(VkBufferMemoryBarrier&&) = &VkBufferMemoryBarrier::operator=;
extern "C" { void AcidSharp_symbols515(VkBufferMemoryBarrier* instance) { instance->~VkBufferMemoryBarrier(); } }
extern "C" { void AcidSharp_symbols516(void* instance) { new (instance) VkImageMemoryBarrier(); } }
extern "C" { void AcidSharp_symbols517(void* instance, const VkImageMemoryBarrier& _0) { new (instance) VkImageMemoryBarrier(_0); } }
VkImageMemoryBarrier& (VkImageMemoryBarrier::*AcidSharp_symbols518)(const VkImageMemoryBarrier&) = &VkImageMemoryBarrier::operator=;
VkImageMemoryBarrier& (VkImageMemoryBarrier::*AcidSharp_symbols519)(VkImageMemoryBarrier&&) = &VkImageMemoryBarrier::operator=;
extern "C" { void AcidSharp_symbols520(VkImageMemoryBarrier* instance) { instance->~VkImageMemoryBarrier(); } }
extern "C" { void AcidSharp_symbols521(void* instance) { new (instance) VkRenderPassBeginInfo(); } }
extern "C" { void AcidSharp_symbols522(void* instance, const VkRenderPassBeginInfo& _0) { new (instance) VkRenderPassBeginInfo(_0); } }
VkRenderPassBeginInfo& (VkRenderPassBeginInfo::*AcidSharp_symbols523)(const VkRenderPassBeginInfo&) = &VkRenderPassBeginInfo::operator=;
VkRenderPassBeginInfo& (VkRenderPassBeginInfo::*AcidSharp_symbols524)(VkRenderPassBeginInfo&&) = &VkRenderPassBeginInfo::operator=;
extern "C" { void AcidSharp_symbols525(VkRenderPassBeginInfo* instance) { instance->~VkRenderPassBeginInfo(); } }
extern "C" { void AcidSharp_symbols526(void* instance) { new (instance) VkDispatchIndirectCommand(); } }
extern "C" { void AcidSharp_symbols527(void* instance, const VkDispatchIndirectCommand& _0) { new (instance) VkDispatchIndirectCommand(_0); } }
VkDispatchIndirectCommand& (VkDispatchIndirectCommand::*AcidSharp_symbols528)(const VkDispatchIndirectCommand&) = &VkDispatchIndirectCommand::operator=;
VkDispatchIndirectCommand& (VkDispatchIndirectCommand::*AcidSharp_symbols529)(VkDispatchIndirectCommand&&) = &VkDispatchIndirectCommand::operator=;
extern "C" { void AcidSharp_symbols530(VkDispatchIndirectCommand* instance) { instance->~VkDispatchIndirectCommand(); } }
extern "C" { void AcidSharp_symbols531(void* instance) { new (instance) VkDrawIndexedIndirectCommand(); } }
extern "C" { void AcidSharp_symbols532(void* instance, const VkDrawIndexedIndirectCommand& _0) { new (instance) VkDrawIndexedIndirectCommand(_0); } }
VkDrawIndexedIndirectCommand& (VkDrawIndexedIndirectCommand::*AcidSharp_symbols533)(const VkDrawIndexedIndirectCommand&) = &VkDrawIndexedIndirectCommand::operator=;
VkDrawIndexedIndirectCommand& (VkDrawIndexedIndirectCommand::*AcidSharp_symbols534)(VkDrawIndexedIndirectCommand&&) = &VkDrawIndexedIndirectCommand::operator=;
extern "C" { void AcidSharp_symbols535(VkDrawIndexedIndirectCommand* instance) { instance->~VkDrawIndexedIndirectCommand(); } }
extern "C" { void AcidSharp_symbols536(void* instance) { new (instance) VkDrawIndirectCommand(); } }
extern "C" { void AcidSharp_symbols537(void* instance, const VkDrawIndirectCommand& _0) { new (instance) VkDrawIndirectCommand(_0); } }
VkDrawIndirectCommand& (VkDrawIndirectCommand::*AcidSharp_symbols538)(const VkDrawIndirectCommand&) = &VkDrawIndirectCommand::operator=;
VkDrawIndirectCommand& (VkDrawIndirectCommand::*AcidSharp_symbols539)(VkDrawIndirectCommand&&) = &VkDrawIndirectCommand::operator=;
extern "C" { void AcidSharp_symbols540(VkDrawIndirectCommand* instance) { instance->~VkDrawIndirectCommand(); } }
extern "C" { void AcidSharp_symbols541(void* instance) { new (instance) VkBaseOutStructure(); } }
extern "C" { void AcidSharp_symbols542(void* instance, const VkBaseOutStructure& _0) { new (instance) VkBaseOutStructure(_0); } }
VkBaseOutStructure& (VkBaseOutStructure::*AcidSharp_symbols543)(const VkBaseOutStructure&) = &VkBaseOutStructure::operator=;
VkBaseOutStructure& (VkBaseOutStructure::*AcidSharp_symbols544)(VkBaseOutStructure&&) = &VkBaseOutStructure::operator=;
extern "C" { void AcidSharp_symbols545(VkBaseOutStructure* instance) { instance->~VkBaseOutStructure(); } }
extern "C" { void AcidSharp_symbols546(void* instance) { new (instance) VkBaseInStructure(); } }
extern "C" { void AcidSharp_symbols547(void* instance, const VkBaseInStructure& _0) { new (instance) VkBaseInStructure(_0); } }
VkBaseInStructure& (VkBaseInStructure::*AcidSharp_symbols548)(const VkBaseInStructure&) = &VkBaseInStructure::operator=;
VkBaseInStructure& (VkBaseInStructure::*AcidSharp_symbols549)(VkBaseInStructure&&) = &VkBaseInStructure::operator=;
extern "C" { void AcidSharp_symbols550(VkBaseInStructure* instance) { instance->~VkBaseInStructure(); } }
extern "C" { void AcidSharp_symbols551(void* instance) { new (instance) VkPhysicalDeviceSubgroupProperties(); } }
extern "C" { void AcidSharp_symbols552(void* instance, const VkPhysicalDeviceSubgroupProperties& _0) { new (instance) VkPhysicalDeviceSubgroupProperties(_0); } }
VkPhysicalDeviceSubgroupProperties& (VkPhysicalDeviceSubgroupProperties::*AcidSharp_symbols553)(const VkPhysicalDeviceSubgroupProperties&) = &VkPhysicalDeviceSubgroupProperties::operator=;
VkPhysicalDeviceSubgroupProperties& (VkPhysicalDeviceSubgroupProperties::*AcidSharp_symbols554)(VkPhysicalDeviceSubgroupProperties&&) = &VkPhysicalDeviceSubgroupProperties::operator=;
extern "C" { void AcidSharp_symbols555(VkPhysicalDeviceSubgroupProperties* instance) { instance->~VkPhysicalDeviceSubgroupProperties(); } }
extern "C" { void AcidSharp_symbols556(void* instance) { new (instance) VkBindBufferMemoryInfo(); } }
extern "C" { void AcidSharp_symbols557(void* instance, const VkBindBufferMemoryInfo& _0) { new (instance) VkBindBufferMemoryInfo(_0); } }
VkBindBufferMemoryInfo& (VkBindBufferMemoryInfo::*AcidSharp_symbols558)(const VkBindBufferMemoryInfo&) = &VkBindBufferMemoryInfo::operator=;
VkBindBufferMemoryInfo& (VkBindBufferMemoryInfo::*AcidSharp_symbols559)(VkBindBufferMemoryInfo&&) = &VkBindBufferMemoryInfo::operator=;
extern "C" { void AcidSharp_symbols560(VkBindBufferMemoryInfo* instance) { instance->~VkBindBufferMemoryInfo(); } }
extern "C" { void AcidSharp_symbols561(void* instance) { new (instance) VkBindImageMemoryInfo(); } }
extern "C" { void AcidSharp_symbols562(void* instance, const VkBindImageMemoryInfo& _0) { new (instance) VkBindImageMemoryInfo(_0); } }
VkBindImageMemoryInfo& (VkBindImageMemoryInfo::*AcidSharp_symbols563)(const VkBindImageMemoryInfo&) = &VkBindImageMemoryInfo::operator=;
VkBindImageMemoryInfo& (VkBindImageMemoryInfo::*AcidSharp_symbols564)(VkBindImageMemoryInfo&&) = &VkBindImageMemoryInfo::operator=;
extern "C" { void AcidSharp_symbols565(VkBindImageMemoryInfo* instance) { instance->~VkBindImageMemoryInfo(); } }
extern "C" { void AcidSharp_symbols566(void* instance) { new (instance) VkPhysicalDevice16BitStorageFeatures(); } }
extern "C" { void AcidSharp_symbols567(void* instance, const VkPhysicalDevice16BitStorageFeatures& _0) { new (instance) VkPhysicalDevice16BitStorageFeatures(_0); } }
VkPhysicalDevice16BitStorageFeatures& (VkPhysicalDevice16BitStorageFeatures::*AcidSharp_symbols568)(const VkPhysicalDevice16BitStorageFeatures&) = &VkPhysicalDevice16BitStorageFeatures::operator=;
VkPhysicalDevice16BitStorageFeatures& (VkPhysicalDevice16BitStorageFeatures::*AcidSharp_symbols569)(VkPhysicalDevice16BitStorageFeatures&&) = &VkPhysicalDevice16BitStorageFeatures::operator=;
extern "C" { void AcidSharp_symbols570(VkPhysicalDevice16BitStorageFeatures* instance) { instance->~VkPhysicalDevice16BitStorageFeatures(); } }
extern "C" { void AcidSharp_symbols571(void* instance) { new (instance) VkMemoryDedicatedRequirements(); } }
extern "C" { void AcidSharp_symbols572(void* instance, const VkMemoryDedicatedRequirements& _0) { new (instance) VkMemoryDedicatedRequirements(_0); } }
VkMemoryDedicatedRequirements& (VkMemoryDedicatedRequirements::*AcidSharp_symbols573)(const VkMemoryDedicatedRequirements&) = &VkMemoryDedicatedRequirements::operator=;
VkMemoryDedicatedRequirements& (VkMemoryDedicatedRequirements::*AcidSharp_symbols574)(VkMemoryDedicatedRequirements&&) = &VkMemoryDedicatedRequirements::operator=;
extern "C" { void AcidSharp_symbols575(VkMemoryDedicatedRequirements* instance) { instance->~VkMemoryDedicatedRequirements(); } }
extern "C" { void AcidSharp_symbols576(void* instance) { new (instance) VkMemoryDedicatedAllocateInfo(); } }
extern "C" { void AcidSharp_symbols577(void* instance, const VkMemoryDedicatedAllocateInfo& _0) { new (instance) VkMemoryDedicatedAllocateInfo(_0); } }
VkMemoryDedicatedAllocateInfo& (VkMemoryDedicatedAllocateInfo::*AcidSharp_symbols578)(const VkMemoryDedicatedAllocateInfo&) = &VkMemoryDedicatedAllocateInfo::operator=;
VkMemoryDedicatedAllocateInfo& (VkMemoryDedicatedAllocateInfo::*AcidSharp_symbols579)(VkMemoryDedicatedAllocateInfo&&) = &VkMemoryDedicatedAllocateInfo::operator=;
extern "C" { void AcidSharp_symbols580(VkMemoryDedicatedAllocateInfo* instance) { instance->~VkMemoryDedicatedAllocateInfo(); } }
extern "C" { void AcidSharp_symbols581(void* instance) { new (instance) VkMemoryAllocateFlagsInfo(); } }
extern "C" { void AcidSharp_symbols582(void* instance, const VkMemoryAllocateFlagsInfo& _0) { new (instance) VkMemoryAllocateFlagsInfo(_0); } }
VkMemoryAllocateFlagsInfo& (VkMemoryAllocateFlagsInfo::*AcidSharp_symbols583)(const VkMemoryAllocateFlagsInfo&) = &VkMemoryAllocateFlagsInfo::operator=;
VkMemoryAllocateFlagsInfo& (VkMemoryAllocateFlagsInfo::*AcidSharp_symbols584)(VkMemoryAllocateFlagsInfo&&) = &VkMemoryAllocateFlagsInfo::operator=;
extern "C" { void AcidSharp_symbols585(VkMemoryAllocateFlagsInfo* instance) { instance->~VkMemoryAllocateFlagsInfo(); } }
extern "C" { void AcidSharp_symbols586(void* instance) { new (instance) VkDeviceGroupRenderPassBeginInfo(); } }
extern "C" { void AcidSharp_symbols587(void* instance, const VkDeviceGroupRenderPassBeginInfo& _0) { new (instance) VkDeviceGroupRenderPassBeginInfo(_0); } }
VkDeviceGroupRenderPassBeginInfo& (VkDeviceGroupRenderPassBeginInfo::*AcidSharp_symbols588)(const VkDeviceGroupRenderPassBeginInfo&) = &VkDeviceGroupRenderPassBeginInfo::operator=;
VkDeviceGroupRenderPassBeginInfo& (VkDeviceGroupRenderPassBeginInfo::*AcidSharp_symbols589)(VkDeviceGroupRenderPassBeginInfo&&) = &VkDeviceGroupRenderPassBeginInfo::operator=;
extern "C" { void AcidSharp_symbols590(VkDeviceGroupRenderPassBeginInfo* instance) { instance->~VkDeviceGroupRenderPassBeginInfo(); } }
extern "C" { void AcidSharp_symbols591(void* instance) { new (instance) VkDeviceGroupCommandBufferBeginInfo(); } }
extern "C" { void AcidSharp_symbols592(void* instance, const VkDeviceGroupCommandBufferBeginInfo& _0) { new (instance) VkDeviceGroupCommandBufferBeginInfo(_0); } }
VkDeviceGroupCommandBufferBeginInfo& (VkDeviceGroupCommandBufferBeginInfo::*AcidSharp_symbols593)(const VkDeviceGroupCommandBufferBeginInfo&) = &VkDeviceGroupCommandBufferBeginInfo::operator=;
VkDeviceGroupCommandBufferBeginInfo& (VkDeviceGroupCommandBufferBeginInfo::*AcidSharp_symbols594)(VkDeviceGroupCommandBufferBeginInfo&&) = &VkDeviceGroupCommandBufferBeginInfo::operator=;
extern "C" { void AcidSharp_symbols595(VkDeviceGroupCommandBufferBeginInfo* instance) { instance->~VkDeviceGroupCommandBufferBeginInfo(); } }
extern "C" { void AcidSharp_symbols596(void* instance) { new (instance) VkDeviceGroupSubmitInfo(); } }
extern "C" { void AcidSharp_symbols597(void* instance, const VkDeviceGroupSubmitInfo& _0) { new (instance) VkDeviceGroupSubmitInfo(_0); } }
VkDeviceGroupSubmitInfo& (VkDeviceGroupSubmitInfo::*AcidSharp_symbols598)(const VkDeviceGroupSubmitInfo&) = &VkDeviceGroupSubmitInfo::operator=;
VkDeviceGroupSubmitInfo& (VkDeviceGroupSubmitInfo::*AcidSharp_symbols599)(VkDeviceGroupSubmitInfo&&) = &VkDeviceGroupSubmitInfo::operator=;
extern "C" { void AcidSharp_symbols600(VkDeviceGroupSubmitInfo* instance) { instance->~VkDeviceGroupSubmitInfo(); } }
extern "C" { void AcidSharp_symbols601(void* instance) { new (instance) VkDeviceGroupBindSparseInfo(); } }
extern "C" { void AcidSharp_symbols602(void* instance, const VkDeviceGroupBindSparseInfo& _0) { new (instance) VkDeviceGroupBindSparseInfo(_0); } }
VkDeviceGroupBindSparseInfo& (VkDeviceGroupBindSparseInfo::*AcidSharp_symbols603)(const VkDeviceGroupBindSparseInfo&) = &VkDeviceGroupBindSparseInfo::operator=;
VkDeviceGroupBindSparseInfo& (VkDeviceGroupBindSparseInfo::*AcidSharp_symbols604)(VkDeviceGroupBindSparseInfo&&) = &VkDeviceGroupBindSparseInfo::operator=;
extern "C" { void AcidSharp_symbols605(VkDeviceGroupBindSparseInfo* instance) { instance->~VkDeviceGroupBindSparseInfo(); } }
extern "C" { void AcidSharp_symbols606(void* instance) { new (instance) VkBindBufferMemoryDeviceGroupInfo(); } }
extern "C" { void AcidSharp_symbols607(void* instance, const VkBindBufferMemoryDeviceGroupInfo& _0) { new (instance) VkBindBufferMemoryDeviceGroupInfo(_0); } }
VkBindBufferMemoryDeviceGroupInfo& (VkBindBufferMemoryDeviceGroupInfo::*AcidSharp_symbols608)(const VkBindBufferMemoryDeviceGroupInfo&) = &VkBindBufferMemoryDeviceGroupInfo::operator=;
VkBindBufferMemoryDeviceGroupInfo& (VkBindBufferMemoryDeviceGroupInfo::*AcidSharp_symbols609)(VkBindBufferMemoryDeviceGroupInfo&&) = &VkBindBufferMemoryDeviceGroupInfo::operator=;
extern "C" { void AcidSharp_symbols610(VkBindBufferMemoryDeviceGroupInfo* instance) { instance->~VkBindBufferMemoryDeviceGroupInfo(); } }
extern "C" { void AcidSharp_symbols611(void* instance) { new (instance) VkBindImageMemoryDeviceGroupInfo(); } }
extern "C" { void AcidSharp_symbols612(void* instance, const VkBindImageMemoryDeviceGroupInfo& _0) { new (instance) VkBindImageMemoryDeviceGroupInfo(_0); } }
VkBindImageMemoryDeviceGroupInfo& (VkBindImageMemoryDeviceGroupInfo::*AcidSharp_symbols613)(const VkBindImageMemoryDeviceGroupInfo&) = &VkBindImageMemoryDeviceGroupInfo::operator=;
VkBindImageMemoryDeviceGroupInfo& (VkBindImageMemoryDeviceGroupInfo::*AcidSharp_symbols614)(VkBindImageMemoryDeviceGroupInfo&&) = &VkBindImageMemoryDeviceGroupInfo::operator=;
extern "C" { void AcidSharp_symbols615(VkBindImageMemoryDeviceGroupInfo* instance) { instance->~VkBindImageMemoryDeviceGroupInfo(); } }
extern "C" { void AcidSharp_symbols616(void* instance) { new (instance) VkPhysicalDeviceGroupProperties(); } }
extern "C" { void AcidSharp_symbols617(void* instance, const VkPhysicalDeviceGroupProperties& _0) { new (instance) VkPhysicalDeviceGroupProperties(_0); } }
VkPhysicalDeviceGroupProperties& (VkPhysicalDeviceGroupProperties::*AcidSharp_symbols618)(const VkPhysicalDeviceGroupProperties&) = &VkPhysicalDeviceGroupProperties::operator=;
VkPhysicalDeviceGroupProperties& (VkPhysicalDeviceGroupProperties::*AcidSharp_symbols619)(VkPhysicalDeviceGroupProperties&&) = &VkPhysicalDeviceGroupProperties::operator=;
extern "C" { void AcidSharp_symbols620(VkPhysicalDeviceGroupProperties* instance) { instance->~VkPhysicalDeviceGroupProperties(); } }
extern "C" { void AcidSharp_symbols621(void* instance) { new (instance) VkDeviceGroupDeviceCreateInfo(); } }
extern "C" { void AcidSharp_symbols622(void* instance, const VkDeviceGroupDeviceCreateInfo& _0) { new (instance) VkDeviceGroupDeviceCreateInfo(_0); } }
VkDeviceGroupDeviceCreateInfo& (VkDeviceGroupDeviceCreateInfo::*AcidSharp_symbols623)(const VkDeviceGroupDeviceCreateInfo&) = &VkDeviceGroupDeviceCreateInfo::operator=;
VkDeviceGroupDeviceCreateInfo& (VkDeviceGroupDeviceCreateInfo::*AcidSharp_symbols624)(VkDeviceGroupDeviceCreateInfo&&) = &VkDeviceGroupDeviceCreateInfo::operator=;
extern "C" { void AcidSharp_symbols625(VkDeviceGroupDeviceCreateInfo* instance) { instance->~VkDeviceGroupDeviceCreateInfo(); } }
extern "C" { void AcidSharp_symbols626(void* instance) { new (instance) VkBufferMemoryRequirementsInfo2(); } }
extern "C" { void AcidSharp_symbols627(void* instance, const VkBufferMemoryRequirementsInfo2& _0) { new (instance) VkBufferMemoryRequirementsInfo2(_0); } }
VkBufferMemoryRequirementsInfo2& (VkBufferMemoryRequirementsInfo2::*AcidSharp_symbols628)(const VkBufferMemoryRequirementsInfo2&) = &VkBufferMemoryRequirementsInfo2::operator=;
VkBufferMemoryRequirementsInfo2& (VkBufferMemoryRequirementsInfo2::*AcidSharp_symbols629)(VkBufferMemoryRequirementsInfo2&&) = &VkBufferMemoryRequirementsInfo2::operator=;
extern "C" { void AcidSharp_symbols630(VkBufferMemoryRequirementsInfo2* instance) { instance->~VkBufferMemoryRequirementsInfo2(); } }
extern "C" { void AcidSharp_symbols631(void* instance) { new (instance) VkImageMemoryRequirementsInfo2(); } }
extern "C" { void AcidSharp_symbols632(void* instance, const VkImageMemoryRequirementsInfo2& _0) { new (instance) VkImageMemoryRequirementsInfo2(_0); } }
VkImageMemoryRequirementsInfo2& (VkImageMemoryRequirementsInfo2::*AcidSharp_symbols633)(const VkImageMemoryRequirementsInfo2&) = &VkImageMemoryRequirementsInfo2::operator=;
VkImageMemoryRequirementsInfo2& (VkImageMemoryRequirementsInfo2::*AcidSharp_symbols634)(VkImageMemoryRequirementsInfo2&&) = &VkImageMemoryRequirementsInfo2::operator=;
extern "C" { void AcidSharp_symbols635(VkImageMemoryRequirementsInfo2* instance) { instance->~VkImageMemoryRequirementsInfo2(); } }
extern "C" { void AcidSharp_symbols636(void* instance) { new (instance) VkImageSparseMemoryRequirementsInfo2(); } }
extern "C" { void AcidSharp_symbols637(void* instance, const VkImageSparseMemoryRequirementsInfo2& _0) { new (instance) VkImageSparseMemoryRequirementsInfo2(_0); } }
VkImageSparseMemoryRequirementsInfo2& (VkImageSparseMemoryRequirementsInfo2::*AcidSharp_symbols638)(const VkImageSparseMemoryRequirementsInfo2&) = &VkImageSparseMemoryRequirementsInfo2::operator=;
VkImageSparseMemoryRequirementsInfo2& (VkImageSparseMemoryRequirementsInfo2::*AcidSharp_symbols639)(VkImageSparseMemoryRequirementsInfo2&&) = &VkImageSparseMemoryRequirementsInfo2::operator=;
extern "C" { void AcidSharp_symbols640(VkImageSparseMemoryRequirementsInfo2* instance) { instance->~VkImageSparseMemoryRequirementsInfo2(); } }
extern "C" { void AcidSharp_symbols641(void* instance) { new (instance) VkMemoryRequirements2(); } }
extern "C" { void AcidSharp_symbols642(void* instance, const VkMemoryRequirements2& _0) { new (instance) VkMemoryRequirements2(_0); } }
VkMemoryRequirements2& (VkMemoryRequirements2::*AcidSharp_symbols643)(const VkMemoryRequirements2&) = &VkMemoryRequirements2::operator=;
VkMemoryRequirements2& (VkMemoryRequirements2::*AcidSharp_symbols644)(VkMemoryRequirements2&&) = &VkMemoryRequirements2::operator=;
extern "C" { void AcidSharp_symbols645(VkMemoryRequirements2* instance) { instance->~VkMemoryRequirements2(); } }
extern "C" { void AcidSharp_symbols646(void* instance) { new (instance) VkSparseImageMemoryRequirements2(); } }
extern "C" { void AcidSharp_symbols647(void* instance, const VkSparseImageMemoryRequirements2& _0) { new (instance) VkSparseImageMemoryRequirements2(_0); } }
VkSparseImageMemoryRequirements2& (VkSparseImageMemoryRequirements2::*AcidSharp_symbols648)(const VkSparseImageMemoryRequirements2&) = &VkSparseImageMemoryRequirements2::operator=;
VkSparseImageMemoryRequirements2& (VkSparseImageMemoryRequirements2::*AcidSharp_symbols649)(VkSparseImageMemoryRequirements2&&) = &VkSparseImageMemoryRequirements2::operator=;
extern "C" { void AcidSharp_symbols650(VkSparseImageMemoryRequirements2* instance) { instance->~VkSparseImageMemoryRequirements2(); } }
extern "C" { void AcidSharp_symbols651(void* instance) { new (instance) VkPhysicalDeviceFeatures2(); } }
extern "C" { void AcidSharp_symbols652(void* instance, const VkPhysicalDeviceFeatures2& _0) { new (instance) VkPhysicalDeviceFeatures2(_0); } }
VkPhysicalDeviceFeatures2& (VkPhysicalDeviceFeatures2::*AcidSharp_symbols653)(const VkPhysicalDeviceFeatures2&) = &VkPhysicalDeviceFeatures2::operator=;
VkPhysicalDeviceFeatures2& (VkPhysicalDeviceFeatures2::*AcidSharp_symbols654)(VkPhysicalDeviceFeatures2&&) = &VkPhysicalDeviceFeatures2::operator=;
extern "C" { void AcidSharp_symbols655(VkPhysicalDeviceFeatures2* instance) { instance->~VkPhysicalDeviceFeatures2(); } }
extern "C" { void AcidSharp_symbols656(void* instance) { new (instance) VkPhysicalDeviceProperties2(); } }
extern "C" { void AcidSharp_symbols657(void* instance, const VkPhysicalDeviceProperties2& _0) { new (instance) VkPhysicalDeviceProperties2(_0); } }
VkPhysicalDeviceProperties2& (VkPhysicalDeviceProperties2::*AcidSharp_symbols658)(const VkPhysicalDeviceProperties2&) = &VkPhysicalDeviceProperties2::operator=;
VkPhysicalDeviceProperties2& (VkPhysicalDeviceProperties2::*AcidSharp_symbols659)(VkPhysicalDeviceProperties2&&) = &VkPhysicalDeviceProperties2::operator=;
extern "C" { void AcidSharp_symbols660(VkPhysicalDeviceProperties2* instance) { instance->~VkPhysicalDeviceProperties2(); } }
extern "C" { void AcidSharp_symbols661(void* instance) { new (instance) VkFormatProperties2(); } }
extern "C" { void AcidSharp_symbols662(void* instance, const VkFormatProperties2& _0) { new (instance) VkFormatProperties2(_0); } }
VkFormatProperties2& (VkFormatProperties2::*AcidSharp_symbols663)(const VkFormatProperties2&) = &VkFormatProperties2::operator=;
VkFormatProperties2& (VkFormatProperties2::*AcidSharp_symbols664)(VkFormatProperties2&&) = &VkFormatProperties2::operator=;
extern "C" { void AcidSharp_symbols665(VkFormatProperties2* instance) { instance->~VkFormatProperties2(); } }
extern "C" { void AcidSharp_symbols666(void* instance) { new (instance) VkImageFormatProperties2(); } }
extern "C" { void AcidSharp_symbols667(void* instance, const VkImageFormatProperties2& _0) { new (instance) VkImageFormatProperties2(_0); } }
VkImageFormatProperties2& (VkImageFormatProperties2::*AcidSharp_symbols668)(const VkImageFormatProperties2&) = &VkImageFormatProperties2::operator=;
VkImageFormatProperties2& (VkImageFormatProperties2::*AcidSharp_symbols669)(VkImageFormatProperties2&&) = &VkImageFormatProperties2::operator=;
extern "C" { void AcidSharp_symbols670(VkImageFormatProperties2* instance) { instance->~VkImageFormatProperties2(); } }
extern "C" { void AcidSharp_symbols671(void* instance) { new (instance) VkPhysicalDeviceImageFormatInfo2(); } }
extern "C" { void AcidSharp_symbols672(void* instance, const VkPhysicalDeviceImageFormatInfo2& _0) { new (instance) VkPhysicalDeviceImageFormatInfo2(_0); } }
VkPhysicalDeviceImageFormatInfo2& (VkPhysicalDeviceImageFormatInfo2::*AcidSharp_symbols673)(const VkPhysicalDeviceImageFormatInfo2&) = &VkPhysicalDeviceImageFormatInfo2::operator=;
VkPhysicalDeviceImageFormatInfo2& (VkPhysicalDeviceImageFormatInfo2::*AcidSharp_symbols674)(VkPhysicalDeviceImageFormatInfo2&&) = &VkPhysicalDeviceImageFormatInfo2::operator=;
extern "C" { void AcidSharp_symbols675(VkPhysicalDeviceImageFormatInfo2* instance) { instance->~VkPhysicalDeviceImageFormatInfo2(); } }
extern "C" { void AcidSharp_symbols676(void* instance) { new (instance) VkQueueFamilyProperties2(); } }
extern "C" { void AcidSharp_symbols677(void* instance, const VkQueueFamilyProperties2& _0) { new (instance) VkQueueFamilyProperties2(_0); } }
VkQueueFamilyProperties2& (VkQueueFamilyProperties2::*AcidSharp_symbols678)(const VkQueueFamilyProperties2&) = &VkQueueFamilyProperties2::operator=;
VkQueueFamilyProperties2& (VkQueueFamilyProperties2::*AcidSharp_symbols679)(VkQueueFamilyProperties2&&) = &VkQueueFamilyProperties2::operator=;
extern "C" { void AcidSharp_symbols680(VkQueueFamilyProperties2* instance) { instance->~VkQueueFamilyProperties2(); } }
extern "C" { void AcidSharp_symbols681(void* instance) { new (instance) VkPhysicalDeviceMemoryProperties2(); } }
extern "C" { void AcidSharp_symbols682(void* instance, const VkPhysicalDeviceMemoryProperties2& _0) { new (instance) VkPhysicalDeviceMemoryProperties2(_0); } }
VkPhysicalDeviceMemoryProperties2& (VkPhysicalDeviceMemoryProperties2::*AcidSharp_symbols683)(const VkPhysicalDeviceMemoryProperties2&) = &VkPhysicalDeviceMemoryProperties2::operator=;
VkPhysicalDeviceMemoryProperties2& (VkPhysicalDeviceMemoryProperties2::*AcidSharp_symbols684)(VkPhysicalDeviceMemoryProperties2&&) = &VkPhysicalDeviceMemoryProperties2::operator=;
extern "C" { void AcidSharp_symbols685(VkPhysicalDeviceMemoryProperties2* instance) { instance->~VkPhysicalDeviceMemoryProperties2(); } }
extern "C" { void AcidSharp_symbols686(void* instance) { new (instance) VkSparseImageFormatProperties2(); } }
extern "C" { void AcidSharp_symbols687(void* instance, const VkSparseImageFormatProperties2& _0) { new (instance) VkSparseImageFormatProperties2(_0); } }
VkSparseImageFormatProperties2& (VkSparseImageFormatProperties2::*AcidSharp_symbols688)(const VkSparseImageFormatProperties2&) = &VkSparseImageFormatProperties2::operator=;
VkSparseImageFormatProperties2& (VkSparseImageFormatProperties2::*AcidSharp_symbols689)(VkSparseImageFormatProperties2&&) = &VkSparseImageFormatProperties2::operator=;
extern "C" { void AcidSharp_symbols690(VkSparseImageFormatProperties2* instance) { instance->~VkSparseImageFormatProperties2(); } }
extern "C" { void AcidSharp_symbols691(void* instance) { new (instance) VkPhysicalDeviceSparseImageFormatInfo2(); } }
extern "C" { void AcidSharp_symbols692(void* instance, const VkPhysicalDeviceSparseImageFormatInfo2& _0) { new (instance) VkPhysicalDeviceSparseImageFormatInfo2(_0); } }
VkPhysicalDeviceSparseImageFormatInfo2& (VkPhysicalDeviceSparseImageFormatInfo2::*AcidSharp_symbols693)(const VkPhysicalDeviceSparseImageFormatInfo2&) = &VkPhysicalDeviceSparseImageFormatInfo2::operator=;
VkPhysicalDeviceSparseImageFormatInfo2& (VkPhysicalDeviceSparseImageFormatInfo2::*AcidSharp_symbols694)(VkPhysicalDeviceSparseImageFormatInfo2&&) = &VkPhysicalDeviceSparseImageFormatInfo2::operator=;
extern "C" { void AcidSharp_symbols695(VkPhysicalDeviceSparseImageFormatInfo2* instance) { instance->~VkPhysicalDeviceSparseImageFormatInfo2(); } }
extern "C" { void AcidSharp_symbols696(void* instance) { new (instance) VkPhysicalDevicePointClippingProperties(); } }
extern "C" { void AcidSharp_symbols697(void* instance, const VkPhysicalDevicePointClippingProperties& _0) { new (instance) VkPhysicalDevicePointClippingProperties(_0); } }
VkPhysicalDevicePointClippingProperties& (VkPhysicalDevicePointClippingProperties::*AcidSharp_symbols698)(const VkPhysicalDevicePointClippingProperties&) = &VkPhysicalDevicePointClippingProperties::operator=;
VkPhysicalDevicePointClippingProperties& (VkPhysicalDevicePointClippingProperties::*AcidSharp_symbols699)(VkPhysicalDevicePointClippingProperties&&) = &VkPhysicalDevicePointClippingProperties::operator=;
extern "C" { void AcidSharp_symbols700(VkPhysicalDevicePointClippingProperties* instance) { instance->~VkPhysicalDevicePointClippingProperties(); } }
extern "C" { void AcidSharp_symbols701(void* instance) { new (instance) VkInputAttachmentAspectReference(); } }
extern "C" { void AcidSharp_symbols702(void* instance, const VkInputAttachmentAspectReference& _0) { new (instance) VkInputAttachmentAspectReference(_0); } }
VkInputAttachmentAspectReference& (VkInputAttachmentAspectReference::*AcidSharp_symbols703)(const VkInputAttachmentAspectReference&) = &VkInputAttachmentAspectReference::operator=;
VkInputAttachmentAspectReference& (VkInputAttachmentAspectReference::*AcidSharp_symbols704)(VkInputAttachmentAspectReference&&) = &VkInputAttachmentAspectReference::operator=;
extern "C" { void AcidSharp_symbols705(VkInputAttachmentAspectReference* instance) { instance->~VkInputAttachmentAspectReference(); } }
extern "C" { void AcidSharp_symbols706(void* instance) { new (instance) VkRenderPassInputAttachmentAspectCreateInfo(); } }
extern "C" { void AcidSharp_symbols707(void* instance, const VkRenderPassInputAttachmentAspectCreateInfo& _0) { new (instance) VkRenderPassInputAttachmentAspectCreateInfo(_0); } }
VkRenderPassInputAttachmentAspectCreateInfo& (VkRenderPassInputAttachmentAspectCreateInfo::*AcidSharp_symbols708)(const VkRenderPassInputAttachmentAspectCreateInfo&) = &VkRenderPassInputAttachmentAspectCreateInfo::operator=;
VkRenderPassInputAttachmentAspectCreateInfo& (VkRenderPassInputAttachmentAspectCreateInfo::*AcidSharp_symbols709)(VkRenderPassInputAttachmentAspectCreateInfo&&) = &VkRenderPassInputAttachmentAspectCreateInfo::operator=;
extern "C" { void AcidSharp_symbols710(VkRenderPassInputAttachmentAspectCreateInfo* instance) { instance->~VkRenderPassInputAttachmentAspectCreateInfo(); } }
extern "C" { void AcidSharp_symbols711(void* instance) { new (instance) VkImageViewUsageCreateInfo(); } }
extern "C" { void AcidSharp_symbols712(void* instance, const VkImageViewUsageCreateInfo& _0) { new (instance) VkImageViewUsageCreateInfo(_0); } }
VkImageViewUsageCreateInfo& (VkImageViewUsageCreateInfo::*AcidSharp_symbols713)(const VkImageViewUsageCreateInfo&) = &VkImageViewUsageCreateInfo::operator=;
VkImageViewUsageCreateInfo& (VkImageViewUsageCreateInfo::*AcidSharp_symbols714)(VkImageViewUsageCreateInfo&&) = &VkImageViewUsageCreateInfo::operator=;
extern "C" { void AcidSharp_symbols715(VkImageViewUsageCreateInfo* instance) { instance->~VkImageViewUsageCreateInfo(); } }
extern "C" { void AcidSharp_symbols716(void* instance) { new (instance) VkPipelineTessellationDomainOriginStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols717(void* instance, const VkPipelineTessellationDomainOriginStateCreateInfo& _0) { new (instance) VkPipelineTessellationDomainOriginStateCreateInfo(_0); } }
VkPipelineTessellationDomainOriginStateCreateInfo& (VkPipelineTessellationDomainOriginStateCreateInfo::*AcidSharp_symbols718)(const VkPipelineTessellationDomainOriginStateCreateInfo&) = &VkPipelineTessellationDomainOriginStateCreateInfo::operator=;
VkPipelineTessellationDomainOriginStateCreateInfo& (VkPipelineTessellationDomainOriginStateCreateInfo::*AcidSharp_symbols719)(VkPipelineTessellationDomainOriginStateCreateInfo&&) = &VkPipelineTessellationDomainOriginStateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols720(VkPipelineTessellationDomainOriginStateCreateInfo* instance) { instance->~VkPipelineTessellationDomainOriginStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols721(void* instance) { new (instance) VkRenderPassMultiviewCreateInfo(); } }
extern "C" { void AcidSharp_symbols722(void* instance, const VkRenderPassMultiviewCreateInfo& _0) { new (instance) VkRenderPassMultiviewCreateInfo(_0); } }
VkRenderPassMultiviewCreateInfo& (VkRenderPassMultiviewCreateInfo::*AcidSharp_symbols723)(const VkRenderPassMultiviewCreateInfo&) = &VkRenderPassMultiviewCreateInfo::operator=;
VkRenderPassMultiviewCreateInfo& (VkRenderPassMultiviewCreateInfo::*AcidSharp_symbols724)(VkRenderPassMultiviewCreateInfo&&) = &VkRenderPassMultiviewCreateInfo::operator=;
extern "C" { void AcidSharp_symbols725(VkRenderPassMultiviewCreateInfo* instance) { instance->~VkRenderPassMultiviewCreateInfo(); } }
extern "C" { void AcidSharp_symbols726(void* instance) { new (instance) VkPhysicalDeviceMultiviewFeatures(); } }
extern "C" { void AcidSharp_symbols727(void* instance, const VkPhysicalDeviceMultiviewFeatures& _0) { new (instance) VkPhysicalDeviceMultiviewFeatures(_0); } }
VkPhysicalDeviceMultiviewFeatures& (VkPhysicalDeviceMultiviewFeatures::*AcidSharp_symbols728)(const VkPhysicalDeviceMultiviewFeatures&) = &VkPhysicalDeviceMultiviewFeatures::operator=;
VkPhysicalDeviceMultiviewFeatures& (VkPhysicalDeviceMultiviewFeatures::*AcidSharp_symbols729)(VkPhysicalDeviceMultiviewFeatures&&) = &VkPhysicalDeviceMultiviewFeatures::operator=;
extern "C" { void AcidSharp_symbols730(VkPhysicalDeviceMultiviewFeatures* instance) { instance->~VkPhysicalDeviceMultiviewFeatures(); } }
extern "C" { void AcidSharp_symbols731(void* instance) { new (instance) VkPhysicalDeviceMultiviewProperties(); } }
extern "C" { void AcidSharp_symbols732(void* instance, const VkPhysicalDeviceMultiviewProperties& _0) { new (instance) VkPhysicalDeviceMultiviewProperties(_0); } }
VkPhysicalDeviceMultiviewProperties& (VkPhysicalDeviceMultiviewProperties::*AcidSharp_symbols733)(const VkPhysicalDeviceMultiviewProperties&) = &VkPhysicalDeviceMultiviewProperties::operator=;
VkPhysicalDeviceMultiviewProperties& (VkPhysicalDeviceMultiviewProperties::*AcidSharp_symbols734)(VkPhysicalDeviceMultiviewProperties&&) = &VkPhysicalDeviceMultiviewProperties::operator=;
extern "C" { void AcidSharp_symbols735(VkPhysicalDeviceMultiviewProperties* instance) { instance->~VkPhysicalDeviceMultiviewProperties(); } }
extern "C" { void AcidSharp_symbols736(void* instance) { new (instance) VkPhysicalDeviceVariablePointerFeatures(); } }
extern "C" { void AcidSharp_symbols737(void* instance, const VkPhysicalDeviceVariablePointerFeatures& _0) { new (instance) VkPhysicalDeviceVariablePointerFeatures(_0); } }
VkPhysicalDeviceVariablePointerFeatures& (VkPhysicalDeviceVariablePointerFeatures::*AcidSharp_symbols738)(const VkPhysicalDeviceVariablePointerFeatures&) = &VkPhysicalDeviceVariablePointerFeatures::operator=;
VkPhysicalDeviceVariablePointerFeatures& (VkPhysicalDeviceVariablePointerFeatures::*AcidSharp_symbols739)(VkPhysicalDeviceVariablePointerFeatures&&) = &VkPhysicalDeviceVariablePointerFeatures::operator=;
extern "C" { void AcidSharp_symbols740(VkPhysicalDeviceVariablePointerFeatures* instance) { instance->~VkPhysicalDeviceVariablePointerFeatures(); } }
extern "C" { void AcidSharp_symbols741(void* instance) { new (instance) VkPhysicalDeviceProtectedMemoryFeatures(); } }
extern "C" { void AcidSharp_symbols742(void* instance, const VkPhysicalDeviceProtectedMemoryFeatures& _0) { new (instance) VkPhysicalDeviceProtectedMemoryFeatures(_0); } }
VkPhysicalDeviceProtectedMemoryFeatures& (VkPhysicalDeviceProtectedMemoryFeatures::*AcidSharp_symbols743)(const VkPhysicalDeviceProtectedMemoryFeatures&) = &VkPhysicalDeviceProtectedMemoryFeatures::operator=;
VkPhysicalDeviceProtectedMemoryFeatures& (VkPhysicalDeviceProtectedMemoryFeatures::*AcidSharp_symbols744)(VkPhysicalDeviceProtectedMemoryFeatures&&) = &VkPhysicalDeviceProtectedMemoryFeatures::operator=;
extern "C" { void AcidSharp_symbols745(VkPhysicalDeviceProtectedMemoryFeatures* instance) { instance->~VkPhysicalDeviceProtectedMemoryFeatures(); } }
extern "C" { void AcidSharp_symbols746(void* instance) { new (instance) VkPhysicalDeviceProtectedMemoryProperties(); } }
extern "C" { void AcidSharp_symbols747(void* instance, const VkPhysicalDeviceProtectedMemoryProperties& _0) { new (instance) VkPhysicalDeviceProtectedMemoryProperties(_0); } }
VkPhysicalDeviceProtectedMemoryProperties& (VkPhysicalDeviceProtectedMemoryProperties::*AcidSharp_symbols748)(const VkPhysicalDeviceProtectedMemoryProperties&) = &VkPhysicalDeviceProtectedMemoryProperties::operator=;
VkPhysicalDeviceProtectedMemoryProperties& (VkPhysicalDeviceProtectedMemoryProperties::*AcidSharp_symbols749)(VkPhysicalDeviceProtectedMemoryProperties&&) = &VkPhysicalDeviceProtectedMemoryProperties::operator=;
extern "C" { void AcidSharp_symbols750(VkPhysicalDeviceProtectedMemoryProperties* instance) { instance->~VkPhysicalDeviceProtectedMemoryProperties(); } }
extern "C" { void AcidSharp_symbols751(void* instance) { new (instance) VkDeviceQueueInfo2(); } }
extern "C" { void AcidSharp_symbols752(void* instance, const VkDeviceQueueInfo2& _0) { new (instance) VkDeviceQueueInfo2(_0); } }
VkDeviceQueueInfo2& (VkDeviceQueueInfo2::*AcidSharp_symbols753)(const VkDeviceQueueInfo2&) = &VkDeviceQueueInfo2::operator=;
VkDeviceQueueInfo2& (VkDeviceQueueInfo2::*AcidSharp_symbols754)(VkDeviceQueueInfo2&&) = &VkDeviceQueueInfo2::operator=;
extern "C" { void AcidSharp_symbols755(VkDeviceQueueInfo2* instance) { instance->~VkDeviceQueueInfo2(); } }
extern "C" { void AcidSharp_symbols756(void* instance) { new (instance) VkProtectedSubmitInfo(); } }
extern "C" { void AcidSharp_symbols757(void* instance, const VkProtectedSubmitInfo& _0) { new (instance) VkProtectedSubmitInfo(_0); } }
VkProtectedSubmitInfo& (VkProtectedSubmitInfo::*AcidSharp_symbols758)(const VkProtectedSubmitInfo&) = &VkProtectedSubmitInfo::operator=;
VkProtectedSubmitInfo& (VkProtectedSubmitInfo::*AcidSharp_symbols759)(VkProtectedSubmitInfo&&) = &VkProtectedSubmitInfo::operator=;
extern "C" { void AcidSharp_symbols760(VkProtectedSubmitInfo* instance) { instance->~VkProtectedSubmitInfo(); } }
extern "C" { void AcidSharp_symbols761(void* instance) { new (instance) VkSamplerYcbcrConversionCreateInfo(); } }
extern "C" { void AcidSharp_symbols762(void* instance, const VkSamplerYcbcrConversionCreateInfo& _0) { new (instance) VkSamplerYcbcrConversionCreateInfo(_0); } }
VkSamplerYcbcrConversionCreateInfo& (VkSamplerYcbcrConversionCreateInfo::*AcidSharp_symbols763)(const VkSamplerYcbcrConversionCreateInfo&) = &VkSamplerYcbcrConversionCreateInfo::operator=;
VkSamplerYcbcrConversionCreateInfo& (VkSamplerYcbcrConversionCreateInfo::*AcidSharp_symbols764)(VkSamplerYcbcrConversionCreateInfo&&) = &VkSamplerYcbcrConversionCreateInfo::operator=;
extern "C" { void AcidSharp_symbols765(VkSamplerYcbcrConversionCreateInfo* instance) { instance->~VkSamplerYcbcrConversionCreateInfo(); } }
extern "C" { void AcidSharp_symbols766(void* instance) { new (instance) VkSamplerYcbcrConversionInfo(); } }
extern "C" { void AcidSharp_symbols767(void* instance, const VkSamplerYcbcrConversionInfo& _0) { new (instance) VkSamplerYcbcrConversionInfo(_0); } }
VkSamplerYcbcrConversionInfo& (VkSamplerYcbcrConversionInfo::*AcidSharp_symbols768)(const VkSamplerYcbcrConversionInfo&) = &VkSamplerYcbcrConversionInfo::operator=;
VkSamplerYcbcrConversionInfo& (VkSamplerYcbcrConversionInfo::*AcidSharp_symbols769)(VkSamplerYcbcrConversionInfo&&) = &VkSamplerYcbcrConversionInfo::operator=;
extern "C" { void AcidSharp_symbols770(VkSamplerYcbcrConversionInfo* instance) { instance->~VkSamplerYcbcrConversionInfo(); } }
extern "C" { void AcidSharp_symbols771(void* instance) { new (instance) VkBindImagePlaneMemoryInfo(); } }
extern "C" { void AcidSharp_symbols772(void* instance, const VkBindImagePlaneMemoryInfo& _0) { new (instance) VkBindImagePlaneMemoryInfo(_0); } }
VkBindImagePlaneMemoryInfo& (VkBindImagePlaneMemoryInfo::*AcidSharp_symbols773)(const VkBindImagePlaneMemoryInfo&) = &VkBindImagePlaneMemoryInfo::operator=;
VkBindImagePlaneMemoryInfo& (VkBindImagePlaneMemoryInfo::*AcidSharp_symbols774)(VkBindImagePlaneMemoryInfo&&) = &VkBindImagePlaneMemoryInfo::operator=;
extern "C" { void AcidSharp_symbols775(VkBindImagePlaneMemoryInfo* instance) { instance->~VkBindImagePlaneMemoryInfo(); } }
extern "C" { void AcidSharp_symbols776(void* instance) { new (instance) VkImagePlaneMemoryRequirementsInfo(); } }
extern "C" { void AcidSharp_symbols777(void* instance, const VkImagePlaneMemoryRequirementsInfo& _0) { new (instance) VkImagePlaneMemoryRequirementsInfo(_0); } }
VkImagePlaneMemoryRequirementsInfo& (VkImagePlaneMemoryRequirementsInfo::*AcidSharp_symbols778)(const VkImagePlaneMemoryRequirementsInfo&) = &VkImagePlaneMemoryRequirementsInfo::operator=;
VkImagePlaneMemoryRequirementsInfo& (VkImagePlaneMemoryRequirementsInfo::*AcidSharp_symbols779)(VkImagePlaneMemoryRequirementsInfo&&) = &VkImagePlaneMemoryRequirementsInfo::operator=;
extern "C" { void AcidSharp_symbols780(VkImagePlaneMemoryRequirementsInfo* instance) { instance->~VkImagePlaneMemoryRequirementsInfo(); } }
extern "C" { void AcidSharp_symbols781(void* instance) { new (instance) VkPhysicalDeviceSamplerYcbcrConversionFeatures(); } }
extern "C" { void AcidSharp_symbols782(void* instance, const VkPhysicalDeviceSamplerYcbcrConversionFeatures& _0) { new (instance) VkPhysicalDeviceSamplerYcbcrConversionFeatures(_0); } }
VkPhysicalDeviceSamplerYcbcrConversionFeatures& (VkPhysicalDeviceSamplerYcbcrConversionFeatures::*AcidSharp_symbols783)(const VkPhysicalDeviceSamplerYcbcrConversionFeatures&) = &VkPhysicalDeviceSamplerYcbcrConversionFeatures::operator=;
VkPhysicalDeviceSamplerYcbcrConversionFeatures& (VkPhysicalDeviceSamplerYcbcrConversionFeatures::*AcidSharp_symbols784)(VkPhysicalDeviceSamplerYcbcrConversionFeatures&&) = &VkPhysicalDeviceSamplerYcbcrConversionFeatures::operator=;
extern "C" { void AcidSharp_symbols785(VkPhysicalDeviceSamplerYcbcrConversionFeatures* instance) { instance->~VkPhysicalDeviceSamplerYcbcrConversionFeatures(); } }
extern "C" { void AcidSharp_symbols786(void* instance) { new (instance) VkSamplerYcbcrConversionImageFormatProperties(); } }
extern "C" { void AcidSharp_symbols787(void* instance, const VkSamplerYcbcrConversionImageFormatProperties& _0) { new (instance) VkSamplerYcbcrConversionImageFormatProperties(_0); } }
VkSamplerYcbcrConversionImageFormatProperties& (VkSamplerYcbcrConversionImageFormatProperties::*AcidSharp_symbols788)(const VkSamplerYcbcrConversionImageFormatProperties&) = &VkSamplerYcbcrConversionImageFormatProperties::operator=;
VkSamplerYcbcrConversionImageFormatProperties& (VkSamplerYcbcrConversionImageFormatProperties::*AcidSharp_symbols789)(VkSamplerYcbcrConversionImageFormatProperties&&) = &VkSamplerYcbcrConversionImageFormatProperties::operator=;
extern "C" { void AcidSharp_symbols790(VkSamplerYcbcrConversionImageFormatProperties* instance) { instance->~VkSamplerYcbcrConversionImageFormatProperties(); } }
extern "C" { void AcidSharp_symbols791(void* instance) { new (instance) VkDescriptorUpdateTemplateEntry(); } }
extern "C" { void AcidSharp_symbols792(void* instance, const VkDescriptorUpdateTemplateEntry& _0) { new (instance) VkDescriptorUpdateTemplateEntry(_0); } }
VkDescriptorUpdateTemplateEntry& (VkDescriptorUpdateTemplateEntry::*AcidSharp_symbols793)(const VkDescriptorUpdateTemplateEntry&) = &VkDescriptorUpdateTemplateEntry::operator=;
VkDescriptorUpdateTemplateEntry& (VkDescriptorUpdateTemplateEntry::*AcidSharp_symbols794)(VkDescriptorUpdateTemplateEntry&&) = &VkDescriptorUpdateTemplateEntry::operator=;
extern "C" { void AcidSharp_symbols795(VkDescriptorUpdateTemplateEntry* instance) { instance->~VkDescriptorUpdateTemplateEntry(); } }
extern "C" { void AcidSharp_symbols796(void* instance) { new (instance) VkDescriptorUpdateTemplateCreateInfo(); } }
extern "C" { void AcidSharp_symbols797(void* instance, const VkDescriptorUpdateTemplateCreateInfo& _0) { new (instance) VkDescriptorUpdateTemplateCreateInfo(_0); } }
VkDescriptorUpdateTemplateCreateInfo& (VkDescriptorUpdateTemplateCreateInfo::*AcidSharp_symbols798)(const VkDescriptorUpdateTemplateCreateInfo&) = &VkDescriptorUpdateTemplateCreateInfo::operator=;
VkDescriptorUpdateTemplateCreateInfo& (VkDescriptorUpdateTemplateCreateInfo::*AcidSharp_symbols799)(VkDescriptorUpdateTemplateCreateInfo&&) = &VkDescriptorUpdateTemplateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols800(VkDescriptorUpdateTemplateCreateInfo* instance) { instance->~VkDescriptorUpdateTemplateCreateInfo(); } }
extern "C" { void AcidSharp_symbols801(void* instance) { new (instance) VkExternalMemoryProperties(); } }
extern "C" { void AcidSharp_symbols802(void* instance, const VkExternalMemoryProperties& _0) { new (instance) VkExternalMemoryProperties(_0); } }
VkExternalMemoryProperties& (VkExternalMemoryProperties::*AcidSharp_symbols803)(const VkExternalMemoryProperties&) = &VkExternalMemoryProperties::operator=;
VkExternalMemoryProperties& (VkExternalMemoryProperties::*AcidSharp_symbols804)(VkExternalMemoryProperties&&) = &VkExternalMemoryProperties::operator=;
extern "C" { void AcidSharp_symbols805(VkExternalMemoryProperties* instance) { instance->~VkExternalMemoryProperties(); } }
extern "C" { void AcidSharp_symbols806(void* instance) { new (instance) VkPhysicalDeviceExternalImageFormatInfo(); } }
extern "C" { void AcidSharp_symbols807(void* instance, const VkPhysicalDeviceExternalImageFormatInfo& _0) { new (instance) VkPhysicalDeviceExternalImageFormatInfo(_0); } }
VkPhysicalDeviceExternalImageFormatInfo& (VkPhysicalDeviceExternalImageFormatInfo::*AcidSharp_symbols808)(const VkPhysicalDeviceExternalImageFormatInfo&) = &VkPhysicalDeviceExternalImageFormatInfo::operator=;
VkPhysicalDeviceExternalImageFormatInfo& (VkPhysicalDeviceExternalImageFormatInfo::*AcidSharp_symbols809)(VkPhysicalDeviceExternalImageFormatInfo&&) = &VkPhysicalDeviceExternalImageFormatInfo::operator=;
extern "C" { void AcidSharp_symbols810(VkPhysicalDeviceExternalImageFormatInfo* instance) { instance->~VkPhysicalDeviceExternalImageFormatInfo(); } }
extern "C" { void AcidSharp_symbols811(void* instance) { new (instance) VkExternalImageFormatProperties(); } }
extern "C" { void AcidSharp_symbols812(void* instance, const VkExternalImageFormatProperties& _0) { new (instance) VkExternalImageFormatProperties(_0); } }
VkExternalImageFormatProperties& (VkExternalImageFormatProperties::*AcidSharp_symbols813)(const VkExternalImageFormatProperties&) = &VkExternalImageFormatProperties::operator=;
VkExternalImageFormatProperties& (VkExternalImageFormatProperties::*AcidSharp_symbols814)(VkExternalImageFormatProperties&&) = &VkExternalImageFormatProperties::operator=;
extern "C" { void AcidSharp_symbols815(VkExternalImageFormatProperties* instance) { instance->~VkExternalImageFormatProperties(); } }
extern "C" { void AcidSharp_symbols816(void* instance) { new (instance) VkPhysicalDeviceExternalBufferInfo(); } }
extern "C" { void AcidSharp_symbols817(void* instance, const VkPhysicalDeviceExternalBufferInfo& _0) { new (instance) VkPhysicalDeviceExternalBufferInfo(_0); } }
VkPhysicalDeviceExternalBufferInfo& (VkPhysicalDeviceExternalBufferInfo::*AcidSharp_symbols818)(const VkPhysicalDeviceExternalBufferInfo&) = &VkPhysicalDeviceExternalBufferInfo::operator=;
VkPhysicalDeviceExternalBufferInfo& (VkPhysicalDeviceExternalBufferInfo::*AcidSharp_symbols819)(VkPhysicalDeviceExternalBufferInfo&&) = &VkPhysicalDeviceExternalBufferInfo::operator=;
extern "C" { void AcidSharp_symbols820(VkPhysicalDeviceExternalBufferInfo* instance) { instance->~VkPhysicalDeviceExternalBufferInfo(); } }
extern "C" { void AcidSharp_symbols821(void* instance) { new (instance) VkExternalBufferProperties(); } }
extern "C" { void AcidSharp_symbols822(void* instance, const VkExternalBufferProperties& _0) { new (instance) VkExternalBufferProperties(_0); } }
VkExternalBufferProperties& (VkExternalBufferProperties::*AcidSharp_symbols823)(const VkExternalBufferProperties&) = &VkExternalBufferProperties::operator=;
VkExternalBufferProperties& (VkExternalBufferProperties::*AcidSharp_symbols824)(VkExternalBufferProperties&&) = &VkExternalBufferProperties::operator=;
extern "C" { void AcidSharp_symbols825(VkExternalBufferProperties* instance) { instance->~VkExternalBufferProperties(); } }
extern "C" { void AcidSharp_symbols826(void* instance) { new (instance) VkPhysicalDeviceIDProperties(); } }
extern "C" { void AcidSharp_symbols827(void* instance, const VkPhysicalDeviceIDProperties& _0) { new (instance) VkPhysicalDeviceIDProperties(_0); } }
VkPhysicalDeviceIDProperties& (VkPhysicalDeviceIDProperties::*AcidSharp_symbols828)(const VkPhysicalDeviceIDProperties&) = &VkPhysicalDeviceIDProperties::operator=;
VkPhysicalDeviceIDProperties& (VkPhysicalDeviceIDProperties::*AcidSharp_symbols829)(VkPhysicalDeviceIDProperties&&) = &VkPhysicalDeviceIDProperties::operator=;
extern "C" { void AcidSharp_symbols830(VkPhysicalDeviceIDProperties* instance) { instance->~VkPhysicalDeviceIDProperties(); } }
extern "C" { void AcidSharp_symbols831(void* instance) { new (instance) VkExternalMemoryImageCreateInfo(); } }
extern "C" { void AcidSharp_symbols832(void* instance, const VkExternalMemoryImageCreateInfo& _0) { new (instance) VkExternalMemoryImageCreateInfo(_0); } }
VkExternalMemoryImageCreateInfo& (VkExternalMemoryImageCreateInfo::*AcidSharp_symbols833)(const VkExternalMemoryImageCreateInfo&) = &VkExternalMemoryImageCreateInfo::operator=;
VkExternalMemoryImageCreateInfo& (VkExternalMemoryImageCreateInfo::*AcidSharp_symbols834)(VkExternalMemoryImageCreateInfo&&) = &VkExternalMemoryImageCreateInfo::operator=;
extern "C" { void AcidSharp_symbols835(VkExternalMemoryImageCreateInfo* instance) { instance->~VkExternalMemoryImageCreateInfo(); } }
extern "C" { void AcidSharp_symbols836(void* instance) { new (instance) VkExternalMemoryBufferCreateInfo(); } }
extern "C" { void AcidSharp_symbols837(void* instance, const VkExternalMemoryBufferCreateInfo& _0) { new (instance) VkExternalMemoryBufferCreateInfo(_0); } }
VkExternalMemoryBufferCreateInfo& (VkExternalMemoryBufferCreateInfo::*AcidSharp_symbols838)(const VkExternalMemoryBufferCreateInfo&) = &VkExternalMemoryBufferCreateInfo::operator=;
VkExternalMemoryBufferCreateInfo& (VkExternalMemoryBufferCreateInfo::*AcidSharp_symbols839)(VkExternalMemoryBufferCreateInfo&&) = &VkExternalMemoryBufferCreateInfo::operator=;
extern "C" { void AcidSharp_symbols840(VkExternalMemoryBufferCreateInfo* instance) { instance->~VkExternalMemoryBufferCreateInfo(); } }
extern "C" { void AcidSharp_symbols841(void* instance) { new (instance) VkExportMemoryAllocateInfo(); } }
extern "C" { void AcidSharp_symbols842(void* instance, const VkExportMemoryAllocateInfo& _0) { new (instance) VkExportMemoryAllocateInfo(_0); } }
VkExportMemoryAllocateInfo& (VkExportMemoryAllocateInfo::*AcidSharp_symbols843)(const VkExportMemoryAllocateInfo&) = &VkExportMemoryAllocateInfo::operator=;
VkExportMemoryAllocateInfo& (VkExportMemoryAllocateInfo::*AcidSharp_symbols844)(VkExportMemoryAllocateInfo&&) = &VkExportMemoryAllocateInfo::operator=;
extern "C" { void AcidSharp_symbols845(VkExportMemoryAllocateInfo* instance) { instance->~VkExportMemoryAllocateInfo(); } }
extern "C" { void AcidSharp_symbols846(void* instance) { new (instance) VkPhysicalDeviceExternalFenceInfo(); } }
extern "C" { void AcidSharp_symbols847(void* instance, const VkPhysicalDeviceExternalFenceInfo& _0) { new (instance) VkPhysicalDeviceExternalFenceInfo(_0); } }
VkPhysicalDeviceExternalFenceInfo& (VkPhysicalDeviceExternalFenceInfo::*AcidSharp_symbols848)(const VkPhysicalDeviceExternalFenceInfo&) = &VkPhysicalDeviceExternalFenceInfo::operator=;
VkPhysicalDeviceExternalFenceInfo& (VkPhysicalDeviceExternalFenceInfo::*AcidSharp_symbols849)(VkPhysicalDeviceExternalFenceInfo&&) = &VkPhysicalDeviceExternalFenceInfo::operator=;
extern "C" { void AcidSharp_symbols850(VkPhysicalDeviceExternalFenceInfo* instance) { instance->~VkPhysicalDeviceExternalFenceInfo(); } }
extern "C" { void AcidSharp_symbols851(void* instance) { new (instance) VkExternalFenceProperties(); } }
extern "C" { void AcidSharp_symbols852(void* instance, const VkExternalFenceProperties& _0) { new (instance) VkExternalFenceProperties(_0); } }
VkExternalFenceProperties& (VkExternalFenceProperties::*AcidSharp_symbols853)(const VkExternalFenceProperties&) = &VkExternalFenceProperties::operator=;
VkExternalFenceProperties& (VkExternalFenceProperties::*AcidSharp_symbols854)(VkExternalFenceProperties&&) = &VkExternalFenceProperties::operator=;
extern "C" { void AcidSharp_symbols855(VkExternalFenceProperties* instance) { instance->~VkExternalFenceProperties(); } }
extern "C" { void AcidSharp_symbols856(void* instance) { new (instance) VkExportFenceCreateInfo(); } }
extern "C" { void AcidSharp_symbols857(void* instance, const VkExportFenceCreateInfo& _0) { new (instance) VkExportFenceCreateInfo(_0); } }
VkExportFenceCreateInfo& (VkExportFenceCreateInfo::*AcidSharp_symbols858)(const VkExportFenceCreateInfo&) = &VkExportFenceCreateInfo::operator=;
VkExportFenceCreateInfo& (VkExportFenceCreateInfo::*AcidSharp_symbols859)(VkExportFenceCreateInfo&&) = &VkExportFenceCreateInfo::operator=;
extern "C" { void AcidSharp_symbols860(VkExportFenceCreateInfo* instance) { instance->~VkExportFenceCreateInfo(); } }
extern "C" { void AcidSharp_symbols861(void* instance) { new (instance) VkExportSemaphoreCreateInfo(); } }
extern "C" { void AcidSharp_symbols862(void* instance, const VkExportSemaphoreCreateInfo& _0) { new (instance) VkExportSemaphoreCreateInfo(_0); } }
VkExportSemaphoreCreateInfo& (VkExportSemaphoreCreateInfo::*AcidSharp_symbols863)(const VkExportSemaphoreCreateInfo&) = &VkExportSemaphoreCreateInfo::operator=;
VkExportSemaphoreCreateInfo& (VkExportSemaphoreCreateInfo::*AcidSharp_symbols864)(VkExportSemaphoreCreateInfo&&) = &VkExportSemaphoreCreateInfo::operator=;
extern "C" { void AcidSharp_symbols865(VkExportSemaphoreCreateInfo* instance) { instance->~VkExportSemaphoreCreateInfo(); } }
extern "C" { void AcidSharp_symbols866(void* instance) { new (instance) VkPhysicalDeviceExternalSemaphoreInfo(); } }
extern "C" { void AcidSharp_symbols867(void* instance, const VkPhysicalDeviceExternalSemaphoreInfo& _0) { new (instance) VkPhysicalDeviceExternalSemaphoreInfo(_0); } }
VkPhysicalDeviceExternalSemaphoreInfo& (VkPhysicalDeviceExternalSemaphoreInfo::*AcidSharp_symbols868)(const VkPhysicalDeviceExternalSemaphoreInfo&) = &VkPhysicalDeviceExternalSemaphoreInfo::operator=;
VkPhysicalDeviceExternalSemaphoreInfo& (VkPhysicalDeviceExternalSemaphoreInfo::*AcidSharp_symbols869)(VkPhysicalDeviceExternalSemaphoreInfo&&) = &VkPhysicalDeviceExternalSemaphoreInfo::operator=;
extern "C" { void AcidSharp_symbols870(VkPhysicalDeviceExternalSemaphoreInfo* instance) { instance->~VkPhysicalDeviceExternalSemaphoreInfo(); } }
extern "C" { void AcidSharp_symbols871(void* instance) { new (instance) VkExternalSemaphoreProperties(); } }
extern "C" { void AcidSharp_symbols872(void* instance, const VkExternalSemaphoreProperties& _0) { new (instance) VkExternalSemaphoreProperties(_0); } }
VkExternalSemaphoreProperties& (VkExternalSemaphoreProperties::*AcidSharp_symbols873)(const VkExternalSemaphoreProperties&) = &VkExternalSemaphoreProperties::operator=;
VkExternalSemaphoreProperties& (VkExternalSemaphoreProperties::*AcidSharp_symbols874)(VkExternalSemaphoreProperties&&) = &VkExternalSemaphoreProperties::operator=;
extern "C" { void AcidSharp_symbols875(VkExternalSemaphoreProperties* instance) { instance->~VkExternalSemaphoreProperties(); } }
extern "C" { void AcidSharp_symbols876(void* instance) { new (instance) VkPhysicalDeviceMaintenance3Properties(); } }
extern "C" { void AcidSharp_symbols877(void* instance, const VkPhysicalDeviceMaintenance3Properties& _0) { new (instance) VkPhysicalDeviceMaintenance3Properties(_0); } }
VkPhysicalDeviceMaintenance3Properties& (VkPhysicalDeviceMaintenance3Properties::*AcidSharp_symbols878)(const VkPhysicalDeviceMaintenance3Properties&) = &VkPhysicalDeviceMaintenance3Properties::operator=;
VkPhysicalDeviceMaintenance3Properties& (VkPhysicalDeviceMaintenance3Properties::*AcidSharp_symbols879)(VkPhysicalDeviceMaintenance3Properties&&) = &VkPhysicalDeviceMaintenance3Properties::operator=;
extern "C" { void AcidSharp_symbols880(VkPhysicalDeviceMaintenance3Properties* instance) { instance->~VkPhysicalDeviceMaintenance3Properties(); } }
extern "C" { void AcidSharp_symbols881(void* instance) { new (instance) VkDescriptorSetLayoutSupport(); } }
extern "C" { void AcidSharp_symbols882(void* instance, const VkDescriptorSetLayoutSupport& _0) { new (instance) VkDescriptorSetLayoutSupport(_0); } }
VkDescriptorSetLayoutSupport& (VkDescriptorSetLayoutSupport::*AcidSharp_symbols883)(const VkDescriptorSetLayoutSupport&) = &VkDescriptorSetLayoutSupport::operator=;
VkDescriptorSetLayoutSupport& (VkDescriptorSetLayoutSupport::*AcidSharp_symbols884)(VkDescriptorSetLayoutSupport&&) = &VkDescriptorSetLayoutSupport::operator=;
extern "C" { void AcidSharp_symbols885(VkDescriptorSetLayoutSupport* instance) { instance->~VkDescriptorSetLayoutSupport(); } }
extern "C" { void AcidSharp_symbols886(void* instance) { new (instance) VkPhysicalDeviceShaderDrawParameterFeatures(); } }
extern "C" { void AcidSharp_symbols887(void* instance, const VkPhysicalDeviceShaderDrawParameterFeatures& _0) { new (instance) VkPhysicalDeviceShaderDrawParameterFeatures(_0); } }
VkPhysicalDeviceShaderDrawParameterFeatures& (VkPhysicalDeviceShaderDrawParameterFeatures::*AcidSharp_symbols888)(const VkPhysicalDeviceShaderDrawParameterFeatures&) = &VkPhysicalDeviceShaderDrawParameterFeatures::operator=;
VkPhysicalDeviceShaderDrawParameterFeatures& (VkPhysicalDeviceShaderDrawParameterFeatures::*AcidSharp_symbols889)(VkPhysicalDeviceShaderDrawParameterFeatures&&) = &VkPhysicalDeviceShaderDrawParameterFeatures::operator=;
extern "C" { void AcidSharp_symbols890(VkPhysicalDeviceShaderDrawParameterFeatures* instance) { instance->~VkPhysicalDeviceShaderDrawParameterFeatures(); } }
extern "C" { void AcidSharp_symbols891(void* instance, const VkSurfaceCapabilitiesKHR& _0) { new (instance) VkSurfaceCapabilitiesKHR(_0); } }
extern "C" { void AcidSharp_symbols892(VkSurfaceCapabilitiesKHR* instance) { instance->~VkSurfaceCapabilitiesKHR(); } }
VkSurfaceCapabilitiesKHR& (VkSurfaceCapabilitiesKHR::*AcidSharp_symbols893)(const VkSurfaceCapabilitiesKHR&) = &VkSurfaceCapabilitiesKHR::operator=;
VkSurfaceCapabilitiesKHR& (VkSurfaceCapabilitiesKHR::*AcidSharp_symbols894)(VkSurfaceCapabilitiesKHR&&) = &VkSurfaceCapabilitiesKHR::operator=;
extern "C" { void AcidSharp_symbols895(void* instance) { new (instance) VkSurfaceCapabilitiesKHR(); } }
extern "C" { void AcidSharp_symbols896(void* instance, const VkSurfaceFormatKHR& _0) { new (instance) VkSurfaceFormatKHR(_0); } }
extern "C" { void AcidSharp_symbols897(VkSurfaceFormatKHR* instance) { instance->~VkSurfaceFormatKHR(); } }
VkSurfaceFormatKHR& (VkSurfaceFormatKHR::*AcidSharp_symbols898)(const VkSurfaceFormatKHR&) = &VkSurfaceFormatKHR::operator=;
VkSurfaceFormatKHR& (VkSurfaceFormatKHR::*AcidSharp_symbols899)(VkSurfaceFormatKHR&&) = &VkSurfaceFormatKHR::operator=;
extern "C" { void AcidSharp_symbols900(void* instance) { new (instance) VkSurfaceFormatKHR(); } }
extern "C" { void AcidSharp_symbols901(void* instance) { new (instance) VkSwapchainCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols902(void* instance, const VkSwapchainCreateInfoKHR& _0) { new (instance) VkSwapchainCreateInfoKHR(_0); } }
VkSwapchainCreateInfoKHR& (VkSwapchainCreateInfoKHR::*AcidSharp_symbols903)(const VkSwapchainCreateInfoKHR&) = &VkSwapchainCreateInfoKHR::operator=;
VkSwapchainCreateInfoKHR& (VkSwapchainCreateInfoKHR::*AcidSharp_symbols904)(VkSwapchainCreateInfoKHR&&) = &VkSwapchainCreateInfoKHR::operator=;
extern "C" { void AcidSharp_symbols905(VkSwapchainCreateInfoKHR* instance) { instance->~VkSwapchainCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols906(void* instance) { new (instance) VkPresentInfoKHR(); } }
extern "C" { void AcidSharp_symbols907(void* instance, const VkPresentInfoKHR& _0) { new (instance) VkPresentInfoKHR(_0); } }
VkPresentInfoKHR& (VkPresentInfoKHR::*AcidSharp_symbols908)(const VkPresentInfoKHR&) = &VkPresentInfoKHR::operator=;
VkPresentInfoKHR& (VkPresentInfoKHR::*AcidSharp_symbols909)(VkPresentInfoKHR&&) = &VkPresentInfoKHR::operator=;
extern "C" { void AcidSharp_symbols910(VkPresentInfoKHR* instance) { instance->~VkPresentInfoKHR(); } }
extern "C" { void AcidSharp_symbols911(void* instance) { new (instance) VkImageSwapchainCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols912(void* instance, const VkImageSwapchainCreateInfoKHR& _0) { new (instance) VkImageSwapchainCreateInfoKHR(_0); } }
VkImageSwapchainCreateInfoKHR& (VkImageSwapchainCreateInfoKHR::*AcidSharp_symbols913)(const VkImageSwapchainCreateInfoKHR&) = &VkImageSwapchainCreateInfoKHR::operator=;
VkImageSwapchainCreateInfoKHR& (VkImageSwapchainCreateInfoKHR::*AcidSharp_symbols914)(VkImageSwapchainCreateInfoKHR&&) = &VkImageSwapchainCreateInfoKHR::operator=;
extern "C" { void AcidSharp_symbols915(VkImageSwapchainCreateInfoKHR* instance) { instance->~VkImageSwapchainCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols916(void* instance) { new (instance) VkBindImageMemorySwapchainInfoKHR(); } }
extern "C" { void AcidSharp_symbols917(void* instance, const VkBindImageMemorySwapchainInfoKHR& _0) { new (instance) VkBindImageMemorySwapchainInfoKHR(_0); } }
VkBindImageMemorySwapchainInfoKHR& (VkBindImageMemorySwapchainInfoKHR::*AcidSharp_symbols918)(const VkBindImageMemorySwapchainInfoKHR&) = &VkBindImageMemorySwapchainInfoKHR::operator=;
VkBindImageMemorySwapchainInfoKHR& (VkBindImageMemorySwapchainInfoKHR::*AcidSharp_symbols919)(VkBindImageMemorySwapchainInfoKHR&&) = &VkBindImageMemorySwapchainInfoKHR::operator=;
extern "C" { void AcidSharp_symbols920(VkBindImageMemorySwapchainInfoKHR* instance) { instance->~VkBindImageMemorySwapchainInfoKHR(); } }
extern "C" { void AcidSharp_symbols921(void* instance) { new (instance) VkAcquireNextImageInfoKHR(); } }
extern "C" { void AcidSharp_symbols922(void* instance, const VkAcquireNextImageInfoKHR& _0) { new (instance) VkAcquireNextImageInfoKHR(_0); } }
VkAcquireNextImageInfoKHR& (VkAcquireNextImageInfoKHR::*AcidSharp_symbols923)(const VkAcquireNextImageInfoKHR&) = &VkAcquireNextImageInfoKHR::operator=;
VkAcquireNextImageInfoKHR& (VkAcquireNextImageInfoKHR::*AcidSharp_symbols924)(VkAcquireNextImageInfoKHR&&) = &VkAcquireNextImageInfoKHR::operator=;
extern "C" { void AcidSharp_symbols925(VkAcquireNextImageInfoKHR* instance) { instance->~VkAcquireNextImageInfoKHR(); } }
extern "C" { void AcidSharp_symbols926(void* instance) { new (instance) VkDeviceGroupPresentCapabilitiesKHR(); } }
extern "C" { void AcidSharp_symbols927(void* instance, const VkDeviceGroupPresentCapabilitiesKHR& _0) { new (instance) VkDeviceGroupPresentCapabilitiesKHR(_0); } }
VkDeviceGroupPresentCapabilitiesKHR& (VkDeviceGroupPresentCapabilitiesKHR::*AcidSharp_symbols928)(const VkDeviceGroupPresentCapabilitiesKHR&) = &VkDeviceGroupPresentCapabilitiesKHR::operator=;
VkDeviceGroupPresentCapabilitiesKHR& (VkDeviceGroupPresentCapabilitiesKHR::*AcidSharp_symbols929)(VkDeviceGroupPresentCapabilitiesKHR&&) = &VkDeviceGroupPresentCapabilitiesKHR::operator=;
extern "C" { void AcidSharp_symbols930(VkDeviceGroupPresentCapabilitiesKHR* instance) { instance->~VkDeviceGroupPresentCapabilitiesKHR(); } }
extern "C" { void AcidSharp_symbols931(void* instance) { new (instance) VkDeviceGroupPresentInfoKHR(); } }
extern "C" { void AcidSharp_symbols932(void* instance, const VkDeviceGroupPresentInfoKHR& _0) { new (instance) VkDeviceGroupPresentInfoKHR(_0); } }
VkDeviceGroupPresentInfoKHR& (VkDeviceGroupPresentInfoKHR::*AcidSharp_symbols933)(const VkDeviceGroupPresentInfoKHR&) = &VkDeviceGroupPresentInfoKHR::operator=;
VkDeviceGroupPresentInfoKHR& (VkDeviceGroupPresentInfoKHR::*AcidSharp_symbols934)(VkDeviceGroupPresentInfoKHR&&) = &VkDeviceGroupPresentInfoKHR::operator=;
extern "C" { void AcidSharp_symbols935(VkDeviceGroupPresentInfoKHR* instance) { instance->~VkDeviceGroupPresentInfoKHR(); } }
extern "C" { void AcidSharp_symbols936(void* instance) { new (instance) VkDeviceGroupSwapchainCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols937(void* instance, const VkDeviceGroupSwapchainCreateInfoKHR& _0) { new (instance) VkDeviceGroupSwapchainCreateInfoKHR(_0); } }
VkDeviceGroupSwapchainCreateInfoKHR& (VkDeviceGroupSwapchainCreateInfoKHR::*AcidSharp_symbols938)(const VkDeviceGroupSwapchainCreateInfoKHR&) = &VkDeviceGroupSwapchainCreateInfoKHR::operator=;
VkDeviceGroupSwapchainCreateInfoKHR& (VkDeviceGroupSwapchainCreateInfoKHR::*AcidSharp_symbols939)(VkDeviceGroupSwapchainCreateInfoKHR&&) = &VkDeviceGroupSwapchainCreateInfoKHR::operator=;
extern "C" { void AcidSharp_symbols940(VkDeviceGroupSwapchainCreateInfoKHR* instance) { instance->~VkDeviceGroupSwapchainCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols941(void* instance) { new (instance) VkDisplayPropertiesKHR(); } }
extern "C" { void AcidSharp_symbols942(void* instance, const VkDisplayPropertiesKHR& _0) { new (instance) VkDisplayPropertiesKHR(_0); } }
VkDisplayPropertiesKHR& (VkDisplayPropertiesKHR::*AcidSharp_symbols943)(const VkDisplayPropertiesKHR&) = &VkDisplayPropertiesKHR::operator=;
VkDisplayPropertiesKHR& (VkDisplayPropertiesKHR::*AcidSharp_symbols944)(VkDisplayPropertiesKHR&&) = &VkDisplayPropertiesKHR::operator=;
extern "C" { void AcidSharp_symbols945(VkDisplayPropertiesKHR* instance) { instance->~VkDisplayPropertiesKHR(); } }
extern "C" { void AcidSharp_symbols946(void* instance) { new (instance) VkDisplayModeParametersKHR(); } }
extern "C" { void AcidSharp_symbols947(void* instance, const VkDisplayModeParametersKHR& _0) { new (instance) VkDisplayModeParametersKHR(_0); } }
VkDisplayModeParametersKHR& (VkDisplayModeParametersKHR::*AcidSharp_symbols948)(const VkDisplayModeParametersKHR&) = &VkDisplayModeParametersKHR::operator=;
VkDisplayModeParametersKHR& (VkDisplayModeParametersKHR::*AcidSharp_symbols949)(VkDisplayModeParametersKHR&&) = &VkDisplayModeParametersKHR::operator=;
extern "C" { void AcidSharp_symbols950(VkDisplayModeParametersKHR* instance) { instance->~VkDisplayModeParametersKHR(); } }
extern "C" { void AcidSharp_symbols951(void* instance) { new (instance) VkDisplayModePropertiesKHR(); } }
extern "C" { void AcidSharp_symbols952(void* instance, const VkDisplayModePropertiesKHR& _0) { new (instance) VkDisplayModePropertiesKHR(_0); } }
VkDisplayModePropertiesKHR& (VkDisplayModePropertiesKHR::*AcidSharp_symbols953)(const VkDisplayModePropertiesKHR&) = &VkDisplayModePropertiesKHR::operator=;
VkDisplayModePropertiesKHR& (VkDisplayModePropertiesKHR::*AcidSharp_symbols954)(VkDisplayModePropertiesKHR&&) = &VkDisplayModePropertiesKHR::operator=;
extern "C" { void AcidSharp_symbols955(VkDisplayModePropertiesKHR* instance) { instance->~VkDisplayModePropertiesKHR(); } }
extern "C" { void AcidSharp_symbols956(void* instance) { new (instance) VkDisplayModeCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols957(void* instance, const VkDisplayModeCreateInfoKHR& _0) { new (instance) VkDisplayModeCreateInfoKHR(_0); } }
VkDisplayModeCreateInfoKHR& (VkDisplayModeCreateInfoKHR::*AcidSharp_symbols958)(const VkDisplayModeCreateInfoKHR&) = &VkDisplayModeCreateInfoKHR::operator=;
VkDisplayModeCreateInfoKHR& (VkDisplayModeCreateInfoKHR::*AcidSharp_symbols959)(VkDisplayModeCreateInfoKHR&&) = &VkDisplayModeCreateInfoKHR::operator=;
extern "C" { void AcidSharp_symbols960(VkDisplayModeCreateInfoKHR* instance) { instance->~VkDisplayModeCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols961(void* instance) { new (instance) VkDisplayPlaneCapabilitiesKHR(); } }
extern "C" { void AcidSharp_symbols962(void* instance, const VkDisplayPlaneCapabilitiesKHR& _0) { new (instance) VkDisplayPlaneCapabilitiesKHR(_0); } }
VkDisplayPlaneCapabilitiesKHR& (VkDisplayPlaneCapabilitiesKHR::*AcidSharp_symbols963)(const VkDisplayPlaneCapabilitiesKHR&) = &VkDisplayPlaneCapabilitiesKHR::operator=;
VkDisplayPlaneCapabilitiesKHR& (VkDisplayPlaneCapabilitiesKHR::*AcidSharp_symbols964)(VkDisplayPlaneCapabilitiesKHR&&) = &VkDisplayPlaneCapabilitiesKHR::operator=;
extern "C" { void AcidSharp_symbols965(VkDisplayPlaneCapabilitiesKHR* instance) { instance->~VkDisplayPlaneCapabilitiesKHR(); } }
extern "C" { void AcidSharp_symbols966(void* instance) { new (instance) VkDisplayPlanePropertiesKHR(); } }
extern "C" { void AcidSharp_symbols967(void* instance, const VkDisplayPlanePropertiesKHR& _0) { new (instance) VkDisplayPlanePropertiesKHR(_0); } }
VkDisplayPlanePropertiesKHR& (VkDisplayPlanePropertiesKHR::*AcidSharp_symbols968)(const VkDisplayPlanePropertiesKHR&) = &VkDisplayPlanePropertiesKHR::operator=;
VkDisplayPlanePropertiesKHR& (VkDisplayPlanePropertiesKHR::*AcidSharp_symbols969)(VkDisplayPlanePropertiesKHR&&) = &VkDisplayPlanePropertiesKHR::operator=;
extern "C" { void AcidSharp_symbols970(VkDisplayPlanePropertiesKHR* instance) { instance->~VkDisplayPlanePropertiesKHR(); } }
extern "C" { void AcidSharp_symbols971(void* instance) { new (instance) VkDisplaySurfaceCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols972(void* instance, const VkDisplaySurfaceCreateInfoKHR& _0) { new (instance) VkDisplaySurfaceCreateInfoKHR(_0); } }
VkDisplaySurfaceCreateInfoKHR& (VkDisplaySurfaceCreateInfoKHR::*AcidSharp_symbols973)(const VkDisplaySurfaceCreateInfoKHR&) = &VkDisplaySurfaceCreateInfoKHR::operator=;
VkDisplaySurfaceCreateInfoKHR& (VkDisplaySurfaceCreateInfoKHR::*AcidSharp_symbols974)(VkDisplaySurfaceCreateInfoKHR&&) = &VkDisplaySurfaceCreateInfoKHR::operator=;
extern "C" { void AcidSharp_symbols975(VkDisplaySurfaceCreateInfoKHR* instance) { instance->~VkDisplaySurfaceCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols976(void* instance) { new (instance) VkDisplayPresentInfoKHR(); } }
extern "C" { void AcidSharp_symbols977(void* instance, const VkDisplayPresentInfoKHR& _0) { new (instance) VkDisplayPresentInfoKHR(_0); } }
VkDisplayPresentInfoKHR& (VkDisplayPresentInfoKHR::*AcidSharp_symbols978)(const VkDisplayPresentInfoKHR&) = &VkDisplayPresentInfoKHR::operator=;
VkDisplayPresentInfoKHR& (VkDisplayPresentInfoKHR::*AcidSharp_symbols979)(VkDisplayPresentInfoKHR&&) = &VkDisplayPresentInfoKHR::operator=;
extern "C" { void AcidSharp_symbols980(VkDisplayPresentInfoKHR* instance) { instance->~VkDisplayPresentInfoKHR(); } }
extern "C" { void AcidSharp_symbols981(void* instance) { new (instance) VkImportMemoryFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols982(void* instance, const VkImportMemoryFdInfoKHR& _0) { new (instance) VkImportMemoryFdInfoKHR(_0); } }
VkImportMemoryFdInfoKHR& (VkImportMemoryFdInfoKHR::*AcidSharp_symbols983)(const VkImportMemoryFdInfoKHR&) = &VkImportMemoryFdInfoKHR::operator=;
VkImportMemoryFdInfoKHR& (VkImportMemoryFdInfoKHR::*AcidSharp_symbols984)(VkImportMemoryFdInfoKHR&&) = &VkImportMemoryFdInfoKHR::operator=;
extern "C" { void AcidSharp_symbols985(VkImportMemoryFdInfoKHR* instance) { instance->~VkImportMemoryFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols986(void* instance) { new (instance) VkMemoryFdPropertiesKHR(); } }
extern "C" { void AcidSharp_symbols987(void* instance, const VkMemoryFdPropertiesKHR& _0) { new (instance) VkMemoryFdPropertiesKHR(_0); } }
VkMemoryFdPropertiesKHR& (VkMemoryFdPropertiesKHR::*AcidSharp_symbols988)(const VkMemoryFdPropertiesKHR&) = &VkMemoryFdPropertiesKHR::operator=;
VkMemoryFdPropertiesKHR& (VkMemoryFdPropertiesKHR::*AcidSharp_symbols989)(VkMemoryFdPropertiesKHR&&) = &VkMemoryFdPropertiesKHR::operator=;
extern "C" { void AcidSharp_symbols990(VkMemoryFdPropertiesKHR* instance) { instance->~VkMemoryFdPropertiesKHR(); } }
extern "C" { void AcidSharp_symbols991(void* instance) { new (instance) VkMemoryGetFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols992(void* instance, const VkMemoryGetFdInfoKHR& _0) { new (instance) VkMemoryGetFdInfoKHR(_0); } }
VkMemoryGetFdInfoKHR& (VkMemoryGetFdInfoKHR::*AcidSharp_symbols993)(const VkMemoryGetFdInfoKHR&) = &VkMemoryGetFdInfoKHR::operator=;
VkMemoryGetFdInfoKHR& (VkMemoryGetFdInfoKHR::*AcidSharp_symbols994)(VkMemoryGetFdInfoKHR&&) = &VkMemoryGetFdInfoKHR::operator=;
extern "C" { void AcidSharp_symbols995(VkMemoryGetFdInfoKHR* instance) { instance->~VkMemoryGetFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols996(void* instance) { new (instance) VkImportSemaphoreFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols997(void* instance, const VkImportSemaphoreFdInfoKHR& _0) { new (instance) VkImportSemaphoreFdInfoKHR(_0); } }
VkImportSemaphoreFdInfoKHR& (VkImportSemaphoreFdInfoKHR::*AcidSharp_symbols998)(const VkImportSemaphoreFdInfoKHR&) = &VkImportSemaphoreFdInfoKHR::operator=;
VkImportSemaphoreFdInfoKHR& (VkImportSemaphoreFdInfoKHR::*AcidSharp_symbols999)(VkImportSemaphoreFdInfoKHR&&) = &VkImportSemaphoreFdInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1000(VkImportSemaphoreFdInfoKHR* instance) { instance->~VkImportSemaphoreFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols1001(void* instance) { new (instance) VkSemaphoreGetFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols1002(void* instance, const VkSemaphoreGetFdInfoKHR& _0) { new (instance) VkSemaphoreGetFdInfoKHR(_0); } }
VkSemaphoreGetFdInfoKHR& (VkSemaphoreGetFdInfoKHR::*AcidSharp_symbols1003)(const VkSemaphoreGetFdInfoKHR&) = &VkSemaphoreGetFdInfoKHR::operator=;
VkSemaphoreGetFdInfoKHR& (VkSemaphoreGetFdInfoKHR::*AcidSharp_symbols1004)(VkSemaphoreGetFdInfoKHR&&) = &VkSemaphoreGetFdInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1005(VkSemaphoreGetFdInfoKHR* instance) { instance->~VkSemaphoreGetFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols1006(void* instance) { new (instance) VkPhysicalDevicePushDescriptorPropertiesKHR(); } }
extern "C" { void AcidSharp_symbols1007(void* instance, const VkPhysicalDevicePushDescriptorPropertiesKHR& _0) { new (instance) VkPhysicalDevicePushDescriptorPropertiesKHR(_0); } }
VkPhysicalDevicePushDescriptorPropertiesKHR& (VkPhysicalDevicePushDescriptorPropertiesKHR::*AcidSharp_symbols1008)(const VkPhysicalDevicePushDescriptorPropertiesKHR&) = &VkPhysicalDevicePushDescriptorPropertiesKHR::operator=;
VkPhysicalDevicePushDescriptorPropertiesKHR& (VkPhysicalDevicePushDescriptorPropertiesKHR::*AcidSharp_symbols1009)(VkPhysicalDevicePushDescriptorPropertiesKHR&&) = &VkPhysicalDevicePushDescriptorPropertiesKHR::operator=;
extern "C" { void AcidSharp_symbols1010(VkPhysicalDevicePushDescriptorPropertiesKHR* instance) { instance->~VkPhysicalDevicePushDescriptorPropertiesKHR(); } }
extern "C" { void AcidSharp_symbols1011(void* instance) { new (instance) VkRectLayerKHR(); } }
extern "C" { void AcidSharp_symbols1012(void* instance, const VkRectLayerKHR& _0) { new (instance) VkRectLayerKHR(_0); } }
VkRectLayerKHR& (VkRectLayerKHR::*AcidSharp_symbols1013)(const VkRectLayerKHR&) = &VkRectLayerKHR::operator=;
VkRectLayerKHR& (VkRectLayerKHR::*AcidSharp_symbols1014)(VkRectLayerKHR&&) = &VkRectLayerKHR::operator=;
extern "C" { void AcidSharp_symbols1015(VkRectLayerKHR* instance) { instance->~VkRectLayerKHR(); } }
extern "C" { void AcidSharp_symbols1016(void* instance) { new (instance) VkPresentRegionKHR(); } }
extern "C" { void AcidSharp_symbols1017(void* instance, const VkPresentRegionKHR& _0) { new (instance) VkPresentRegionKHR(_0); } }
VkPresentRegionKHR& (VkPresentRegionKHR::*AcidSharp_symbols1018)(const VkPresentRegionKHR&) = &VkPresentRegionKHR::operator=;
VkPresentRegionKHR& (VkPresentRegionKHR::*AcidSharp_symbols1019)(VkPresentRegionKHR&&) = &VkPresentRegionKHR::operator=;
extern "C" { void AcidSharp_symbols1020(VkPresentRegionKHR* instance) { instance->~VkPresentRegionKHR(); } }
extern "C" { void AcidSharp_symbols1021(void* instance) { new (instance) VkPresentRegionsKHR(); } }
extern "C" { void AcidSharp_symbols1022(void* instance, const VkPresentRegionsKHR& _0) { new (instance) VkPresentRegionsKHR(_0); } }
VkPresentRegionsKHR& (VkPresentRegionsKHR::*AcidSharp_symbols1023)(const VkPresentRegionsKHR&) = &VkPresentRegionsKHR::operator=;
VkPresentRegionsKHR& (VkPresentRegionsKHR::*AcidSharp_symbols1024)(VkPresentRegionsKHR&&) = &VkPresentRegionsKHR::operator=;
extern "C" { void AcidSharp_symbols1025(VkPresentRegionsKHR* instance) { instance->~VkPresentRegionsKHR(); } }
extern "C" { void AcidSharp_symbols1026(void* instance) { new (instance) VkAttachmentDescription2KHR(); } }
extern "C" { void AcidSharp_symbols1027(void* instance, const VkAttachmentDescription2KHR& _0) { new (instance) VkAttachmentDescription2KHR(_0); } }
VkAttachmentDescription2KHR& (VkAttachmentDescription2KHR::*AcidSharp_symbols1028)(const VkAttachmentDescription2KHR&) = &VkAttachmentDescription2KHR::operator=;
VkAttachmentDescription2KHR& (VkAttachmentDescription2KHR::*AcidSharp_symbols1029)(VkAttachmentDescription2KHR&&) = &VkAttachmentDescription2KHR::operator=;
extern "C" { void AcidSharp_symbols1030(VkAttachmentDescription2KHR* instance) { instance->~VkAttachmentDescription2KHR(); } }
extern "C" { void AcidSharp_symbols1031(void* instance) { new (instance) VkAttachmentReference2KHR(); } }
extern "C" { void AcidSharp_symbols1032(void* instance, const VkAttachmentReference2KHR& _0) { new (instance) VkAttachmentReference2KHR(_0); } }
VkAttachmentReference2KHR& (VkAttachmentReference2KHR::*AcidSharp_symbols1033)(const VkAttachmentReference2KHR&) = &VkAttachmentReference2KHR::operator=;
VkAttachmentReference2KHR& (VkAttachmentReference2KHR::*AcidSharp_symbols1034)(VkAttachmentReference2KHR&&) = &VkAttachmentReference2KHR::operator=;
extern "C" { void AcidSharp_symbols1035(VkAttachmentReference2KHR* instance) { instance->~VkAttachmentReference2KHR(); } }
extern "C" { void AcidSharp_symbols1036(void* instance) { new (instance) VkSubpassDescription2KHR(); } }
extern "C" { void AcidSharp_symbols1037(void* instance, const VkSubpassDescription2KHR& _0) { new (instance) VkSubpassDescription2KHR(_0); } }
VkSubpassDescription2KHR& (VkSubpassDescription2KHR::*AcidSharp_symbols1038)(const VkSubpassDescription2KHR&) = &VkSubpassDescription2KHR::operator=;
VkSubpassDescription2KHR& (VkSubpassDescription2KHR::*AcidSharp_symbols1039)(VkSubpassDescription2KHR&&) = &VkSubpassDescription2KHR::operator=;
extern "C" { void AcidSharp_symbols1040(VkSubpassDescription2KHR* instance) { instance->~VkSubpassDescription2KHR(); } }
extern "C" { void AcidSharp_symbols1041(void* instance) { new (instance) VkSubpassDependency2KHR(); } }
extern "C" { void AcidSharp_symbols1042(void* instance, const VkSubpassDependency2KHR& _0) { new (instance) VkSubpassDependency2KHR(_0); } }
VkSubpassDependency2KHR& (VkSubpassDependency2KHR::*AcidSharp_symbols1043)(const VkSubpassDependency2KHR&) = &VkSubpassDependency2KHR::operator=;
VkSubpassDependency2KHR& (VkSubpassDependency2KHR::*AcidSharp_symbols1044)(VkSubpassDependency2KHR&&) = &VkSubpassDependency2KHR::operator=;
extern "C" { void AcidSharp_symbols1045(VkSubpassDependency2KHR* instance) { instance->~VkSubpassDependency2KHR(); } }
extern "C" { void AcidSharp_symbols1046(void* instance) { new (instance) VkRenderPassCreateInfo2KHR(); } }
extern "C" { void AcidSharp_symbols1047(void* instance, const VkRenderPassCreateInfo2KHR& _0) { new (instance) VkRenderPassCreateInfo2KHR(_0); } }
VkRenderPassCreateInfo2KHR& (VkRenderPassCreateInfo2KHR::*AcidSharp_symbols1048)(const VkRenderPassCreateInfo2KHR&) = &VkRenderPassCreateInfo2KHR::operator=;
VkRenderPassCreateInfo2KHR& (VkRenderPassCreateInfo2KHR::*AcidSharp_symbols1049)(VkRenderPassCreateInfo2KHR&&) = &VkRenderPassCreateInfo2KHR::operator=;
extern "C" { void AcidSharp_symbols1050(VkRenderPassCreateInfo2KHR* instance) { instance->~VkRenderPassCreateInfo2KHR(); } }
extern "C" { void AcidSharp_symbols1051(void* instance) { new (instance) VkSubpassBeginInfoKHR(); } }
extern "C" { void AcidSharp_symbols1052(void* instance, const VkSubpassBeginInfoKHR& _0) { new (instance) VkSubpassBeginInfoKHR(_0); } }
VkSubpassBeginInfoKHR& (VkSubpassBeginInfoKHR::*AcidSharp_symbols1053)(const VkSubpassBeginInfoKHR&) = &VkSubpassBeginInfoKHR::operator=;
VkSubpassBeginInfoKHR& (VkSubpassBeginInfoKHR::*AcidSharp_symbols1054)(VkSubpassBeginInfoKHR&&) = &VkSubpassBeginInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1055(VkSubpassBeginInfoKHR* instance) { instance->~VkSubpassBeginInfoKHR(); } }
extern "C" { void AcidSharp_symbols1056(void* instance) { new (instance) VkSubpassEndInfoKHR(); } }
extern "C" { void AcidSharp_symbols1057(void* instance, const VkSubpassEndInfoKHR& _0) { new (instance) VkSubpassEndInfoKHR(_0); } }
VkSubpassEndInfoKHR& (VkSubpassEndInfoKHR::*AcidSharp_symbols1058)(const VkSubpassEndInfoKHR&) = &VkSubpassEndInfoKHR::operator=;
VkSubpassEndInfoKHR& (VkSubpassEndInfoKHR::*AcidSharp_symbols1059)(VkSubpassEndInfoKHR&&) = &VkSubpassEndInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1060(VkSubpassEndInfoKHR* instance) { instance->~VkSubpassEndInfoKHR(); } }
extern "C" { void AcidSharp_symbols1061(void* instance) { new (instance) VkSharedPresentSurfaceCapabilitiesKHR(); } }
extern "C" { void AcidSharp_symbols1062(void* instance, const VkSharedPresentSurfaceCapabilitiesKHR& _0) { new (instance) VkSharedPresentSurfaceCapabilitiesKHR(_0); } }
VkSharedPresentSurfaceCapabilitiesKHR& (VkSharedPresentSurfaceCapabilitiesKHR::*AcidSharp_symbols1063)(const VkSharedPresentSurfaceCapabilitiesKHR&) = &VkSharedPresentSurfaceCapabilitiesKHR::operator=;
VkSharedPresentSurfaceCapabilitiesKHR& (VkSharedPresentSurfaceCapabilitiesKHR::*AcidSharp_symbols1064)(VkSharedPresentSurfaceCapabilitiesKHR&&) = &VkSharedPresentSurfaceCapabilitiesKHR::operator=;
extern "C" { void AcidSharp_symbols1065(VkSharedPresentSurfaceCapabilitiesKHR* instance) { instance->~VkSharedPresentSurfaceCapabilitiesKHR(); } }
extern "C" { void AcidSharp_symbols1066(void* instance) { new (instance) VkImportFenceFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols1067(void* instance, const VkImportFenceFdInfoKHR& _0) { new (instance) VkImportFenceFdInfoKHR(_0); } }
VkImportFenceFdInfoKHR& (VkImportFenceFdInfoKHR::*AcidSharp_symbols1068)(const VkImportFenceFdInfoKHR&) = &VkImportFenceFdInfoKHR::operator=;
VkImportFenceFdInfoKHR& (VkImportFenceFdInfoKHR::*AcidSharp_symbols1069)(VkImportFenceFdInfoKHR&&) = &VkImportFenceFdInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1070(VkImportFenceFdInfoKHR* instance) { instance->~VkImportFenceFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols1071(void* instance) { new (instance) VkFenceGetFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols1072(void* instance, const VkFenceGetFdInfoKHR& _0) { new (instance) VkFenceGetFdInfoKHR(_0); } }
VkFenceGetFdInfoKHR& (VkFenceGetFdInfoKHR::*AcidSharp_symbols1073)(const VkFenceGetFdInfoKHR&) = &VkFenceGetFdInfoKHR::operator=;
VkFenceGetFdInfoKHR& (VkFenceGetFdInfoKHR::*AcidSharp_symbols1074)(VkFenceGetFdInfoKHR&&) = &VkFenceGetFdInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1075(VkFenceGetFdInfoKHR* instance) { instance->~VkFenceGetFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols1076(void* instance) { new (instance) VkPhysicalDeviceSurfaceInfo2KHR(); } }
extern "C" { void AcidSharp_symbols1077(void* instance, const VkPhysicalDeviceSurfaceInfo2KHR& _0) { new (instance) VkPhysicalDeviceSurfaceInfo2KHR(_0); } }
VkPhysicalDeviceSurfaceInfo2KHR& (VkPhysicalDeviceSurfaceInfo2KHR::*AcidSharp_symbols1078)(const VkPhysicalDeviceSurfaceInfo2KHR&) = &VkPhysicalDeviceSurfaceInfo2KHR::operator=;
VkPhysicalDeviceSurfaceInfo2KHR& (VkPhysicalDeviceSurfaceInfo2KHR::*AcidSharp_symbols1079)(VkPhysicalDeviceSurfaceInfo2KHR&&) = &VkPhysicalDeviceSurfaceInfo2KHR::operator=;
extern "C" { void AcidSharp_symbols1080(VkPhysicalDeviceSurfaceInfo2KHR* instance) { instance->~VkPhysicalDeviceSurfaceInfo2KHR(); } }
extern "C" { void AcidSharp_symbols1081(void* instance) { new (instance) VkSurfaceCapabilities2KHR(); } }
extern "C" { void AcidSharp_symbols1082(void* instance, const VkSurfaceCapabilities2KHR& _0) { new (instance) VkSurfaceCapabilities2KHR(_0); } }
VkSurfaceCapabilities2KHR& (VkSurfaceCapabilities2KHR::*AcidSharp_symbols1083)(const VkSurfaceCapabilities2KHR&) = &VkSurfaceCapabilities2KHR::operator=;
VkSurfaceCapabilities2KHR& (VkSurfaceCapabilities2KHR::*AcidSharp_symbols1084)(VkSurfaceCapabilities2KHR&&) = &VkSurfaceCapabilities2KHR::operator=;
extern "C" { void AcidSharp_symbols1085(VkSurfaceCapabilities2KHR* instance) { instance->~VkSurfaceCapabilities2KHR(); } }
extern "C" { void AcidSharp_symbols1086(void* instance) { new (instance) VkSurfaceFormat2KHR(); } }
extern "C" { void AcidSharp_symbols1087(void* instance, const VkSurfaceFormat2KHR& _0) { new (instance) VkSurfaceFormat2KHR(_0); } }
VkSurfaceFormat2KHR& (VkSurfaceFormat2KHR::*AcidSharp_symbols1088)(const VkSurfaceFormat2KHR&) = &VkSurfaceFormat2KHR::operator=;
VkSurfaceFormat2KHR& (VkSurfaceFormat2KHR::*AcidSharp_symbols1089)(VkSurfaceFormat2KHR&&) = &VkSurfaceFormat2KHR::operator=;
extern "C" { void AcidSharp_symbols1090(VkSurfaceFormat2KHR* instance) { instance->~VkSurfaceFormat2KHR(); } }
extern "C" { void AcidSharp_symbols1091(void* instance) { new (instance) VkDisplayProperties2KHR(); } }
extern "C" { void AcidSharp_symbols1092(void* instance, const VkDisplayProperties2KHR& _0) { new (instance) VkDisplayProperties2KHR(_0); } }
VkDisplayProperties2KHR& (VkDisplayProperties2KHR::*AcidSharp_symbols1093)(const VkDisplayProperties2KHR&) = &VkDisplayProperties2KHR::operator=;
VkDisplayProperties2KHR& (VkDisplayProperties2KHR::*AcidSharp_symbols1094)(VkDisplayProperties2KHR&&) = &VkDisplayProperties2KHR::operator=;
extern "C" { void AcidSharp_symbols1095(VkDisplayProperties2KHR* instance) { instance->~VkDisplayProperties2KHR(); } }
extern "C" { void AcidSharp_symbols1096(void* instance) { new (instance) VkDisplayPlaneProperties2KHR(); } }
extern "C" { void AcidSharp_symbols1097(void* instance, const VkDisplayPlaneProperties2KHR& _0) { new (instance) VkDisplayPlaneProperties2KHR(_0); } }
VkDisplayPlaneProperties2KHR& (VkDisplayPlaneProperties2KHR::*AcidSharp_symbols1098)(const VkDisplayPlaneProperties2KHR&) = &VkDisplayPlaneProperties2KHR::operator=;
VkDisplayPlaneProperties2KHR& (VkDisplayPlaneProperties2KHR::*AcidSharp_symbols1099)(VkDisplayPlaneProperties2KHR&&) = &VkDisplayPlaneProperties2KHR::operator=;
extern "C" { void AcidSharp_symbols1100(VkDisplayPlaneProperties2KHR* instance) { instance->~VkDisplayPlaneProperties2KHR(); } }
extern "C" { void AcidSharp_symbols1101(void* instance) { new (instance) VkDisplayModeProperties2KHR(); } }
extern "C" { void AcidSharp_symbols1102(void* instance, const VkDisplayModeProperties2KHR& _0) { new (instance) VkDisplayModeProperties2KHR(_0); } }
VkDisplayModeProperties2KHR& (VkDisplayModeProperties2KHR::*AcidSharp_symbols1103)(const VkDisplayModeProperties2KHR&) = &VkDisplayModeProperties2KHR::operator=;
VkDisplayModeProperties2KHR& (VkDisplayModeProperties2KHR::*AcidSharp_symbols1104)(VkDisplayModeProperties2KHR&&) = &VkDisplayModeProperties2KHR::operator=;
extern "C" { void AcidSharp_symbols1105(VkDisplayModeProperties2KHR* instance) { instance->~VkDisplayModeProperties2KHR(); } }
extern "C" { void AcidSharp_symbols1106(void* instance) { new (instance) VkDisplayPlaneInfo2KHR(); } }
extern "C" { void AcidSharp_symbols1107(void* instance, const VkDisplayPlaneInfo2KHR& _0) { new (instance) VkDisplayPlaneInfo2KHR(_0); } }
VkDisplayPlaneInfo2KHR& (VkDisplayPlaneInfo2KHR::*AcidSharp_symbols1108)(const VkDisplayPlaneInfo2KHR&) = &VkDisplayPlaneInfo2KHR::operator=;
VkDisplayPlaneInfo2KHR& (VkDisplayPlaneInfo2KHR::*AcidSharp_symbols1109)(VkDisplayPlaneInfo2KHR&&) = &VkDisplayPlaneInfo2KHR::operator=;
extern "C" { void AcidSharp_symbols1110(VkDisplayPlaneInfo2KHR* instance) { instance->~VkDisplayPlaneInfo2KHR(); } }
extern "C" { void AcidSharp_symbols1111(void* instance) { new (instance) VkDisplayPlaneCapabilities2KHR(); } }
extern "C" { void AcidSharp_symbols1112(void* instance, const VkDisplayPlaneCapabilities2KHR& _0) { new (instance) VkDisplayPlaneCapabilities2KHR(_0); } }
VkDisplayPlaneCapabilities2KHR& (VkDisplayPlaneCapabilities2KHR::*AcidSharp_symbols1113)(const VkDisplayPlaneCapabilities2KHR&) = &VkDisplayPlaneCapabilities2KHR::operator=;
VkDisplayPlaneCapabilities2KHR& (VkDisplayPlaneCapabilities2KHR::*AcidSharp_symbols1114)(VkDisplayPlaneCapabilities2KHR&&) = &VkDisplayPlaneCapabilities2KHR::operator=;
extern "C" { void AcidSharp_symbols1115(VkDisplayPlaneCapabilities2KHR* instance) { instance->~VkDisplayPlaneCapabilities2KHR(); } }
extern "C" { void AcidSharp_symbols1116(void* instance) { new (instance) VkImageFormatListCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols1117(void* instance, const VkImageFormatListCreateInfoKHR& _0) { new (instance) VkImageFormatListCreateInfoKHR(_0); } }
VkImageFormatListCreateInfoKHR& (VkImageFormatListCreateInfoKHR::*AcidSharp_symbols1118)(const VkImageFormatListCreateInfoKHR&) = &VkImageFormatListCreateInfoKHR::operator=;
VkImageFormatListCreateInfoKHR& (VkImageFormatListCreateInfoKHR::*AcidSharp_symbols1119)(VkImageFormatListCreateInfoKHR&&) = &VkImageFormatListCreateInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1120(VkImageFormatListCreateInfoKHR* instance) { instance->~VkImageFormatListCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols1121(void* instance) { new (instance) VkPhysicalDevice8BitStorageFeaturesKHR(); } }
extern "C" { void AcidSharp_symbols1122(void* instance, const VkPhysicalDevice8BitStorageFeaturesKHR& _0) { new (instance) VkPhysicalDevice8BitStorageFeaturesKHR(_0); } }
VkPhysicalDevice8BitStorageFeaturesKHR& (VkPhysicalDevice8BitStorageFeaturesKHR::*AcidSharp_symbols1123)(const VkPhysicalDevice8BitStorageFeaturesKHR&) = &VkPhysicalDevice8BitStorageFeaturesKHR::operator=;
VkPhysicalDevice8BitStorageFeaturesKHR& (VkPhysicalDevice8BitStorageFeaturesKHR::*AcidSharp_symbols1124)(VkPhysicalDevice8BitStorageFeaturesKHR&&) = &VkPhysicalDevice8BitStorageFeaturesKHR::operator=;
extern "C" { void AcidSharp_symbols1125(VkPhysicalDevice8BitStorageFeaturesKHR* instance) { instance->~VkPhysicalDevice8BitStorageFeaturesKHR(); } }
extern "C" { void AcidSharp_symbols1126(void* instance) { new (instance) VkDebugReportCallbackCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1127(void* instance, const VkDebugReportCallbackCreateInfoEXT& _0) { new (instance) VkDebugReportCallbackCreateInfoEXT(_0); } }
VkDebugReportCallbackCreateInfoEXT& (VkDebugReportCallbackCreateInfoEXT::*AcidSharp_symbols1128)(const VkDebugReportCallbackCreateInfoEXT&) = &VkDebugReportCallbackCreateInfoEXT::operator=;
VkDebugReportCallbackCreateInfoEXT& (VkDebugReportCallbackCreateInfoEXT::*AcidSharp_symbols1129)(VkDebugReportCallbackCreateInfoEXT&&) = &VkDebugReportCallbackCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1130(VkDebugReportCallbackCreateInfoEXT* instance) { instance->~VkDebugReportCallbackCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1131(void* instance) { new (instance) VkPipelineRasterizationStateRasterizationOrderAMD(); } }
extern "C" { void AcidSharp_symbols1132(void* instance, const VkPipelineRasterizationStateRasterizationOrderAMD& _0) { new (instance) VkPipelineRasterizationStateRasterizationOrderAMD(_0); } }
VkPipelineRasterizationStateRasterizationOrderAMD& (VkPipelineRasterizationStateRasterizationOrderAMD::*AcidSharp_symbols1133)(const VkPipelineRasterizationStateRasterizationOrderAMD&) = &VkPipelineRasterizationStateRasterizationOrderAMD::operator=;
VkPipelineRasterizationStateRasterizationOrderAMD& (VkPipelineRasterizationStateRasterizationOrderAMD::*AcidSharp_symbols1134)(VkPipelineRasterizationStateRasterizationOrderAMD&&) = &VkPipelineRasterizationStateRasterizationOrderAMD::operator=;
extern "C" { void AcidSharp_symbols1135(VkPipelineRasterizationStateRasterizationOrderAMD* instance) { instance->~VkPipelineRasterizationStateRasterizationOrderAMD(); } }
extern "C" { void AcidSharp_symbols1136(void* instance) { new (instance) VkDebugMarkerObjectNameInfoEXT(); } }
extern "C" { void AcidSharp_symbols1137(void* instance, const VkDebugMarkerObjectNameInfoEXT& _0) { new (instance) VkDebugMarkerObjectNameInfoEXT(_0); } }
VkDebugMarkerObjectNameInfoEXT& (VkDebugMarkerObjectNameInfoEXT::*AcidSharp_symbols1138)(const VkDebugMarkerObjectNameInfoEXT&) = &VkDebugMarkerObjectNameInfoEXT::operator=;
VkDebugMarkerObjectNameInfoEXT& (VkDebugMarkerObjectNameInfoEXT::*AcidSharp_symbols1139)(VkDebugMarkerObjectNameInfoEXT&&) = &VkDebugMarkerObjectNameInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1140(VkDebugMarkerObjectNameInfoEXT* instance) { instance->~VkDebugMarkerObjectNameInfoEXT(); } }
extern "C" { void AcidSharp_symbols1141(void* instance) { new (instance) VkDebugMarkerObjectTagInfoEXT(); } }
extern "C" { void AcidSharp_symbols1142(void* instance, const VkDebugMarkerObjectTagInfoEXT& _0) { new (instance) VkDebugMarkerObjectTagInfoEXT(_0); } }
VkDebugMarkerObjectTagInfoEXT& (VkDebugMarkerObjectTagInfoEXT::*AcidSharp_symbols1143)(const VkDebugMarkerObjectTagInfoEXT&) = &VkDebugMarkerObjectTagInfoEXT::operator=;
VkDebugMarkerObjectTagInfoEXT& (VkDebugMarkerObjectTagInfoEXT::*AcidSharp_symbols1144)(VkDebugMarkerObjectTagInfoEXT&&) = &VkDebugMarkerObjectTagInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1145(VkDebugMarkerObjectTagInfoEXT* instance) { instance->~VkDebugMarkerObjectTagInfoEXT(); } }
extern "C" { void AcidSharp_symbols1146(void* instance) { new (instance) VkDebugMarkerMarkerInfoEXT(); } }
extern "C" { void AcidSharp_symbols1147(void* instance, const VkDebugMarkerMarkerInfoEXT& _0) { new (instance) VkDebugMarkerMarkerInfoEXT(_0); } }
VkDebugMarkerMarkerInfoEXT& (VkDebugMarkerMarkerInfoEXT::*AcidSharp_symbols1148)(const VkDebugMarkerMarkerInfoEXT&) = &VkDebugMarkerMarkerInfoEXT::operator=;
VkDebugMarkerMarkerInfoEXT& (VkDebugMarkerMarkerInfoEXT::*AcidSharp_symbols1149)(VkDebugMarkerMarkerInfoEXT&&) = &VkDebugMarkerMarkerInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1150(VkDebugMarkerMarkerInfoEXT* instance) { instance->~VkDebugMarkerMarkerInfoEXT(); } }
extern "C" { void AcidSharp_symbols1151(void* instance) { new (instance) VkDedicatedAllocationImageCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1152(void* instance, const VkDedicatedAllocationImageCreateInfoNV& _0) { new (instance) VkDedicatedAllocationImageCreateInfoNV(_0); } }
VkDedicatedAllocationImageCreateInfoNV& (VkDedicatedAllocationImageCreateInfoNV::*AcidSharp_symbols1153)(const VkDedicatedAllocationImageCreateInfoNV&) = &VkDedicatedAllocationImageCreateInfoNV::operator=;
VkDedicatedAllocationImageCreateInfoNV& (VkDedicatedAllocationImageCreateInfoNV::*AcidSharp_symbols1154)(VkDedicatedAllocationImageCreateInfoNV&&) = &VkDedicatedAllocationImageCreateInfoNV::operator=;
extern "C" { void AcidSharp_symbols1155(VkDedicatedAllocationImageCreateInfoNV* instance) { instance->~VkDedicatedAllocationImageCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1156(void* instance) { new (instance) VkDedicatedAllocationBufferCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1157(void* instance, const VkDedicatedAllocationBufferCreateInfoNV& _0) { new (instance) VkDedicatedAllocationBufferCreateInfoNV(_0); } }
VkDedicatedAllocationBufferCreateInfoNV& (VkDedicatedAllocationBufferCreateInfoNV::*AcidSharp_symbols1158)(const VkDedicatedAllocationBufferCreateInfoNV&) = &VkDedicatedAllocationBufferCreateInfoNV::operator=;
VkDedicatedAllocationBufferCreateInfoNV& (VkDedicatedAllocationBufferCreateInfoNV::*AcidSharp_symbols1159)(VkDedicatedAllocationBufferCreateInfoNV&&) = &VkDedicatedAllocationBufferCreateInfoNV::operator=;
extern "C" { void AcidSharp_symbols1160(VkDedicatedAllocationBufferCreateInfoNV* instance) { instance->~VkDedicatedAllocationBufferCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1161(void* instance) { new (instance) VkDedicatedAllocationMemoryAllocateInfoNV(); } }
extern "C" { void AcidSharp_symbols1162(void* instance, const VkDedicatedAllocationMemoryAllocateInfoNV& _0) { new (instance) VkDedicatedAllocationMemoryAllocateInfoNV(_0); } }
VkDedicatedAllocationMemoryAllocateInfoNV& (VkDedicatedAllocationMemoryAllocateInfoNV::*AcidSharp_symbols1163)(const VkDedicatedAllocationMemoryAllocateInfoNV&) = &VkDedicatedAllocationMemoryAllocateInfoNV::operator=;
VkDedicatedAllocationMemoryAllocateInfoNV& (VkDedicatedAllocationMemoryAllocateInfoNV::*AcidSharp_symbols1164)(VkDedicatedAllocationMemoryAllocateInfoNV&&) = &VkDedicatedAllocationMemoryAllocateInfoNV::operator=;
extern "C" { void AcidSharp_symbols1165(VkDedicatedAllocationMemoryAllocateInfoNV* instance) { instance->~VkDedicatedAllocationMemoryAllocateInfoNV(); } }
extern "C" { void AcidSharp_symbols1166(void* instance) { new (instance) VkTextureLODGatherFormatPropertiesAMD(); } }
extern "C" { void AcidSharp_symbols1167(void* instance, const VkTextureLODGatherFormatPropertiesAMD& _0) { new (instance) VkTextureLODGatherFormatPropertiesAMD(_0); } }
VkTextureLODGatherFormatPropertiesAMD& (VkTextureLODGatherFormatPropertiesAMD::*AcidSharp_symbols1168)(const VkTextureLODGatherFormatPropertiesAMD&) = &VkTextureLODGatherFormatPropertiesAMD::operator=;
VkTextureLODGatherFormatPropertiesAMD& (VkTextureLODGatherFormatPropertiesAMD::*AcidSharp_symbols1169)(VkTextureLODGatherFormatPropertiesAMD&&) = &VkTextureLODGatherFormatPropertiesAMD::operator=;
extern "C" { void AcidSharp_symbols1170(VkTextureLODGatherFormatPropertiesAMD* instance) { instance->~VkTextureLODGatherFormatPropertiesAMD(); } }
extern "C" { void AcidSharp_symbols1171(void* instance) { new (instance) VkShaderResourceUsageAMD(); } }
extern "C" { void AcidSharp_symbols1172(void* instance, const VkShaderResourceUsageAMD& _0) { new (instance) VkShaderResourceUsageAMD(_0); } }
VkShaderResourceUsageAMD& (VkShaderResourceUsageAMD::*AcidSharp_symbols1173)(const VkShaderResourceUsageAMD&) = &VkShaderResourceUsageAMD::operator=;
VkShaderResourceUsageAMD& (VkShaderResourceUsageAMD::*AcidSharp_symbols1174)(VkShaderResourceUsageAMD&&) = &VkShaderResourceUsageAMD::operator=;
extern "C" { void AcidSharp_symbols1175(VkShaderResourceUsageAMD* instance) { instance->~VkShaderResourceUsageAMD(); } }
extern "C" { void AcidSharp_symbols1176(void* instance) { new (instance) VkShaderStatisticsInfoAMD(); } }
extern "C" { void AcidSharp_symbols1177(void* instance, const VkShaderStatisticsInfoAMD& _0) { new (instance) VkShaderStatisticsInfoAMD(_0); } }
VkShaderStatisticsInfoAMD& (VkShaderStatisticsInfoAMD::*AcidSharp_symbols1178)(const VkShaderStatisticsInfoAMD&) = &VkShaderStatisticsInfoAMD::operator=;
VkShaderStatisticsInfoAMD& (VkShaderStatisticsInfoAMD::*AcidSharp_symbols1179)(VkShaderStatisticsInfoAMD&&) = &VkShaderStatisticsInfoAMD::operator=;
extern "C" { void AcidSharp_symbols1180(VkShaderStatisticsInfoAMD* instance) { instance->~VkShaderStatisticsInfoAMD(); } }
extern "C" { void AcidSharp_symbols1181(void* instance) { new (instance) VkExternalImageFormatPropertiesNV(); } }
extern "C" { void AcidSharp_symbols1182(void* instance, const VkExternalImageFormatPropertiesNV& _0) { new (instance) VkExternalImageFormatPropertiesNV(_0); } }
VkExternalImageFormatPropertiesNV& (VkExternalImageFormatPropertiesNV::*AcidSharp_symbols1183)(const VkExternalImageFormatPropertiesNV&) = &VkExternalImageFormatPropertiesNV::operator=;
VkExternalImageFormatPropertiesNV& (VkExternalImageFormatPropertiesNV::*AcidSharp_symbols1184)(VkExternalImageFormatPropertiesNV&&) = &VkExternalImageFormatPropertiesNV::operator=;
extern "C" { void AcidSharp_symbols1185(VkExternalImageFormatPropertiesNV* instance) { instance->~VkExternalImageFormatPropertiesNV(); } }
extern "C" { void AcidSharp_symbols1186(void* instance) { new (instance) VkExternalMemoryImageCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1187(void* instance, const VkExternalMemoryImageCreateInfoNV& _0) { new (instance) VkExternalMemoryImageCreateInfoNV(_0); } }
VkExternalMemoryImageCreateInfoNV& (VkExternalMemoryImageCreateInfoNV::*AcidSharp_symbols1188)(const VkExternalMemoryImageCreateInfoNV&) = &VkExternalMemoryImageCreateInfoNV::operator=;
VkExternalMemoryImageCreateInfoNV& (VkExternalMemoryImageCreateInfoNV::*AcidSharp_symbols1189)(VkExternalMemoryImageCreateInfoNV&&) = &VkExternalMemoryImageCreateInfoNV::operator=;
extern "C" { void AcidSharp_symbols1190(VkExternalMemoryImageCreateInfoNV* instance) { instance->~VkExternalMemoryImageCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1191(void* instance) { new (instance) VkExportMemoryAllocateInfoNV(); } }
extern "C" { void AcidSharp_symbols1192(void* instance, const VkExportMemoryAllocateInfoNV& _0) { new (instance) VkExportMemoryAllocateInfoNV(_0); } }
VkExportMemoryAllocateInfoNV& (VkExportMemoryAllocateInfoNV::*AcidSharp_symbols1193)(const VkExportMemoryAllocateInfoNV&) = &VkExportMemoryAllocateInfoNV::operator=;
VkExportMemoryAllocateInfoNV& (VkExportMemoryAllocateInfoNV::*AcidSharp_symbols1194)(VkExportMemoryAllocateInfoNV&&) = &VkExportMemoryAllocateInfoNV::operator=;
extern "C" { void AcidSharp_symbols1195(VkExportMemoryAllocateInfoNV* instance) { instance->~VkExportMemoryAllocateInfoNV(); } }
extern "C" { void AcidSharp_symbols1196(void* instance) { new (instance) VkValidationFlagsEXT(); } }
extern "C" { void AcidSharp_symbols1197(void* instance, const VkValidationFlagsEXT& _0) { new (instance) VkValidationFlagsEXT(_0); } }
VkValidationFlagsEXT& (VkValidationFlagsEXT::*AcidSharp_symbols1198)(const VkValidationFlagsEXT&) = &VkValidationFlagsEXT::operator=;
VkValidationFlagsEXT& (VkValidationFlagsEXT::*AcidSharp_symbols1199)(VkValidationFlagsEXT&&) = &VkValidationFlagsEXT::operator=;
extern "C" { void AcidSharp_symbols1200(VkValidationFlagsEXT* instance) { instance->~VkValidationFlagsEXT(); } }
extern "C" { void AcidSharp_symbols1201(void* instance) { new (instance) VkConditionalRenderingBeginInfoEXT(); } }
extern "C" { void AcidSharp_symbols1202(void* instance, const VkConditionalRenderingBeginInfoEXT& _0) { new (instance) VkConditionalRenderingBeginInfoEXT(_0); } }
VkConditionalRenderingBeginInfoEXT& (VkConditionalRenderingBeginInfoEXT::*AcidSharp_symbols1203)(const VkConditionalRenderingBeginInfoEXT&) = &VkConditionalRenderingBeginInfoEXT::operator=;
VkConditionalRenderingBeginInfoEXT& (VkConditionalRenderingBeginInfoEXT::*AcidSharp_symbols1204)(VkConditionalRenderingBeginInfoEXT&&) = &VkConditionalRenderingBeginInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1205(VkConditionalRenderingBeginInfoEXT* instance) { instance->~VkConditionalRenderingBeginInfoEXT(); } }
extern "C" { void AcidSharp_symbols1206(void* instance) { new (instance) VkPhysicalDeviceConditionalRenderingFeaturesEXT(); } }
extern "C" { void AcidSharp_symbols1207(void* instance, const VkPhysicalDeviceConditionalRenderingFeaturesEXT& _0) { new (instance) VkPhysicalDeviceConditionalRenderingFeaturesEXT(_0); } }
VkPhysicalDeviceConditionalRenderingFeaturesEXT& (VkPhysicalDeviceConditionalRenderingFeaturesEXT::*AcidSharp_symbols1208)(const VkPhysicalDeviceConditionalRenderingFeaturesEXT&) = &VkPhysicalDeviceConditionalRenderingFeaturesEXT::operator=;
VkPhysicalDeviceConditionalRenderingFeaturesEXT& (VkPhysicalDeviceConditionalRenderingFeaturesEXT::*AcidSharp_symbols1209)(VkPhysicalDeviceConditionalRenderingFeaturesEXT&&) = &VkPhysicalDeviceConditionalRenderingFeaturesEXT::operator=;
extern "C" { void AcidSharp_symbols1210(VkPhysicalDeviceConditionalRenderingFeaturesEXT* instance) { instance->~VkPhysicalDeviceConditionalRenderingFeaturesEXT(); } }
extern "C" { void AcidSharp_symbols1211(void* instance) { new (instance) VkCommandBufferInheritanceConditionalRenderingInfoEXT(); } }
extern "C" { void AcidSharp_symbols1212(void* instance, const VkCommandBufferInheritanceConditionalRenderingInfoEXT& _0) { new (instance) VkCommandBufferInheritanceConditionalRenderingInfoEXT(_0); } }
VkCommandBufferInheritanceConditionalRenderingInfoEXT& (VkCommandBufferInheritanceConditionalRenderingInfoEXT::*AcidSharp_symbols1213)(const VkCommandBufferInheritanceConditionalRenderingInfoEXT&) = &VkCommandBufferInheritanceConditionalRenderingInfoEXT::operator=;
VkCommandBufferInheritanceConditionalRenderingInfoEXT& (VkCommandBufferInheritanceConditionalRenderingInfoEXT::*AcidSharp_symbols1214)(VkCommandBufferInheritanceConditionalRenderingInfoEXT&&) = &VkCommandBufferInheritanceConditionalRenderingInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1215(VkCommandBufferInheritanceConditionalRenderingInfoEXT* instance) { instance->~VkCommandBufferInheritanceConditionalRenderingInfoEXT(); } }
extern "C" { void AcidSharp_symbols1216(void* instance) { new (instance) VkDeviceGeneratedCommandsFeaturesNVX(); } }
extern "C" { void AcidSharp_symbols1217(void* instance, const VkDeviceGeneratedCommandsFeaturesNVX& _0) { new (instance) VkDeviceGeneratedCommandsFeaturesNVX(_0); } }
VkDeviceGeneratedCommandsFeaturesNVX& (VkDeviceGeneratedCommandsFeaturesNVX::*AcidSharp_symbols1218)(const VkDeviceGeneratedCommandsFeaturesNVX&) = &VkDeviceGeneratedCommandsFeaturesNVX::operator=;
VkDeviceGeneratedCommandsFeaturesNVX& (VkDeviceGeneratedCommandsFeaturesNVX::*AcidSharp_symbols1219)(VkDeviceGeneratedCommandsFeaturesNVX&&) = &VkDeviceGeneratedCommandsFeaturesNVX::operator=;
extern "C" { void AcidSharp_symbols1220(VkDeviceGeneratedCommandsFeaturesNVX* instance) { instance->~VkDeviceGeneratedCommandsFeaturesNVX(); } }
extern "C" { void AcidSharp_symbols1221(void* instance) { new (instance) VkDeviceGeneratedCommandsLimitsNVX(); } }
extern "C" { void AcidSharp_symbols1222(void* instance, const VkDeviceGeneratedCommandsLimitsNVX& _0) { new (instance) VkDeviceGeneratedCommandsLimitsNVX(_0); } }
VkDeviceGeneratedCommandsLimitsNVX& (VkDeviceGeneratedCommandsLimitsNVX::*AcidSharp_symbols1223)(const VkDeviceGeneratedCommandsLimitsNVX&) = &VkDeviceGeneratedCommandsLimitsNVX::operator=;
VkDeviceGeneratedCommandsLimitsNVX& (VkDeviceGeneratedCommandsLimitsNVX::*AcidSharp_symbols1224)(VkDeviceGeneratedCommandsLimitsNVX&&) = &VkDeviceGeneratedCommandsLimitsNVX::operator=;
extern "C" { void AcidSharp_symbols1225(VkDeviceGeneratedCommandsLimitsNVX* instance) { instance->~VkDeviceGeneratedCommandsLimitsNVX(); } }
extern "C" { void AcidSharp_symbols1226(void* instance) { new (instance) VkIndirectCommandsTokenNVX(); } }
extern "C" { void AcidSharp_symbols1227(void* instance, const VkIndirectCommandsTokenNVX& _0) { new (instance) VkIndirectCommandsTokenNVX(_0); } }
VkIndirectCommandsTokenNVX& (VkIndirectCommandsTokenNVX::*AcidSharp_symbols1228)(const VkIndirectCommandsTokenNVX&) = &VkIndirectCommandsTokenNVX::operator=;
VkIndirectCommandsTokenNVX& (VkIndirectCommandsTokenNVX::*AcidSharp_symbols1229)(VkIndirectCommandsTokenNVX&&) = &VkIndirectCommandsTokenNVX::operator=;
extern "C" { void AcidSharp_symbols1230(VkIndirectCommandsTokenNVX* instance) { instance->~VkIndirectCommandsTokenNVX(); } }
extern "C" { void AcidSharp_symbols1231(void* instance) { new (instance) VkIndirectCommandsLayoutTokenNVX(); } }
extern "C" { void AcidSharp_symbols1232(void* instance, const VkIndirectCommandsLayoutTokenNVX& _0) { new (instance) VkIndirectCommandsLayoutTokenNVX(_0); } }
VkIndirectCommandsLayoutTokenNVX& (VkIndirectCommandsLayoutTokenNVX::*AcidSharp_symbols1233)(const VkIndirectCommandsLayoutTokenNVX&) = &VkIndirectCommandsLayoutTokenNVX::operator=;
VkIndirectCommandsLayoutTokenNVX& (VkIndirectCommandsLayoutTokenNVX::*AcidSharp_symbols1234)(VkIndirectCommandsLayoutTokenNVX&&) = &VkIndirectCommandsLayoutTokenNVX::operator=;
extern "C" { void AcidSharp_symbols1235(VkIndirectCommandsLayoutTokenNVX* instance) { instance->~VkIndirectCommandsLayoutTokenNVX(); } }
extern "C" { void AcidSharp_symbols1236(void* instance) { new (instance) VkIndirectCommandsLayoutCreateInfoNVX(); } }
extern "C" { void AcidSharp_symbols1237(void* instance, const VkIndirectCommandsLayoutCreateInfoNVX& _0) { new (instance) VkIndirectCommandsLayoutCreateInfoNVX(_0); } }
VkIndirectCommandsLayoutCreateInfoNVX& (VkIndirectCommandsLayoutCreateInfoNVX::*AcidSharp_symbols1238)(const VkIndirectCommandsLayoutCreateInfoNVX&) = &VkIndirectCommandsLayoutCreateInfoNVX::operator=;
VkIndirectCommandsLayoutCreateInfoNVX& (VkIndirectCommandsLayoutCreateInfoNVX::*AcidSharp_symbols1239)(VkIndirectCommandsLayoutCreateInfoNVX&&) = &VkIndirectCommandsLayoutCreateInfoNVX::operator=;
extern "C" { void AcidSharp_symbols1240(VkIndirectCommandsLayoutCreateInfoNVX* instance) { instance->~VkIndirectCommandsLayoutCreateInfoNVX(); } }
extern "C" { void AcidSharp_symbols1241(void* instance) { new (instance) VkCmdProcessCommandsInfoNVX(); } }
extern "C" { void AcidSharp_symbols1242(void* instance, const VkCmdProcessCommandsInfoNVX& _0) { new (instance) VkCmdProcessCommandsInfoNVX(_0); } }
VkCmdProcessCommandsInfoNVX& (VkCmdProcessCommandsInfoNVX::*AcidSharp_symbols1243)(const VkCmdProcessCommandsInfoNVX&) = &VkCmdProcessCommandsInfoNVX::operator=;
VkCmdProcessCommandsInfoNVX& (VkCmdProcessCommandsInfoNVX::*AcidSharp_symbols1244)(VkCmdProcessCommandsInfoNVX&&) = &VkCmdProcessCommandsInfoNVX::operator=;
extern "C" { void AcidSharp_symbols1245(VkCmdProcessCommandsInfoNVX* instance) { instance->~VkCmdProcessCommandsInfoNVX(); } }
extern "C" { void AcidSharp_symbols1246(void* instance) { new (instance) VkCmdReserveSpaceForCommandsInfoNVX(); } }
extern "C" { void AcidSharp_symbols1247(void* instance, const VkCmdReserveSpaceForCommandsInfoNVX& _0) { new (instance) VkCmdReserveSpaceForCommandsInfoNVX(_0); } }
VkCmdReserveSpaceForCommandsInfoNVX& (VkCmdReserveSpaceForCommandsInfoNVX::*AcidSharp_symbols1248)(const VkCmdReserveSpaceForCommandsInfoNVX&) = &VkCmdReserveSpaceForCommandsInfoNVX::operator=;
VkCmdReserveSpaceForCommandsInfoNVX& (VkCmdReserveSpaceForCommandsInfoNVX::*AcidSharp_symbols1249)(VkCmdReserveSpaceForCommandsInfoNVX&&) = &VkCmdReserveSpaceForCommandsInfoNVX::operator=;
extern "C" { void AcidSharp_symbols1250(VkCmdReserveSpaceForCommandsInfoNVX* instance) { instance->~VkCmdReserveSpaceForCommandsInfoNVX(); } }
extern "C" { void AcidSharp_symbols1251(void* instance) { new (instance) VkObjectTableCreateInfoNVX(); } }
extern "C" { void AcidSharp_symbols1252(void* instance, const VkObjectTableCreateInfoNVX& _0) { new (instance) VkObjectTableCreateInfoNVX(_0); } }
VkObjectTableCreateInfoNVX& (VkObjectTableCreateInfoNVX::*AcidSharp_symbols1253)(const VkObjectTableCreateInfoNVX&) = &VkObjectTableCreateInfoNVX::operator=;
VkObjectTableCreateInfoNVX& (VkObjectTableCreateInfoNVX::*AcidSharp_symbols1254)(VkObjectTableCreateInfoNVX&&) = &VkObjectTableCreateInfoNVX::operator=;
extern "C" { void AcidSharp_symbols1255(VkObjectTableCreateInfoNVX* instance) { instance->~VkObjectTableCreateInfoNVX(); } }
extern "C" { void AcidSharp_symbols1256(void* instance) { new (instance) VkObjectTableEntryNVX(); } }
extern "C" { void AcidSharp_symbols1257(void* instance, const VkObjectTableEntryNVX& _0) { new (instance) VkObjectTableEntryNVX(_0); } }
VkObjectTableEntryNVX& (VkObjectTableEntryNVX::*AcidSharp_symbols1258)(const VkObjectTableEntryNVX&) = &VkObjectTableEntryNVX::operator=;
VkObjectTableEntryNVX& (VkObjectTableEntryNVX::*AcidSharp_symbols1259)(VkObjectTableEntryNVX&&) = &VkObjectTableEntryNVX::operator=;
extern "C" { void AcidSharp_symbols1260(VkObjectTableEntryNVX* instance) { instance->~VkObjectTableEntryNVX(); } }
extern "C" { void AcidSharp_symbols1261(void* instance) { new (instance) VkObjectTablePipelineEntryNVX(); } }
extern "C" { void AcidSharp_symbols1262(void* instance, const VkObjectTablePipelineEntryNVX& _0) { new (instance) VkObjectTablePipelineEntryNVX(_0); } }
VkObjectTablePipelineEntryNVX& (VkObjectTablePipelineEntryNVX::*AcidSharp_symbols1263)(const VkObjectTablePipelineEntryNVX&) = &VkObjectTablePipelineEntryNVX::operator=;
VkObjectTablePipelineEntryNVX& (VkObjectTablePipelineEntryNVX::*AcidSharp_symbols1264)(VkObjectTablePipelineEntryNVX&&) = &VkObjectTablePipelineEntryNVX::operator=;
extern "C" { void AcidSharp_symbols1265(VkObjectTablePipelineEntryNVX* instance) { instance->~VkObjectTablePipelineEntryNVX(); } }
extern "C" { void AcidSharp_symbols1266(void* instance) { new (instance) VkObjectTableDescriptorSetEntryNVX(); } }
extern "C" { void AcidSharp_symbols1267(void* instance, const VkObjectTableDescriptorSetEntryNVX& _0) { new (instance) VkObjectTableDescriptorSetEntryNVX(_0); } }
VkObjectTableDescriptorSetEntryNVX& (VkObjectTableDescriptorSetEntryNVX::*AcidSharp_symbols1268)(const VkObjectTableDescriptorSetEntryNVX&) = &VkObjectTableDescriptorSetEntryNVX::operator=;
VkObjectTableDescriptorSetEntryNVX& (VkObjectTableDescriptorSetEntryNVX::*AcidSharp_symbols1269)(VkObjectTableDescriptorSetEntryNVX&&) = &VkObjectTableDescriptorSetEntryNVX::operator=;
extern "C" { void AcidSharp_symbols1270(VkObjectTableDescriptorSetEntryNVX* instance) { instance->~VkObjectTableDescriptorSetEntryNVX(); } }
extern "C" { void AcidSharp_symbols1271(void* instance) { new (instance) VkObjectTableVertexBufferEntryNVX(); } }
extern "C" { void AcidSharp_symbols1272(void* instance, const VkObjectTableVertexBufferEntryNVX& _0) { new (instance) VkObjectTableVertexBufferEntryNVX(_0); } }
VkObjectTableVertexBufferEntryNVX& (VkObjectTableVertexBufferEntryNVX::*AcidSharp_symbols1273)(const VkObjectTableVertexBufferEntryNVX&) = &VkObjectTableVertexBufferEntryNVX::operator=;
VkObjectTableVertexBufferEntryNVX& (VkObjectTableVertexBufferEntryNVX::*AcidSharp_symbols1274)(VkObjectTableVertexBufferEntryNVX&&) = &VkObjectTableVertexBufferEntryNVX::operator=;
extern "C" { void AcidSharp_symbols1275(VkObjectTableVertexBufferEntryNVX* instance) { instance->~VkObjectTableVertexBufferEntryNVX(); } }
extern "C" { void AcidSharp_symbols1276(void* instance) { new (instance) VkObjectTableIndexBufferEntryNVX(); } }
extern "C" { void AcidSharp_symbols1277(void* instance, const VkObjectTableIndexBufferEntryNVX& _0) { new (instance) VkObjectTableIndexBufferEntryNVX(_0); } }
VkObjectTableIndexBufferEntryNVX& (VkObjectTableIndexBufferEntryNVX::*AcidSharp_symbols1278)(const VkObjectTableIndexBufferEntryNVX&) = &VkObjectTableIndexBufferEntryNVX::operator=;
VkObjectTableIndexBufferEntryNVX& (VkObjectTableIndexBufferEntryNVX::*AcidSharp_symbols1279)(VkObjectTableIndexBufferEntryNVX&&) = &VkObjectTableIndexBufferEntryNVX::operator=;
extern "C" { void AcidSharp_symbols1280(VkObjectTableIndexBufferEntryNVX* instance) { instance->~VkObjectTableIndexBufferEntryNVX(); } }
extern "C" { void AcidSharp_symbols1281(void* instance) { new (instance) VkObjectTablePushConstantEntryNVX(); } }
extern "C" { void AcidSharp_symbols1282(void* instance, const VkObjectTablePushConstantEntryNVX& _0) { new (instance) VkObjectTablePushConstantEntryNVX(_0); } }
VkObjectTablePushConstantEntryNVX& (VkObjectTablePushConstantEntryNVX::*AcidSharp_symbols1283)(const VkObjectTablePushConstantEntryNVX&) = &VkObjectTablePushConstantEntryNVX::operator=;
VkObjectTablePushConstantEntryNVX& (VkObjectTablePushConstantEntryNVX::*AcidSharp_symbols1284)(VkObjectTablePushConstantEntryNVX&&) = &VkObjectTablePushConstantEntryNVX::operator=;
extern "C" { void AcidSharp_symbols1285(VkObjectTablePushConstantEntryNVX* instance) { instance->~VkObjectTablePushConstantEntryNVX(); } }
extern "C" { void AcidSharp_symbols1286(void* instance) { new (instance) VkViewportWScalingNV(); } }
extern "C" { void AcidSharp_symbols1287(void* instance, const VkViewportWScalingNV& _0) { new (instance) VkViewportWScalingNV(_0); } }
VkViewportWScalingNV& (VkViewportWScalingNV::*AcidSharp_symbols1288)(const VkViewportWScalingNV&) = &VkViewportWScalingNV::operator=;
VkViewportWScalingNV& (VkViewportWScalingNV::*AcidSharp_symbols1289)(VkViewportWScalingNV&&) = &VkViewportWScalingNV::operator=;
extern "C" { void AcidSharp_symbols1290(VkViewportWScalingNV* instance) { instance->~VkViewportWScalingNV(); } }
extern "C" { void AcidSharp_symbols1291(void* instance) { new (instance) VkPipelineViewportWScalingStateCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1292(void* instance, const VkPipelineViewportWScalingStateCreateInfoNV& _0) { new (instance) VkPipelineViewportWScalingStateCreateInfoNV(_0); } }
VkPipelineViewportWScalingStateCreateInfoNV& (VkPipelineViewportWScalingStateCreateInfoNV::*AcidSharp_symbols1293)(const VkPipelineViewportWScalingStateCreateInfoNV&) = &VkPipelineViewportWScalingStateCreateInfoNV::operator=;
VkPipelineViewportWScalingStateCreateInfoNV& (VkPipelineViewportWScalingStateCreateInfoNV::*AcidSharp_symbols1294)(VkPipelineViewportWScalingStateCreateInfoNV&&) = &VkPipelineViewportWScalingStateCreateInfoNV::operator=;
extern "C" { void AcidSharp_symbols1295(VkPipelineViewportWScalingStateCreateInfoNV* instance) { instance->~VkPipelineViewportWScalingStateCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1296(void* instance) { new (instance) VkSurfaceCapabilities2EXT(); } }
extern "C" { void AcidSharp_symbols1297(void* instance, const VkSurfaceCapabilities2EXT& _0) { new (instance) VkSurfaceCapabilities2EXT(_0); } }
VkSurfaceCapabilities2EXT& (VkSurfaceCapabilities2EXT::*AcidSharp_symbols1298)(const VkSurfaceCapabilities2EXT&) = &VkSurfaceCapabilities2EXT::operator=;
VkSurfaceCapabilities2EXT& (VkSurfaceCapabilities2EXT::*AcidSharp_symbols1299)(VkSurfaceCapabilities2EXT&&) = &VkSurfaceCapabilities2EXT::operator=;
extern "C" { void AcidSharp_symbols1300(VkSurfaceCapabilities2EXT* instance) { instance->~VkSurfaceCapabilities2EXT(); } }
extern "C" { void AcidSharp_symbols1301(void* instance) { new (instance) VkDisplayPowerInfoEXT(); } }
extern "C" { void AcidSharp_symbols1302(void* instance, const VkDisplayPowerInfoEXT& _0) { new (instance) VkDisplayPowerInfoEXT(_0); } }
VkDisplayPowerInfoEXT& (VkDisplayPowerInfoEXT::*AcidSharp_symbols1303)(const VkDisplayPowerInfoEXT&) = &VkDisplayPowerInfoEXT::operator=;
VkDisplayPowerInfoEXT& (VkDisplayPowerInfoEXT::*AcidSharp_symbols1304)(VkDisplayPowerInfoEXT&&) = &VkDisplayPowerInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1305(VkDisplayPowerInfoEXT* instance) { instance->~VkDisplayPowerInfoEXT(); } }
extern "C" { void AcidSharp_symbols1306(void* instance) { new (instance) VkDeviceEventInfoEXT(); } }
extern "C" { void AcidSharp_symbols1307(void* instance, const VkDeviceEventInfoEXT& _0) { new (instance) VkDeviceEventInfoEXT(_0); } }
VkDeviceEventInfoEXT& (VkDeviceEventInfoEXT::*AcidSharp_symbols1308)(const VkDeviceEventInfoEXT&) = &VkDeviceEventInfoEXT::operator=;
VkDeviceEventInfoEXT& (VkDeviceEventInfoEXT::*AcidSharp_symbols1309)(VkDeviceEventInfoEXT&&) = &VkDeviceEventInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1310(VkDeviceEventInfoEXT* instance) { instance->~VkDeviceEventInfoEXT(); } }
extern "C" { void AcidSharp_symbols1311(void* instance) { new (instance) VkDisplayEventInfoEXT(); } }
extern "C" { void AcidSharp_symbols1312(void* instance, const VkDisplayEventInfoEXT& _0) { new (instance) VkDisplayEventInfoEXT(_0); } }
VkDisplayEventInfoEXT& (VkDisplayEventInfoEXT::*AcidSharp_symbols1313)(const VkDisplayEventInfoEXT&) = &VkDisplayEventInfoEXT::operator=;
VkDisplayEventInfoEXT& (VkDisplayEventInfoEXT::*AcidSharp_symbols1314)(VkDisplayEventInfoEXT&&) = &VkDisplayEventInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1315(VkDisplayEventInfoEXT* instance) { instance->~VkDisplayEventInfoEXT(); } }
extern "C" { void AcidSharp_symbols1316(void* instance) { new (instance) VkSwapchainCounterCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1317(void* instance, const VkSwapchainCounterCreateInfoEXT& _0) { new (instance) VkSwapchainCounterCreateInfoEXT(_0); } }
VkSwapchainCounterCreateInfoEXT& (VkSwapchainCounterCreateInfoEXT::*AcidSharp_symbols1318)(const VkSwapchainCounterCreateInfoEXT&) = &VkSwapchainCounterCreateInfoEXT::operator=;
VkSwapchainCounterCreateInfoEXT& (VkSwapchainCounterCreateInfoEXT::*AcidSharp_symbols1319)(VkSwapchainCounterCreateInfoEXT&&) = &VkSwapchainCounterCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1320(VkSwapchainCounterCreateInfoEXT* instance) { instance->~VkSwapchainCounterCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1321(void* instance) { new (instance) VkRefreshCycleDurationGOOGLE(); } }
extern "C" { void AcidSharp_symbols1322(void* instance, const VkRefreshCycleDurationGOOGLE& _0) { new (instance) VkRefreshCycleDurationGOOGLE(_0); } }
VkRefreshCycleDurationGOOGLE& (VkRefreshCycleDurationGOOGLE::*AcidSharp_symbols1323)(const VkRefreshCycleDurationGOOGLE&) = &VkRefreshCycleDurationGOOGLE::operator=;
VkRefreshCycleDurationGOOGLE& (VkRefreshCycleDurationGOOGLE::*AcidSharp_symbols1324)(VkRefreshCycleDurationGOOGLE&&) = &VkRefreshCycleDurationGOOGLE::operator=;
extern "C" { void AcidSharp_symbols1325(VkRefreshCycleDurationGOOGLE* instance) { instance->~VkRefreshCycleDurationGOOGLE(); } }
extern "C" { void AcidSharp_symbols1326(void* instance) { new (instance) VkPastPresentationTimingGOOGLE(); } }
extern "C" { void AcidSharp_symbols1327(void* instance, const VkPastPresentationTimingGOOGLE& _0) { new (instance) VkPastPresentationTimingGOOGLE(_0); } }
VkPastPresentationTimingGOOGLE& (VkPastPresentationTimingGOOGLE::*AcidSharp_symbols1328)(const VkPastPresentationTimingGOOGLE&) = &VkPastPresentationTimingGOOGLE::operator=;
VkPastPresentationTimingGOOGLE& (VkPastPresentationTimingGOOGLE::*AcidSharp_symbols1329)(VkPastPresentationTimingGOOGLE&&) = &VkPastPresentationTimingGOOGLE::operator=;
extern "C" { void AcidSharp_symbols1330(VkPastPresentationTimingGOOGLE* instance) { instance->~VkPastPresentationTimingGOOGLE(); } }
extern "C" { void AcidSharp_symbols1331(void* instance) { new (instance) VkPresentTimeGOOGLE(); } }
extern "C" { void AcidSharp_symbols1332(void* instance, const VkPresentTimeGOOGLE& _0) { new (instance) VkPresentTimeGOOGLE(_0); } }
VkPresentTimeGOOGLE& (VkPresentTimeGOOGLE::*AcidSharp_symbols1333)(const VkPresentTimeGOOGLE&) = &VkPresentTimeGOOGLE::operator=;
VkPresentTimeGOOGLE& (VkPresentTimeGOOGLE::*AcidSharp_symbols1334)(VkPresentTimeGOOGLE&&) = &VkPresentTimeGOOGLE::operator=;
extern "C" { void AcidSharp_symbols1335(VkPresentTimeGOOGLE* instance) { instance->~VkPresentTimeGOOGLE(); } }
extern "C" { void AcidSharp_symbols1336(void* instance) { new (instance) VkPresentTimesInfoGOOGLE(); } }
extern "C" { void AcidSharp_symbols1337(void* instance, const VkPresentTimesInfoGOOGLE& _0) { new (instance) VkPresentTimesInfoGOOGLE(_0); } }
VkPresentTimesInfoGOOGLE& (VkPresentTimesInfoGOOGLE::*AcidSharp_symbols1338)(const VkPresentTimesInfoGOOGLE&) = &VkPresentTimesInfoGOOGLE::operator=;
VkPresentTimesInfoGOOGLE& (VkPresentTimesInfoGOOGLE::*AcidSharp_symbols1339)(VkPresentTimesInfoGOOGLE&&) = &VkPresentTimesInfoGOOGLE::operator=;
extern "C" { void AcidSharp_symbols1340(VkPresentTimesInfoGOOGLE* instance) { instance->~VkPresentTimesInfoGOOGLE(); } }
extern "C" { void AcidSharp_symbols1341(void* instance) { new (instance) VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(); } }
extern "C" { void AcidSharp_symbols1342(void* instance, const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& _0) { new (instance) VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(_0); } }
VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& (VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::*AcidSharp_symbols1343)(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX&) = &VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::operator=;
VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& (VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::*AcidSharp_symbols1344)(VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX&&) = &VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::operator=;
extern "C" { void AcidSharp_symbols1345(VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX* instance) { instance->~VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(); } }
extern "C" { void AcidSharp_symbols1346(void* instance) { new (instance) VkViewportSwizzleNV(); } }
extern "C" { void AcidSharp_symbols1347(void* instance, const VkViewportSwizzleNV& _0) { new (instance) VkViewportSwizzleNV(_0); } }
VkViewportSwizzleNV& (VkViewportSwizzleNV::*AcidSharp_symbols1348)(const VkViewportSwizzleNV&) = &VkViewportSwizzleNV::operator=;
VkViewportSwizzleNV& (VkViewportSwizzleNV::*AcidSharp_symbols1349)(VkViewportSwizzleNV&&) = &VkViewportSwizzleNV::operator=;
extern "C" { void AcidSharp_symbols1350(VkViewportSwizzleNV* instance) { instance->~VkViewportSwizzleNV(); } }
extern "C" { void AcidSharp_symbols1351(void* instance) { new (instance) VkPipelineViewportSwizzleStateCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1352(void* instance, const VkPipelineViewportSwizzleStateCreateInfoNV& _0) { new (instance) VkPipelineViewportSwizzleStateCreateInfoNV(_0); } }
VkPipelineViewportSwizzleStateCreateInfoNV& (VkPipelineViewportSwizzleStateCreateInfoNV::*AcidSharp_symbols1353)(const VkPipelineViewportSwizzleStateCreateInfoNV&) = &VkPipelineViewportSwizzleStateCreateInfoNV::operator=;
VkPipelineViewportSwizzleStateCreateInfoNV& (VkPipelineViewportSwizzleStateCreateInfoNV::*AcidSharp_symbols1354)(VkPipelineViewportSwizzleStateCreateInfoNV&&) = &VkPipelineViewportSwizzleStateCreateInfoNV::operator=;
extern "C" { void AcidSharp_symbols1355(VkPipelineViewportSwizzleStateCreateInfoNV* instance) { instance->~VkPipelineViewportSwizzleStateCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1356(void* instance) { new (instance) VkPhysicalDeviceDiscardRectanglePropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1357(void* instance, const VkPhysicalDeviceDiscardRectanglePropertiesEXT& _0) { new (instance) VkPhysicalDeviceDiscardRectanglePropertiesEXT(_0); } }
VkPhysicalDeviceDiscardRectanglePropertiesEXT& (VkPhysicalDeviceDiscardRectanglePropertiesEXT::*AcidSharp_symbols1358)(const VkPhysicalDeviceDiscardRectanglePropertiesEXT&) = &VkPhysicalDeviceDiscardRectanglePropertiesEXT::operator=;
VkPhysicalDeviceDiscardRectanglePropertiesEXT& (VkPhysicalDeviceDiscardRectanglePropertiesEXT::*AcidSharp_symbols1359)(VkPhysicalDeviceDiscardRectanglePropertiesEXT&&) = &VkPhysicalDeviceDiscardRectanglePropertiesEXT::operator=;
extern "C" { void AcidSharp_symbols1360(VkPhysicalDeviceDiscardRectanglePropertiesEXT* instance) { instance->~VkPhysicalDeviceDiscardRectanglePropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1361(void* instance) { new (instance) VkPipelineDiscardRectangleStateCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1362(void* instance, const VkPipelineDiscardRectangleStateCreateInfoEXT& _0) { new (instance) VkPipelineDiscardRectangleStateCreateInfoEXT(_0); } }
VkPipelineDiscardRectangleStateCreateInfoEXT& (VkPipelineDiscardRectangleStateCreateInfoEXT::*AcidSharp_symbols1363)(const VkPipelineDiscardRectangleStateCreateInfoEXT&) = &VkPipelineDiscardRectangleStateCreateInfoEXT::operator=;
VkPipelineDiscardRectangleStateCreateInfoEXT& (VkPipelineDiscardRectangleStateCreateInfoEXT::*AcidSharp_symbols1364)(VkPipelineDiscardRectangleStateCreateInfoEXT&&) = &VkPipelineDiscardRectangleStateCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1365(VkPipelineDiscardRectangleStateCreateInfoEXT* instance) { instance->~VkPipelineDiscardRectangleStateCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1366(void* instance) { new (instance) VkPhysicalDeviceConservativeRasterizationPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1367(void* instance, const VkPhysicalDeviceConservativeRasterizationPropertiesEXT& _0) { new (instance) VkPhysicalDeviceConservativeRasterizationPropertiesEXT(_0); } }
VkPhysicalDeviceConservativeRasterizationPropertiesEXT& (VkPhysicalDeviceConservativeRasterizationPropertiesEXT::*AcidSharp_symbols1368)(const VkPhysicalDeviceConservativeRasterizationPropertiesEXT&) = &VkPhysicalDeviceConservativeRasterizationPropertiesEXT::operator=;
VkPhysicalDeviceConservativeRasterizationPropertiesEXT& (VkPhysicalDeviceConservativeRasterizationPropertiesEXT::*AcidSharp_symbols1369)(VkPhysicalDeviceConservativeRasterizationPropertiesEXT&&) = &VkPhysicalDeviceConservativeRasterizationPropertiesEXT::operator=;
extern "C" { void AcidSharp_symbols1370(VkPhysicalDeviceConservativeRasterizationPropertiesEXT* instance) { instance->~VkPhysicalDeviceConservativeRasterizationPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1371(void* instance) { new (instance) VkPipelineRasterizationConservativeStateCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1372(void* instance, const VkPipelineRasterizationConservativeStateCreateInfoEXT& _0) { new (instance) VkPipelineRasterizationConservativeStateCreateInfoEXT(_0); } }
VkPipelineRasterizationConservativeStateCreateInfoEXT& (VkPipelineRasterizationConservativeStateCreateInfoEXT::*AcidSharp_symbols1373)(const VkPipelineRasterizationConservativeStateCreateInfoEXT&) = &VkPipelineRasterizationConservativeStateCreateInfoEXT::operator=;
VkPipelineRasterizationConservativeStateCreateInfoEXT& (VkPipelineRasterizationConservativeStateCreateInfoEXT::*AcidSharp_symbols1374)(VkPipelineRasterizationConservativeStateCreateInfoEXT&&) = &VkPipelineRasterizationConservativeStateCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1375(VkPipelineRasterizationConservativeStateCreateInfoEXT* instance) { instance->~VkPipelineRasterizationConservativeStateCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1376(void* instance) { new (instance) VkXYColorEXT(); } }
extern "C" { void AcidSharp_symbols1377(void* instance, const VkXYColorEXT& _0) { new (instance) VkXYColorEXT(_0); } }
VkXYColorEXT& (VkXYColorEXT::*AcidSharp_symbols1378)(const VkXYColorEXT&) = &VkXYColorEXT::operator=;
VkXYColorEXT& (VkXYColorEXT::*AcidSharp_symbols1379)(VkXYColorEXT&&) = &VkXYColorEXT::operator=;
extern "C" { void AcidSharp_symbols1380(VkXYColorEXT* instance) { instance->~VkXYColorEXT(); } }
extern "C" { void AcidSharp_symbols1381(void* instance) { new (instance) VkHdrMetadataEXT(); } }
extern "C" { void AcidSharp_symbols1382(void* instance, const VkHdrMetadataEXT& _0) { new (instance) VkHdrMetadataEXT(_0); } }
VkHdrMetadataEXT& (VkHdrMetadataEXT::*AcidSharp_symbols1383)(const VkHdrMetadataEXT&) = &VkHdrMetadataEXT::operator=;
VkHdrMetadataEXT& (VkHdrMetadataEXT::*AcidSharp_symbols1384)(VkHdrMetadataEXT&&) = &VkHdrMetadataEXT::operator=;
extern "C" { void AcidSharp_symbols1385(VkHdrMetadataEXT* instance) { instance->~VkHdrMetadataEXT(); } }
extern "C" { void AcidSharp_symbols1386(void* instance) { new (instance) VkDebugUtilsObjectNameInfoEXT(); } }
extern "C" { void AcidSharp_symbols1387(void* instance, const VkDebugUtilsObjectNameInfoEXT& _0) { new (instance) VkDebugUtilsObjectNameInfoEXT(_0); } }
VkDebugUtilsObjectNameInfoEXT& (VkDebugUtilsObjectNameInfoEXT::*AcidSharp_symbols1388)(const VkDebugUtilsObjectNameInfoEXT&) = &VkDebugUtilsObjectNameInfoEXT::operator=;
VkDebugUtilsObjectNameInfoEXT& (VkDebugUtilsObjectNameInfoEXT::*AcidSharp_symbols1389)(VkDebugUtilsObjectNameInfoEXT&&) = &VkDebugUtilsObjectNameInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1390(VkDebugUtilsObjectNameInfoEXT* instance) { instance->~VkDebugUtilsObjectNameInfoEXT(); } }
extern "C" { void AcidSharp_symbols1391(void* instance) { new (instance) VkDebugUtilsObjectTagInfoEXT(); } }
extern "C" { void AcidSharp_symbols1392(void* instance, const VkDebugUtilsObjectTagInfoEXT& _0) { new (instance) VkDebugUtilsObjectTagInfoEXT(_0); } }
VkDebugUtilsObjectTagInfoEXT& (VkDebugUtilsObjectTagInfoEXT::*AcidSharp_symbols1393)(const VkDebugUtilsObjectTagInfoEXT&) = &VkDebugUtilsObjectTagInfoEXT::operator=;
VkDebugUtilsObjectTagInfoEXT& (VkDebugUtilsObjectTagInfoEXT::*AcidSharp_symbols1394)(VkDebugUtilsObjectTagInfoEXT&&) = &VkDebugUtilsObjectTagInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1395(VkDebugUtilsObjectTagInfoEXT* instance) { instance->~VkDebugUtilsObjectTagInfoEXT(); } }
extern "C" { void AcidSharp_symbols1396(void* instance) { new (instance) VkDebugUtilsLabelEXT(); } }
extern "C" { void AcidSharp_symbols1397(void* instance, const VkDebugUtilsLabelEXT& _0) { new (instance) VkDebugUtilsLabelEXT(_0); } }
VkDebugUtilsLabelEXT& (VkDebugUtilsLabelEXT::*AcidSharp_symbols1398)(const VkDebugUtilsLabelEXT&) = &VkDebugUtilsLabelEXT::operator=;
VkDebugUtilsLabelEXT& (VkDebugUtilsLabelEXT::*AcidSharp_symbols1399)(VkDebugUtilsLabelEXT&&) = &VkDebugUtilsLabelEXT::operator=;
extern "C" { void AcidSharp_symbols1400(VkDebugUtilsLabelEXT* instance) { instance->~VkDebugUtilsLabelEXT(); } }
extern "C" { void AcidSharp_symbols1401(void* instance) { new (instance) VkDebugUtilsMessengerCallbackDataEXT(); } }
extern "C" { void AcidSharp_symbols1402(void* instance, const VkDebugUtilsMessengerCallbackDataEXT& _0) { new (instance) VkDebugUtilsMessengerCallbackDataEXT(_0); } }
VkDebugUtilsMessengerCallbackDataEXT& (VkDebugUtilsMessengerCallbackDataEXT::*AcidSharp_symbols1403)(const VkDebugUtilsMessengerCallbackDataEXT&) = &VkDebugUtilsMessengerCallbackDataEXT::operator=;
VkDebugUtilsMessengerCallbackDataEXT& (VkDebugUtilsMessengerCallbackDataEXT::*AcidSharp_symbols1404)(VkDebugUtilsMessengerCallbackDataEXT&&) = &VkDebugUtilsMessengerCallbackDataEXT::operator=;
extern "C" { void AcidSharp_symbols1405(VkDebugUtilsMessengerCallbackDataEXT* instance) { instance->~VkDebugUtilsMessengerCallbackDataEXT(); } }
extern "C" { void AcidSharp_symbols1406(void* instance) { new (instance) VkDebugUtilsMessengerCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1407(void* instance, const VkDebugUtilsMessengerCreateInfoEXT& _0) { new (instance) VkDebugUtilsMessengerCreateInfoEXT(_0); } }
VkDebugUtilsMessengerCreateInfoEXT& (VkDebugUtilsMessengerCreateInfoEXT::*AcidSharp_symbols1408)(const VkDebugUtilsMessengerCreateInfoEXT&) = &VkDebugUtilsMessengerCreateInfoEXT::operator=;
VkDebugUtilsMessengerCreateInfoEXT& (VkDebugUtilsMessengerCreateInfoEXT::*AcidSharp_symbols1409)(VkDebugUtilsMessengerCreateInfoEXT&&) = &VkDebugUtilsMessengerCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1410(VkDebugUtilsMessengerCreateInfoEXT* instance) { instance->~VkDebugUtilsMessengerCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1411(void* instance) { new (instance) VkSamplerReductionModeCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1412(void* instance, const VkSamplerReductionModeCreateInfoEXT& _0) { new (instance) VkSamplerReductionModeCreateInfoEXT(_0); } }
VkSamplerReductionModeCreateInfoEXT& (VkSamplerReductionModeCreateInfoEXT::*AcidSharp_symbols1413)(const VkSamplerReductionModeCreateInfoEXT&) = &VkSamplerReductionModeCreateInfoEXT::operator=;
VkSamplerReductionModeCreateInfoEXT& (VkSamplerReductionModeCreateInfoEXT::*AcidSharp_symbols1414)(VkSamplerReductionModeCreateInfoEXT&&) = &VkSamplerReductionModeCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1415(VkSamplerReductionModeCreateInfoEXT* instance) { instance->~VkSamplerReductionModeCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1416(void* instance) { new (instance) VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1417(void* instance, const VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT& _0) { new (instance) VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT(_0); } }
VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT& (VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT::*AcidSharp_symbols1418)(const VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT&) = &VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT::operator=;
VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT& (VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT::*AcidSharp_symbols1419)(VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT&&) = &VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT::operator=;
extern "C" { void AcidSharp_symbols1420(VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT* instance) { instance->~VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1421(void* instance) { new (instance) VkSampleLocationEXT(); } }
extern "C" { void AcidSharp_symbols1422(void* instance, const VkSampleLocationEXT& _0) { new (instance) VkSampleLocationEXT(_0); } }
VkSampleLocationEXT& (VkSampleLocationEXT::*AcidSharp_symbols1423)(const VkSampleLocationEXT&) = &VkSampleLocationEXT::operator=;
VkSampleLocationEXT& (VkSampleLocationEXT::*AcidSharp_symbols1424)(VkSampleLocationEXT&&) = &VkSampleLocationEXT::operator=;
extern "C" { void AcidSharp_symbols1425(VkSampleLocationEXT* instance) { instance->~VkSampleLocationEXT(); } }
extern "C" { void AcidSharp_symbols1426(void* instance) { new (instance) VkSampleLocationsInfoEXT(); } }
extern "C" { void AcidSharp_symbols1427(void* instance, const VkSampleLocationsInfoEXT& _0) { new (instance) VkSampleLocationsInfoEXT(_0); } }
VkSampleLocationsInfoEXT& (VkSampleLocationsInfoEXT::*AcidSharp_symbols1428)(const VkSampleLocationsInfoEXT&) = &VkSampleLocationsInfoEXT::operator=;
VkSampleLocationsInfoEXT& (VkSampleLocationsInfoEXT::*AcidSharp_symbols1429)(VkSampleLocationsInfoEXT&&) = &VkSampleLocationsInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1430(VkSampleLocationsInfoEXT* instance) { instance->~VkSampleLocationsInfoEXT(); } }
extern "C" { void AcidSharp_symbols1431(void* instance) { new (instance) VkAttachmentSampleLocationsEXT(); } }
extern "C" { void AcidSharp_symbols1432(void* instance, const VkAttachmentSampleLocationsEXT& _0) { new (instance) VkAttachmentSampleLocationsEXT(_0); } }
VkAttachmentSampleLocationsEXT& (VkAttachmentSampleLocationsEXT::*AcidSharp_symbols1433)(const VkAttachmentSampleLocationsEXT&) = &VkAttachmentSampleLocationsEXT::operator=;
VkAttachmentSampleLocationsEXT& (VkAttachmentSampleLocationsEXT::*AcidSharp_symbols1434)(VkAttachmentSampleLocationsEXT&&) = &VkAttachmentSampleLocationsEXT::operator=;
extern "C" { void AcidSharp_symbols1435(VkAttachmentSampleLocationsEXT* instance) { instance->~VkAttachmentSampleLocationsEXT(); } }
extern "C" { void AcidSharp_symbols1436(void* instance) { new (instance) VkSubpassSampleLocationsEXT(); } }
extern "C" { void AcidSharp_symbols1437(void* instance, const VkSubpassSampleLocationsEXT& _0) { new (instance) VkSubpassSampleLocationsEXT(_0); } }
VkSubpassSampleLocationsEXT& (VkSubpassSampleLocationsEXT::*AcidSharp_symbols1438)(const VkSubpassSampleLocationsEXT&) = &VkSubpassSampleLocationsEXT::operator=;
VkSubpassSampleLocationsEXT& (VkSubpassSampleLocationsEXT::*AcidSharp_symbols1439)(VkSubpassSampleLocationsEXT&&) = &VkSubpassSampleLocationsEXT::operator=;
extern "C" { void AcidSharp_symbols1440(VkSubpassSampleLocationsEXT* instance) { instance->~VkSubpassSampleLocationsEXT(); } }
extern "C" { void AcidSharp_symbols1441(void* instance) { new (instance) VkRenderPassSampleLocationsBeginInfoEXT(); } }
extern "C" { void AcidSharp_symbols1442(void* instance, const VkRenderPassSampleLocationsBeginInfoEXT& _0) { new (instance) VkRenderPassSampleLocationsBeginInfoEXT(_0); } }
VkRenderPassSampleLocationsBeginInfoEXT& (VkRenderPassSampleLocationsBeginInfoEXT::*AcidSharp_symbols1443)(const VkRenderPassSampleLocationsBeginInfoEXT&) = &VkRenderPassSampleLocationsBeginInfoEXT::operator=;
VkRenderPassSampleLocationsBeginInfoEXT& (VkRenderPassSampleLocationsBeginInfoEXT::*AcidSharp_symbols1444)(VkRenderPassSampleLocationsBeginInfoEXT&&) = &VkRenderPassSampleLocationsBeginInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1445(VkRenderPassSampleLocationsBeginInfoEXT* instance) { instance->~VkRenderPassSampleLocationsBeginInfoEXT(); } }
extern "C" { void AcidSharp_symbols1446(void* instance) { new (instance) VkPipelineSampleLocationsStateCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1447(void* instance, const VkPipelineSampleLocationsStateCreateInfoEXT& _0) { new (instance) VkPipelineSampleLocationsStateCreateInfoEXT(_0); } }
VkPipelineSampleLocationsStateCreateInfoEXT& (VkPipelineSampleLocationsStateCreateInfoEXT::*AcidSharp_symbols1448)(const VkPipelineSampleLocationsStateCreateInfoEXT&) = &VkPipelineSampleLocationsStateCreateInfoEXT::operator=;
VkPipelineSampleLocationsStateCreateInfoEXT& (VkPipelineSampleLocationsStateCreateInfoEXT::*AcidSharp_symbols1449)(VkPipelineSampleLocationsStateCreateInfoEXT&&) = &VkPipelineSampleLocationsStateCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1450(VkPipelineSampleLocationsStateCreateInfoEXT* instance) { instance->~VkPipelineSampleLocationsStateCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1451(void* instance) { new (instance) VkPhysicalDeviceSampleLocationsPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1452(void* instance, const VkPhysicalDeviceSampleLocationsPropertiesEXT& _0) { new (instance) VkPhysicalDeviceSampleLocationsPropertiesEXT(_0); } }
VkPhysicalDeviceSampleLocationsPropertiesEXT& (VkPhysicalDeviceSampleLocationsPropertiesEXT::*AcidSharp_symbols1453)(const VkPhysicalDeviceSampleLocationsPropertiesEXT&) = &VkPhysicalDeviceSampleLocationsPropertiesEXT::operator=;
VkPhysicalDeviceSampleLocationsPropertiesEXT& (VkPhysicalDeviceSampleLocationsPropertiesEXT::*AcidSharp_symbols1454)(VkPhysicalDeviceSampleLocationsPropertiesEXT&&) = &VkPhysicalDeviceSampleLocationsPropertiesEXT::operator=;
extern "C" { void AcidSharp_symbols1455(VkPhysicalDeviceSampleLocationsPropertiesEXT* instance) { instance->~VkPhysicalDeviceSampleLocationsPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1456(void* instance) { new (instance) VkMultisamplePropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1457(void* instance, const VkMultisamplePropertiesEXT& _0) { new (instance) VkMultisamplePropertiesEXT(_0); } }
VkMultisamplePropertiesEXT& (VkMultisamplePropertiesEXT::*AcidSharp_symbols1458)(const VkMultisamplePropertiesEXT&) = &VkMultisamplePropertiesEXT::operator=;
VkMultisamplePropertiesEXT& (VkMultisamplePropertiesEXT::*AcidSharp_symbols1459)(VkMultisamplePropertiesEXT&&) = &VkMultisamplePropertiesEXT::operator=;
extern "C" { void AcidSharp_symbols1460(VkMultisamplePropertiesEXT* instance) { instance->~VkMultisamplePropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1461(void* instance) { new (instance) VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT(); } }
extern "C" { void AcidSharp_symbols1462(void* instance, const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& _0) { new (instance) VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT(_0); } }
VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& (VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT::*AcidSharp_symbols1463)(const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT&) = &VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT::operator=;
VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& (VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT::*AcidSharp_symbols1464)(VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT&&) = &VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT::operator=;
extern "C" { void AcidSharp_symbols1465(VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT* instance) { instance->~VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT(); } }
extern "C" { void AcidSharp_symbols1466(void* instance) { new (instance) VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1467(void* instance, const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& _0) { new (instance) VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT(_0); } }
VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& (VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::*AcidSharp_symbols1468)(const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT&) = &VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::operator=;
VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& (VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::*AcidSharp_symbols1469)(VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT&&) = &VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::operator=;
extern "C" { void AcidSharp_symbols1470(VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT* instance) { instance->~VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1471(void* instance) { new (instance) VkPipelineColorBlendAdvancedStateCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1472(void* instance, const VkPipelineColorBlendAdvancedStateCreateInfoEXT& _0) { new (instance) VkPipelineColorBlendAdvancedStateCreateInfoEXT(_0); } }
VkPipelineColorBlendAdvancedStateCreateInfoEXT& (VkPipelineColorBlendAdvancedStateCreateInfoEXT::*AcidSharp_symbols1473)(const VkPipelineColorBlendAdvancedStateCreateInfoEXT&) = &VkPipelineColorBlendAdvancedStateCreateInfoEXT::operator=;
VkPipelineColorBlendAdvancedStateCreateInfoEXT& (VkPipelineColorBlendAdvancedStateCreateInfoEXT::*AcidSharp_symbols1474)(VkPipelineColorBlendAdvancedStateCreateInfoEXT&&) = &VkPipelineColorBlendAdvancedStateCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1475(VkPipelineColorBlendAdvancedStateCreateInfoEXT* instance) { instance->~VkPipelineColorBlendAdvancedStateCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1476(void* instance) { new (instance) VkPipelineCoverageToColorStateCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1477(void* instance, const VkPipelineCoverageToColorStateCreateInfoNV& _0) { new (instance) VkPipelineCoverageToColorStateCreateInfoNV(_0); } }
VkPipelineCoverageToColorStateCreateInfoNV& (VkPipelineCoverageToColorStateCreateInfoNV::*AcidSharp_symbols1478)(const VkPipelineCoverageToColorStateCreateInfoNV&) = &VkPipelineCoverageToColorStateCreateInfoNV::operator=;
VkPipelineCoverageToColorStateCreateInfoNV& (VkPipelineCoverageToColorStateCreateInfoNV::*AcidSharp_symbols1479)(VkPipelineCoverageToColorStateCreateInfoNV&&) = &VkPipelineCoverageToColorStateCreateInfoNV::operator=;
extern "C" { void AcidSharp_symbols1480(VkPipelineCoverageToColorStateCreateInfoNV* instance) { instance->~VkPipelineCoverageToColorStateCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1481(void* instance) { new (instance) VkPipelineCoverageModulationStateCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1482(void* instance, const VkPipelineCoverageModulationStateCreateInfoNV& _0) { new (instance) VkPipelineCoverageModulationStateCreateInfoNV(_0); } }
VkPipelineCoverageModulationStateCreateInfoNV& (VkPipelineCoverageModulationStateCreateInfoNV::*AcidSharp_symbols1483)(const VkPipelineCoverageModulationStateCreateInfoNV&) = &VkPipelineCoverageModulationStateCreateInfoNV::operator=;
VkPipelineCoverageModulationStateCreateInfoNV& (VkPipelineCoverageModulationStateCreateInfoNV::*AcidSharp_symbols1484)(VkPipelineCoverageModulationStateCreateInfoNV&&) = &VkPipelineCoverageModulationStateCreateInfoNV::operator=;
extern "C" { void AcidSharp_symbols1485(VkPipelineCoverageModulationStateCreateInfoNV* instance) { instance->~VkPipelineCoverageModulationStateCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1486(void* instance) { new (instance) VkValidationCacheCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1487(void* instance, const VkValidationCacheCreateInfoEXT& _0) { new (instance) VkValidationCacheCreateInfoEXT(_0); } }
VkValidationCacheCreateInfoEXT& (VkValidationCacheCreateInfoEXT::*AcidSharp_symbols1488)(const VkValidationCacheCreateInfoEXT&) = &VkValidationCacheCreateInfoEXT::operator=;
VkValidationCacheCreateInfoEXT& (VkValidationCacheCreateInfoEXT::*AcidSharp_symbols1489)(VkValidationCacheCreateInfoEXT&&) = &VkValidationCacheCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1490(VkValidationCacheCreateInfoEXT* instance) { instance->~VkValidationCacheCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1491(void* instance) { new (instance) VkShaderModuleValidationCacheCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1492(void* instance, const VkShaderModuleValidationCacheCreateInfoEXT& _0) { new (instance) VkShaderModuleValidationCacheCreateInfoEXT(_0); } }
VkShaderModuleValidationCacheCreateInfoEXT& (VkShaderModuleValidationCacheCreateInfoEXT::*AcidSharp_symbols1493)(const VkShaderModuleValidationCacheCreateInfoEXT&) = &VkShaderModuleValidationCacheCreateInfoEXT::operator=;
VkShaderModuleValidationCacheCreateInfoEXT& (VkShaderModuleValidationCacheCreateInfoEXT::*AcidSharp_symbols1494)(VkShaderModuleValidationCacheCreateInfoEXT&&) = &VkShaderModuleValidationCacheCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1495(VkShaderModuleValidationCacheCreateInfoEXT* instance) { instance->~VkShaderModuleValidationCacheCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1496(void* instance) { new (instance) VkDescriptorSetLayoutBindingFlagsCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1497(void* instance, const VkDescriptorSetLayoutBindingFlagsCreateInfoEXT& _0) { new (instance) VkDescriptorSetLayoutBindingFlagsCreateInfoEXT(_0); } }
VkDescriptorSetLayoutBindingFlagsCreateInfoEXT& (VkDescriptorSetLayoutBindingFlagsCreateInfoEXT::*AcidSharp_symbols1498)(const VkDescriptorSetLayoutBindingFlagsCreateInfoEXT&) = &VkDescriptorSetLayoutBindingFlagsCreateInfoEXT::operator=;
VkDescriptorSetLayoutBindingFlagsCreateInfoEXT& (VkDescriptorSetLayoutBindingFlagsCreateInfoEXT::*AcidSharp_symbols1499)(VkDescriptorSetLayoutBindingFlagsCreateInfoEXT&&) = &VkDescriptorSetLayoutBindingFlagsCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1500(VkDescriptorSetLayoutBindingFlagsCreateInfoEXT* instance) { instance->~VkDescriptorSetLayoutBindingFlagsCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1501(void* instance) { new (instance) VkPhysicalDeviceDescriptorIndexingFeaturesEXT(); } }
extern "C" { void AcidSharp_symbols1502(void* instance, const VkPhysicalDeviceDescriptorIndexingFeaturesEXT& _0) { new (instance) VkPhysicalDeviceDescriptorIndexingFeaturesEXT(_0); } }
VkPhysicalDeviceDescriptorIndexingFeaturesEXT& (VkPhysicalDeviceDescriptorIndexingFeaturesEXT::*AcidSharp_symbols1503)(const VkPhysicalDeviceDescriptorIndexingFeaturesEXT&) = &VkPhysicalDeviceDescriptorIndexingFeaturesEXT::operator=;
VkPhysicalDeviceDescriptorIndexingFeaturesEXT& (VkPhysicalDeviceDescriptorIndexingFeaturesEXT::*AcidSharp_symbols1504)(VkPhysicalDeviceDescriptorIndexingFeaturesEXT&&) = &VkPhysicalDeviceDescriptorIndexingFeaturesEXT::operator=;
extern "C" { void AcidSharp_symbols1505(VkPhysicalDeviceDescriptorIndexingFeaturesEXT* instance) { instance->~VkPhysicalDeviceDescriptorIndexingFeaturesEXT(); } }
extern "C" { void AcidSharp_symbols1506(void* instance) { new (instance) VkPhysicalDeviceDescriptorIndexingPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1507(void* instance, const VkPhysicalDeviceDescriptorIndexingPropertiesEXT& _0) { new (instance) VkPhysicalDeviceDescriptorIndexingPropertiesEXT(_0); } }
VkPhysicalDeviceDescriptorIndexingPropertiesEXT& (VkPhysicalDeviceDescriptorIndexingPropertiesEXT::*AcidSharp_symbols1508)(const VkPhysicalDeviceDescriptorIndexingPropertiesEXT&) = &VkPhysicalDeviceDescriptorIndexingPropertiesEXT::operator=;
VkPhysicalDeviceDescriptorIndexingPropertiesEXT& (VkPhysicalDeviceDescriptorIndexingPropertiesEXT::*AcidSharp_symbols1509)(VkPhysicalDeviceDescriptorIndexingPropertiesEXT&&) = &VkPhysicalDeviceDescriptorIndexingPropertiesEXT::operator=;
extern "C" { void AcidSharp_symbols1510(VkPhysicalDeviceDescriptorIndexingPropertiesEXT* instance) { instance->~VkPhysicalDeviceDescriptorIndexingPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1511(void* instance) { new (instance) VkDescriptorSetVariableDescriptorCountAllocateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1512(void* instance, const VkDescriptorSetVariableDescriptorCountAllocateInfoEXT& _0) { new (instance) VkDescriptorSetVariableDescriptorCountAllocateInfoEXT(_0); } }
VkDescriptorSetVariableDescriptorCountAllocateInfoEXT& (VkDescriptorSetVariableDescriptorCountAllocateInfoEXT::*AcidSharp_symbols1513)(const VkDescriptorSetVariableDescriptorCountAllocateInfoEXT&) = &VkDescriptorSetVariableDescriptorCountAllocateInfoEXT::operator=;
VkDescriptorSetVariableDescriptorCountAllocateInfoEXT& (VkDescriptorSetVariableDescriptorCountAllocateInfoEXT::*AcidSharp_symbols1514)(VkDescriptorSetVariableDescriptorCountAllocateInfoEXT&&) = &VkDescriptorSetVariableDescriptorCountAllocateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1515(VkDescriptorSetVariableDescriptorCountAllocateInfoEXT* instance) { instance->~VkDescriptorSetVariableDescriptorCountAllocateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1516(void* instance) { new (instance) VkDescriptorSetVariableDescriptorCountLayoutSupportEXT(); } }
extern "C" { void AcidSharp_symbols1517(void* instance, const VkDescriptorSetVariableDescriptorCountLayoutSupportEXT& _0) { new (instance) VkDescriptorSetVariableDescriptorCountLayoutSupportEXT(_0); } }
VkDescriptorSetVariableDescriptorCountLayoutSupportEXT& (VkDescriptorSetVariableDescriptorCountLayoutSupportEXT::*AcidSharp_symbols1518)(const VkDescriptorSetVariableDescriptorCountLayoutSupportEXT&) = &VkDescriptorSetVariableDescriptorCountLayoutSupportEXT::operator=;
VkDescriptorSetVariableDescriptorCountLayoutSupportEXT& (VkDescriptorSetVariableDescriptorCountLayoutSupportEXT::*AcidSharp_symbols1519)(VkDescriptorSetVariableDescriptorCountLayoutSupportEXT&&) = &VkDescriptorSetVariableDescriptorCountLayoutSupportEXT::operator=;
extern "C" { void AcidSharp_symbols1520(VkDescriptorSetVariableDescriptorCountLayoutSupportEXT* instance) { instance->~VkDescriptorSetVariableDescriptorCountLayoutSupportEXT(); } }
extern "C" { void AcidSharp_symbols1521(void* instance) { new (instance) VkDeviceQueueGlobalPriorityCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1522(void* instance, const VkDeviceQueueGlobalPriorityCreateInfoEXT& _0) { new (instance) VkDeviceQueueGlobalPriorityCreateInfoEXT(_0); } }
VkDeviceQueueGlobalPriorityCreateInfoEXT& (VkDeviceQueueGlobalPriorityCreateInfoEXT::*AcidSharp_symbols1523)(const VkDeviceQueueGlobalPriorityCreateInfoEXT&) = &VkDeviceQueueGlobalPriorityCreateInfoEXT::operator=;
VkDeviceQueueGlobalPriorityCreateInfoEXT& (VkDeviceQueueGlobalPriorityCreateInfoEXT::*AcidSharp_symbols1524)(VkDeviceQueueGlobalPriorityCreateInfoEXT&&) = &VkDeviceQueueGlobalPriorityCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1525(VkDeviceQueueGlobalPriorityCreateInfoEXT* instance) { instance->~VkDeviceQueueGlobalPriorityCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1526(void* instance) { new (instance) VkImportMemoryHostPointerInfoEXT(); } }
extern "C" { void AcidSharp_symbols1527(void* instance, const VkImportMemoryHostPointerInfoEXT& _0) { new (instance) VkImportMemoryHostPointerInfoEXT(_0); } }
VkImportMemoryHostPointerInfoEXT& (VkImportMemoryHostPointerInfoEXT::*AcidSharp_symbols1528)(const VkImportMemoryHostPointerInfoEXT&) = &VkImportMemoryHostPointerInfoEXT::operator=;
VkImportMemoryHostPointerInfoEXT& (VkImportMemoryHostPointerInfoEXT::*AcidSharp_symbols1529)(VkImportMemoryHostPointerInfoEXT&&) = &VkImportMemoryHostPointerInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1530(VkImportMemoryHostPointerInfoEXT* instance) { instance->~VkImportMemoryHostPointerInfoEXT(); } }
extern "C" { void AcidSharp_symbols1531(void* instance) { new (instance) VkMemoryHostPointerPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1532(void* instance, const VkMemoryHostPointerPropertiesEXT& _0) { new (instance) VkMemoryHostPointerPropertiesEXT(_0); } }
VkMemoryHostPointerPropertiesEXT& (VkMemoryHostPointerPropertiesEXT::*AcidSharp_symbols1533)(const VkMemoryHostPointerPropertiesEXT&) = &VkMemoryHostPointerPropertiesEXT::operator=;
VkMemoryHostPointerPropertiesEXT& (VkMemoryHostPointerPropertiesEXT::*AcidSharp_symbols1534)(VkMemoryHostPointerPropertiesEXT&&) = &VkMemoryHostPointerPropertiesEXT::operator=;
extern "C" { void AcidSharp_symbols1535(VkMemoryHostPointerPropertiesEXT* instance) { instance->~VkMemoryHostPointerPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1536(void* instance) { new (instance) VkPhysicalDeviceExternalMemoryHostPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1537(void* instance, const VkPhysicalDeviceExternalMemoryHostPropertiesEXT& _0) { new (instance) VkPhysicalDeviceExternalMemoryHostPropertiesEXT(_0); } }
VkPhysicalDeviceExternalMemoryHostPropertiesEXT& (VkPhysicalDeviceExternalMemoryHostPropertiesEXT::*AcidSharp_symbols1538)(const VkPhysicalDeviceExternalMemoryHostPropertiesEXT&) = &VkPhysicalDeviceExternalMemoryHostPropertiesEXT::operator=;
VkPhysicalDeviceExternalMemoryHostPropertiesEXT& (VkPhysicalDeviceExternalMemoryHostPropertiesEXT::*AcidSharp_symbols1539)(VkPhysicalDeviceExternalMemoryHostPropertiesEXT&&) = &VkPhysicalDeviceExternalMemoryHostPropertiesEXT::operator=;
extern "C" { void AcidSharp_symbols1540(VkPhysicalDeviceExternalMemoryHostPropertiesEXT* instance) { instance->~VkPhysicalDeviceExternalMemoryHostPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1541(void* instance) { new (instance) VkPhysicalDeviceShaderCorePropertiesAMD(); } }
extern "C" { void AcidSharp_symbols1542(void* instance, const VkPhysicalDeviceShaderCorePropertiesAMD& _0) { new (instance) VkPhysicalDeviceShaderCorePropertiesAMD(_0); } }
VkPhysicalDeviceShaderCorePropertiesAMD& (VkPhysicalDeviceShaderCorePropertiesAMD::*AcidSharp_symbols1543)(const VkPhysicalDeviceShaderCorePropertiesAMD&) = &VkPhysicalDeviceShaderCorePropertiesAMD::operator=;
VkPhysicalDeviceShaderCorePropertiesAMD& (VkPhysicalDeviceShaderCorePropertiesAMD::*AcidSharp_symbols1544)(VkPhysicalDeviceShaderCorePropertiesAMD&&) = &VkPhysicalDeviceShaderCorePropertiesAMD::operator=;
extern "C" { void AcidSharp_symbols1545(VkPhysicalDeviceShaderCorePropertiesAMD* instance) { instance->~VkPhysicalDeviceShaderCorePropertiesAMD(); } }
extern "C" { void AcidSharp_symbols1546(void* instance) { new (instance) VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1547(void* instance, const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& _0) { new (instance) VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT(_0); } }
VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& (VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT::*AcidSharp_symbols1548)(const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT&) = &VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT::operator=;
VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& (VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT::*AcidSharp_symbols1549)(VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT&&) = &VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT::operator=;
extern "C" { void AcidSharp_symbols1550(VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT* instance) { instance->~VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1551(void* instance) { new (instance) VkVertexInputBindingDivisorDescriptionEXT(); } }
extern "C" { void AcidSharp_symbols1552(void* instance, const VkVertexInputBindingDivisorDescriptionEXT& _0) { new (instance) VkVertexInputBindingDivisorDescriptionEXT(_0); } }
VkVertexInputBindingDivisorDescriptionEXT& (VkVertexInputBindingDivisorDescriptionEXT::*AcidSharp_symbols1553)(const VkVertexInputBindingDivisorDescriptionEXT&) = &VkVertexInputBindingDivisorDescriptionEXT::operator=;
VkVertexInputBindingDivisorDescriptionEXT& (VkVertexInputBindingDivisorDescriptionEXT::*AcidSharp_symbols1554)(VkVertexInputBindingDivisorDescriptionEXT&&) = &VkVertexInputBindingDivisorDescriptionEXT::operator=;
extern "C" { void AcidSharp_symbols1555(VkVertexInputBindingDivisorDescriptionEXT* instance) { instance->~VkVertexInputBindingDivisorDescriptionEXT(); } }
extern "C" { void AcidSharp_symbols1556(void* instance) { new (instance) VkPipelineVertexInputDivisorStateCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1557(void* instance, const VkPipelineVertexInputDivisorStateCreateInfoEXT& _0) { new (instance) VkPipelineVertexInputDivisorStateCreateInfoEXT(_0); } }
VkPipelineVertexInputDivisorStateCreateInfoEXT& (VkPipelineVertexInputDivisorStateCreateInfoEXT::*AcidSharp_symbols1558)(const VkPipelineVertexInputDivisorStateCreateInfoEXT&) = &VkPipelineVertexInputDivisorStateCreateInfoEXT::operator=;
VkPipelineVertexInputDivisorStateCreateInfoEXT& (VkPipelineVertexInputDivisorStateCreateInfoEXT::*AcidSharp_symbols1559)(VkPipelineVertexInputDivisorStateCreateInfoEXT&&) = &VkPipelineVertexInputDivisorStateCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1560(VkPipelineVertexInputDivisorStateCreateInfoEXT* instance) { instance->~VkPipelineVertexInputDivisorStateCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1561(void* instance) { new (instance) VkQueueFamilyCheckpointPropertiesNV(); } }
extern "C" { void AcidSharp_symbols1562(void* instance, const VkQueueFamilyCheckpointPropertiesNV& _0) { new (instance) VkQueueFamilyCheckpointPropertiesNV(_0); } }
VkQueueFamilyCheckpointPropertiesNV& (VkQueueFamilyCheckpointPropertiesNV::*AcidSharp_symbols1563)(const VkQueueFamilyCheckpointPropertiesNV&) = &VkQueueFamilyCheckpointPropertiesNV::operator=;
VkQueueFamilyCheckpointPropertiesNV& (VkQueueFamilyCheckpointPropertiesNV::*AcidSharp_symbols1564)(VkQueueFamilyCheckpointPropertiesNV&&) = &VkQueueFamilyCheckpointPropertiesNV::operator=;
extern "C" { void AcidSharp_symbols1565(VkQueueFamilyCheckpointPropertiesNV* instance) { instance->~VkQueueFamilyCheckpointPropertiesNV(); } }
extern "C" { void AcidSharp_symbols1566(void* instance) { new (instance) VkCheckpointDataNV(); } }
extern "C" { void AcidSharp_symbols1567(void* instance, const VkCheckpointDataNV& _0) { new (instance) VkCheckpointDataNV(_0); } }
VkCheckpointDataNV& (VkCheckpointDataNV::*AcidSharp_symbols1568)(const VkCheckpointDataNV&) = &VkCheckpointDataNV::operator=;
VkCheckpointDataNV& (VkCheckpointDataNV::*AcidSharp_symbols1569)(VkCheckpointDataNV&&) = &VkCheckpointDataNV::operator=;
extern "C" { void AcidSharp_symbols1570(VkCheckpointDataNV* instance) { instance->~VkCheckpointDataNV(); } }
extern "C" { void AcidSharp_symbols1571(void* instance, const acid::CommandBuffer& _0) { new (instance) acid::CommandBuffer(_0); } }
extern "C" { void AcidSharp_symbols1572(void* instance) { new (instance) acid::Log(); } }
extern "C" { void AcidSharp_symbols1573(void* instance, const acid::Log& _0) { new (instance) acid::Log(_0); } }
extern "C" { void AcidSharp_symbols1574(acid::Log* instance) { instance->~Log(); } }
extern "C" { void AcidSharp_symbols1575(acid::IModule* instance) { instance->~IModule(); } }
extern "C" { void AcidSharp_symbols1576(void* instance, const acid::Delta& _0) { new (instance) acid::Delta(_0); } }
extern "C" { void AcidSharp_symbols1577(void* instance, const acid::Timer& _0) { new (instance) acid::Timer(_0); } }
extern "C" { void AcidSharp_symbols1578(void* instance, const acid::ModuleUpdater& _0) { new (instance) acid::ModuleUpdater(_0); } }
extern "C" { void AcidSharp_symbols1579(acid::GraphicsStage* instance) { instance->~GraphicsStage(); } }
extern "C" { void AcidSharp_symbols1580(void* instance, const acid::GraphicsStage& _0) { new (instance) acid::GraphicsStage(_0); } }
extern "C" { void AcidSharp_symbols1581(acid::DescriptorType* instance) { instance->~DescriptorType(); } }
extern "C" { void AcidSharp_symbols1582(void* instance, const acid::DescriptorType& _0) { new (instance) acid::DescriptorType(_0); } }
extern "C" { void AcidSharp_symbols1583(acid::IPipeline* instance) { instance->~IPipeline(); } }
extern "C" { void AcidSharp_symbols1584(void* instance, const acid::DescriptorSet& _0) { new (instance) acid::DescriptorSet(_0); } }
extern "C" { void AcidSharp_symbols1585(acid::IResource* instance) { instance->~IResource(); } }
extern "C" { void AcidSharp_symbols1586(acid::IVertex* instance) { instance->~IVertex(); } }
extern "C" { void AcidSharp_symbols1587(void* instance) { new (instance) acid::Maths(); } }
extern "C" { void AcidSharp_symbols1588(void* instance, const acid::Maths& _0) { new (instance) acid::Maths(_0); } }
extern "C" { void AcidSharp_symbols1589(acid::Maths* instance) { instance->~Maths(); } }
extern "C" { void AcidSharp_symbols1590(acid::IComponent* instance) { instance->~IComponent(); } }
extern "C" { void AcidSharp_symbols1591(acid::IEvent* instance) { instance->~IEvent(); } }
extern "C" { void AcidSharp_symbols1592(acid::IFile* instance) { instance->~IFile(); } }
extern "C" { void AcidSharp_symbols1593(void* instance) { new (instance) acid::FileSystem(); } }
extern "C" { void AcidSharp_symbols1594(void* instance, const acid::FileSystem& _0) { new (instance) acid::FileSystem(_0); } }
extern "C" { void AcidSharp_symbols1595(acid::FileSystem* instance) { instance->~FileSystem(); } }
extern "C" { void AcidSharp_symbols1596(acid::IAxis* instance) { instance->~IAxis(); } }
extern "C" { void AcidSharp_symbols1597(acid::IButton* instance) { instance->~IButton(); } }
acid::Joystick& (acid::Joystick::*AcidSharp_symbols1598)(acid::Joystick&&) = &acid::Joystick::operator=;
extern "C" { void AcidSharp_symbols1599(void* instance, const acid::SmoothFloat& _0) { new (instance) acid::SmoothFloat(_0); } }
acid::ComponentCreate& (acid::ComponentCreate::*AcidSharp_symbols1600)(acid::ComponentCreate&&) = &acid::ComponentCreate::operator=;
extern "C" { void AcidSharp_symbols1601(void* instance) { new (instance) acid::ComponentCreate(); } }
acid::ComponentCreate& (acid::ComponentCreate::*AcidSharp_symbols1602)(const acid::ComponentCreate&) = &acid::ComponentCreate::operator=;
extern "C" { void AcidSharp_symbols1603(void* instance, const acid::Frustum& _0) { new (instance) acid::Frustum(_0); } }
extern "C" { void AcidSharp_symbols1604(acid::ISpatialStructure* instance) { instance->~ISpatialStructure(); } }
extern "C" { void AcidSharp_symbols1605(acid::ISpawnParticle* instance) { instance->~ISpawnParticle(); } }
extern "C" { void AcidSharp_symbols1606(acid::IDescriptor* instance) { instance->~IDescriptor(); } }
extern "C" { void AcidSharp_symbols1607(acid::ICamera* instance) { instance->~ICamera(); } }
extern "C" { void AcidSharp_symbols1608(acid::IRenderer* instance) { instance->~IRenderer(); } }
extern "C" { void AcidSharp_symbols1609(void* instance, const acid::UiSelectorMouse& _0) { new (instance) acid::UiSelectorMouse(_0); } }
extern "C" { void AcidSharp_symbols1610(acid::UiSelectorMouse* instance) { instance->~UiSelectorMouse(); } }
acid::UiSelectorMouse& (acid::UiSelectorMouse::*AcidSharp_symbols1611)(const acid::UiSelectorMouse&) = &acid::UiSelectorMouse::operator=;
acid::UiSelectorMouse& (acid::UiSelectorMouse::*AcidSharp_symbols1612)(acid::UiSelectorMouse&&) = &acid::UiSelectorMouse::operator=;
extern "C" { void AcidSharp_symbols1613(void* instance) { new (instance) acid::UiSelectorMouse(); } }
extern "C" { void AcidSharp_symbols1614(void* instance, const acid::UiSelector& _0) { new (instance) acid::UiSelector(_0); } }
extern "C" { void AcidSharp_symbols1615(void* instance) { new (instance) acid::Serialize(); } }
extern "C" { void AcidSharp_symbols1616(void* instance, const acid::Serialize& _0) { new (instance) acid::Serialize(_0); } }
extern "C" { void AcidSharp_symbols1617(acid::Serialize* instance) { instance->~Serialize(); } }
