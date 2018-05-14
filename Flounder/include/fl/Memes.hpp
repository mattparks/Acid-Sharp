#pragma once

namespace fl
{
	class Memes
	{
	private:
		float m_a, m_b;
	public:
		Memes(const float &a = 0.0f, const float &b = 0.0f);

		float Add(const Memes &other);

		float GetA() const { return m_a; }

		void SetA(const float &a) { m_a = a; }

		float GetB() const { return m_b; }

		void SetB(const float &b) { m_b = b; }

		Memes &operator=(const Memes &other);
	};
}