#include <acid\Acid.hpp>

extern "C" { void AcidSharp_symbols1(void* instance) { new (instance) acid::Maths(); } }
extern "C" { void AcidSharp_symbols2(void* instance, const acid::Maths& _0) { new (instance) acid::Maths(_0); } }
extern "C" { void AcidSharp_symbols3(acid::Maths* instance) { instance->~Maths(); } }
extern "C" { void AcidSharp_symbols4(acid::Vector3* instance) { instance->~Vector3(); } }
extern "C" { void AcidSharp_symbols5(acid::Vector4* instance) { instance->~Vector4(); } }
extern "C" { void AcidSharp_symbols6(acid::Matrix4* instance) { instance->~Matrix4(); } }
extern "C" { void AcidSharp_symbols7(acid::Quaternion* instance) { instance->~Quaternion(); } }
