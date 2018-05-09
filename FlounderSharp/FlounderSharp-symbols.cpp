#include <Flounder.hpp>

extern "C" { void FlounderSharp_symbols1(void* instance, const fl::Foo& _0) { new (instance) fl::Foo(_0); } }
fl::Foo& (fl::Foo::*FlounderSharp_symbols2)(const fl::Foo&) = &fl::Foo::operator=;
