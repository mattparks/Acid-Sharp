#include "Flounder.hpp"

namespace fl
{
	Foo::Foo(int a) :
		m_a(a)
	{
	}

	Foo::~Foo()
	{
	}

	int Foo::Add(Foo *foo) const
	{
		return m_a + foo->m_a;
	}
}