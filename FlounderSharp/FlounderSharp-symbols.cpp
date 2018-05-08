#include <Flounder.hpp>

double (*FlounderSharp_symbols1)(const double&, const double&) = &fl::Maths::LogRandom;
float (*FlounderSharp_symbols2)(const float&, const float&) = &fl::Maths::NormallyDistributedSingle;
extern "C" { void FlounderSharp_symbols3(void* instance) { new (instance) fl::Maths(); } }
extern "C" { void FlounderSharp_symbols4(void* instance, const fl::Maths& _0) { new (instance) fl::Maths(_0); } }
fl::Maths& (fl::Maths::*FlounderSharp_symbols5)(const fl::Maths&) = &fl::Maths::operator=;
fl::Maths& (fl::Maths::*FlounderSharp_symbols6)(fl::Maths&&) = &fl::Maths::operator=;
extern "C" { void FlounderSharp_symbols7(fl::Maths* instance) { instance->~Maths(); } }
