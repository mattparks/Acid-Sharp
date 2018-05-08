#include <Testing.hpp>

float (*Flounder_symbols1)() = &fl::Maths::Random;
double (*Flounder_symbols2)(const double&, const double&) = &fl::Maths::LogRandom;
float (*Flounder_symbols3)(const float&, const float&) = &fl::Maths::NormallyDistributedSingle;
extern "C" { void Flounder_symbols4(void* instance) { new (instance) fl::Maths(); } }
extern "C" { void Flounder_symbols5(void* instance, const fl::Maths& _0) { new (instance) fl::Maths(_0); } }
fl::Maths& (fl::Maths::*Flounder_symbols6)(const fl::Maths&) = &fl::Maths::operator=;
fl::Maths& (fl::Maths::*Flounder_symbols7)(fl::Maths&&) = &fl::Maths::operator=;
extern "C" { void Flounder_symbols8(fl::Maths* instance) { instance->~Maths(); } }
