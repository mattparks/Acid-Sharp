#include <acid\Acid.hpp>

extern "C" { void Acid_symbols1(void* instance) { new (instance) acid::Log(); } }
extern "C" { void Acid_symbols2(void* instance, const acid::Log& _0) { new (instance) acid::Log(_0); } }
extern "C" { void Acid_symbols3(acid::Log* instance) { instance->~Log(); } }
extern "C" { void Acid_symbols4(void* instance, const acid::Time& _0) { new (instance) acid::Time(_0); } }
extern "C" { void Acid_symbols5(acid::Time* instance) { instance->~Time(); } }
extern "C" { void Acid_symbols6(acid::IModule* instance) { instance->~IModule(); } }
extern "C" { void Acid_symbols7(void* instance, const acid::Delta& _0) { new (instance) acid::Delta(_0); } }
extern "C" { void Acid_symbols8(acid::Delta* instance) { instance->~Delta(); } }
extern "C" { void Acid_symbols9(void* instance, const acid::Timer& _0) { new (instance) acid::Timer(_0); } }
extern "C" { void Acid_symbols10(acid::Timer* instance) { instance->~Timer(); } }
extern "C" { void Acid_symbols11(void* instance, const acid::ModuleUpdater& _0) { new (instance) acid::ModuleUpdater(_0); } }
extern "C" { void Acid_symbols12(acid::ModuleUpdater* instance) { instance->~ModuleUpdater(); } }
extern "C" { void Acid_symbols13(acid::Vector2* instance) { instance->~Vector2(); } }
