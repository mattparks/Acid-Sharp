#include <Flounder.hpp>

extern "C" { void FlounderSharp_symbols1(void* instance) { new (instance) fl::FileSystem(); } }
extern "C" { void FlounderSharp_symbols2(void* instance, const fl::FileSystem& _0) { new (instance) fl::FileSystem(_0); } }
fl::FileSystem& (fl::FileSystem::*FlounderSharp_symbols3)(const fl::FileSystem&) = &fl::FileSystem::operator=;
fl::FileSystem& (fl::FileSystem::*FlounderSharp_symbols4)(fl::FileSystem&&) = &fl::FileSystem::operator=;
extern "C" { void FlounderSharp_symbols5(fl::FileSystem* instance) { instance->~FileSystem(); } }
