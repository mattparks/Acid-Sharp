#include <fl\Flounder.hpp>

extern "C" { void FlounderSharp_symbols1(void* instance) { new (instance) fl::FormatString(); } }
extern "C" { void FlounderSharp_symbols2(void* instance, const fl::FormatString& _0) { new (instance) fl::FormatString(_0); } }
extern "C" { void FlounderSharp_symbols3(fl::FormatString* instance) { instance->~FormatString(); } }
extern "C" { void FlounderSharp_symbols4(void* instance, const fl::Delta& _0) { new (instance) fl::Delta(_0); } }
extern "C" { void FlounderSharp_symbols5(void* instance, const fl::SmoothFloat& _0) { new (instance) fl::SmoothFloat(_0); } }
extern "C" { void FlounderSharp_symbols6(void* instance) { new (instance) fl::Maths(); } }
extern "C" { void FlounderSharp_symbols7(void* instance, const fl::Maths& _0) { new (instance) fl::Maths(_0); } }
extern "C" { void FlounderSharp_symbols8(fl::Maths* instance) { instance->~Maths(); } }
extern "C" { void FlounderSharp_symbols9(void* instance, const fl::Noise& _0) { new (instance) fl::Noise(_0); } }
extern "C" { void FlounderSharp_symbols10(void* instance, const fl::Timer& _0) { new (instance) fl::Timer(_0); } }
