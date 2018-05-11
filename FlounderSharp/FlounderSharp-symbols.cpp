#include <fl\Flounder.hpp>

extern "C" { void FlounderSharp_symbols1(void* instance) { new (instance) stbi_io_callbacks(); } }
extern "C" { void FlounderSharp_symbols2(void* instance, const stbi_io_callbacks& _0) { new (instance) stbi_io_callbacks(_0); } }
stbi_io_callbacks& (stbi_io_callbacks::*FlounderSharp_symbols3)(const stbi_io_callbacks&) = &stbi_io_callbacks::operator=;
stbi_io_callbacks& (stbi_io_callbacks::*FlounderSharp_symbols4)(stbi_io_callbacks&&) = &stbi_io_callbacks::operator=;
extern "C" { void FlounderSharp_symbols5(stbi_io_callbacks* instance) { instance->~stbi_io_callbacks(); } }
extern "C" { void FlounderSharp_symbols6(void* instance) { new (instance) stb_vorbis_alloc(); } }
extern "C" { void FlounderSharp_symbols7(void* instance, const stb_vorbis_alloc& _0) { new (instance) stb_vorbis_alloc(_0); } }
stb_vorbis_alloc& (stb_vorbis_alloc::*FlounderSharp_symbols8)(const stb_vorbis_alloc&) = &stb_vorbis_alloc::operator=;
stb_vorbis_alloc& (stb_vorbis_alloc::*FlounderSharp_symbols9)(stb_vorbis_alloc&&) = &stb_vorbis_alloc::operator=;
extern "C" { void FlounderSharp_symbols10(stb_vorbis_alloc* instance) { instance->~stb_vorbis_alloc(); } }
extern "C" { void FlounderSharp_symbols11(void* instance) { new (instance) stb_vorbis_info(); } }
extern "C" { void FlounderSharp_symbols12(void* instance, const stb_vorbis_info& _0) { new (instance) stb_vorbis_info(_0); } }
stb_vorbis_info& (stb_vorbis_info::*FlounderSharp_symbols13)(const stb_vorbis_info&) = &stb_vorbis_info::operator=;
stb_vorbis_info& (stb_vorbis_info::*FlounderSharp_symbols14)(stb_vorbis_info&&) = &stb_vorbis_info::operator=;
extern "C" { void FlounderSharp_symbols15(stb_vorbis_info* instance) { instance->~stb_vorbis_info(); } }
extern "C" { void FlounderSharp_symbols16(void* instance) { new (instance) GLFWvidmode(); } }
extern "C" { void FlounderSharp_symbols17(void* instance, const GLFWvidmode& _0) { new (instance) GLFWvidmode(_0); } }
GLFWvidmode& (GLFWvidmode::*FlounderSharp_symbols18)(const GLFWvidmode&) = &GLFWvidmode::operator=;
GLFWvidmode& (GLFWvidmode::*FlounderSharp_symbols19)(GLFWvidmode&&) = &GLFWvidmode::operator=;
extern "C" { void FlounderSharp_symbols20(GLFWvidmode* instance) { instance->~GLFWvidmode(); } }
extern "C" { void FlounderSharp_symbols21(void* instance) { new (instance) GLFWgammaramp(); } }
extern "C" { void FlounderSharp_symbols22(void* instance, const GLFWgammaramp& _0) { new (instance) GLFWgammaramp(_0); } }
GLFWgammaramp& (GLFWgammaramp::*FlounderSharp_symbols23)(const GLFWgammaramp&) = &GLFWgammaramp::operator=;
GLFWgammaramp& (GLFWgammaramp::*FlounderSharp_symbols24)(GLFWgammaramp&&) = &GLFWgammaramp::operator=;
extern "C" { void FlounderSharp_symbols25(GLFWgammaramp* instance) { instance->~GLFWgammaramp(); } }
extern "C" { void FlounderSharp_symbols26(void* instance) { new (instance) GLFWimage(); } }
extern "C" { void FlounderSharp_symbols27(void* instance, const GLFWimage& _0) { new (instance) GLFWimage(_0); } }
GLFWimage& (GLFWimage::*FlounderSharp_symbols28)(const GLFWimage&) = &GLFWimage::operator=;
GLFWimage& (GLFWimage::*FlounderSharp_symbols29)(GLFWimage&&) = &GLFWimage::operator=;
extern "C" { void FlounderSharp_symbols30(GLFWimage* instance) { instance->~GLFWimage(); } }
extern "C" { void FlounderSharp_symbols31(void* instance) { new (instance) GLFWgamepadstate(); } }
extern "C" { void FlounderSharp_symbols32(void* instance, const GLFWgamepadstate& _0) { new (instance) GLFWgamepadstate(_0); } }
GLFWgamepadstate& (GLFWgamepadstate::*FlounderSharp_symbols33)(const GLFWgamepadstate&) = &GLFWgamepadstate::operator=;
GLFWgamepadstate& (GLFWgamepadstate::*FlounderSharp_symbols34)(GLFWgamepadstate&&) = &GLFWgamepadstate::operator=;
extern "C" { void FlounderSharp_symbols35(GLFWgamepadstate* instance) { instance->~GLFWgamepadstate(); } }
extern "C" { void FlounderSharp_symbols36(void* instance, const fl::Delta& _0) { new (instance) fl::Delta(_0); } }
extern "C" { void FlounderSharp_symbols37(void* instance) { new (instance) fl::Maths(); } }
extern "C" { void FlounderSharp_symbols38(void* instance, const fl::Maths& _0) { new (instance) fl::Maths(_0); } }
extern "C" { void FlounderSharp_symbols39(fl::Maths* instance) { instance->~Maths(); } }
