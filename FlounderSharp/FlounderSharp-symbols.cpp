#include <fl\Flounder.hpp>

extern "C" { void FlounderSharp_symbols1(void* instance, const fl::Delta& _0) { new (instance) fl::Delta(_0); } }
extern "C" { void FlounderSharp_symbols2(void* instance) { new (instance) fl::Maths(); } }
extern "C" { void FlounderSharp_symbols3(void* instance, const fl::Maths& _0) { new (instance) fl::Maths(_0); } }
extern "C" { void FlounderSharp_symbols4(fl::Maths* instance) { instance->~Maths(); } }
extern "C" { void FlounderSharp_symbols5(void* instance, const fl::Noise& _0) { new (instance) fl::Noise(_0); } }
extern "C" { void FlounderSharp_symbols6(void* instance, const fl::Timer& _0) { new (instance) fl::Timer(_0); } }
