#include <Flounder.hpp>

extern "C" { void Flounder_symbols1(void* instance, const fl::Foo& _0) { new (instance) fl::Foo(_0); } }
fl::Foo& (fl::Foo::*Flounder_symbols2)(const fl::Foo&) = &fl::Foo::operator=;
