#include <Testing.hpp>

float (*Testing_symbols1)() = &fl::Maths::Random;
double (*Testing_symbols2)(const double&, const double&) = &fl::Maths::LogRandom;
float (*Testing_symbols3)(const float&, const float&) = &fl::Maths::NormallyDistributedSingle;
extern "C" { void Testing_symbols4(void* instance) { new (instance) fl::Maths(); } }
extern "C" { void Testing_symbols5(void* instance, const fl::Maths& _0) { new (instance) fl::Maths(_0); } }
fl::Maths& (fl::Maths::*Testing_symbols6)(const fl::Maths&) = &fl::Maths::operator=;
fl::Maths& (fl::Maths::*Testing_symbols7)(fl::Maths&&) = &fl::Maths::operator=;
extern "C" { void Testing_symbols8(fl::Maths* instance) { instance->~Maths(); } }
