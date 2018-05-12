#pragma once

#include <array>
#include "Display/Display.hpp"

namespace fl
{
	/// <summary>
	/// Used to store index of a QueueFamily with particular qualities.
	/// </summary>
	class FL_EXPORT QueueFamilyIndices
	{
	public:
		int m_graphicsFamily = -1;
		int m_presentFamily = -1;
		int m_computeFamily = -1;

		std::array<uint32_t, 3> m_array;

		/// <summary>
		/// Gets if an index has been assigned.
		/// </summary>
		/// <return> If an index has been assigned. </return>
		bool IsComplete() const
		{
			return m_graphicsFamily >= 0 && m_presentFamily >= 0 && m_computeFamily >= 0;
		}
	};

	/// <summary>
	/// A Vulkan queue family.
	/// </summary>
	class FL_EXPORT QueueFamily
	{
	public:
		/// <summary>
		/// Finds a queue families of a physical device.
		/// </summary>
		/// <param name="surface"> The surface. </param>
		static QueueFamilyIndices FindQueueFamilies(const VkSurfaceKHR &surface);
	};
}
