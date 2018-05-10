#include <fl\Flounder.hpp>

extern "C" { void FlounderSharp_symbols1(void* instance) { new (instance) fl::FileSystem(); } }
extern "C" { void FlounderSharp_symbols2(void* instance, const fl::FileSystem& _0) { new (instance) fl::FileSystem(_0); } }
fl::FileSystem& (fl::FileSystem::*FlounderSharp_symbols3)(const fl::FileSystem&) = &fl::FileSystem::operator=;
fl::FileSystem& (fl::FileSystem::*FlounderSharp_symbols4)(fl::FileSystem&&) = &fl::FileSystem::operator=;
extern "C" { void FlounderSharp_symbols5(fl::FileSystem* instance) { instance->~FileSystem(); } }
extern "C" { void FlounderSharp_symbols6(void* instance) { new (instance) fl::FormatString(); } }
extern "C" { void FlounderSharp_symbols7(void* instance, const fl::FormatString& _0) { new (instance) fl::FormatString(_0); } }
fl::FormatString& (fl::FormatString::*FlounderSharp_symbols8)(const fl::FormatString&) = &fl::FormatString::operator=;
fl::FormatString& (fl::FormatString::*FlounderSharp_symbols9)(fl::FormatString&&) = &fl::FormatString::operator=;
extern "C" { void FlounderSharp_symbols10(fl::FormatString* instance) { instance->~FormatString(); } }
unsigned int (fl::LoadedValue::*FlounderSharp_symbols11)() const = &fl::LoadedValue::ChildrenCount;
extern "C" { void FlounderSharp_symbols12(void* instance, const fl::LoadedValue& _0) { new (instance) fl::LoadedValue(_0); } }
fl::LoadedValue& (fl::LoadedValue::*FlounderSharp_symbols13)(const fl::LoadedValue&) = &fl::LoadedValue::operator=;
extern "C" { void FlounderSharp_symbols14(void* instance) { new (instance) fl::SquareArray(); } }
extern "C" { void FlounderSharp_symbols15(void* instance, const fl::SquareArray& _0) { new (instance) fl::SquareArray(_0); } }
fl::SquareArray& (fl::SquareArray::*FlounderSharp_symbols16)(const fl::SquareArray&) = &fl::SquareArray::operator=;
fl::SquareArray& (fl::SquareArray::*FlounderSharp_symbols17)(fl::SquareArray&&) = &fl::SquareArray::operator=;
extern "C" { void FlounderSharp_symbols18(fl::SquareArray* instance) { instance->~SquareArray(); } }
