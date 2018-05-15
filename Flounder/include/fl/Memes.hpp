#pragma once

#include <string>
#include "Engine\Exports.hpp"

namespace fl
{
	class FL_EXPORT Memes
	{
	private:
		std::string m_name;
		float m_value;
	public:
		Memes(std::string name, float value);

		~Memes();

		void Print();

		std::string GetName() const { return m_name; }

		void SetName(const std::string &name) { m_name = name; }

		float GetValue() const { return m_value; }

		void SetValue(float value) { m_value = value; }
	};
}
