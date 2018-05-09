#pragma once

//
// Flounder header file.
//

namespace fl
{
	class Foo
	{
	private:
		int m_a;
		float m_b;
	public:
		Foo(int a);

		~Foo();

		int Add(Foo* foo) const;
	};
}