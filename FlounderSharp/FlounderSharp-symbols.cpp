#include <fl\Flounder.hpp>

extern "C" { void FlounderSharp_symbols1(void* instance) { new (instance) fl::Maths(); } }
extern "C" { void FlounderSharp_symbols2(void* instance, const fl::Maths& _0) { new (instance) fl::Maths(_0); } }
extern "C" { void FlounderSharp_symbols3(fl::Maths* instance) { instance->~Maths(); } }
extern "C" { void FlounderSharp_symbols4(void* instance) { new (instance) fl::FormatString(); } }
extern "C" { void FlounderSharp_symbols5(void* instance, const fl::FormatString& _0) { new (instance) fl::FormatString(_0); } }
extern "C" { void FlounderSharp_symbols6(fl::FormatString* instance) { instance->~FormatString(); } }
