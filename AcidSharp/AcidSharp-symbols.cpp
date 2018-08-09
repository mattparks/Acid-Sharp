#include <acid\Acid.hpp>

acid::IModule& (acid::IModule::*AcidSharp_symbols1)(const acid::IModule&) = &acid::IModule::operator=;
::uint32_t (acid::ModuleRegister::*AcidSharp_symbols2)() const = &acid::ModuleRegister::GetModuleCount;
extern "C" { void AcidSharp_symbols3(void* instance, const acid::ModuleRegister& _0) { new (instance) acid::ModuleRegister(_0); } }
acid::ModuleRegister& (acid::ModuleRegister::*AcidSharp_symbols4)(const acid::ModuleRegister&) = &acid::ModuleRegister::operator=;
acid::IUpdater& (acid::IUpdater::*AcidSharp_symbols5)(const acid::IUpdater&) = &acid::IUpdater::operator=;
acid::Engine* (*AcidSharp_symbols6)() = &acid::Engine::Get;
acid::IUpdater* (acid::Engine::*AcidSharp_symbols7)() const = &acid::Engine::GetUpdater;
void (acid::Engine::*AcidSharp_symbols8)(acid::IUpdater*) = &acid::Engine::SetUpdater;
float (acid::Engine::*AcidSharp_symbols9)() const = &acid::Engine::GetTimeOffset;
void (acid::Engine::*AcidSharp_symbols10)(const float&) = &acid::Engine::SetTimeOffset;
float (acid::Engine::*AcidSharp_symbols11)() const = &acid::Engine::GetFpsLimit;
void (acid::Engine::*AcidSharp_symbols12)(const float&) = &acid::Engine::SetFpsLimit;
float (acid::Engine::*AcidSharp_symbols13)() = &acid::Engine::GetDelta;
float (acid::Engine::*AcidSharp_symbols14)() = &acid::Engine::GetDeltaRender;
float (acid::Engine::*AcidSharp_symbols15)() const = &acid::Engine::GetTime;
bool (acid::Engine::*AcidSharp_symbols16)() const = &acid::Engine::IsInitialized;
void (acid::Engine::*AcidSharp_symbols17)(const bool&) = &acid::Engine::SetInitialized;
bool (acid::Engine::*AcidSharp_symbols18)() const = &acid::Engine::IsRunning;
extern "C" { void AcidSharp_symbols19(void* instance, const acid::Engine& _0) { new (instance) acid::Engine(_0); } }
acid::Engine& (acid::Engine::*AcidSharp_symbols20)(const acid::Engine&) = &acid::Engine::operator=;
acid::IEvent& (acid::IEvent::*AcidSharp_symbols21)(const acid::IEvent&) = &acid::IEvent::operator=;
acid::Events* (*AcidSharp_symbols22)() = &acid::Events::Get;
extern "C" { void AcidSharp_symbols23(void* instance, const acid::Events& _0) { new (instance) acid::Events(_0); } }
acid::Events& (acid::Events::*AcidSharp_symbols24)(const acid::Events&) = &acid::Events::operator=;
extern "C" { void AcidSharp_symbols25(void* instance, const acid::EventStandard& _0) { new (instance) acid::EventStandard(_0); } }
acid::EventStandard& (acid::EventStandard::*AcidSharp_symbols26)(const acid::EventStandard&) = &acid::EventStandard::operator=;
acid::EventStandard& (acid::EventStandard::*AcidSharp_symbols27)(acid::EventStandard&&) = &acid::EventStandard::operator=;
extern "C" { void AcidSharp_symbols28(void* instance, const acid::Timer& _0) { new (instance) acid::Timer(_0); } }
acid::Timer& (acid::Timer::*AcidSharp_symbols29)(const acid::Timer&) = &acid::Timer::operator=;
extern "C" { void AcidSharp_symbols30(void* instance, const acid::EventTime& _0) { new (instance) acid::EventTime(_0); } }
acid::EventTime& (acid::EventTime::*AcidSharp_symbols31)(const acid::EventTime&) = &acid::EventTime::operator=;
extern "C" { void AcidSharp_symbols32(void* instance) { new (instance) acid::FormatString(); } }
extern "C" { void AcidSharp_symbols33(void* instance, const acid::FormatString& _0) { new (instance) acid::FormatString(_0); } }
acid::FormatString& (acid::FormatString::*AcidSharp_symbols34)(const acid::FormatString&) = &acid::FormatString::operator=;
acid::FormatString& (acid::FormatString::*AcidSharp_symbols35)(acid::FormatString&&) = &acid::FormatString::operator=;
extern "C" { void AcidSharp_symbols36(acid::FormatString* instance) { instance->~FormatString(); } }
std::string (acid::ConfigKey::*AcidSharp_symbols37)() const = &acid::ConfigKey::GetValue;
void (acid::ConfigKey::*AcidSharp_symbols38)(const std::string&) = &acid::ConfigKey::SetValue;
bool (acid::ConfigKey::*AcidSharp_symbols39)() const = &acid::ConfigKey::IsFromFile;
extern "C" { void AcidSharp_symbols40(void* instance, const acid::ConfigKey& _0) { new (instance) acid::ConfigKey(_0); } }
acid::ConfigKey& (acid::ConfigKey::*AcidSharp_symbols41)(const acid::ConfigKey&) = &acid::ConfigKey::operator=;
std::string (acid::LoadedValue::*AcidSharp_symbols42)() const = &acid::LoadedValue::GetName;
void (acid::LoadedValue::*AcidSharp_symbols43)(const std::string&) = &acid::LoadedValue::SetName;
std::string (acid::LoadedValue::*AcidSharp_symbols44)() const = &acid::LoadedValue::GetValue;
void (acid::LoadedValue::*AcidSharp_symbols45)(const std::string&) = &acid::LoadedValue::SetValue;
extern "C" { void AcidSharp_symbols46(void* instance, const acid::LoadedValue& _0) { new (instance) acid::LoadedValue(_0); } }
acid::LoadedValue& (acid::LoadedValue::*AcidSharp_symbols47)(const acid::LoadedValue&) = &acid::LoadedValue::operator=;
acid::IFile& (acid::IFile::*AcidSharp_symbols48)(const acid::IFile&) = &acid::IFile::operator=;
extern "C" { void AcidSharp_symbols49(void* instance, const acid::Config& _0) { new (instance) acid::Config(_0); } }
acid::Config& (acid::Config::*AcidSharp_symbols50)(const acid::Config&) = &acid::Config::operator=;
extern "C" { void AcidSharp_symbols51(void* instance, const acid::RowCsv& _0) { new (instance) acid::RowCsv(_0); } }
acid::RowCsv& (acid::RowCsv::*AcidSharp_symbols52)(acid::RowCsv&&) = &acid::RowCsv::operator=;
acid::RowCsv& (acid::RowCsv::*AcidSharp_symbols53)(const acid::RowCsv&) = &acid::RowCsv::operator=;
char (acid::FileCsv::*AcidSharp_symbols54)() const = &acid::FileCsv::GetDelimiter;
void (acid::FileCsv::*AcidSharp_symbols55)(const char&) = &acid::FileCsv::SetDelimiter;
::size_t (acid::FileCsv::*AcidSharp_symbols56)() const = &acid::FileCsv::GetRowCount;
extern "C" { void AcidSharp_symbols57(void* instance, const acid::FileCsv& _0) { new (instance) acid::FileCsv(_0); } }
acid::FileCsv& (acid::FileCsv::*AcidSharp_symbols58)(const acid::FileCsv&) = &acid::FileCsv::operator=;
acid::Files* (*AcidSharp_symbols59)() = &acid::Files::Get;
extern "C" { void AcidSharp_symbols60(void* instance, const acid::Files& _0) { new (instance) acid::Files(_0); } }
acid::Files& (acid::Files::*AcidSharp_symbols61)(const acid::Files&) = &acid::Files::operator=;
acid::JsonSection* (acid::JsonSection::*AcidSharp_symbols62)() const = &acid::JsonSection::GetParent;
void (acid::JsonSection::*AcidSharp_symbols63)(acid::JsonSection*) = &acid::JsonSection::AddChild;
std::string (acid::JsonSection::*AcidSharp_symbols64)() const = &acid::JsonSection::GetName;
void (acid::JsonSection::*AcidSharp_symbols65)(const std::string&) = &acid::JsonSection::SetName;
std::string (acid::JsonSection::*AcidSharp_symbols66)() const = &acid::JsonSection::GetContent;
void (acid::JsonSection::*AcidSharp_symbols67)(const std::string&) = &acid::JsonSection::SetContent;
extern "C" { void AcidSharp_symbols68(void* instance, const acid::JsonSection& _0) { new (instance) acid::JsonSection(_0); } }
acid::JsonSection& (acid::JsonSection::*AcidSharp_symbols69)(const acid::JsonSection&) = &acid::JsonSection::operator=;
acid::LoadedValue* (acid::FileJson::*AcidSharp_symbols70)(const std::string&) const = &acid::FileJson::GetChild;
extern "C" { void AcidSharp_symbols71(void* instance, const acid::FileJson& _0) { new (instance) acid::FileJson(_0); } }
acid::FileJson& (acid::FileJson::*AcidSharp_symbols72)(const acid::FileJson&) = &acid::FileJson::operator=;
acid::LoadedValue* (acid::FileXml::*AcidSharp_symbols73)(const std::string&) const = &acid::FileXml::GetChild;
extern "C" { void AcidSharp_symbols74(void* instance, const acid::FileXml& _0) { new (instance) acid::FileXml(_0); } }
acid::FileXml& (acid::FileXml::*AcidSharp_symbols75)(const acid::FileXml&) = &acid::FileXml::operator=;
acid::XmlNode* (acid::XmlNode::*AcidSharp_symbols76)() const = &acid::XmlNode::GetParent;
void (acid::XmlNode::*AcidSharp_symbols77)(acid::XmlNode*) = &acid::XmlNode::AddChild;
std::string (acid::XmlNode::*AcidSharp_symbols78)() const = &acid::XmlNode::GetAttributes;
void (acid::XmlNode::*AcidSharp_symbols79)(const std::string&) = &acid::XmlNode::SetAttributes;
std::string (acid::XmlNode::*AcidSharp_symbols80)() const = &acid::XmlNode::GetContent;
void (acid::XmlNode::*AcidSharp_symbols81)(const std::string&) = &acid::XmlNode::SetContent;
extern "C" { void AcidSharp_symbols82(void* instance, const acid::XmlNode& _0) { new (instance) acid::XmlNode(_0); } }
acid::XmlNode& (acid::XmlNode::*AcidSharp_symbols83)(const acid::XmlNode&) = &acid::XmlNode::operator=;
extern "C" { void AcidSharp_symbols84(void* instance) { new (instance) acid::FileSystem(); } }
extern "C" { void AcidSharp_symbols85(void* instance, const acid::FileSystem& _0) { new (instance) acid::FileSystem(_0); } }
acid::FileSystem& (acid::FileSystem::*AcidSharp_symbols86)(const acid::FileSystem&) = &acid::FileSystem::operator=;
acid::FileSystem& (acid::FileSystem::*AcidSharp_symbols87)(acid::FileSystem&&) = &acid::FileSystem::operator=;
extern "C" { void AcidSharp_symbols88(acid::FileSystem* instance) { instance->~FileSystem(); } }
float (acid::Vector3::*AcidSharp_symbols89)() const = &acid::Vector3::GetX;
void (acid::Vector3::*AcidSharp_symbols90)(const float&) = &acid::Vector3::SetX;
float (acid::Vector3::*AcidSharp_symbols91)() const = &acid::Vector3::GetY;
void (acid::Vector3::*AcidSharp_symbols92)(const float&) = &acid::Vector3::SetY;
float (acid::Vector3::*AcidSharp_symbols93)() const = &acid::Vector3::GetZ;
void (acid::Vector3::*AcidSharp_symbols94)(const float&) = &acid::Vector3::SetZ;
extern "C" { void AcidSharp_symbols95(void* instance) { new (instance) acid::SquareArray(); } }
extern "C" { void AcidSharp_symbols96(void* instance, const acid::SquareArray& _0) { new (instance) acid::SquareArray(_0); } }
acid::SquareArray& (acid::SquareArray::*AcidSharp_symbols97)(const acid::SquareArray&) = &acid::SquareArray::operator=;
acid::SquareArray& (acid::SquareArray::*AcidSharp_symbols98)(acid::SquareArray&&) = &acid::SquareArray::operator=;
extern "C" { void AcidSharp_symbols99(acid::SquareArray* instance) { instance->~SquareArray(); } }
float (acid::Colour::*AcidSharp_symbols100)() const = &acid::Colour::GetR;
void (acid::Colour::*AcidSharp_symbols101)(const float&) = &acid::Colour::SetR;
float (acid::Colour::*AcidSharp_symbols102)() const = &acid::Colour::GetG;
void (acid::Colour::*AcidSharp_symbols103)(const float&) = &acid::Colour::SetG;
float (acid::Colour::*AcidSharp_symbols104)() const = &acid::Colour::GetB;
void (acid::Colour::*AcidSharp_symbols105)(const float&) = &acid::Colour::SetB;
float (acid::Colour::*AcidSharp_symbols106)() const = &acid::Colour::GetA;
void (acid::Colour::*AcidSharp_symbols107)(const float&) = &acid::Colour::SetA;
acid::Colour (acid::Fog::*AcidSharp_symbols108)() const = &acid::Fog::GetColour;
void (acid::Fog::*AcidSharp_symbols109)(const acid::Colour&) = &acid::Fog::SetColour;
float (acid::Fog::*AcidSharp_symbols110)() const = &acid::Fog::GetDensity;
void (acid::Fog::*AcidSharp_symbols111)(const float&) = &acid::Fog::SetDensity;
float (acid::Fog::*AcidSharp_symbols112)() const = &acid::Fog::GetGradient;
void (acid::Fog::*AcidSharp_symbols113)(const float&) = &acid::Fog::SetGradient;
float (acid::Fog::*AcidSharp_symbols114)() const = &acid::Fog::GetLowerLimit;
void (acid::Fog::*AcidSharp_symbols115)(const float&) = &acid::Fog::SetLowerLimit;
float (acid::Fog::*AcidSharp_symbols116)() const = &acid::Fog::GetUpperLimit;
void (acid::Fog::*AcidSharp_symbols117)(const float&) = &acid::Fog::SetUpperLimit;
extern "C" { void AcidSharp_symbols118(void* instance, const acid::Fog& _0) { new (instance) acid::Fog(_0); } }
float (acid::Vector4::*AcidSharp_symbols119)() const = &acid::Vector4::GetX;
void (acid::Vector4::*AcidSharp_symbols120)(const float&) = &acid::Vector4::SetX;
float (acid::Vector4::*AcidSharp_symbols121)() const = &acid::Vector4::GetY;
void (acid::Vector4::*AcidSharp_symbols122)(const float&) = &acid::Vector4::SetY;
float (acid::Vector4::*AcidSharp_symbols123)() const = &acid::Vector4::GetZ;
void (acid::Vector4::*AcidSharp_symbols124)(const float&) = &acid::Vector4::SetZ;
float (acid::Vector4::*AcidSharp_symbols125)() const = &acid::Vector4::GetW;
void (acid::Vector4::*AcidSharp_symbols126)(const float&) = &acid::Vector4::SetW;
acid::Vector3 (acid::Transform::*AcidSharp_symbols127)() const = &acid::Transform::GetPosition;
void (acid::Transform::*AcidSharp_symbols128)(const acid::Vector3&) = &acid::Transform::SetPosition;
acid::Vector3 (acid::Transform::*AcidSharp_symbols129)() const = &acid::Transform::GetRotation;
void (acid::Transform::*AcidSharp_symbols130)(const acid::Vector3&) = &acid::Transform::SetRotation;
acid::Vector3 (acid::Transform::*AcidSharp_symbols131)() const = &acid::Transform::GetScaling;
void (acid::Transform::*AcidSharp_symbols132)(const acid::Vector3&) = &acid::Transform::SetScaling;
extern "C" { void AcidSharp_symbols133(void* instance, const acid::Frustum& _0) { new (instance) acid::Frustum(_0); } }
acid::Frustum& (acid::Frustum::*AcidSharp_symbols134)(const acid::Frustum&) = &acid::Frustum::operator=;
acid::ISpatialStructure& (acid::ISpatialStructure::*AcidSharp_symbols135)(const acid::ISpatialStructure&) = &acid::ISpatialStructure::operator=;
acid::GameObject* (acid::IComponent::*AcidSharp_symbols136)() const = &acid::IComponent::GetGameObject;
void (acid::IComponent::*AcidSharp_symbols137)(acid::GameObject*) = &acid::IComponent::SetGameObject;
bool (acid::IComponent::*AcidSharp_symbols138)() const = &acid::IComponent::IsStarted;
void (acid::IComponent::*AcidSharp_symbols139)(const bool&) = &acid::IComponent::SetStarted;
bool (acid::IComponent::*AcidSharp_symbols140)() const = &acid::IComponent::IsEnabled;
void (acid::IComponent::*AcidSharp_symbols141)(const bool&) = &acid::IComponent::SetEnabled;
acid::IComponent& (acid::IComponent::*AcidSharp_symbols142)(const acid::IComponent&) = &acid::IComponent::operator=;
std::string (acid::GameObject::*AcidSharp_symbols143)() const = &acid::GameObject::GetName;
void (acid::GameObject::*AcidSharp_symbols144)(const std::string&) = &acid::GameObject::SetName;
acid::Transform& (acid::GameObject::*AcidSharp_symbols145)() = &acid::GameObject::GetTransform;
void (acid::GameObject::*AcidSharp_symbols146)(const acid::Transform&) = &acid::GameObject::SetTransform;
acid::ISpatialStructure* (acid::GameObject::*AcidSharp_symbols147)() const = &acid::GameObject::GetStructure;
bool (acid::GameObject::*AcidSharp_symbols148)() const = &acid::GameObject::IsRemoved;
acid::GameObject* (acid::GameObject::*AcidSharp_symbols149)() const = &acid::GameObject::GetParent;
void (acid::GameObject::*AcidSharp_symbols150)(acid::GameObject*) = &acid::GameObject::SetParent;
extern "C" { void AcidSharp_symbols151(void* instance, const acid::GameObject& _0) { new (instance) acid::GameObject(_0); } }
acid::GameObject& (acid::GameObject::*AcidSharp_symbols152)(const acid::GameObject&) = &acid::GameObject::operator=;
acid::Colour (acid::Light::*AcidSharp_symbols153)() const = &acid::Light::GetColour;
void (acid::Light::*AcidSharp_symbols154)(const acid::Colour&) = &acid::Light::SetColour;
float (acid::Light::*AcidSharp_symbols155)() const = &acid::Light::GetRadius;
void (acid::Light::*AcidSharp_symbols156)(const float&) = &acid::Light::SetRadius;
acid::Vector3 (acid::Light::*AcidSharp_symbols157)() const = &acid::Light::GetOffset;
void (acid::Light::*AcidSharp_symbols158)(const acid::Vector3&) = &acid::Light::SetOffset;
acid::Vector3 (acid::Light::*AcidSharp_symbols159)() const = &acid::Light::GetPosition;
float (acid::Delta::*AcidSharp_symbols160)() const = &acid::Delta::GetChange;
float (acid::Delta::*AcidSharp_symbols161)() const = &acid::Delta::GetTime;
extern "C" { void AcidSharp_symbols162(void* instance, const acid::Delta& _0) { new (instance) acid::Delta(_0); } }
acid::Delta& (acid::Delta::*AcidSharp_symbols163)(const acid::Delta&) = &acid::Delta::operator=;
void (acid::SmoothFloat::*AcidSharp_symbols164)(const float&) = &acid::SmoothFloat::SetTarget;
float (acid::SmoothFloat::*AcidSharp_symbols165)() const = &acid::SmoothFloat::GetTarget;
void (acid::SmoothFloat::*AcidSharp_symbols166)(const float&) = &acid::SmoothFloat::IncreaseTarget;
float (acid::SmoothFloat::*AcidSharp_symbols167)() const = &acid::SmoothFloat::Get;
extern "C" { void AcidSharp_symbols168(void* instance, const acid::SmoothFloat& _0) { new (instance) acid::SmoothFloat(_0); } }
acid::SmoothFloat& (acid::SmoothFloat::*AcidSharp_symbols169)(const acid::SmoothFloat&) = &acid::SmoothFloat::operator=;
extern "C" { void AcidSharp_symbols170(void* instance) { new (instance) acid::Maths(); } }
extern "C" { void AcidSharp_symbols171(void* instance, const acid::Maths& _0) { new (instance) acid::Maths(_0); } }
acid::Maths& (acid::Maths::*AcidSharp_symbols172)(const acid::Maths&) = &acid::Maths::operator=;
acid::Maths& (acid::Maths::*AcidSharp_symbols173)(acid::Maths&&) = &acid::Maths::operator=;
extern "C" { void AcidSharp_symbols174(acid::Maths* instance) { instance->~Maths(); } }
float (acid::Vector2::*AcidSharp_symbols175)() const = &acid::Vector2::GetX;
void (acid::Vector2::*AcidSharp_symbols176)(const float&) = &acid::Vector2::SetX;
float (acid::Vector2::*AcidSharp_symbols177)() const = &acid::Vector2::GetY;
void (acid::Vector2::*AcidSharp_symbols178)(const float&) = &acid::Vector2::SetY;
float (acid::Quaternion::*AcidSharp_symbols179)() const = &acid::Quaternion::GetX;
void (acid::Quaternion::*AcidSharp_symbols180)(const float&) = &acid::Quaternion::SetX;
float (acid::Quaternion::*AcidSharp_symbols181)() const = &acid::Quaternion::GetY;
void (acid::Quaternion::*AcidSharp_symbols182)(const float&) = &acid::Quaternion::SetY;
float (acid::Quaternion::*AcidSharp_symbols183)() const = &acid::Quaternion::GetZ;
void (acid::Quaternion::*AcidSharp_symbols184)(const float&) = &acid::Quaternion::SetZ;
float (acid::Quaternion::*AcidSharp_symbols185)() const = &acid::Quaternion::GetW;
void (acid::Quaternion::*AcidSharp_symbols186)(const float&) = &acid::Quaternion::SetW;
float (acid::IDriver::*AcidSharp_symbols187)(const double&) = &acid::IDriver::Update;
class AcidSharp_symbols188acid::IDriver : public acid::IDriver { public: static constexpr float (acid::IDriver::*AcidSharp_symbols188)() const = &AcidSharp_symbols188acid::IDriver::GetActualTime; };
auto AcidSharp_symbols188protected = AcidSharp_symbols188acid::IDriver::AcidSharp_symbols188;
acid::IDriver& (acid::IDriver::*AcidSharp_symbols189)(const acid::IDriver&) = &acid::IDriver::operator=;
extern "C" { void AcidSharp_symbols190(void* instance, const acid::DriverBounce& _0) { new (instance) acid::DriverBounce(_0); } }
acid::DriverBounce& (acid::DriverBounce::*AcidSharp_symbols191)(const acid::DriverBounce&) = &acid::DriverBounce::operator=;
extern "C" { void AcidSharp_symbols192(void* instance, const acid::DriverConstant& _0) { new (instance) acid::DriverConstant(_0); } }
acid::DriverConstant& (acid::DriverConstant::*AcidSharp_symbols193)(const acid::DriverConstant&) = &acid::DriverConstant::operator=;
float (acid::DriverFade::*AcidSharp_symbols194)() const = &acid::DriverFade::GetStart;
void (acid::DriverFade::*AcidSharp_symbols195)(const float&) = &acid::DriverFade::SetStart;
float (acid::DriverFade::*AcidSharp_symbols196)() const = &acid::DriverFade::GetEnd;
void (acid::DriverFade::*AcidSharp_symbols197)(const float&) = &acid::DriverFade::SetEnd;
float (acid::DriverFade::*AcidSharp_symbols198)() const = &acid::DriverFade::GetPeak;
void (acid::DriverFade::*AcidSharp_symbols199)(const float&) = &acid::DriverFade::SetPeak;
extern "C" { void AcidSharp_symbols200(void* instance, const acid::DriverFade& _0) { new (instance) acid::DriverFade(_0); } }
acid::DriverFade& (acid::DriverFade::*AcidSharp_symbols201)(const acid::DriverFade&) = &acid::DriverFade::operator=;
extern "C" { void AcidSharp_symbols202(void* instance, const acid::DriverLinear& _0) { new (instance) acid::DriverLinear(_0); } }
acid::DriverLinear& (acid::DriverLinear::*AcidSharp_symbols203)(const acid::DriverLinear&) = &acid::DriverLinear::operator=;
extern "C" { void AcidSharp_symbols204(void* instance, const acid::DriverSinwave& _0) { new (instance) acid::DriverSinwave(_0); } }
acid::DriverSinwave& (acid::DriverSinwave::*AcidSharp_symbols205)(const acid::DriverSinwave&) = &acid::DriverSinwave::operator=;
extern "C" { void AcidSharp_symbols206(void* instance, const acid::DriverSlide& _0) { new (instance) acid::DriverSlide(_0); } }
acid::DriverSlide& (acid::DriverSlide::*AcidSharp_symbols207)(const acid::DriverSlide&) = &acid::DriverSlide::operator=;
int (acid::Noise::*AcidSharp_symbols208)() const = &acid::Noise::GetSeed;
float (acid::Noise::*AcidSharp_symbols209)() const = &acid::Noise::GetFrequency;
void (acid::Noise::*AcidSharp_symbols210)(const float&) = &acid::Noise::SetFrequency;
acid::NoiseInterp (acid::Noise::*AcidSharp_symbols211)() const = &acid::Noise::GetInterp;
void (acid::Noise::*AcidSharp_symbols212)(const acid::NoiseInterp&) = &acid::Noise::SetInterp;
acid::NoiseType (acid::Noise::*AcidSharp_symbols213)() const = &acid::Noise::GetNoiseType;
void (acid::Noise::*AcidSharp_symbols214)(const acid::NoiseType&) = &acid::Noise::SetNoiseType;
int (acid::Noise::*AcidSharp_symbols215)() const = &acid::Noise::GetFractalOctaves;
float (acid::Noise::*AcidSharp_symbols216)() const = &acid::Noise::GetFractalLacunarity;
void (acid::Noise::*AcidSharp_symbols217)(const float&) = &acid::Noise::SetFractalLacunarity;
float (acid::Noise::*AcidSharp_symbols218)() const = &acid::Noise::GetFractalGain;
acid::NoiseFractal (acid::Noise::*AcidSharp_symbols219)() const = &acid::Noise::GetFractalType;
void (acid::Noise::*AcidSharp_symbols220)(const acid::NoiseFractal&) = &acid::Noise::SetFractalType;
acid::NoiseCellularFunc (acid::Noise::*AcidSharp_symbols221)() const = &acid::Noise::GetCellularDistanceFunction;
void (acid::Noise::*AcidSharp_symbols222)(const acid::NoiseCellularFunc&) = &acid::Noise::SetCellularDistanceFunction;
acid::NoiseCellularReturn (acid::Noise::*AcidSharp_symbols223)() const = &acid::Noise::GetCellularReturnType;
void (acid::Noise::*AcidSharp_symbols224)(const acid::NoiseCellularReturn&) = &acid::Noise::SetCellularReturnType;
acid::Noise* (acid::Noise::*AcidSharp_symbols225)() const = &acid::Noise::GetCellularNoiseLookup;
void (acid::Noise::*AcidSharp_symbols226)(acid::Noise*) = &acid::Noise::SetCellularNoiseLookup;
float (acid::Noise::*AcidSharp_symbols227)() const = &acid::Noise::GetCellularJitter;
void (acid::Noise::*AcidSharp_symbols228)(const float&) = &acid::Noise::SetCellularJitter;
float (acid::Noise::*AcidSharp_symbols229)() const = &acid::Noise::GetGradientPerturbAmp;
void (acid::Noise::*AcidSharp_symbols230)(const float&) = &acid::Noise::SetGradientPerturbAmp;
extern "C" { void AcidSharp_symbols231(void* instance, const acid::Noise& _0) { new (instance) acid::Noise(_0); } }
acid::Noise& (acid::Noise::*AcidSharp_symbols232)(const acid::Noise&) = &acid::Noise::operator=;
extern "C" { void AcidSharp_symbols233(void* instance) { new (instance) VkApplicationInfo(); } }
extern "C" { void AcidSharp_symbols234(void* instance, const VkApplicationInfo& _0) { new (instance) VkApplicationInfo(_0); } }
VkApplicationInfo& (VkApplicationInfo::*AcidSharp_symbols235)(const VkApplicationInfo&) = &VkApplicationInfo::operator=;
VkApplicationInfo& (VkApplicationInfo::*AcidSharp_symbols236)(VkApplicationInfo&&) = &VkApplicationInfo::operator=;
extern "C" { void AcidSharp_symbols237(VkApplicationInfo* instance) { instance->~VkApplicationInfo(); } }
extern "C" { void AcidSharp_symbols238(void* instance) { new (instance) VkInstanceCreateInfo(); } }
extern "C" { void AcidSharp_symbols239(void* instance, const VkInstanceCreateInfo& _0) { new (instance) VkInstanceCreateInfo(_0); } }
VkInstanceCreateInfo& (VkInstanceCreateInfo::*AcidSharp_symbols240)(const VkInstanceCreateInfo&) = &VkInstanceCreateInfo::operator=;
VkInstanceCreateInfo& (VkInstanceCreateInfo::*AcidSharp_symbols241)(VkInstanceCreateInfo&&) = &VkInstanceCreateInfo::operator=;
extern "C" { void AcidSharp_symbols242(VkInstanceCreateInfo* instance) { instance->~VkInstanceCreateInfo(); } }
extern "C" { void AcidSharp_symbols243(void* instance) { new (instance) VkAllocationCallbacks(); } }
extern "C" { void AcidSharp_symbols244(void* instance, const VkAllocationCallbacks& _0) { new (instance) VkAllocationCallbacks(_0); } }
VkAllocationCallbacks& (VkAllocationCallbacks::*AcidSharp_symbols245)(const VkAllocationCallbacks&) = &VkAllocationCallbacks::operator=;
VkAllocationCallbacks& (VkAllocationCallbacks::*AcidSharp_symbols246)(VkAllocationCallbacks&&) = &VkAllocationCallbacks::operator=;
extern "C" { void AcidSharp_symbols247(VkAllocationCallbacks* instance) { instance->~VkAllocationCallbacks(); } }
extern "C" { void AcidSharp_symbols248(void* instance, const VkPhysicalDeviceFeatures& _0) { new (instance) VkPhysicalDeviceFeatures(_0); } }
extern "C" { void AcidSharp_symbols249(VkPhysicalDeviceFeatures* instance) { instance->~VkPhysicalDeviceFeatures(); } }
VkPhysicalDeviceFeatures& (VkPhysicalDeviceFeatures::*AcidSharp_symbols250)(const VkPhysicalDeviceFeatures&) = &VkPhysicalDeviceFeatures::operator=;
VkPhysicalDeviceFeatures& (VkPhysicalDeviceFeatures::*AcidSharp_symbols251)(VkPhysicalDeviceFeatures&&) = &VkPhysicalDeviceFeatures::operator=;
extern "C" { void AcidSharp_symbols252(void* instance) { new (instance) VkPhysicalDeviceFeatures(); } }
extern "C" { void AcidSharp_symbols253(void* instance) { new (instance) VkFormatProperties(); } }
extern "C" { void AcidSharp_symbols254(void* instance, const VkFormatProperties& _0) { new (instance) VkFormatProperties(_0); } }
VkFormatProperties& (VkFormatProperties::*AcidSharp_symbols255)(const VkFormatProperties&) = &VkFormatProperties::operator=;
VkFormatProperties& (VkFormatProperties::*AcidSharp_symbols256)(VkFormatProperties&&) = &VkFormatProperties::operator=;
extern "C" { void AcidSharp_symbols257(VkFormatProperties* instance) { instance->~VkFormatProperties(); } }
extern "C" { void AcidSharp_symbols258(void* instance) { new (instance) VkExtent3D(); } }
extern "C" { void AcidSharp_symbols259(void* instance, const VkExtent3D& _0) { new (instance) VkExtent3D(_0); } }
VkExtent3D& (VkExtent3D::*AcidSharp_symbols260)(const VkExtent3D&) = &VkExtent3D::operator=;
VkExtent3D& (VkExtent3D::*AcidSharp_symbols261)(VkExtent3D&&) = &VkExtent3D::operator=;
extern "C" { void AcidSharp_symbols262(VkExtent3D* instance) { instance->~VkExtent3D(); } }
extern "C" { void AcidSharp_symbols263(void* instance) { new (instance) VkImageFormatProperties(); } }
extern "C" { void AcidSharp_symbols264(void* instance, const VkImageFormatProperties& _0) { new (instance) VkImageFormatProperties(_0); } }
VkImageFormatProperties& (VkImageFormatProperties::*AcidSharp_symbols265)(const VkImageFormatProperties&) = &VkImageFormatProperties::operator=;
VkImageFormatProperties& (VkImageFormatProperties::*AcidSharp_symbols266)(VkImageFormatProperties&&) = &VkImageFormatProperties::operator=;
extern "C" { void AcidSharp_symbols267(VkImageFormatProperties* instance) { instance->~VkImageFormatProperties(); } }
extern "C" { void AcidSharp_symbols268(void* instance, const VkPhysicalDeviceLimits& _0) { new (instance) VkPhysicalDeviceLimits(_0); } }
extern "C" { void AcidSharp_symbols269(VkPhysicalDeviceLimits* instance) { instance->~VkPhysicalDeviceLimits(); } }
VkPhysicalDeviceLimits& (VkPhysicalDeviceLimits::*AcidSharp_symbols270)(const VkPhysicalDeviceLimits&) = &VkPhysicalDeviceLimits::operator=;
VkPhysicalDeviceLimits& (VkPhysicalDeviceLimits::*AcidSharp_symbols271)(VkPhysicalDeviceLimits&&) = &VkPhysicalDeviceLimits::operator=;
extern "C" { void AcidSharp_symbols272(void* instance) { new (instance) VkPhysicalDeviceLimits(); } }
extern "C" { void AcidSharp_symbols273(void* instance, const VkPhysicalDeviceSparseProperties& _0) { new (instance) VkPhysicalDeviceSparseProperties(_0); } }
extern "C" { void AcidSharp_symbols274(VkPhysicalDeviceSparseProperties* instance) { instance->~VkPhysicalDeviceSparseProperties(); } }
VkPhysicalDeviceSparseProperties& (VkPhysicalDeviceSparseProperties::*AcidSharp_symbols275)(const VkPhysicalDeviceSparseProperties&) = &VkPhysicalDeviceSparseProperties::operator=;
VkPhysicalDeviceSparseProperties& (VkPhysicalDeviceSparseProperties::*AcidSharp_symbols276)(VkPhysicalDeviceSparseProperties&&) = &VkPhysicalDeviceSparseProperties::operator=;
extern "C" { void AcidSharp_symbols277(void* instance) { new (instance) VkPhysicalDeviceSparseProperties(); } }
extern "C" { void AcidSharp_symbols278(void* instance, const VkPhysicalDeviceProperties& _0) { new (instance) VkPhysicalDeviceProperties(_0); } }
extern "C" { void AcidSharp_symbols279(VkPhysicalDeviceProperties* instance) { instance->~VkPhysicalDeviceProperties(); } }
VkPhysicalDeviceProperties& (VkPhysicalDeviceProperties::*AcidSharp_symbols280)(const VkPhysicalDeviceProperties&) = &VkPhysicalDeviceProperties::operator=;
VkPhysicalDeviceProperties& (VkPhysicalDeviceProperties::*AcidSharp_symbols281)(VkPhysicalDeviceProperties&&) = &VkPhysicalDeviceProperties::operator=;
extern "C" { void AcidSharp_symbols282(void* instance) { new (instance) VkPhysicalDeviceProperties(); } }
extern "C" { void AcidSharp_symbols283(void* instance) { new (instance) VkQueueFamilyProperties(); } }
extern "C" { void AcidSharp_symbols284(void* instance, const VkQueueFamilyProperties& _0) { new (instance) VkQueueFamilyProperties(_0); } }
VkQueueFamilyProperties& (VkQueueFamilyProperties::*AcidSharp_symbols285)(const VkQueueFamilyProperties&) = &VkQueueFamilyProperties::operator=;
VkQueueFamilyProperties& (VkQueueFamilyProperties::*AcidSharp_symbols286)(VkQueueFamilyProperties&&) = &VkQueueFamilyProperties::operator=;
extern "C" { void AcidSharp_symbols287(VkQueueFamilyProperties* instance) { instance->~VkQueueFamilyProperties(); } }
extern "C" { void AcidSharp_symbols288(void* instance, const VkMemoryType& _0) { new (instance) VkMemoryType(_0); } }
extern "C" { void AcidSharp_symbols289(VkMemoryType* instance) { instance->~VkMemoryType(); } }
VkMemoryType& (VkMemoryType::*AcidSharp_symbols290)(const VkMemoryType&) = &VkMemoryType::operator=;
VkMemoryType& (VkMemoryType::*AcidSharp_symbols291)(VkMemoryType&&) = &VkMemoryType::operator=;
extern "C" { void AcidSharp_symbols292(void* instance) { new (instance) VkMemoryType(); } }
extern "C" { void AcidSharp_symbols293(void* instance, const VkMemoryHeap& _0) { new (instance) VkMemoryHeap(_0); } }
extern "C" { void AcidSharp_symbols294(VkMemoryHeap* instance) { instance->~VkMemoryHeap(); } }
VkMemoryHeap& (VkMemoryHeap::*AcidSharp_symbols295)(const VkMemoryHeap&) = &VkMemoryHeap::operator=;
VkMemoryHeap& (VkMemoryHeap::*AcidSharp_symbols296)(VkMemoryHeap&&) = &VkMemoryHeap::operator=;
extern "C" { void AcidSharp_symbols297(void* instance) { new (instance) VkMemoryHeap(); } }
extern "C" { void AcidSharp_symbols298(void* instance, const VkPhysicalDeviceMemoryProperties& _0) { new (instance) VkPhysicalDeviceMemoryProperties(_0); } }
extern "C" { void AcidSharp_symbols299(VkPhysicalDeviceMemoryProperties* instance) { instance->~VkPhysicalDeviceMemoryProperties(); } }
VkPhysicalDeviceMemoryProperties& (VkPhysicalDeviceMemoryProperties::*AcidSharp_symbols300)(const VkPhysicalDeviceMemoryProperties&) = &VkPhysicalDeviceMemoryProperties::operator=;
VkPhysicalDeviceMemoryProperties& (VkPhysicalDeviceMemoryProperties::*AcidSharp_symbols301)(VkPhysicalDeviceMemoryProperties&&) = &VkPhysicalDeviceMemoryProperties::operator=;
extern "C" { void AcidSharp_symbols302(void* instance) { new (instance) VkPhysicalDeviceMemoryProperties(); } }
extern "C" { void AcidSharp_symbols303(void* instance) { new (instance) VkDeviceQueueCreateInfo(); } }
extern "C" { void AcidSharp_symbols304(void* instance, const VkDeviceQueueCreateInfo& _0) { new (instance) VkDeviceQueueCreateInfo(_0); } }
VkDeviceQueueCreateInfo& (VkDeviceQueueCreateInfo::*AcidSharp_symbols305)(const VkDeviceQueueCreateInfo&) = &VkDeviceQueueCreateInfo::operator=;
VkDeviceQueueCreateInfo& (VkDeviceQueueCreateInfo::*AcidSharp_symbols306)(VkDeviceQueueCreateInfo&&) = &VkDeviceQueueCreateInfo::operator=;
extern "C" { void AcidSharp_symbols307(VkDeviceQueueCreateInfo* instance) { instance->~VkDeviceQueueCreateInfo(); } }
extern "C" { void AcidSharp_symbols308(void* instance) { new (instance) VkDeviceCreateInfo(); } }
extern "C" { void AcidSharp_symbols309(void* instance, const VkDeviceCreateInfo& _0) { new (instance) VkDeviceCreateInfo(_0); } }
VkDeviceCreateInfo& (VkDeviceCreateInfo::*AcidSharp_symbols310)(const VkDeviceCreateInfo&) = &VkDeviceCreateInfo::operator=;
VkDeviceCreateInfo& (VkDeviceCreateInfo::*AcidSharp_symbols311)(VkDeviceCreateInfo&&) = &VkDeviceCreateInfo::operator=;
extern "C" { void AcidSharp_symbols312(VkDeviceCreateInfo* instance) { instance->~VkDeviceCreateInfo(); } }
extern "C" { void AcidSharp_symbols313(void* instance) { new (instance) VkExtensionProperties(); } }
extern "C" { void AcidSharp_symbols314(void* instance, const VkExtensionProperties& _0) { new (instance) VkExtensionProperties(_0); } }
VkExtensionProperties& (VkExtensionProperties::*AcidSharp_symbols315)(const VkExtensionProperties&) = &VkExtensionProperties::operator=;
VkExtensionProperties& (VkExtensionProperties::*AcidSharp_symbols316)(VkExtensionProperties&&) = &VkExtensionProperties::operator=;
extern "C" { void AcidSharp_symbols317(VkExtensionProperties* instance) { instance->~VkExtensionProperties(); } }
extern "C" { void AcidSharp_symbols318(void* instance) { new (instance) VkLayerProperties(); } }
extern "C" { void AcidSharp_symbols319(void* instance, const VkLayerProperties& _0) { new (instance) VkLayerProperties(_0); } }
VkLayerProperties& (VkLayerProperties::*AcidSharp_symbols320)(const VkLayerProperties&) = &VkLayerProperties::operator=;
VkLayerProperties& (VkLayerProperties::*AcidSharp_symbols321)(VkLayerProperties&&) = &VkLayerProperties::operator=;
extern "C" { void AcidSharp_symbols322(VkLayerProperties* instance) { instance->~VkLayerProperties(); } }
extern "C" { void AcidSharp_symbols323(void* instance) { new (instance) VkSubmitInfo(); } }
extern "C" { void AcidSharp_symbols324(void* instance, const VkSubmitInfo& _0) { new (instance) VkSubmitInfo(_0); } }
VkSubmitInfo& (VkSubmitInfo::*AcidSharp_symbols325)(const VkSubmitInfo&) = &VkSubmitInfo::operator=;
VkSubmitInfo& (VkSubmitInfo::*AcidSharp_symbols326)(VkSubmitInfo&&) = &VkSubmitInfo::operator=;
extern "C" { void AcidSharp_symbols327(VkSubmitInfo* instance) { instance->~VkSubmitInfo(); } }
extern "C" { void AcidSharp_symbols328(void* instance) { new (instance) VkMemoryAllocateInfo(); } }
extern "C" { void AcidSharp_symbols329(void* instance, const VkMemoryAllocateInfo& _0) { new (instance) VkMemoryAllocateInfo(_0); } }
VkMemoryAllocateInfo& (VkMemoryAllocateInfo::*AcidSharp_symbols330)(const VkMemoryAllocateInfo&) = &VkMemoryAllocateInfo::operator=;
VkMemoryAllocateInfo& (VkMemoryAllocateInfo::*AcidSharp_symbols331)(VkMemoryAllocateInfo&&) = &VkMemoryAllocateInfo::operator=;
extern "C" { void AcidSharp_symbols332(VkMemoryAllocateInfo* instance) { instance->~VkMemoryAllocateInfo(); } }
extern "C" { void AcidSharp_symbols333(void* instance) { new (instance) VkMappedMemoryRange(); } }
extern "C" { void AcidSharp_symbols334(void* instance, const VkMappedMemoryRange& _0) { new (instance) VkMappedMemoryRange(_0); } }
VkMappedMemoryRange& (VkMappedMemoryRange::*AcidSharp_symbols335)(const VkMappedMemoryRange&) = &VkMappedMemoryRange::operator=;
VkMappedMemoryRange& (VkMappedMemoryRange::*AcidSharp_symbols336)(VkMappedMemoryRange&&) = &VkMappedMemoryRange::operator=;
extern "C" { void AcidSharp_symbols337(VkMappedMemoryRange* instance) { instance->~VkMappedMemoryRange(); } }
extern "C" { void AcidSharp_symbols338(void* instance) { new (instance) VkMemoryRequirements(); } }
extern "C" { void AcidSharp_symbols339(void* instance, const VkMemoryRequirements& _0) { new (instance) VkMemoryRequirements(_0); } }
VkMemoryRequirements& (VkMemoryRequirements::*AcidSharp_symbols340)(const VkMemoryRequirements&) = &VkMemoryRequirements::operator=;
VkMemoryRequirements& (VkMemoryRequirements::*AcidSharp_symbols341)(VkMemoryRequirements&&) = &VkMemoryRequirements::operator=;
extern "C" { void AcidSharp_symbols342(VkMemoryRequirements* instance) { instance->~VkMemoryRequirements(); } }
extern "C" { void AcidSharp_symbols343(void* instance) { new (instance) VkSparseImageFormatProperties(); } }
extern "C" { void AcidSharp_symbols344(void* instance, const VkSparseImageFormatProperties& _0) { new (instance) VkSparseImageFormatProperties(_0); } }
VkSparseImageFormatProperties& (VkSparseImageFormatProperties::*AcidSharp_symbols345)(const VkSparseImageFormatProperties&) = &VkSparseImageFormatProperties::operator=;
VkSparseImageFormatProperties& (VkSparseImageFormatProperties::*AcidSharp_symbols346)(VkSparseImageFormatProperties&&) = &VkSparseImageFormatProperties::operator=;
extern "C" { void AcidSharp_symbols347(VkSparseImageFormatProperties* instance) { instance->~VkSparseImageFormatProperties(); } }
extern "C" { void AcidSharp_symbols348(void* instance) { new (instance) VkSparseImageMemoryRequirements(); } }
extern "C" { void AcidSharp_symbols349(void* instance, const VkSparseImageMemoryRequirements& _0) { new (instance) VkSparseImageMemoryRequirements(_0); } }
VkSparseImageMemoryRequirements& (VkSparseImageMemoryRequirements::*AcidSharp_symbols350)(const VkSparseImageMemoryRequirements&) = &VkSparseImageMemoryRequirements::operator=;
VkSparseImageMemoryRequirements& (VkSparseImageMemoryRequirements::*AcidSharp_symbols351)(VkSparseImageMemoryRequirements&&) = &VkSparseImageMemoryRequirements::operator=;
extern "C" { void AcidSharp_symbols352(VkSparseImageMemoryRequirements* instance) { instance->~VkSparseImageMemoryRequirements(); } }
extern "C" { void AcidSharp_symbols353(void* instance) { new (instance) VkSparseMemoryBind(); } }
extern "C" { void AcidSharp_symbols354(void* instance, const VkSparseMemoryBind& _0) { new (instance) VkSparseMemoryBind(_0); } }
VkSparseMemoryBind& (VkSparseMemoryBind::*AcidSharp_symbols355)(const VkSparseMemoryBind&) = &VkSparseMemoryBind::operator=;
VkSparseMemoryBind& (VkSparseMemoryBind::*AcidSharp_symbols356)(VkSparseMemoryBind&&) = &VkSparseMemoryBind::operator=;
extern "C" { void AcidSharp_symbols357(VkSparseMemoryBind* instance) { instance->~VkSparseMemoryBind(); } }
extern "C" { void AcidSharp_symbols358(void* instance) { new (instance) VkSparseBufferMemoryBindInfo(); } }
extern "C" { void AcidSharp_symbols359(void* instance, const VkSparseBufferMemoryBindInfo& _0) { new (instance) VkSparseBufferMemoryBindInfo(_0); } }
VkSparseBufferMemoryBindInfo& (VkSparseBufferMemoryBindInfo::*AcidSharp_symbols360)(const VkSparseBufferMemoryBindInfo&) = &VkSparseBufferMemoryBindInfo::operator=;
VkSparseBufferMemoryBindInfo& (VkSparseBufferMemoryBindInfo::*AcidSharp_symbols361)(VkSparseBufferMemoryBindInfo&&) = &VkSparseBufferMemoryBindInfo::operator=;
extern "C" { void AcidSharp_symbols362(VkSparseBufferMemoryBindInfo* instance) { instance->~VkSparseBufferMemoryBindInfo(); } }
extern "C" { void AcidSharp_symbols363(void* instance) { new (instance) VkSparseImageOpaqueMemoryBindInfo(); } }
extern "C" { void AcidSharp_symbols364(void* instance, const VkSparseImageOpaqueMemoryBindInfo& _0) { new (instance) VkSparseImageOpaqueMemoryBindInfo(_0); } }
VkSparseImageOpaqueMemoryBindInfo& (VkSparseImageOpaqueMemoryBindInfo::*AcidSharp_symbols365)(const VkSparseImageOpaqueMemoryBindInfo&) = &VkSparseImageOpaqueMemoryBindInfo::operator=;
VkSparseImageOpaqueMemoryBindInfo& (VkSparseImageOpaqueMemoryBindInfo::*AcidSharp_symbols366)(VkSparseImageOpaqueMemoryBindInfo&&) = &VkSparseImageOpaqueMemoryBindInfo::operator=;
extern "C" { void AcidSharp_symbols367(VkSparseImageOpaqueMemoryBindInfo* instance) { instance->~VkSparseImageOpaqueMemoryBindInfo(); } }
extern "C" { void AcidSharp_symbols368(void* instance) { new (instance) VkImageSubresource(); } }
extern "C" { void AcidSharp_symbols369(void* instance, const VkImageSubresource& _0) { new (instance) VkImageSubresource(_0); } }
VkImageSubresource& (VkImageSubresource::*AcidSharp_symbols370)(const VkImageSubresource&) = &VkImageSubresource::operator=;
VkImageSubresource& (VkImageSubresource::*AcidSharp_symbols371)(VkImageSubresource&&) = &VkImageSubresource::operator=;
extern "C" { void AcidSharp_symbols372(VkImageSubresource* instance) { instance->~VkImageSubresource(); } }
extern "C" { void AcidSharp_symbols373(void* instance) { new (instance) VkOffset3D(); } }
extern "C" { void AcidSharp_symbols374(void* instance, const VkOffset3D& _0) { new (instance) VkOffset3D(_0); } }
VkOffset3D& (VkOffset3D::*AcidSharp_symbols375)(const VkOffset3D&) = &VkOffset3D::operator=;
VkOffset3D& (VkOffset3D::*AcidSharp_symbols376)(VkOffset3D&&) = &VkOffset3D::operator=;
extern "C" { void AcidSharp_symbols377(VkOffset3D* instance) { instance->~VkOffset3D(); } }
extern "C" { void AcidSharp_symbols378(void* instance) { new (instance) VkSparseImageMemoryBind(); } }
extern "C" { void AcidSharp_symbols379(void* instance, const VkSparseImageMemoryBind& _0) { new (instance) VkSparseImageMemoryBind(_0); } }
VkSparseImageMemoryBind& (VkSparseImageMemoryBind::*AcidSharp_symbols380)(const VkSparseImageMemoryBind&) = &VkSparseImageMemoryBind::operator=;
VkSparseImageMemoryBind& (VkSparseImageMemoryBind::*AcidSharp_symbols381)(VkSparseImageMemoryBind&&) = &VkSparseImageMemoryBind::operator=;
extern "C" { void AcidSharp_symbols382(VkSparseImageMemoryBind* instance) { instance->~VkSparseImageMemoryBind(); } }
extern "C" { void AcidSharp_symbols383(void* instance) { new (instance) VkSparseImageMemoryBindInfo(); } }
extern "C" { void AcidSharp_symbols384(void* instance, const VkSparseImageMemoryBindInfo& _0) { new (instance) VkSparseImageMemoryBindInfo(_0); } }
VkSparseImageMemoryBindInfo& (VkSparseImageMemoryBindInfo::*AcidSharp_symbols385)(const VkSparseImageMemoryBindInfo&) = &VkSparseImageMemoryBindInfo::operator=;
VkSparseImageMemoryBindInfo& (VkSparseImageMemoryBindInfo::*AcidSharp_symbols386)(VkSparseImageMemoryBindInfo&&) = &VkSparseImageMemoryBindInfo::operator=;
extern "C" { void AcidSharp_symbols387(VkSparseImageMemoryBindInfo* instance) { instance->~VkSparseImageMemoryBindInfo(); } }
extern "C" { void AcidSharp_symbols388(void* instance) { new (instance) VkBindSparseInfo(); } }
extern "C" { void AcidSharp_symbols389(void* instance, const VkBindSparseInfo& _0) { new (instance) VkBindSparseInfo(_0); } }
VkBindSparseInfo& (VkBindSparseInfo::*AcidSharp_symbols390)(const VkBindSparseInfo&) = &VkBindSparseInfo::operator=;
VkBindSparseInfo& (VkBindSparseInfo::*AcidSharp_symbols391)(VkBindSparseInfo&&) = &VkBindSparseInfo::operator=;
extern "C" { void AcidSharp_symbols392(VkBindSparseInfo* instance) { instance->~VkBindSparseInfo(); } }
extern "C" { void AcidSharp_symbols393(void* instance) { new (instance) VkFenceCreateInfo(); } }
extern "C" { void AcidSharp_symbols394(void* instance, const VkFenceCreateInfo& _0) { new (instance) VkFenceCreateInfo(_0); } }
VkFenceCreateInfo& (VkFenceCreateInfo::*AcidSharp_symbols395)(const VkFenceCreateInfo&) = &VkFenceCreateInfo::operator=;
VkFenceCreateInfo& (VkFenceCreateInfo::*AcidSharp_symbols396)(VkFenceCreateInfo&&) = &VkFenceCreateInfo::operator=;
extern "C" { void AcidSharp_symbols397(VkFenceCreateInfo* instance) { instance->~VkFenceCreateInfo(); } }
extern "C" { void AcidSharp_symbols398(void* instance) { new (instance) VkSemaphoreCreateInfo(); } }
extern "C" { void AcidSharp_symbols399(void* instance, const VkSemaphoreCreateInfo& _0) { new (instance) VkSemaphoreCreateInfo(_0); } }
VkSemaphoreCreateInfo& (VkSemaphoreCreateInfo::*AcidSharp_symbols400)(const VkSemaphoreCreateInfo&) = &VkSemaphoreCreateInfo::operator=;
VkSemaphoreCreateInfo& (VkSemaphoreCreateInfo::*AcidSharp_symbols401)(VkSemaphoreCreateInfo&&) = &VkSemaphoreCreateInfo::operator=;
extern "C" { void AcidSharp_symbols402(VkSemaphoreCreateInfo* instance) { instance->~VkSemaphoreCreateInfo(); } }
extern "C" { void AcidSharp_symbols403(void* instance) { new (instance) VkEventCreateInfo(); } }
extern "C" { void AcidSharp_symbols404(void* instance, const VkEventCreateInfo& _0) { new (instance) VkEventCreateInfo(_0); } }
VkEventCreateInfo& (VkEventCreateInfo::*AcidSharp_symbols405)(const VkEventCreateInfo&) = &VkEventCreateInfo::operator=;
VkEventCreateInfo& (VkEventCreateInfo::*AcidSharp_symbols406)(VkEventCreateInfo&&) = &VkEventCreateInfo::operator=;
extern "C" { void AcidSharp_symbols407(VkEventCreateInfo* instance) { instance->~VkEventCreateInfo(); } }
extern "C" { void AcidSharp_symbols408(void* instance) { new (instance) VkQueryPoolCreateInfo(); } }
extern "C" { void AcidSharp_symbols409(void* instance, const VkQueryPoolCreateInfo& _0) { new (instance) VkQueryPoolCreateInfo(_0); } }
VkQueryPoolCreateInfo& (VkQueryPoolCreateInfo::*AcidSharp_symbols410)(const VkQueryPoolCreateInfo&) = &VkQueryPoolCreateInfo::operator=;
VkQueryPoolCreateInfo& (VkQueryPoolCreateInfo::*AcidSharp_symbols411)(VkQueryPoolCreateInfo&&) = &VkQueryPoolCreateInfo::operator=;
extern "C" { void AcidSharp_symbols412(VkQueryPoolCreateInfo* instance) { instance->~VkQueryPoolCreateInfo(); } }
extern "C" { void AcidSharp_symbols413(void* instance) { new (instance) VkBufferCreateInfo(); } }
extern "C" { void AcidSharp_symbols414(void* instance, const VkBufferCreateInfo& _0) { new (instance) VkBufferCreateInfo(_0); } }
VkBufferCreateInfo& (VkBufferCreateInfo::*AcidSharp_symbols415)(const VkBufferCreateInfo&) = &VkBufferCreateInfo::operator=;
VkBufferCreateInfo& (VkBufferCreateInfo::*AcidSharp_symbols416)(VkBufferCreateInfo&&) = &VkBufferCreateInfo::operator=;
extern "C" { void AcidSharp_symbols417(VkBufferCreateInfo* instance) { instance->~VkBufferCreateInfo(); } }
extern "C" { void AcidSharp_symbols418(void* instance) { new (instance) VkBufferViewCreateInfo(); } }
extern "C" { void AcidSharp_symbols419(void* instance, const VkBufferViewCreateInfo& _0) { new (instance) VkBufferViewCreateInfo(_0); } }
VkBufferViewCreateInfo& (VkBufferViewCreateInfo::*AcidSharp_symbols420)(const VkBufferViewCreateInfo&) = &VkBufferViewCreateInfo::operator=;
VkBufferViewCreateInfo& (VkBufferViewCreateInfo::*AcidSharp_symbols421)(VkBufferViewCreateInfo&&) = &VkBufferViewCreateInfo::operator=;
extern "C" { void AcidSharp_symbols422(VkBufferViewCreateInfo* instance) { instance->~VkBufferViewCreateInfo(); } }
extern "C" { void AcidSharp_symbols423(void* instance) { new (instance) VkImageCreateInfo(); } }
extern "C" { void AcidSharp_symbols424(void* instance, const VkImageCreateInfo& _0) { new (instance) VkImageCreateInfo(_0); } }
VkImageCreateInfo& (VkImageCreateInfo::*AcidSharp_symbols425)(const VkImageCreateInfo&) = &VkImageCreateInfo::operator=;
VkImageCreateInfo& (VkImageCreateInfo::*AcidSharp_symbols426)(VkImageCreateInfo&&) = &VkImageCreateInfo::operator=;
extern "C" { void AcidSharp_symbols427(VkImageCreateInfo* instance) { instance->~VkImageCreateInfo(); } }
extern "C" { void AcidSharp_symbols428(void* instance) { new (instance) VkSubresourceLayout(); } }
extern "C" { void AcidSharp_symbols429(void* instance, const VkSubresourceLayout& _0) { new (instance) VkSubresourceLayout(_0); } }
VkSubresourceLayout& (VkSubresourceLayout::*AcidSharp_symbols430)(const VkSubresourceLayout&) = &VkSubresourceLayout::operator=;
VkSubresourceLayout& (VkSubresourceLayout::*AcidSharp_symbols431)(VkSubresourceLayout&&) = &VkSubresourceLayout::operator=;
extern "C" { void AcidSharp_symbols432(VkSubresourceLayout* instance) { instance->~VkSubresourceLayout(); } }
extern "C" { void AcidSharp_symbols433(void* instance) { new (instance) VkComponentMapping(); } }
extern "C" { void AcidSharp_symbols434(void* instance, const VkComponentMapping& _0) { new (instance) VkComponentMapping(_0); } }
VkComponentMapping& (VkComponentMapping::*AcidSharp_symbols435)(const VkComponentMapping&) = &VkComponentMapping::operator=;
VkComponentMapping& (VkComponentMapping::*AcidSharp_symbols436)(VkComponentMapping&&) = &VkComponentMapping::operator=;
extern "C" { void AcidSharp_symbols437(VkComponentMapping* instance) { instance->~VkComponentMapping(); } }
extern "C" { void AcidSharp_symbols438(void* instance) { new (instance) VkImageSubresourceRange(); } }
extern "C" { void AcidSharp_symbols439(void* instance, const VkImageSubresourceRange& _0) { new (instance) VkImageSubresourceRange(_0); } }
VkImageSubresourceRange& (VkImageSubresourceRange::*AcidSharp_symbols440)(const VkImageSubresourceRange&) = &VkImageSubresourceRange::operator=;
VkImageSubresourceRange& (VkImageSubresourceRange::*AcidSharp_symbols441)(VkImageSubresourceRange&&) = &VkImageSubresourceRange::operator=;
extern "C" { void AcidSharp_symbols442(VkImageSubresourceRange* instance) { instance->~VkImageSubresourceRange(); } }
extern "C" { void AcidSharp_symbols443(void* instance) { new (instance) VkImageViewCreateInfo(); } }
extern "C" { void AcidSharp_symbols444(void* instance, const VkImageViewCreateInfo& _0) { new (instance) VkImageViewCreateInfo(_0); } }
VkImageViewCreateInfo& (VkImageViewCreateInfo::*AcidSharp_symbols445)(const VkImageViewCreateInfo&) = &VkImageViewCreateInfo::operator=;
VkImageViewCreateInfo& (VkImageViewCreateInfo::*AcidSharp_symbols446)(VkImageViewCreateInfo&&) = &VkImageViewCreateInfo::operator=;
extern "C" { void AcidSharp_symbols447(VkImageViewCreateInfo* instance) { instance->~VkImageViewCreateInfo(); } }
extern "C" { void AcidSharp_symbols448(void* instance) { new (instance) VkShaderModuleCreateInfo(); } }
extern "C" { void AcidSharp_symbols449(void* instance, const VkShaderModuleCreateInfo& _0) { new (instance) VkShaderModuleCreateInfo(_0); } }
VkShaderModuleCreateInfo& (VkShaderModuleCreateInfo::*AcidSharp_symbols450)(const VkShaderModuleCreateInfo&) = &VkShaderModuleCreateInfo::operator=;
VkShaderModuleCreateInfo& (VkShaderModuleCreateInfo::*AcidSharp_symbols451)(VkShaderModuleCreateInfo&&) = &VkShaderModuleCreateInfo::operator=;
extern "C" { void AcidSharp_symbols452(VkShaderModuleCreateInfo* instance) { instance->~VkShaderModuleCreateInfo(); } }
extern "C" { void AcidSharp_symbols453(void* instance) { new (instance) VkPipelineCacheCreateInfo(); } }
extern "C" { void AcidSharp_symbols454(void* instance, const VkPipelineCacheCreateInfo& _0) { new (instance) VkPipelineCacheCreateInfo(_0); } }
VkPipelineCacheCreateInfo& (VkPipelineCacheCreateInfo::*AcidSharp_symbols455)(const VkPipelineCacheCreateInfo&) = &VkPipelineCacheCreateInfo::operator=;
VkPipelineCacheCreateInfo& (VkPipelineCacheCreateInfo::*AcidSharp_symbols456)(VkPipelineCacheCreateInfo&&) = &VkPipelineCacheCreateInfo::operator=;
extern "C" { void AcidSharp_symbols457(VkPipelineCacheCreateInfo* instance) { instance->~VkPipelineCacheCreateInfo(); } }
extern "C" { void AcidSharp_symbols458(void* instance) { new (instance) VkSpecializationMapEntry(); } }
extern "C" { void AcidSharp_symbols459(void* instance, const VkSpecializationMapEntry& _0) { new (instance) VkSpecializationMapEntry(_0); } }
VkSpecializationMapEntry& (VkSpecializationMapEntry::*AcidSharp_symbols460)(const VkSpecializationMapEntry&) = &VkSpecializationMapEntry::operator=;
VkSpecializationMapEntry& (VkSpecializationMapEntry::*AcidSharp_symbols461)(VkSpecializationMapEntry&&) = &VkSpecializationMapEntry::operator=;
extern "C" { void AcidSharp_symbols462(VkSpecializationMapEntry* instance) { instance->~VkSpecializationMapEntry(); } }
extern "C" { void AcidSharp_symbols463(void* instance) { new (instance) VkSpecializationInfo(); } }
extern "C" { void AcidSharp_symbols464(void* instance, const VkSpecializationInfo& _0) { new (instance) VkSpecializationInfo(_0); } }
VkSpecializationInfo& (VkSpecializationInfo::*AcidSharp_symbols465)(const VkSpecializationInfo&) = &VkSpecializationInfo::operator=;
VkSpecializationInfo& (VkSpecializationInfo::*AcidSharp_symbols466)(VkSpecializationInfo&&) = &VkSpecializationInfo::operator=;
extern "C" { void AcidSharp_symbols467(VkSpecializationInfo* instance) { instance->~VkSpecializationInfo(); } }
extern "C" { void AcidSharp_symbols468(void* instance) { new (instance) VkPipelineShaderStageCreateInfo(); } }
extern "C" { void AcidSharp_symbols469(void* instance, const VkPipelineShaderStageCreateInfo& _0) { new (instance) VkPipelineShaderStageCreateInfo(_0); } }
VkPipelineShaderStageCreateInfo& (VkPipelineShaderStageCreateInfo::*AcidSharp_symbols470)(const VkPipelineShaderStageCreateInfo&) = &VkPipelineShaderStageCreateInfo::operator=;
VkPipelineShaderStageCreateInfo& (VkPipelineShaderStageCreateInfo::*AcidSharp_symbols471)(VkPipelineShaderStageCreateInfo&&) = &VkPipelineShaderStageCreateInfo::operator=;
extern "C" { void AcidSharp_symbols472(VkPipelineShaderStageCreateInfo* instance) { instance->~VkPipelineShaderStageCreateInfo(); } }
VkVertexInputBindingDescription& (VkVertexInputBindingDescription::*AcidSharp_symbols473)(const VkVertexInputBindingDescription&) = &VkVertexInputBindingDescription::operator=;
VkVertexInputBindingDescription& (VkVertexInputBindingDescription::*AcidSharp_symbols474)(VkVertexInputBindingDescription&&) = &VkVertexInputBindingDescription::operator=;
extern "C" { void AcidSharp_symbols475(VkVertexInputBindingDescription* instance) { instance->~VkVertexInputBindingDescription(); } }
extern "C" { void AcidSharp_symbols476(void* instance) { new (instance) VkVertexInputBindingDescription(); } }
extern "C" { void AcidSharp_symbols477(void* instance, const VkVertexInputBindingDescription& _0) { new (instance) VkVertexInputBindingDescription(_0); } }
VkVertexInputAttributeDescription& (VkVertexInputAttributeDescription::*AcidSharp_symbols478)(const VkVertexInputAttributeDescription&) = &VkVertexInputAttributeDescription::operator=;
VkVertexInputAttributeDescription& (VkVertexInputAttributeDescription::*AcidSharp_symbols479)(VkVertexInputAttributeDescription&&) = &VkVertexInputAttributeDescription::operator=;
extern "C" { void AcidSharp_symbols480(VkVertexInputAttributeDescription* instance) { instance->~VkVertexInputAttributeDescription(); } }
extern "C" { void AcidSharp_symbols481(void* instance) { new (instance) VkVertexInputAttributeDescription(); } }
extern "C" { void AcidSharp_symbols482(void* instance, const VkVertexInputAttributeDescription& _0) { new (instance) VkVertexInputAttributeDescription(_0); } }
extern "C" { void AcidSharp_symbols483(void* instance) { new (instance) VkPipelineVertexInputStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols484(void* instance, const VkPipelineVertexInputStateCreateInfo& _0) { new (instance) VkPipelineVertexInputStateCreateInfo(_0); } }
VkPipelineVertexInputStateCreateInfo& (VkPipelineVertexInputStateCreateInfo::*AcidSharp_symbols485)(const VkPipelineVertexInputStateCreateInfo&) = &VkPipelineVertexInputStateCreateInfo::operator=;
VkPipelineVertexInputStateCreateInfo& (VkPipelineVertexInputStateCreateInfo::*AcidSharp_symbols486)(VkPipelineVertexInputStateCreateInfo&&) = &VkPipelineVertexInputStateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols487(VkPipelineVertexInputStateCreateInfo* instance) { instance->~VkPipelineVertexInputStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols488(void* instance) { new (instance) VkPipelineInputAssemblyStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols489(void* instance, const VkPipelineInputAssemblyStateCreateInfo& _0) { new (instance) VkPipelineInputAssemblyStateCreateInfo(_0); } }
VkPipelineInputAssemblyStateCreateInfo& (VkPipelineInputAssemblyStateCreateInfo::*AcidSharp_symbols490)(const VkPipelineInputAssemblyStateCreateInfo&) = &VkPipelineInputAssemblyStateCreateInfo::operator=;
VkPipelineInputAssemblyStateCreateInfo& (VkPipelineInputAssemblyStateCreateInfo::*AcidSharp_symbols491)(VkPipelineInputAssemblyStateCreateInfo&&) = &VkPipelineInputAssemblyStateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols492(VkPipelineInputAssemblyStateCreateInfo* instance) { instance->~VkPipelineInputAssemblyStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols493(void* instance) { new (instance) VkPipelineTessellationStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols494(void* instance, const VkPipelineTessellationStateCreateInfo& _0) { new (instance) VkPipelineTessellationStateCreateInfo(_0); } }
VkPipelineTessellationStateCreateInfo& (VkPipelineTessellationStateCreateInfo::*AcidSharp_symbols495)(const VkPipelineTessellationStateCreateInfo&) = &VkPipelineTessellationStateCreateInfo::operator=;
VkPipelineTessellationStateCreateInfo& (VkPipelineTessellationStateCreateInfo::*AcidSharp_symbols496)(VkPipelineTessellationStateCreateInfo&&) = &VkPipelineTessellationStateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols497(VkPipelineTessellationStateCreateInfo* instance) { instance->~VkPipelineTessellationStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols498(void* instance) { new (instance) VkViewport(); } }
extern "C" { void AcidSharp_symbols499(void* instance, const VkViewport& _0) { new (instance) VkViewport(_0); } }
VkViewport& (VkViewport::*AcidSharp_symbols500)(const VkViewport&) = &VkViewport::operator=;
VkViewport& (VkViewport::*AcidSharp_symbols501)(VkViewport&&) = &VkViewport::operator=;
extern "C" { void AcidSharp_symbols502(VkViewport* instance) { instance->~VkViewport(); } }
extern "C" { void AcidSharp_symbols503(void* instance) { new (instance) VkOffset2D(); } }
extern "C" { void AcidSharp_symbols504(void* instance, const VkOffset2D& _0) { new (instance) VkOffset2D(_0); } }
VkOffset2D& (VkOffset2D::*AcidSharp_symbols505)(const VkOffset2D&) = &VkOffset2D::operator=;
VkOffset2D& (VkOffset2D::*AcidSharp_symbols506)(VkOffset2D&&) = &VkOffset2D::operator=;
extern "C" { void AcidSharp_symbols507(VkOffset2D* instance) { instance->~VkOffset2D(); } }
extern "C" { void AcidSharp_symbols508(void* instance, const VkExtent2D& _0) { new (instance) VkExtent2D(_0); } }
extern "C" { void AcidSharp_symbols509(VkExtent2D* instance) { instance->~VkExtent2D(); } }
VkExtent2D& (VkExtent2D::*AcidSharp_symbols510)(const VkExtent2D&) = &VkExtent2D::operator=;
VkExtent2D& (VkExtent2D::*AcidSharp_symbols511)(VkExtent2D&&) = &VkExtent2D::operator=;
extern "C" { void AcidSharp_symbols512(void* instance) { new (instance) VkExtent2D(); } }
extern "C" { void AcidSharp_symbols513(void* instance) { new (instance) VkRect2D(); } }
extern "C" { void AcidSharp_symbols514(void* instance, const VkRect2D& _0) { new (instance) VkRect2D(_0); } }
VkRect2D& (VkRect2D::*AcidSharp_symbols515)(const VkRect2D&) = &VkRect2D::operator=;
VkRect2D& (VkRect2D::*AcidSharp_symbols516)(VkRect2D&&) = &VkRect2D::operator=;
extern "C" { void AcidSharp_symbols517(VkRect2D* instance) { instance->~VkRect2D(); } }
extern "C" { void AcidSharp_symbols518(void* instance) { new (instance) VkPipelineViewportStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols519(void* instance, const VkPipelineViewportStateCreateInfo& _0) { new (instance) VkPipelineViewportStateCreateInfo(_0); } }
VkPipelineViewportStateCreateInfo& (VkPipelineViewportStateCreateInfo::*AcidSharp_symbols520)(const VkPipelineViewportStateCreateInfo&) = &VkPipelineViewportStateCreateInfo::operator=;
VkPipelineViewportStateCreateInfo& (VkPipelineViewportStateCreateInfo::*AcidSharp_symbols521)(VkPipelineViewportStateCreateInfo&&) = &VkPipelineViewportStateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols522(VkPipelineViewportStateCreateInfo* instance) { instance->~VkPipelineViewportStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols523(void* instance) { new (instance) VkPipelineRasterizationStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols524(void* instance, const VkPipelineRasterizationStateCreateInfo& _0) { new (instance) VkPipelineRasterizationStateCreateInfo(_0); } }
VkPipelineRasterizationStateCreateInfo& (VkPipelineRasterizationStateCreateInfo::*AcidSharp_symbols525)(const VkPipelineRasterizationStateCreateInfo&) = &VkPipelineRasterizationStateCreateInfo::operator=;
VkPipelineRasterizationStateCreateInfo& (VkPipelineRasterizationStateCreateInfo::*AcidSharp_symbols526)(VkPipelineRasterizationStateCreateInfo&&) = &VkPipelineRasterizationStateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols527(VkPipelineRasterizationStateCreateInfo* instance) { instance->~VkPipelineRasterizationStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols528(void* instance) { new (instance) VkPipelineMultisampleStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols529(void* instance, const VkPipelineMultisampleStateCreateInfo& _0) { new (instance) VkPipelineMultisampleStateCreateInfo(_0); } }
VkPipelineMultisampleStateCreateInfo& (VkPipelineMultisampleStateCreateInfo::*AcidSharp_symbols530)(const VkPipelineMultisampleStateCreateInfo&) = &VkPipelineMultisampleStateCreateInfo::operator=;
VkPipelineMultisampleStateCreateInfo& (VkPipelineMultisampleStateCreateInfo::*AcidSharp_symbols531)(VkPipelineMultisampleStateCreateInfo&&) = &VkPipelineMultisampleStateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols532(VkPipelineMultisampleStateCreateInfo* instance) { instance->~VkPipelineMultisampleStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols533(void* instance) { new (instance) VkStencilOpState(); } }
extern "C" { void AcidSharp_symbols534(void* instance, const VkStencilOpState& _0) { new (instance) VkStencilOpState(_0); } }
VkStencilOpState& (VkStencilOpState::*AcidSharp_symbols535)(const VkStencilOpState&) = &VkStencilOpState::operator=;
VkStencilOpState& (VkStencilOpState::*AcidSharp_symbols536)(VkStencilOpState&&) = &VkStencilOpState::operator=;
extern "C" { void AcidSharp_symbols537(VkStencilOpState* instance) { instance->~VkStencilOpState(); } }
extern "C" { void AcidSharp_symbols538(void* instance) { new (instance) VkPipelineDepthStencilStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols539(void* instance, const VkPipelineDepthStencilStateCreateInfo& _0) { new (instance) VkPipelineDepthStencilStateCreateInfo(_0); } }
VkPipelineDepthStencilStateCreateInfo& (VkPipelineDepthStencilStateCreateInfo::*AcidSharp_symbols540)(const VkPipelineDepthStencilStateCreateInfo&) = &VkPipelineDepthStencilStateCreateInfo::operator=;
VkPipelineDepthStencilStateCreateInfo& (VkPipelineDepthStencilStateCreateInfo::*AcidSharp_symbols541)(VkPipelineDepthStencilStateCreateInfo&&) = &VkPipelineDepthStencilStateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols542(VkPipelineDepthStencilStateCreateInfo* instance) { instance->~VkPipelineDepthStencilStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols543(void* instance) { new (instance) VkPipelineColorBlendAttachmentState(); } }
extern "C" { void AcidSharp_symbols544(void* instance, const VkPipelineColorBlendAttachmentState& _0) { new (instance) VkPipelineColorBlendAttachmentState(_0); } }
VkPipelineColorBlendAttachmentState& (VkPipelineColorBlendAttachmentState::*AcidSharp_symbols545)(const VkPipelineColorBlendAttachmentState&) = &VkPipelineColorBlendAttachmentState::operator=;
VkPipelineColorBlendAttachmentState& (VkPipelineColorBlendAttachmentState::*AcidSharp_symbols546)(VkPipelineColorBlendAttachmentState&&) = &VkPipelineColorBlendAttachmentState::operator=;
extern "C" { void AcidSharp_symbols547(VkPipelineColorBlendAttachmentState* instance) { instance->~VkPipelineColorBlendAttachmentState(); } }
extern "C" { void AcidSharp_symbols548(void* instance) { new (instance) VkPipelineColorBlendStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols549(void* instance, const VkPipelineColorBlendStateCreateInfo& _0) { new (instance) VkPipelineColorBlendStateCreateInfo(_0); } }
VkPipelineColorBlendStateCreateInfo& (VkPipelineColorBlendStateCreateInfo::*AcidSharp_symbols550)(const VkPipelineColorBlendStateCreateInfo&) = &VkPipelineColorBlendStateCreateInfo::operator=;
VkPipelineColorBlendStateCreateInfo& (VkPipelineColorBlendStateCreateInfo::*AcidSharp_symbols551)(VkPipelineColorBlendStateCreateInfo&&) = &VkPipelineColorBlendStateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols552(VkPipelineColorBlendStateCreateInfo* instance) { instance->~VkPipelineColorBlendStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols553(void* instance) { new (instance) VkPipelineDynamicStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols554(void* instance, const VkPipelineDynamicStateCreateInfo& _0) { new (instance) VkPipelineDynamicStateCreateInfo(_0); } }
VkPipelineDynamicStateCreateInfo& (VkPipelineDynamicStateCreateInfo::*AcidSharp_symbols555)(const VkPipelineDynamicStateCreateInfo&) = &VkPipelineDynamicStateCreateInfo::operator=;
VkPipelineDynamicStateCreateInfo& (VkPipelineDynamicStateCreateInfo::*AcidSharp_symbols556)(VkPipelineDynamicStateCreateInfo&&) = &VkPipelineDynamicStateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols557(VkPipelineDynamicStateCreateInfo* instance) { instance->~VkPipelineDynamicStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols558(void* instance) { new (instance) VkGraphicsPipelineCreateInfo(); } }
extern "C" { void AcidSharp_symbols559(void* instance, const VkGraphicsPipelineCreateInfo& _0) { new (instance) VkGraphicsPipelineCreateInfo(_0); } }
VkGraphicsPipelineCreateInfo& (VkGraphicsPipelineCreateInfo::*AcidSharp_symbols560)(const VkGraphicsPipelineCreateInfo&) = &VkGraphicsPipelineCreateInfo::operator=;
VkGraphicsPipelineCreateInfo& (VkGraphicsPipelineCreateInfo::*AcidSharp_symbols561)(VkGraphicsPipelineCreateInfo&&) = &VkGraphicsPipelineCreateInfo::operator=;
extern "C" { void AcidSharp_symbols562(VkGraphicsPipelineCreateInfo* instance) { instance->~VkGraphicsPipelineCreateInfo(); } }
extern "C" { void AcidSharp_symbols563(void* instance) { new (instance) VkComputePipelineCreateInfo(); } }
extern "C" { void AcidSharp_symbols564(void* instance, const VkComputePipelineCreateInfo& _0) { new (instance) VkComputePipelineCreateInfo(_0); } }
VkComputePipelineCreateInfo& (VkComputePipelineCreateInfo::*AcidSharp_symbols565)(const VkComputePipelineCreateInfo&) = &VkComputePipelineCreateInfo::operator=;
VkComputePipelineCreateInfo& (VkComputePipelineCreateInfo::*AcidSharp_symbols566)(VkComputePipelineCreateInfo&&) = &VkComputePipelineCreateInfo::operator=;
extern "C" { void AcidSharp_symbols567(VkComputePipelineCreateInfo* instance) { instance->~VkComputePipelineCreateInfo(); } }
extern "C" { void AcidSharp_symbols568(void* instance) { new (instance) VkPushConstantRange(); } }
extern "C" { void AcidSharp_symbols569(void* instance, const VkPushConstantRange& _0) { new (instance) VkPushConstantRange(_0); } }
VkPushConstantRange& (VkPushConstantRange::*AcidSharp_symbols570)(const VkPushConstantRange&) = &VkPushConstantRange::operator=;
VkPushConstantRange& (VkPushConstantRange::*AcidSharp_symbols571)(VkPushConstantRange&&) = &VkPushConstantRange::operator=;
extern "C" { void AcidSharp_symbols572(VkPushConstantRange* instance) { instance->~VkPushConstantRange(); } }
extern "C" { void AcidSharp_symbols573(void* instance) { new (instance) VkPipelineLayoutCreateInfo(); } }
extern "C" { void AcidSharp_symbols574(void* instance, const VkPipelineLayoutCreateInfo& _0) { new (instance) VkPipelineLayoutCreateInfo(_0); } }
VkPipelineLayoutCreateInfo& (VkPipelineLayoutCreateInfo::*AcidSharp_symbols575)(const VkPipelineLayoutCreateInfo&) = &VkPipelineLayoutCreateInfo::operator=;
VkPipelineLayoutCreateInfo& (VkPipelineLayoutCreateInfo::*AcidSharp_symbols576)(VkPipelineLayoutCreateInfo&&) = &VkPipelineLayoutCreateInfo::operator=;
extern "C" { void AcidSharp_symbols577(VkPipelineLayoutCreateInfo* instance) { instance->~VkPipelineLayoutCreateInfo(); } }
extern "C" { void AcidSharp_symbols578(void* instance) { new (instance) VkSamplerCreateInfo(); } }
extern "C" { void AcidSharp_symbols579(void* instance, const VkSamplerCreateInfo& _0) { new (instance) VkSamplerCreateInfo(_0); } }
VkSamplerCreateInfo& (VkSamplerCreateInfo::*AcidSharp_symbols580)(const VkSamplerCreateInfo&) = &VkSamplerCreateInfo::operator=;
VkSamplerCreateInfo& (VkSamplerCreateInfo::*AcidSharp_symbols581)(VkSamplerCreateInfo&&) = &VkSamplerCreateInfo::operator=;
extern "C" { void AcidSharp_symbols582(VkSamplerCreateInfo* instance) { instance->~VkSamplerCreateInfo(); } }
extern "C" { void AcidSharp_symbols583(void* instance) { new (instance) VkDescriptorSetLayoutBinding(); } }
extern "C" { void AcidSharp_symbols584(void* instance, const VkDescriptorSetLayoutBinding& _0) { new (instance) VkDescriptorSetLayoutBinding(_0); } }
VkDescriptorSetLayoutBinding& (VkDescriptorSetLayoutBinding::*AcidSharp_symbols585)(const VkDescriptorSetLayoutBinding&) = &VkDescriptorSetLayoutBinding::operator=;
VkDescriptorSetLayoutBinding& (VkDescriptorSetLayoutBinding::*AcidSharp_symbols586)(VkDescriptorSetLayoutBinding&&) = &VkDescriptorSetLayoutBinding::operator=;
extern "C" { void AcidSharp_symbols587(VkDescriptorSetLayoutBinding* instance) { instance->~VkDescriptorSetLayoutBinding(); } }
extern "C" { void AcidSharp_symbols588(void* instance) { new (instance) VkDescriptorSetLayoutCreateInfo(); } }
extern "C" { void AcidSharp_symbols589(void* instance, const VkDescriptorSetLayoutCreateInfo& _0) { new (instance) VkDescriptorSetLayoutCreateInfo(_0); } }
VkDescriptorSetLayoutCreateInfo& (VkDescriptorSetLayoutCreateInfo::*AcidSharp_symbols590)(const VkDescriptorSetLayoutCreateInfo&) = &VkDescriptorSetLayoutCreateInfo::operator=;
VkDescriptorSetLayoutCreateInfo& (VkDescriptorSetLayoutCreateInfo::*AcidSharp_symbols591)(VkDescriptorSetLayoutCreateInfo&&) = &VkDescriptorSetLayoutCreateInfo::operator=;
extern "C" { void AcidSharp_symbols592(VkDescriptorSetLayoutCreateInfo* instance) { instance->~VkDescriptorSetLayoutCreateInfo(); } }
extern "C" { void AcidSharp_symbols593(void* instance) { new (instance) VkDescriptorPoolSize(); } }
extern "C" { void AcidSharp_symbols594(void* instance, const VkDescriptorPoolSize& _0) { new (instance) VkDescriptorPoolSize(_0); } }
VkDescriptorPoolSize& (VkDescriptorPoolSize::*AcidSharp_symbols595)(const VkDescriptorPoolSize&) = &VkDescriptorPoolSize::operator=;
VkDescriptorPoolSize& (VkDescriptorPoolSize::*AcidSharp_symbols596)(VkDescriptorPoolSize&&) = &VkDescriptorPoolSize::operator=;
extern "C" { void AcidSharp_symbols597(VkDescriptorPoolSize* instance) { instance->~VkDescriptorPoolSize(); } }
extern "C" { void AcidSharp_symbols598(void* instance) { new (instance) VkDescriptorPoolCreateInfo(); } }
extern "C" { void AcidSharp_symbols599(void* instance, const VkDescriptorPoolCreateInfo& _0) { new (instance) VkDescriptorPoolCreateInfo(_0); } }
VkDescriptorPoolCreateInfo& (VkDescriptorPoolCreateInfo::*AcidSharp_symbols600)(const VkDescriptorPoolCreateInfo&) = &VkDescriptorPoolCreateInfo::operator=;
VkDescriptorPoolCreateInfo& (VkDescriptorPoolCreateInfo::*AcidSharp_symbols601)(VkDescriptorPoolCreateInfo&&) = &VkDescriptorPoolCreateInfo::operator=;
extern "C" { void AcidSharp_symbols602(VkDescriptorPoolCreateInfo* instance) { instance->~VkDescriptorPoolCreateInfo(); } }
extern "C" { void AcidSharp_symbols603(void* instance) { new (instance) VkDescriptorSetAllocateInfo(); } }
extern "C" { void AcidSharp_symbols604(void* instance, const VkDescriptorSetAllocateInfo& _0) { new (instance) VkDescriptorSetAllocateInfo(_0); } }
VkDescriptorSetAllocateInfo& (VkDescriptorSetAllocateInfo::*AcidSharp_symbols605)(const VkDescriptorSetAllocateInfo&) = &VkDescriptorSetAllocateInfo::operator=;
VkDescriptorSetAllocateInfo& (VkDescriptorSetAllocateInfo::*AcidSharp_symbols606)(VkDescriptorSetAllocateInfo&&) = &VkDescriptorSetAllocateInfo::operator=;
extern "C" { void AcidSharp_symbols607(VkDescriptorSetAllocateInfo* instance) { instance->~VkDescriptorSetAllocateInfo(); } }
extern "C" { void AcidSharp_symbols608(void* instance, const VkDescriptorImageInfo& _0) { new (instance) VkDescriptorImageInfo(_0); } }
extern "C" { void AcidSharp_symbols609(VkDescriptorImageInfo* instance) { instance->~VkDescriptorImageInfo(); } }
VkDescriptorImageInfo& (VkDescriptorImageInfo::*AcidSharp_symbols610)(const VkDescriptorImageInfo&) = &VkDescriptorImageInfo::operator=;
VkDescriptorImageInfo& (VkDescriptorImageInfo::*AcidSharp_symbols611)(VkDescriptorImageInfo&&) = &VkDescriptorImageInfo::operator=;
extern "C" { void AcidSharp_symbols612(void* instance) { new (instance) VkDescriptorImageInfo(); } }
extern "C" { void AcidSharp_symbols613(void* instance) { new (instance) VkDescriptorBufferInfo(); } }
extern "C" { void AcidSharp_symbols614(void* instance, const VkDescriptorBufferInfo& _0) { new (instance) VkDescriptorBufferInfo(_0); } }
VkDescriptorBufferInfo& (VkDescriptorBufferInfo::*AcidSharp_symbols615)(const VkDescriptorBufferInfo&) = &VkDescriptorBufferInfo::operator=;
VkDescriptorBufferInfo& (VkDescriptorBufferInfo::*AcidSharp_symbols616)(VkDescriptorBufferInfo&&) = &VkDescriptorBufferInfo::operator=;
extern "C" { void AcidSharp_symbols617(VkDescriptorBufferInfo* instance) { instance->~VkDescriptorBufferInfo(); } }
extern "C" { void AcidSharp_symbols618(void* instance) { new (instance) VkWriteDescriptorSet(); } }
extern "C" { void AcidSharp_symbols619(void* instance, const VkWriteDescriptorSet& _0) { new (instance) VkWriteDescriptorSet(_0); } }
VkWriteDescriptorSet& (VkWriteDescriptorSet::*AcidSharp_symbols620)(const VkWriteDescriptorSet&) = &VkWriteDescriptorSet::operator=;
VkWriteDescriptorSet& (VkWriteDescriptorSet::*AcidSharp_symbols621)(VkWriteDescriptorSet&&) = &VkWriteDescriptorSet::operator=;
extern "C" { void AcidSharp_symbols622(VkWriteDescriptorSet* instance) { instance->~VkWriteDescriptorSet(); } }
extern "C" { void AcidSharp_symbols623(void* instance) { new (instance) VkCopyDescriptorSet(); } }
extern "C" { void AcidSharp_symbols624(void* instance, const VkCopyDescriptorSet& _0) { new (instance) VkCopyDescriptorSet(_0); } }
VkCopyDescriptorSet& (VkCopyDescriptorSet::*AcidSharp_symbols625)(const VkCopyDescriptorSet&) = &VkCopyDescriptorSet::operator=;
VkCopyDescriptorSet& (VkCopyDescriptorSet::*AcidSharp_symbols626)(VkCopyDescriptorSet&&) = &VkCopyDescriptorSet::operator=;
extern "C" { void AcidSharp_symbols627(VkCopyDescriptorSet* instance) { instance->~VkCopyDescriptorSet(); } }
extern "C" { void AcidSharp_symbols628(void* instance) { new (instance) VkFramebufferCreateInfo(); } }
extern "C" { void AcidSharp_symbols629(void* instance, const VkFramebufferCreateInfo& _0) { new (instance) VkFramebufferCreateInfo(_0); } }
VkFramebufferCreateInfo& (VkFramebufferCreateInfo::*AcidSharp_symbols630)(const VkFramebufferCreateInfo&) = &VkFramebufferCreateInfo::operator=;
VkFramebufferCreateInfo& (VkFramebufferCreateInfo::*AcidSharp_symbols631)(VkFramebufferCreateInfo&&) = &VkFramebufferCreateInfo::operator=;
extern "C" { void AcidSharp_symbols632(VkFramebufferCreateInfo* instance) { instance->~VkFramebufferCreateInfo(); } }
extern "C" { void AcidSharp_symbols633(void* instance) { new (instance) VkAttachmentDescription(); } }
extern "C" { void AcidSharp_symbols634(void* instance, const VkAttachmentDescription& _0) { new (instance) VkAttachmentDescription(_0); } }
VkAttachmentDescription& (VkAttachmentDescription::*AcidSharp_symbols635)(const VkAttachmentDescription&) = &VkAttachmentDescription::operator=;
VkAttachmentDescription& (VkAttachmentDescription::*AcidSharp_symbols636)(VkAttachmentDescription&&) = &VkAttachmentDescription::operator=;
extern "C" { void AcidSharp_symbols637(VkAttachmentDescription* instance) { instance->~VkAttachmentDescription(); } }
extern "C" { void AcidSharp_symbols638(void* instance) { new (instance) VkAttachmentReference(); } }
extern "C" { void AcidSharp_symbols639(void* instance, const VkAttachmentReference& _0) { new (instance) VkAttachmentReference(_0); } }
VkAttachmentReference& (VkAttachmentReference::*AcidSharp_symbols640)(const VkAttachmentReference&) = &VkAttachmentReference::operator=;
VkAttachmentReference& (VkAttachmentReference::*AcidSharp_symbols641)(VkAttachmentReference&&) = &VkAttachmentReference::operator=;
extern "C" { void AcidSharp_symbols642(VkAttachmentReference* instance) { instance->~VkAttachmentReference(); } }
extern "C" { void AcidSharp_symbols643(void* instance) { new (instance) VkSubpassDescription(); } }
extern "C" { void AcidSharp_symbols644(void* instance, const VkSubpassDescription& _0) { new (instance) VkSubpassDescription(_0); } }
VkSubpassDescription& (VkSubpassDescription::*AcidSharp_symbols645)(const VkSubpassDescription&) = &VkSubpassDescription::operator=;
VkSubpassDescription& (VkSubpassDescription::*AcidSharp_symbols646)(VkSubpassDescription&&) = &VkSubpassDescription::operator=;
extern "C" { void AcidSharp_symbols647(VkSubpassDescription* instance) { instance->~VkSubpassDescription(); } }
extern "C" { void AcidSharp_symbols648(void* instance) { new (instance) VkSubpassDependency(); } }
extern "C" { void AcidSharp_symbols649(void* instance, const VkSubpassDependency& _0) { new (instance) VkSubpassDependency(_0); } }
VkSubpassDependency& (VkSubpassDependency::*AcidSharp_symbols650)(const VkSubpassDependency&) = &VkSubpassDependency::operator=;
VkSubpassDependency& (VkSubpassDependency::*AcidSharp_symbols651)(VkSubpassDependency&&) = &VkSubpassDependency::operator=;
extern "C" { void AcidSharp_symbols652(VkSubpassDependency* instance) { instance->~VkSubpassDependency(); } }
extern "C" { void AcidSharp_symbols653(void* instance) { new (instance) VkRenderPassCreateInfo(); } }
extern "C" { void AcidSharp_symbols654(void* instance, const VkRenderPassCreateInfo& _0) { new (instance) VkRenderPassCreateInfo(_0); } }
VkRenderPassCreateInfo& (VkRenderPassCreateInfo::*AcidSharp_symbols655)(const VkRenderPassCreateInfo&) = &VkRenderPassCreateInfo::operator=;
VkRenderPassCreateInfo& (VkRenderPassCreateInfo::*AcidSharp_symbols656)(VkRenderPassCreateInfo&&) = &VkRenderPassCreateInfo::operator=;
extern "C" { void AcidSharp_symbols657(VkRenderPassCreateInfo* instance) { instance->~VkRenderPassCreateInfo(); } }
extern "C" { void AcidSharp_symbols658(void* instance) { new (instance) VkCommandPoolCreateInfo(); } }
extern "C" { void AcidSharp_symbols659(void* instance, const VkCommandPoolCreateInfo& _0) { new (instance) VkCommandPoolCreateInfo(_0); } }
VkCommandPoolCreateInfo& (VkCommandPoolCreateInfo::*AcidSharp_symbols660)(const VkCommandPoolCreateInfo&) = &VkCommandPoolCreateInfo::operator=;
VkCommandPoolCreateInfo& (VkCommandPoolCreateInfo::*AcidSharp_symbols661)(VkCommandPoolCreateInfo&&) = &VkCommandPoolCreateInfo::operator=;
extern "C" { void AcidSharp_symbols662(VkCommandPoolCreateInfo* instance) { instance->~VkCommandPoolCreateInfo(); } }
extern "C" { void AcidSharp_symbols663(void* instance) { new (instance) VkCommandBufferAllocateInfo(); } }
extern "C" { void AcidSharp_symbols664(void* instance, const VkCommandBufferAllocateInfo& _0) { new (instance) VkCommandBufferAllocateInfo(_0); } }
VkCommandBufferAllocateInfo& (VkCommandBufferAllocateInfo::*AcidSharp_symbols665)(const VkCommandBufferAllocateInfo&) = &VkCommandBufferAllocateInfo::operator=;
VkCommandBufferAllocateInfo& (VkCommandBufferAllocateInfo::*AcidSharp_symbols666)(VkCommandBufferAllocateInfo&&) = &VkCommandBufferAllocateInfo::operator=;
extern "C" { void AcidSharp_symbols667(VkCommandBufferAllocateInfo* instance) { instance->~VkCommandBufferAllocateInfo(); } }
extern "C" { void AcidSharp_symbols668(void* instance) { new (instance) VkCommandBufferInheritanceInfo(); } }
extern "C" { void AcidSharp_symbols669(void* instance, const VkCommandBufferInheritanceInfo& _0) { new (instance) VkCommandBufferInheritanceInfo(_0); } }
VkCommandBufferInheritanceInfo& (VkCommandBufferInheritanceInfo::*AcidSharp_symbols670)(const VkCommandBufferInheritanceInfo&) = &VkCommandBufferInheritanceInfo::operator=;
VkCommandBufferInheritanceInfo& (VkCommandBufferInheritanceInfo::*AcidSharp_symbols671)(VkCommandBufferInheritanceInfo&&) = &VkCommandBufferInheritanceInfo::operator=;
extern "C" { void AcidSharp_symbols672(VkCommandBufferInheritanceInfo* instance) { instance->~VkCommandBufferInheritanceInfo(); } }
extern "C" { void AcidSharp_symbols673(void* instance) { new (instance) VkCommandBufferBeginInfo(); } }
extern "C" { void AcidSharp_symbols674(void* instance, const VkCommandBufferBeginInfo& _0) { new (instance) VkCommandBufferBeginInfo(_0); } }
VkCommandBufferBeginInfo& (VkCommandBufferBeginInfo::*AcidSharp_symbols675)(const VkCommandBufferBeginInfo&) = &VkCommandBufferBeginInfo::operator=;
VkCommandBufferBeginInfo& (VkCommandBufferBeginInfo::*AcidSharp_symbols676)(VkCommandBufferBeginInfo&&) = &VkCommandBufferBeginInfo::operator=;
extern "C" { void AcidSharp_symbols677(VkCommandBufferBeginInfo* instance) { instance->~VkCommandBufferBeginInfo(); } }
extern "C" { void AcidSharp_symbols678(void* instance) { new (instance) VkBufferCopy(); } }
extern "C" { void AcidSharp_symbols679(void* instance, const VkBufferCopy& _0) { new (instance) VkBufferCopy(_0); } }
VkBufferCopy& (VkBufferCopy::*AcidSharp_symbols680)(const VkBufferCopy&) = &VkBufferCopy::operator=;
VkBufferCopy& (VkBufferCopy::*AcidSharp_symbols681)(VkBufferCopy&&) = &VkBufferCopy::operator=;
extern "C" { void AcidSharp_symbols682(VkBufferCopy* instance) { instance->~VkBufferCopy(); } }
extern "C" { void AcidSharp_symbols683(void* instance) { new (instance) VkImageSubresourceLayers(); } }
extern "C" { void AcidSharp_symbols684(void* instance, const VkImageSubresourceLayers& _0) { new (instance) VkImageSubresourceLayers(_0); } }
VkImageSubresourceLayers& (VkImageSubresourceLayers::*AcidSharp_symbols685)(const VkImageSubresourceLayers&) = &VkImageSubresourceLayers::operator=;
VkImageSubresourceLayers& (VkImageSubresourceLayers::*AcidSharp_symbols686)(VkImageSubresourceLayers&&) = &VkImageSubresourceLayers::operator=;
extern "C" { void AcidSharp_symbols687(VkImageSubresourceLayers* instance) { instance->~VkImageSubresourceLayers(); } }
extern "C" { void AcidSharp_symbols688(void* instance) { new (instance) VkImageCopy(); } }
extern "C" { void AcidSharp_symbols689(void* instance, const VkImageCopy& _0) { new (instance) VkImageCopy(_0); } }
VkImageCopy& (VkImageCopy::*AcidSharp_symbols690)(const VkImageCopy&) = &VkImageCopy::operator=;
VkImageCopy& (VkImageCopy::*AcidSharp_symbols691)(VkImageCopy&&) = &VkImageCopy::operator=;
extern "C" { void AcidSharp_symbols692(VkImageCopy* instance) { instance->~VkImageCopy(); } }
extern "C" { void AcidSharp_symbols693(void* instance) { new (instance) VkImageBlit(); } }
extern "C" { void AcidSharp_symbols694(void* instance, const VkImageBlit& _0) { new (instance) VkImageBlit(_0); } }
VkImageBlit& (VkImageBlit::*AcidSharp_symbols695)(const VkImageBlit&) = &VkImageBlit::operator=;
VkImageBlit& (VkImageBlit::*AcidSharp_symbols696)(VkImageBlit&&) = &VkImageBlit::operator=;
extern "C" { void AcidSharp_symbols697(VkImageBlit* instance) { instance->~VkImageBlit(); } }
extern "C" { void AcidSharp_symbols698(void* instance) { new (instance) VkBufferImageCopy(); } }
extern "C" { void AcidSharp_symbols699(void* instance, const VkBufferImageCopy& _0) { new (instance) VkBufferImageCopy(_0); } }
VkBufferImageCopy& (VkBufferImageCopy::*AcidSharp_symbols700)(const VkBufferImageCopy&) = &VkBufferImageCopy::operator=;
VkBufferImageCopy& (VkBufferImageCopy::*AcidSharp_symbols701)(VkBufferImageCopy&&) = &VkBufferImageCopy::operator=;
extern "C" { void AcidSharp_symbols702(VkBufferImageCopy* instance) { instance->~VkBufferImageCopy(); } }
extern "C" { void AcidSharp_symbols703(void* instance) { new (instance) VkClearColorValue(); } }
extern "C" { void AcidSharp_symbols704(void* instance, const VkClearColorValue& _0) { new (instance) VkClearColorValue(_0); } }
VkClearColorValue& (VkClearColorValue::*AcidSharp_symbols705)(const VkClearColorValue&) = &VkClearColorValue::operator=;
VkClearColorValue& (VkClearColorValue::*AcidSharp_symbols706)(VkClearColorValue&&) = &VkClearColorValue::operator=;
extern "C" { void AcidSharp_symbols707(VkClearColorValue* instance) { instance->~VkClearColorValue(); } }
extern "C" { void AcidSharp_symbols708(void* instance) { new (instance) VkClearDepthStencilValue(); } }
extern "C" { void AcidSharp_symbols709(void* instance, const VkClearDepthStencilValue& _0) { new (instance) VkClearDepthStencilValue(_0); } }
VkClearDepthStencilValue& (VkClearDepthStencilValue::*AcidSharp_symbols710)(const VkClearDepthStencilValue&) = &VkClearDepthStencilValue::operator=;
VkClearDepthStencilValue& (VkClearDepthStencilValue::*AcidSharp_symbols711)(VkClearDepthStencilValue&&) = &VkClearDepthStencilValue::operator=;
extern "C" { void AcidSharp_symbols712(VkClearDepthStencilValue* instance) { instance->~VkClearDepthStencilValue(); } }
extern "C" { void AcidSharp_symbols713(void* instance) { new (instance) VkClearValue(); } }
extern "C" { void AcidSharp_symbols714(void* instance, const VkClearValue& _0) { new (instance) VkClearValue(_0); } }
VkClearValue& (VkClearValue::*AcidSharp_symbols715)(const VkClearValue&) = &VkClearValue::operator=;
VkClearValue& (VkClearValue::*AcidSharp_symbols716)(VkClearValue&&) = &VkClearValue::operator=;
extern "C" { void AcidSharp_symbols717(VkClearValue* instance) { instance->~VkClearValue(); } }
extern "C" { void AcidSharp_symbols718(void* instance) { new (instance) VkClearAttachment(); } }
extern "C" { void AcidSharp_symbols719(void* instance, const VkClearAttachment& _0) { new (instance) VkClearAttachment(_0); } }
VkClearAttachment& (VkClearAttachment::*AcidSharp_symbols720)(const VkClearAttachment&) = &VkClearAttachment::operator=;
VkClearAttachment& (VkClearAttachment::*AcidSharp_symbols721)(VkClearAttachment&&) = &VkClearAttachment::operator=;
extern "C" { void AcidSharp_symbols722(VkClearAttachment* instance) { instance->~VkClearAttachment(); } }
extern "C" { void AcidSharp_symbols723(void* instance) { new (instance) VkClearRect(); } }
extern "C" { void AcidSharp_symbols724(void* instance, const VkClearRect& _0) { new (instance) VkClearRect(_0); } }
VkClearRect& (VkClearRect::*AcidSharp_symbols725)(const VkClearRect&) = &VkClearRect::operator=;
VkClearRect& (VkClearRect::*AcidSharp_symbols726)(VkClearRect&&) = &VkClearRect::operator=;
extern "C" { void AcidSharp_symbols727(VkClearRect* instance) { instance->~VkClearRect(); } }
extern "C" { void AcidSharp_symbols728(void* instance) { new (instance) VkImageResolve(); } }
extern "C" { void AcidSharp_symbols729(void* instance, const VkImageResolve& _0) { new (instance) VkImageResolve(_0); } }
VkImageResolve& (VkImageResolve::*AcidSharp_symbols730)(const VkImageResolve&) = &VkImageResolve::operator=;
VkImageResolve& (VkImageResolve::*AcidSharp_symbols731)(VkImageResolve&&) = &VkImageResolve::operator=;
extern "C" { void AcidSharp_symbols732(VkImageResolve* instance) { instance->~VkImageResolve(); } }
extern "C" { void AcidSharp_symbols733(void* instance) { new (instance) VkMemoryBarrier(); } }
extern "C" { void AcidSharp_symbols734(void* instance, const VkMemoryBarrier& _0) { new (instance) VkMemoryBarrier(_0); } }
VkMemoryBarrier& (VkMemoryBarrier::*AcidSharp_symbols735)(const VkMemoryBarrier&) = &VkMemoryBarrier::operator=;
VkMemoryBarrier& (VkMemoryBarrier::*AcidSharp_symbols736)(VkMemoryBarrier&&) = &VkMemoryBarrier::operator=;
extern "C" { void AcidSharp_symbols737(VkMemoryBarrier* instance) { instance->~VkMemoryBarrier(); } }
extern "C" { void AcidSharp_symbols738(void* instance) { new (instance) VkBufferMemoryBarrier(); } }
extern "C" { void AcidSharp_symbols739(void* instance, const VkBufferMemoryBarrier& _0) { new (instance) VkBufferMemoryBarrier(_0); } }
VkBufferMemoryBarrier& (VkBufferMemoryBarrier::*AcidSharp_symbols740)(const VkBufferMemoryBarrier&) = &VkBufferMemoryBarrier::operator=;
VkBufferMemoryBarrier& (VkBufferMemoryBarrier::*AcidSharp_symbols741)(VkBufferMemoryBarrier&&) = &VkBufferMemoryBarrier::operator=;
extern "C" { void AcidSharp_symbols742(VkBufferMemoryBarrier* instance) { instance->~VkBufferMemoryBarrier(); } }
extern "C" { void AcidSharp_symbols743(void* instance) { new (instance) VkImageMemoryBarrier(); } }
extern "C" { void AcidSharp_symbols744(void* instance, const VkImageMemoryBarrier& _0) { new (instance) VkImageMemoryBarrier(_0); } }
VkImageMemoryBarrier& (VkImageMemoryBarrier::*AcidSharp_symbols745)(const VkImageMemoryBarrier&) = &VkImageMemoryBarrier::operator=;
VkImageMemoryBarrier& (VkImageMemoryBarrier::*AcidSharp_symbols746)(VkImageMemoryBarrier&&) = &VkImageMemoryBarrier::operator=;
extern "C" { void AcidSharp_symbols747(VkImageMemoryBarrier* instance) { instance->~VkImageMemoryBarrier(); } }
extern "C" { void AcidSharp_symbols748(void* instance) { new (instance) VkRenderPassBeginInfo(); } }
extern "C" { void AcidSharp_symbols749(void* instance, const VkRenderPassBeginInfo& _0) { new (instance) VkRenderPassBeginInfo(_0); } }
VkRenderPassBeginInfo& (VkRenderPassBeginInfo::*AcidSharp_symbols750)(const VkRenderPassBeginInfo&) = &VkRenderPassBeginInfo::operator=;
VkRenderPassBeginInfo& (VkRenderPassBeginInfo::*AcidSharp_symbols751)(VkRenderPassBeginInfo&&) = &VkRenderPassBeginInfo::operator=;
extern "C" { void AcidSharp_symbols752(VkRenderPassBeginInfo* instance) { instance->~VkRenderPassBeginInfo(); } }
extern "C" { void AcidSharp_symbols753(void* instance) { new (instance) VkDispatchIndirectCommand(); } }
extern "C" { void AcidSharp_symbols754(void* instance, const VkDispatchIndirectCommand& _0) { new (instance) VkDispatchIndirectCommand(_0); } }
VkDispatchIndirectCommand& (VkDispatchIndirectCommand::*AcidSharp_symbols755)(const VkDispatchIndirectCommand&) = &VkDispatchIndirectCommand::operator=;
VkDispatchIndirectCommand& (VkDispatchIndirectCommand::*AcidSharp_symbols756)(VkDispatchIndirectCommand&&) = &VkDispatchIndirectCommand::operator=;
extern "C" { void AcidSharp_symbols757(VkDispatchIndirectCommand* instance) { instance->~VkDispatchIndirectCommand(); } }
extern "C" { void AcidSharp_symbols758(void* instance) { new (instance) VkDrawIndexedIndirectCommand(); } }
extern "C" { void AcidSharp_symbols759(void* instance, const VkDrawIndexedIndirectCommand& _0) { new (instance) VkDrawIndexedIndirectCommand(_0); } }
VkDrawIndexedIndirectCommand& (VkDrawIndexedIndirectCommand::*AcidSharp_symbols760)(const VkDrawIndexedIndirectCommand&) = &VkDrawIndexedIndirectCommand::operator=;
VkDrawIndexedIndirectCommand& (VkDrawIndexedIndirectCommand::*AcidSharp_symbols761)(VkDrawIndexedIndirectCommand&&) = &VkDrawIndexedIndirectCommand::operator=;
extern "C" { void AcidSharp_symbols762(VkDrawIndexedIndirectCommand* instance) { instance->~VkDrawIndexedIndirectCommand(); } }
extern "C" { void AcidSharp_symbols763(void* instance) { new (instance) VkDrawIndirectCommand(); } }
extern "C" { void AcidSharp_symbols764(void* instance, const VkDrawIndirectCommand& _0) { new (instance) VkDrawIndirectCommand(_0); } }
VkDrawIndirectCommand& (VkDrawIndirectCommand::*AcidSharp_symbols765)(const VkDrawIndirectCommand&) = &VkDrawIndirectCommand::operator=;
VkDrawIndirectCommand& (VkDrawIndirectCommand::*AcidSharp_symbols766)(VkDrawIndirectCommand&&) = &VkDrawIndirectCommand::operator=;
extern "C" { void AcidSharp_symbols767(VkDrawIndirectCommand* instance) { instance->~VkDrawIndirectCommand(); } }
extern "C" { void AcidSharp_symbols768(void* instance) { new (instance) VkBaseOutStructure(); } }
extern "C" { void AcidSharp_symbols769(void* instance, const VkBaseOutStructure& _0) { new (instance) VkBaseOutStructure(_0); } }
VkBaseOutStructure& (VkBaseOutStructure::*AcidSharp_symbols770)(const VkBaseOutStructure&) = &VkBaseOutStructure::operator=;
VkBaseOutStructure& (VkBaseOutStructure::*AcidSharp_symbols771)(VkBaseOutStructure&&) = &VkBaseOutStructure::operator=;
extern "C" { void AcidSharp_symbols772(VkBaseOutStructure* instance) { instance->~VkBaseOutStructure(); } }
extern "C" { void AcidSharp_symbols773(void* instance) { new (instance) VkBaseInStructure(); } }
extern "C" { void AcidSharp_symbols774(void* instance, const VkBaseInStructure& _0) { new (instance) VkBaseInStructure(_0); } }
VkBaseInStructure& (VkBaseInStructure::*AcidSharp_symbols775)(const VkBaseInStructure&) = &VkBaseInStructure::operator=;
VkBaseInStructure& (VkBaseInStructure::*AcidSharp_symbols776)(VkBaseInStructure&&) = &VkBaseInStructure::operator=;
extern "C" { void AcidSharp_symbols777(VkBaseInStructure* instance) { instance->~VkBaseInStructure(); } }
extern "C" { void AcidSharp_symbols778(void* instance) { new (instance) VkPhysicalDeviceSubgroupProperties(); } }
extern "C" { void AcidSharp_symbols779(void* instance, const VkPhysicalDeviceSubgroupProperties& _0) { new (instance) VkPhysicalDeviceSubgroupProperties(_0); } }
VkPhysicalDeviceSubgroupProperties& (VkPhysicalDeviceSubgroupProperties::*AcidSharp_symbols780)(const VkPhysicalDeviceSubgroupProperties&) = &VkPhysicalDeviceSubgroupProperties::operator=;
VkPhysicalDeviceSubgroupProperties& (VkPhysicalDeviceSubgroupProperties::*AcidSharp_symbols781)(VkPhysicalDeviceSubgroupProperties&&) = &VkPhysicalDeviceSubgroupProperties::operator=;
extern "C" { void AcidSharp_symbols782(VkPhysicalDeviceSubgroupProperties* instance) { instance->~VkPhysicalDeviceSubgroupProperties(); } }
extern "C" { void AcidSharp_symbols783(void* instance) { new (instance) VkBindBufferMemoryInfo(); } }
extern "C" { void AcidSharp_symbols784(void* instance, const VkBindBufferMemoryInfo& _0) { new (instance) VkBindBufferMemoryInfo(_0); } }
VkBindBufferMemoryInfo& (VkBindBufferMemoryInfo::*AcidSharp_symbols785)(const VkBindBufferMemoryInfo&) = &VkBindBufferMemoryInfo::operator=;
VkBindBufferMemoryInfo& (VkBindBufferMemoryInfo::*AcidSharp_symbols786)(VkBindBufferMemoryInfo&&) = &VkBindBufferMemoryInfo::operator=;
extern "C" { void AcidSharp_symbols787(VkBindBufferMemoryInfo* instance) { instance->~VkBindBufferMemoryInfo(); } }
extern "C" { void AcidSharp_symbols788(void* instance) { new (instance) VkBindImageMemoryInfo(); } }
extern "C" { void AcidSharp_symbols789(void* instance, const VkBindImageMemoryInfo& _0) { new (instance) VkBindImageMemoryInfo(_0); } }
VkBindImageMemoryInfo& (VkBindImageMemoryInfo::*AcidSharp_symbols790)(const VkBindImageMemoryInfo&) = &VkBindImageMemoryInfo::operator=;
VkBindImageMemoryInfo& (VkBindImageMemoryInfo::*AcidSharp_symbols791)(VkBindImageMemoryInfo&&) = &VkBindImageMemoryInfo::operator=;
extern "C" { void AcidSharp_symbols792(VkBindImageMemoryInfo* instance) { instance->~VkBindImageMemoryInfo(); } }
extern "C" { void AcidSharp_symbols793(void* instance) { new (instance) VkPhysicalDevice16BitStorageFeatures(); } }
extern "C" { void AcidSharp_symbols794(void* instance, const VkPhysicalDevice16BitStorageFeatures& _0) { new (instance) VkPhysicalDevice16BitStorageFeatures(_0); } }
VkPhysicalDevice16BitStorageFeatures& (VkPhysicalDevice16BitStorageFeatures::*AcidSharp_symbols795)(const VkPhysicalDevice16BitStorageFeatures&) = &VkPhysicalDevice16BitStorageFeatures::operator=;
VkPhysicalDevice16BitStorageFeatures& (VkPhysicalDevice16BitStorageFeatures::*AcidSharp_symbols796)(VkPhysicalDevice16BitStorageFeatures&&) = &VkPhysicalDevice16BitStorageFeatures::operator=;
extern "C" { void AcidSharp_symbols797(VkPhysicalDevice16BitStorageFeatures* instance) { instance->~VkPhysicalDevice16BitStorageFeatures(); } }
extern "C" { void AcidSharp_symbols798(void* instance) { new (instance) VkMemoryDedicatedRequirements(); } }
extern "C" { void AcidSharp_symbols799(void* instance, const VkMemoryDedicatedRequirements& _0) { new (instance) VkMemoryDedicatedRequirements(_0); } }
VkMemoryDedicatedRequirements& (VkMemoryDedicatedRequirements::*AcidSharp_symbols800)(const VkMemoryDedicatedRequirements&) = &VkMemoryDedicatedRequirements::operator=;
VkMemoryDedicatedRequirements& (VkMemoryDedicatedRequirements::*AcidSharp_symbols801)(VkMemoryDedicatedRequirements&&) = &VkMemoryDedicatedRequirements::operator=;
extern "C" { void AcidSharp_symbols802(VkMemoryDedicatedRequirements* instance) { instance->~VkMemoryDedicatedRequirements(); } }
extern "C" { void AcidSharp_symbols803(void* instance) { new (instance) VkMemoryDedicatedAllocateInfo(); } }
extern "C" { void AcidSharp_symbols804(void* instance, const VkMemoryDedicatedAllocateInfo& _0) { new (instance) VkMemoryDedicatedAllocateInfo(_0); } }
VkMemoryDedicatedAllocateInfo& (VkMemoryDedicatedAllocateInfo::*AcidSharp_symbols805)(const VkMemoryDedicatedAllocateInfo&) = &VkMemoryDedicatedAllocateInfo::operator=;
VkMemoryDedicatedAllocateInfo& (VkMemoryDedicatedAllocateInfo::*AcidSharp_symbols806)(VkMemoryDedicatedAllocateInfo&&) = &VkMemoryDedicatedAllocateInfo::operator=;
extern "C" { void AcidSharp_symbols807(VkMemoryDedicatedAllocateInfo* instance) { instance->~VkMemoryDedicatedAllocateInfo(); } }
extern "C" { void AcidSharp_symbols808(void* instance) { new (instance) VkMemoryAllocateFlagsInfo(); } }
extern "C" { void AcidSharp_symbols809(void* instance, const VkMemoryAllocateFlagsInfo& _0) { new (instance) VkMemoryAllocateFlagsInfo(_0); } }
VkMemoryAllocateFlagsInfo& (VkMemoryAllocateFlagsInfo::*AcidSharp_symbols810)(const VkMemoryAllocateFlagsInfo&) = &VkMemoryAllocateFlagsInfo::operator=;
VkMemoryAllocateFlagsInfo& (VkMemoryAllocateFlagsInfo::*AcidSharp_symbols811)(VkMemoryAllocateFlagsInfo&&) = &VkMemoryAllocateFlagsInfo::operator=;
extern "C" { void AcidSharp_symbols812(VkMemoryAllocateFlagsInfo* instance) { instance->~VkMemoryAllocateFlagsInfo(); } }
extern "C" { void AcidSharp_symbols813(void* instance) { new (instance) VkDeviceGroupRenderPassBeginInfo(); } }
extern "C" { void AcidSharp_symbols814(void* instance, const VkDeviceGroupRenderPassBeginInfo& _0) { new (instance) VkDeviceGroupRenderPassBeginInfo(_0); } }
VkDeviceGroupRenderPassBeginInfo& (VkDeviceGroupRenderPassBeginInfo::*AcidSharp_symbols815)(const VkDeviceGroupRenderPassBeginInfo&) = &VkDeviceGroupRenderPassBeginInfo::operator=;
VkDeviceGroupRenderPassBeginInfo& (VkDeviceGroupRenderPassBeginInfo::*AcidSharp_symbols816)(VkDeviceGroupRenderPassBeginInfo&&) = &VkDeviceGroupRenderPassBeginInfo::operator=;
extern "C" { void AcidSharp_symbols817(VkDeviceGroupRenderPassBeginInfo* instance) { instance->~VkDeviceGroupRenderPassBeginInfo(); } }
extern "C" { void AcidSharp_symbols818(void* instance) { new (instance) VkDeviceGroupCommandBufferBeginInfo(); } }
extern "C" { void AcidSharp_symbols819(void* instance, const VkDeviceGroupCommandBufferBeginInfo& _0) { new (instance) VkDeviceGroupCommandBufferBeginInfo(_0); } }
VkDeviceGroupCommandBufferBeginInfo& (VkDeviceGroupCommandBufferBeginInfo::*AcidSharp_symbols820)(const VkDeviceGroupCommandBufferBeginInfo&) = &VkDeviceGroupCommandBufferBeginInfo::operator=;
VkDeviceGroupCommandBufferBeginInfo& (VkDeviceGroupCommandBufferBeginInfo::*AcidSharp_symbols821)(VkDeviceGroupCommandBufferBeginInfo&&) = &VkDeviceGroupCommandBufferBeginInfo::operator=;
extern "C" { void AcidSharp_symbols822(VkDeviceGroupCommandBufferBeginInfo* instance) { instance->~VkDeviceGroupCommandBufferBeginInfo(); } }
extern "C" { void AcidSharp_symbols823(void* instance) { new (instance) VkDeviceGroupSubmitInfo(); } }
extern "C" { void AcidSharp_symbols824(void* instance, const VkDeviceGroupSubmitInfo& _0) { new (instance) VkDeviceGroupSubmitInfo(_0); } }
VkDeviceGroupSubmitInfo& (VkDeviceGroupSubmitInfo::*AcidSharp_symbols825)(const VkDeviceGroupSubmitInfo&) = &VkDeviceGroupSubmitInfo::operator=;
VkDeviceGroupSubmitInfo& (VkDeviceGroupSubmitInfo::*AcidSharp_symbols826)(VkDeviceGroupSubmitInfo&&) = &VkDeviceGroupSubmitInfo::operator=;
extern "C" { void AcidSharp_symbols827(VkDeviceGroupSubmitInfo* instance) { instance->~VkDeviceGroupSubmitInfo(); } }
extern "C" { void AcidSharp_symbols828(void* instance) { new (instance) VkDeviceGroupBindSparseInfo(); } }
extern "C" { void AcidSharp_symbols829(void* instance, const VkDeviceGroupBindSparseInfo& _0) { new (instance) VkDeviceGroupBindSparseInfo(_0); } }
VkDeviceGroupBindSparseInfo& (VkDeviceGroupBindSparseInfo::*AcidSharp_symbols830)(const VkDeviceGroupBindSparseInfo&) = &VkDeviceGroupBindSparseInfo::operator=;
VkDeviceGroupBindSparseInfo& (VkDeviceGroupBindSparseInfo::*AcidSharp_symbols831)(VkDeviceGroupBindSparseInfo&&) = &VkDeviceGroupBindSparseInfo::operator=;
extern "C" { void AcidSharp_symbols832(VkDeviceGroupBindSparseInfo* instance) { instance->~VkDeviceGroupBindSparseInfo(); } }
extern "C" { void AcidSharp_symbols833(void* instance) { new (instance) VkBindBufferMemoryDeviceGroupInfo(); } }
extern "C" { void AcidSharp_symbols834(void* instance, const VkBindBufferMemoryDeviceGroupInfo& _0) { new (instance) VkBindBufferMemoryDeviceGroupInfo(_0); } }
VkBindBufferMemoryDeviceGroupInfo& (VkBindBufferMemoryDeviceGroupInfo::*AcidSharp_symbols835)(const VkBindBufferMemoryDeviceGroupInfo&) = &VkBindBufferMemoryDeviceGroupInfo::operator=;
VkBindBufferMemoryDeviceGroupInfo& (VkBindBufferMemoryDeviceGroupInfo::*AcidSharp_symbols836)(VkBindBufferMemoryDeviceGroupInfo&&) = &VkBindBufferMemoryDeviceGroupInfo::operator=;
extern "C" { void AcidSharp_symbols837(VkBindBufferMemoryDeviceGroupInfo* instance) { instance->~VkBindBufferMemoryDeviceGroupInfo(); } }
extern "C" { void AcidSharp_symbols838(void* instance) { new (instance) VkBindImageMemoryDeviceGroupInfo(); } }
extern "C" { void AcidSharp_symbols839(void* instance, const VkBindImageMemoryDeviceGroupInfo& _0) { new (instance) VkBindImageMemoryDeviceGroupInfo(_0); } }
VkBindImageMemoryDeviceGroupInfo& (VkBindImageMemoryDeviceGroupInfo::*AcidSharp_symbols840)(const VkBindImageMemoryDeviceGroupInfo&) = &VkBindImageMemoryDeviceGroupInfo::operator=;
VkBindImageMemoryDeviceGroupInfo& (VkBindImageMemoryDeviceGroupInfo::*AcidSharp_symbols841)(VkBindImageMemoryDeviceGroupInfo&&) = &VkBindImageMemoryDeviceGroupInfo::operator=;
extern "C" { void AcidSharp_symbols842(VkBindImageMemoryDeviceGroupInfo* instance) { instance->~VkBindImageMemoryDeviceGroupInfo(); } }
extern "C" { void AcidSharp_symbols843(void* instance) { new (instance) VkPhysicalDeviceGroupProperties(); } }
extern "C" { void AcidSharp_symbols844(void* instance, const VkPhysicalDeviceGroupProperties& _0) { new (instance) VkPhysicalDeviceGroupProperties(_0); } }
VkPhysicalDeviceGroupProperties& (VkPhysicalDeviceGroupProperties::*AcidSharp_symbols845)(const VkPhysicalDeviceGroupProperties&) = &VkPhysicalDeviceGroupProperties::operator=;
VkPhysicalDeviceGroupProperties& (VkPhysicalDeviceGroupProperties::*AcidSharp_symbols846)(VkPhysicalDeviceGroupProperties&&) = &VkPhysicalDeviceGroupProperties::operator=;
extern "C" { void AcidSharp_symbols847(VkPhysicalDeviceGroupProperties* instance) { instance->~VkPhysicalDeviceGroupProperties(); } }
extern "C" { void AcidSharp_symbols848(void* instance) { new (instance) VkDeviceGroupDeviceCreateInfo(); } }
extern "C" { void AcidSharp_symbols849(void* instance, const VkDeviceGroupDeviceCreateInfo& _0) { new (instance) VkDeviceGroupDeviceCreateInfo(_0); } }
VkDeviceGroupDeviceCreateInfo& (VkDeviceGroupDeviceCreateInfo::*AcidSharp_symbols850)(const VkDeviceGroupDeviceCreateInfo&) = &VkDeviceGroupDeviceCreateInfo::operator=;
VkDeviceGroupDeviceCreateInfo& (VkDeviceGroupDeviceCreateInfo::*AcidSharp_symbols851)(VkDeviceGroupDeviceCreateInfo&&) = &VkDeviceGroupDeviceCreateInfo::operator=;
extern "C" { void AcidSharp_symbols852(VkDeviceGroupDeviceCreateInfo* instance) { instance->~VkDeviceGroupDeviceCreateInfo(); } }
extern "C" { void AcidSharp_symbols853(void* instance) { new (instance) VkBufferMemoryRequirementsInfo2(); } }
extern "C" { void AcidSharp_symbols854(void* instance, const VkBufferMemoryRequirementsInfo2& _0) { new (instance) VkBufferMemoryRequirementsInfo2(_0); } }
VkBufferMemoryRequirementsInfo2& (VkBufferMemoryRequirementsInfo2::*AcidSharp_symbols855)(const VkBufferMemoryRequirementsInfo2&) = &VkBufferMemoryRequirementsInfo2::operator=;
VkBufferMemoryRequirementsInfo2& (VkBufferMemoryRequirementsInfo2::*AcidSharp_symbols856)(VkBufferMemoryRequirementsInfo2&&) = &VkBufferMemoryRequirementsInfo2::operator=;
extern "C" { void AcidSharp_symbols857(VkBufferMemoryRequirementsInfo2* instance) { instance->~VkBufferMemoryRequirementsInfo2(); } }
extern "C" { void AcidSharp_symbols858(void* instance) { new (instance) VkImageMemoryRequirementsInfo2(); } }
extern "C" { void AcidSharp_symbols859(void* instance, const VkImageMemoryRequirementsInfo2& _0) { new (instance) VkImageMemoryRequirementsInfo2(_0); } }
VkImageMemoryRequirementsInfo2& (VkImageMemoryRequirementsInfo2::*AcidSharp_symbols860)(const VkImageMemoryRequirementsInfo2&) = &VkImageMemoryRequirementsInfo2::operator=;
VkImageMemoryRequirementsInfo2& (VkImageMemoryRequirementsInfo2::*AcidSharp_symbols861)(VkImageMemoryRequirementsInfo2&&) = &VkImageMemoryRequirementsInfo2::operator=;
extern "C" { void AcidSharp_symbols862(VkImageMemoryRequirementsInfo2* instance) { instance->~VkImageMemoryRequirementsInfo2(); } }
extern "C" { void AcidSharp_symbols863(void* instance) { new (instance) VkImageSparseMemoryRequirementsInfo2(); } }
extern "C" { void AcidSharp_symbols864(void* instance, const VkImageSparseMemoryRequirementsInfo2& _0) { new (instance) VkImageSparseMemoryRequirementsInfo2(_0); } }
VkImageSparseMemoryRequirementsInfo2& (VkImageSparseMemoryRequirementsInfo2::*AcidSharp_symbols865)(const VkImageSparseMemoryRequirementsInfo2&) = &VkImageSparseMemoryRequirementsInfo2::operator=;
VkImageSparseMemoryRequirementsInfo2& (VkImageSparseMemoryRequirementsInfo2::*AcidSharp_symbols866)(VkImageSparseMemoryRequirementsInfo2&&) = &VkImageSparseMemoryRequirementsInfo2::operator=;
extern "C" { void AcidSharp_symbols867(VkImageSparseMemoryRequirementsInfo2* instance) { instance->~VkImageSparseMemoryRequirementsInfo2(); } }
extern "C" { void AcidSharp_symbols868(void* instance) { new (instance) VkMemoryRequirements2(); } }
extern "C" { void AcidSharp_symbols869(void* instance, const VkMemoryRequirements2& _0) { new (instance) VkMemoryRequirements2(_0); } }
VkMemoryRequirements2& (VkMemoryRequirements2::*AcidSharp_symbols870)(const VkMemoryRequirements2&) = &VkMemoryRequirements2::operator=;
VkMemoryRequirements2& (VkMemoryRequirements2::*AcidSharp_symbols871)(VkMemoryRequirements2&&) = &VkMemoryRequirements2::operator=;
extern "C" { void AcidSharp_symbols872(VkMemoryRequirements2* instance) { instance->~VkMemoryRequirements2(); } }
extern "C" { void AcidSharp_symbols873(void* instance) { new (instance) VkSparseImageMemoryRequirements2(); } }
extern "C" { void AcidSharp_symbols874(void* instance, const VkSparseImageMemoryRequirements2& _0) { new (instance) VkSparseImageMemoryRequirements2(_0); } }
VkSparseImageMemoryRequirements2& (VkSparseImageMemoryRequirements2::*AcidSharp_symbols875)(const VkSparseImageMemoryRequirements2&) = &VkSparseImageMemoryRequirements2::operator=;
VkSparseImageMemoryRequirements2& (VkSparseImageMemoryRequirements2::*AcidSharp_symbols876)(VkSparseImageMemoryRequirements2&&) = &VkSparseImageMemoryRequirements2::operator=;
extern "C" { void AcidSharp_symbols877(VkSparseImageMemoryRequirements2* instance) { instance->~VkSparseImageMemoryRequirements2(); } }
extern "C" { void AcidSharp_symbols878(void* instance) { new (instance) VkPhysicalDeviceFeatures2(); } }
extern "C" { void AcidSharp_symbols879(void* instance, const VkPhysicalDeviceFeatures2& _0) { new (instance) VkPhysicalDeviceFeatures2(_0); } }
VkPhysicalDeviceFeatures2& (VkPhysicalDeviceFeatures2::*AcidSharp_symbols880)(const VkPhysicalDeviceFeatures2&) = &VkPhysicalDeviceFeatures2::operator=;
VkPhysicalDeviceFeatures2& (VkPhysicalDeviceFeatures2::*AcidSharp_symbols881)(VkPhysicalDeviceFeatures2&&) = &VkPhysicalDeviceFeatures2::operator=;
extern "C" { void AcidSharp_symbols882(VkPhysicalDeviceFeatures2* instance) { instance->~VkPhysicalDeviceFeatures2(); } }
extern "C" { void AcidSharp_symbols883(void* instance) { new (instance) VkPhysicalDeviceProperties2(); } }
extern "C" { void AcidSharp_symbols884(void* instance, const VkPhysicalDeviceProperties2& _0) { new (instance) VkPhysicalDeviceProperties2(_0); } }
VkPhysicalDeviceProperties2& (VkPhysicalDeviceProperties2::*AcidSharp_symbols885)(const VkPhysicalDeviceProperties2&) = &VkPhysicalDeviceProperties2::operator=;
VkPhysicalDeviceProperties2& (VkPhysicalDeviceProperties2::*AcidSharp_symbols886)(VkPhysicalDeviceProperties2&&) = &VkPhysicalDeviceProperties2::operator=;
extern "C" { void AcidSharp_symbols887(VkPhysicalDeviceProperties2* instance) { instance->~VkPhysicalDeviceProperties2(); } }
extern "C" { void AcidSharp_symbols888(void* instance) { new (instance) VkFormatProperties2(); } }
extern "C" { void AcidSharp_symbols889(void* instance, const VkFormatProperties2& _0) { new (instance) VkFormatProperties2(_0); } }
VkFormatProperties2& (VkFormatProperties2::*AcidSharp_symbols890)(const VkFormatProperties2&) = &VkFormatProperties2::operator=;
VkFormatProperties2& (VkFormatProperties2::*AcidSharp_symbols891)(VkFormatProperties2&&) = &VkFormatProperties2::operator=;
extern "C" { void AcidSharp_symbols892(VkFormatProperties2* instance) { instance->~VkFormatProperties2(); } }
extern "C" { void AcidSharp_symbols893(void* instance) { new (instance) VkImageFormatProperties2(); } }
extern "C" { void AcidSharp_symbols894(void* instance, const VkImageFormatProperties2& _0) { new (instance) VkImageFormatProperties2(_0); } }
VkImageFormatProperties2& (VkImageFormatProperties2::*AcidSharp_symbols895)(const VkImageFormatProperties2&) = &VkImageFormatProperties2::operator=;
VkImageFormatProperties2& (VkImageFormatProperties2::*AcidSharp_symbols896)(VkImageFormatProperties2&&) = &VkImageFormatProperties2::operator=;
extern "C" { void AcidSharp_symbols897(VkImageFormatProperties2* instance) { instance->~VkImageFormatProperties2(); } }
extern "C" { void AcidSharp_symbols898(void* instance) { new (instance) VkPhysicalDeviceImageFormatInfo2(); } }
extern "C" { void AcidSharp_symbols899(void* instance, const VkPhysicalDeviceImageFormatInfo2& _0) { new (instance) VkPhysicalDeviceImageFormatInfo2(_0); } }
VkPhysicalDeviceImageFormatInfo2& (VkPhysicalDeviceImageFormatInfo2::*AcidSharp_symbols900)(const VkPhysicalDeviceImageFormatInfo2&) = &VkPhysicalDeviceImageFormatInfo2::operator=;
VkPhysicalDeviceImageFormatInfo2& (VkPhysicalDeviceImageFormatInfo2::*AcidSharp_symbols901)(VkPhysicalDeviceImageFormatInfo2&&) = &VkPhysicalDeviceImageFormatInfo2::operator=;
extern "C" { void AcidSharp_symbols902(VkPhysicalDeviceImageFormatInfo2* instance) { instance->~VkPhysicalDeviceImageFormatInfo2(); } }
extern "C" { void AcidSharp_symbols903(void* instance) { new (instance) VkQueueFamilyProperties2(); } }
extern "C" { void AcidSharp_symbols904(void* instance, const VkQueueFamilyProperties2& _0) { new (instance) VkQueueFamilyProperties2(_0); } }
VkQueueFamilyProperties2& (VkQueueFamilyProperties2::*AcidSharp_symbols905)(const VkQueueFamilyProperties2&) = &VkQueueFamilyProperties2::operator=;
VkQueueFamilyProperties2& (VkQueueFamilyProperties2::*AcidSharp_symbols906)(VkQueueFamilyProperties2&&) = &VkQueueFamilyProperties2::operator=;
extern "C" { void AcidSharp_symbols907(VkQueueFamilyProperties2* instance) { instance->~VkQueueFamilyProperties2(); } }
extern "C" { void AcidSharp_symbols908(void* instance) { new (instance) VkPhysicalDeviceMemoryProperties2(); } }
extern "C" { void AcidSharp_symbols909(void* instance, const VkPhysicalDeviceMemoryProperties2& _0) { new (instance) VkPhysicalDeviceMemoryProperties2(_0); } }
VkPhysicalDeviceMemoryProperties2& (VkPhysicalDeviceMemoryProperties2::*AcidSharp_symbols910)(const VkPhysicalDeviceMemoryProperties2&) = &VkPhysicalDeviceMemoryProperties2::operator=;
VkPhysicalDeviceMemoryProperties2& (VkPhysicalDeviceMemoryProperties2::*AcidSharp_symbols911)(VkPhysicalDeviceMemoryProperties2&&) = &VkPhysicalDeviceMemoryProperties2::operator=;
extern "C" { void AcidSharp_symbols912(VkPhysicalDeviceMemoryProperties2* instance) { instance->~VkPhysicalDeviceMemoryProperties2(); } }
extern "C" { void AcidSharp_symbols913(void* instance) { new (instance) VkSparseImageFormatProperties2(); } }
extern "C" { void AcidSharp_symbols914(void* instance, const VkSparseImageFormatProperties2& _0) { new (instance) VkSparseImageFormatProperties2(_0); } }
VkSparseImageFormatProperties2& (VkSparseImageFormatProperties2::*AcidSharp_symbols915)(const VkSparseImageFormatProperties2&) = &VkSparseImageFormatProperties2::operator=;
VkSparseImageFormatProperties2& (VkSparseImageFormatProperties2::*AcidSharp_symbols916)(VkSparseImageFormatProperties2&&) = &VkSparseImageFormatProperties2::operator=;
extern "C" { void AcidSharp_symbols917(VkSparseImageFormatProperties2* instance) { instance->~VkSparseImageFormatProperties2(); } }
extern "C" { void AcidSharp_symbols918(void* instance) { new (instance) VkPhysicalDeviceSparseImageFormatInfo2(); } }
extern "C" { void AcidSharp_symbols919(void* instance, const VkPhysicalDeviceSparseImageFormatInfo2& _0) { new (instance) VkPhysicalDeviceSparseImageFormatInfo2(_0); } }
VkPhysicalDeviceSparseImageFormatInfo2& (VkPhysicalDeviceSparseImageFormatInfo2::*AcidSharp_symbols920)(const VkPhysicalDeviceSparseImageFormatInfo2&) = &VkPhysicalDeviceSparseImageFormatInfo2::operator=;
VkPhysicalDeviceSparseImageFormatInfo2& (VkPhysicalDeviceSparseImageFormatInfo2::*AcidSharp_symbols921)(VkPhysicalDeviceSparseImageFormatInfo2&&) = &VkPhysicalDeviceSparseImageFormatInfo2::operator=;
extern "C" { void AcidSharp_symbols922(VkPhysicalDeviceSparseImageFormatInfo2* instance) { instance->~VkPhysicalDeviceSparseImageFormatInfo2(); } }
extern "C" { void AcidSharp_symbols923(void* instance) { new (instance) VkPhysicalDevicePointClippingProperties(); } }
extern "C" { void AcidSharp_symbols924(void* instance, const VkPhysicalDevicePointClippingProperties& _0) { new (instance) VkPhysicalDevicePointClippingProperties(_0); } }
VkPhysicalDevicePointClippingProperties& (VkPhysicalDevicePointClippingProperties::*AcidSharp_symbols925)(const VkPhysicalDevicePointClippingProperties&) = &VkPhysicalDevicePointClippingProperties::operator=;
VkPhysicalDevicePointClippingProperties& (VkPhysicalDevicePointClippingProperties::*AcidSharp_symbols926)(VkPhysicalDevicePointClippingProperties&&) = &VkPhysicalDevicePointClippingProperties::operator=;
extern "C" { void AcidSharp_symbols927(VkPhysicalDevicePointClippingProperties* instance) { instance->~VkPhysicalDevicePointClippingProperties(); } }
extern "C" { void AcidSharp_symbols928(void* instance) { new (instance) VkInputAttachmentAspectReference(); } }
extern "C" { void AcidSharp_symbols929(void* instance, const VkInputAttachmentAspectReference& _0) { new (instance) VkInputAttachmentAspectReference(_0); } }
VkInputAttachmentAspectReference& (VkInputAttachmentAspectReference::*AcidSharp_symbols930)(const VkInputAttachmentAspectReference&) = &VkInputAttachmentAspectReference::operator=;
VkInputAttachmentAspectReference& (VkInputAttachmentAspectReference::*AcidSharp_symbols931)(VkInputAttachmentAspectReference&&) = &VkInputAttachmentAspectReference::operator=;
extern "C" { void AcidSharp_symbols932(VkInputAttachmentAspectReference* instance) { instance->~VkInputAttachmentAspectReference(); } }
extern "C" { void AcidSharp_symbols933(void* instance) { new (instance) VkRenderPassInputAttachmentAspectCreateInfo(); } }
extern "C" { void AcidSharp_symbols934(void* instance, const VkRenderPassInputAttachmentAspectCreateInfo& _0) { new (instance) VkRenderPassInputAttachmentAspectCreateInfo(_0); } }
VkRenderPassInputAttachmentAspectCreateInfo& (VkRenderPassInputAttachmentAspectCreateInfo::*AcidSharp_symbols935)(const VkRenderPassInputAttachmentAspectCreateInfo&) = &VkRenderPassInputAttachmentAspectCreateInfo::operator=;
VkRenderPassInputAttachmentAspectCreateInfo& (VkRenderPassInputAttachmentAspectCreateInfo::*AcidSharp_symbols936)(VkRenderPassInputAttachmentAspectCreateInfo&&) = &VkRenderPassInputAttachmentAspectCreateInfo::operator=;
extern "C" { void AcidSharp_symbols937(VkRenderPassInputAttachmentAspectCreateInfo* instance) { instance->~VkRenderPassInputAttachmentAspectCreateInfo(); } }
extern "C" { void AcidSharp_symbols938(void* instance) { new (instance) VkImageViewUsageCreateInfo(); } }
extern "C" { void AcidSharp_symbols939(void* instance, const VkImageViewUsageCreateInfo& _0) { new (instance) VkImageViewUsageCreateInfo(_0); } }
VkImageViewUsageCreateInfo& (VkImageViewUsageCreateInfo::*AcidSharp_symbols940)(const VkImageViewUsageCreateInfo&) = &VkImageViewUsageCreateInfo::operator=;
VkImageViewUsageCreateInfo& (VkImageViewUsageCreateInfo::*AcidSharp_symbols941)(VkImageViewUsageCreateInfo&&) = &VkImageViewUsageCreateInfo::operator=;
extern "C" { void AcidSharp_symbols942(VkImageViewUsageCreateInfo* instance) { instance->~VkImageViewUsageCreateInfo(); } }
extern "C" { void AcidSharp_symbols943(void* instance) { new (instance) VkPipelineTessellationDomainOriginStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols944(void* instance, const VkPipelineTessellationDomainOriginStateCreateInfo& _0) { new (instance) VkPipelineTessellationDomainOriginStateCreateInfo(_0); } }
VkPipelineTessellationDomainOriginStateCreateInfo& (VkPipelineTessellationDomainOriginStateCreateInfo::*AcidSharp_symbols945)(const VkPipelineTessellationDomainOriginStateCreateInfo&) = &VkPipelineTessellationDomainOriginStateCreateInfo::operator=;
VkPipelineTessellationDomainOriginStateCreateInfo& (VkPipelineTessellationDomainOriginStateCreateInfo::*AcidSharp_symbols946)(VkPipelineTessellationDomainOriginStateCreateInfo&&) = &VkPipelineTessellationDomainOriginStateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols947(VkPipelineTessellationDomainOriginStateCreateInfo* instance) { instance->~VkPipelineTessellationDomainOriginStateCreateInfo(); } }
extern "C" { void AcidSharp_symbols948(void* instance) { new (instance) VkRenderPassMultiviewCreateInfo(); } }
extern "C" { void AcidSharp_symbols949(void* instance, const VkRenderPassMultiviewCreateInfo& _0) { new (instance) VkRenderPassMultiviewCreateInfo(_0); } }
VkRenderPassMultiviewCreateInfo& (VkRenderPassMultiviewCreateInfo::*AcidSharp_symbols950)(const VkRenderPassMultiviewCreateInfo&) = &VkRenderPassMultiviewCreateInfo::operator=;
VkRenderPassMultiviewCreateInfo& (VkRenderPassMultiviewCreateInfo::*AcidSharp_symbols951)(VkRenderPassMultiviewCreateInfo&&) = &VkRenderPassMultiviewCreateInfo::operator=;
extern "C" { void AcidSharp_symbols952(VkRenderPassMultiviewCreateInfo* instance) { instance->~VkRenderPassMultiviewCreateInfo(); } }
extern "C" { void AcidSharp_symbols953(void* instance) { new (instance) VkPhysicalDeviceMultiviewFeatures(); } }
extern "C" { void AcidSharp_symbols954(void* instance, const VkPhysicalDeviceMultiviewFeatures& _0) { new (instance) VkPhysicalDeviceMultiviewFeatures(_0); } }
VkPhysicalDeviceMultiviewFeatures& (VkPhysicalDeviceMultiviewFeatures::*AcidSharp_symbols955)(const VkPhysicalDeviceMultiviewFeatures&) = &VkPhysicalDeviceMultiviewFeatures::operator=;
VkPhysicalDeviceMultiviewFeatures& (VkPhysicalDeviceMultiviewFeatures::*AcidSharp_symbols956)(VkPhysicalDeviceMultiviewFeatures&&) = &VkPhysicalDeviceMultiviewFeatures::operator=;
extern "C" { void AcidSharp_symbols957(VkPhysicalDeviceMultiviewFeatures* instance) { instance->~VkPhysicalDeviceMultiviewFeatures(); } }
extern "C" { void AcidSharp_symbols958(void* instance) { new (instance) VkPhysicalDeviceMultiviewProperties(); } }
extern "C" { void AcidSharp_symbols959(void* instance, const VkPhysicalDeviceMultiviewProperties& _0) { new (instance) VkPhysicalDeviceMultiviewProperties(_0); } }
VkPhysicalDeviceMultiviewProperties& (VkPhysicalDeviceMultiviewProperties::*AcidSharp_symbols960)(const VkPhysicalDeviceMultiviewProperties&) = &VkPhysicalDeviceMultiviewProperties::operator=;
VkPhysicalDeviceMultiviewProperties& (VkPhysicalDeviceMultiviewProperties::*AcidSharp_symbols961)(VkPhysicalDeviceMultiviewProperties&&) = &VkPhysicalDeviceMultiviewProperties::operator=;
extern "C" { void AcidSharp_symbols962(VkPhysicalDeviceMultiviewProperties* instance) { instance->~VkPhysicalDeviceMultiviewProperties(); } }
extern "C" { void AcidSharp_symbols963(void* instance) { new (instance) VkPhysicalDeviceVariablePointerFeatures(); } }
extern "C" { void AcidSharp_symbols964(void* instance, const VkPhysicalDeviceVariablePointerFeatures& _0) { new (instance) VkPhysicalDeviceVariablePointerFeatures(_0); } }
VkPhysicalDeviceVariablePointerFeatures& (VkPhysicalDeviceVariablePointerFeatures::*AcidSharp_symbols965)(const VkPhysicalDeviceVariablePointerFeatures&) = &VkPhysicalDeviceVariablePointerFeatures::operator=;
VkPhysicalDeviceVariablePointerFeatures& (VkPhysicalDeviceVariablePointerFeatures::*AcidSharp_symbols966)(VkPhysicalDeviceVariablePointerFeatures&&) = &VkPhysicalDeviceVariablePointerFeatures::operator=;
extern "C" { void AcidSharp_symbols967(VkPhysicalDeviceVariablePointerFeatures* instance) { instance->~VkPhysicalDeviceVariablePointerFeatures(); } }
extern "C" { void AcidSharp_symbols968(void* instance) { new (instance) VkPhysicalDeviceProtectedMemoryFeatures(); } }
extern "C" { void AcidSharp_symbols969(void* instance, const VkPhysicalDeviceProtectedMemoryFeatures& _0) { new (instance) VkPhysicalDeviceProtectedMemoryFeatures(_0); } }
VkPhysicalDeviceProtectedMemoryFeatures& (VkPhysicalDeviceProtectedMemoryFeatures::*AcidSharp_symbols970)(const VkPhysicalDeviceProtectedMemoryFeatures&) = &VkPhysicalDeviceProtectedMemoryFeatures::operator=;
VkPhysicalDeviceProtectedMemoryFeatures& (VkPhysicalDeviceProtectedMemoryFeatures::*AcidSharp_symbols971)(VkPhysicalDeviceProtectedMemoryFeatures&&) = &VkPhysicalDeviceProtectedMemoryFeatures::operator=;
extern "C" { void AcidSharp_symbols972(VkPhysicalDeviceProtectedMemoryFeatures* instance) { instance->~VkPhysicalDeviceProtectedMemoryFeatures(); } }
extern "C" { void AcidSharp_symbols973(void* instance) { new (instance) VkPhysicalDeviceProtectedMemoryProperties(); } }
extern "C" { void AcidSharp_symbols974(void* instance, const VkPhysicalDeviceProtectedMemoryProperties& _0) { new (instance) VkPhysicalDeviceProtectedMemoryProperties(_0); } }
VkPhysicalDeviceProtectedMemoryProperties& (VkPhysicalDeviceProtectedMemoryProperties::*AcidSharp_symbols975)(const VkPhysicalDeviceProtectedMemoryProperties&) = &VkPhysicalDeviceProtectedMemoryProperties::operator=;
VkPhysicalDeviceProtectedMemoryProperties& (VkPhysicalDeviceProtectedMemoryProperties::*AcidSharp_symbols976)(VkPhysicalDeviceProtectedMemoryProperties&&) = &VkPhysicalDeviceProtectedMemoryProperties::operator=;
extern "C" { void AcidSharp_symbols977(VkPhysicalDeviceProtectedMemoryProperties* instance) { instance->~VkPhysicalDeviceProtectedMemoryProperties(); } }
extern "C" { void AcidSharp_symbols978(void* instance) { new (instance) VkDeviceQueueInfo2(); } }
extern "C" { void AcidSharp_symbols979(void* instance, const VkDeviceQueueInfo2& _0) { new (instance) VkDeviceQueueInfo2(_0); } }
VkDeviceQueueInfo2& (VkDeviceQueueInfo2::*AcidSharp_symbols980)(const VkDeviceQueueInfo2&) = &VkDeviceQueueInfo2::operator=;
VkDeviceQueueInfo2& (VkDeviceQueueInfo2::*AcidSharp_symbols981)(VkDeviceQueueInfo2&&) = &VkDeviceQueueInfo2::operator=;
extern "C" { void AcidSharp_symbols982(VkDeviceQueueInfo2* instance) { instance->~VkDeviceQueueInfo2(); } }
extern "C" { void AcidSharp_symbols983(void* instance) { new (instance) VkProtectedSubmitInfo(); } }
extern "C" { void AcidSharp_symbols984(void* instance, const VkProtectedSubmitInfo& _0) { new (instance) VkProtectedSubmitInfo(_0); } }
VkProtectedSubmitInfo& (VkProtectedSubmitInfo::*AcidSharp_symbols985)(const VkProtectedSubmitInfo&) = &VkProtectedSubmitInfo::operator=;
VkProtectedSubmitInfo& (VkProtectedSubmitInfo::*AcidSharp_symbols986)(VkProtectedSubmitInfo&&) = &VkProtectedSubmitInfo::operator=;
extern "C" { void AcidSharp_symbols987(VkProtectedSubmitInfo* instance) { instance->~VkProtectedSubmitInfo(); } }
extern "C" { void AcidSharp_symbols988(void* instance) { new (instance) VkSamplerYcbcrConversionCreateInfo(); } }
extern "C" { void AcidSharp_symbols989(void* instance, const VkSamplerYcbcrConversionCreateInfo& _0) { new (instance) VkSamplerYcbcrConversionCreateInfo(_0); } }
VkSamplerYcbcrConversionCreateInfo& (VkSamplerYcbcrConversionCreateInfo::*AcidSharp_symbols990)(const VkSamplerYcbcrConversionCreateInfo&) = &VkSamplerYcbcrConversionCreateInfo::operator=;
VkSamplerYcbcrConversionCreateInfo& (VkSamplerYcbcrConversionCreateInfo::*AcidSharp_symbols991)(VkSamplerYcbcrConversionCreateInfo&&) = &VkSamplerYcbcrConversionCreateInfo::operator=;
extern "C" { void AcidSharp_symbols992(VkSamplerYcbcrConversionCreateInfo* instance) { instance->~VkSamplerYcbcrConversionCreateInfo(); } }
extern "C" { void AcidSharp_symbols993(void* instance) { new (instance) VkSamplerYcbcrConversionInfo(); } }
extern "C" { void AcidSharp_symbols994(void* instance, const VkSamplerYcbcrConversionInfo& _0) { new (instance) VkSamplerYcbcrConversionInfo(_0); } }
VkSamplerYcbcrConversionInfo& (VkSamplerYcbcrConversionInfo::*AcidSharp_symbols995)(const VkSamplerYcbcrConversionInfo&) = &VkSamplerYcbcrConversionInfo::operator=;
VkSamplerYcbcrConversionInfo& (VkSamplerYcbcrConversionInfo::*AcidSharp_symbols996)(VkSamplerYcbcrConversionInfo&&) = &VkSamplerYcbcrConversionInfo::operator=;
extern "C" { void AcidSharp_symbols997(VkSamplerYcbcrConversionInfo* instance) { instance->~VkSamplerYcbcrConversionInfo(); } }
extern "C" { void AcidSharp_symbols998(void* instance) { new (instance) VkBindImagePlaneMemoryInfo(); } }
extern "C" { void AcidSharp_symbols999(void* instance, const VkBindImagePlaneMemoryInfo& _0) { new (instance) VkBindImagePlaneMemoryInfo(_0); } }
VkBindImagePlaneMemoryInfo& (VkBindImagePlaneMemoryInfo::*AcidSharp_symbols1000)(const VkBindImagePlaneMemoryInfo&) = &VkBindImagePlaneMemoryInfo::operator=;
VkBindImagePlaneMemoryInfo& (VkBindImagePlaneMemoryInfo::*AcidSharp_symbols1001)(VkBindImagePlaneMemoryInfo&&) = &VkBindImagePlaneMemoryInfo::operator=;
extern "C" { void AcidSharp_symbols1002(VkBindImagePlaneMemoryInfo* instance) { instance->~VkBindImagePlaneMemoryInfo(); } }
extern "C" { void AcidSharp_symbols1003(void* instance) { new (instance) VkImagePlaneMemoryRequirementsInfo(); } }
extern "C" { void AcidSharp_symbols1004(void* instance, const VkImagePlaneMemoryRequirementsInfo& _0) { new (instance) VkImagePlaneMemoryRequirementsInfo(_0); } }
VkImagePlaneMemoryRequirementsInfo& (VkImagePlaneMemoryRequirementsInfo::*AcidSharp_symbols1005)(const VkImagePlaneMemoryRequirementsInfo&) = &VkImagePlaneMemoryRequirementsInfo::operator=;
VkImagePlaneMemoryRequirementsInfo& (VkImagePlaneMemoryRequirementsInfo::*AcidSharp_symbols1006)(VkImagePlaneMemoryRequirementsInfo&&) = &VkImagePlaneMemoryRequirementsInfo::operator=;
extern "C" { void AcidSharp_symbols1007(VkImagePlaneMemoryRequirementsInfo* instance) { instance->~VkImagePlaneMemoryRequirementsInfo(); } }
extern "C" { void AcidSharp_symbols1008(void* instance) { new (instance) VkPhysicalDeviceSamplerYcbcrConversionFeatures(); } }
extern "C" { void AcidSharp_symbols1009(void* instance, const VkPhysicalDeviceSamplerYcbcrConversionFeatures& _0) { new (instance) VkPhysicalDeviceSamplerYcbcrConversionFeatures(_0); } }
VkPhysicalDeviceSamplerYcbcrConversionFeatures& (VkPhysicalDeviceSamplerYcbcrConversionFeatures::*AcidSharp_symbols1010)(const VkPhysicalDeviceSamplerYcbcrConversionFeatures&) = &VkPhysicalDeviceSamplerYcbcrConversionFeatures::operator=;
VkPhysicalDeviceSamplerYcbcrConversionFeatures& (VkPhysicalDeviceSamplerYcbcrConversionFeatures::*AcidSharp_symbols1011)(VkPhysicalDeviceSamplerYcbcrConversionFeatures&&) = &VkPhysicalDeviceSamplerYcbcrConversionFeatures::operator=;
extern "C" { void AcidSharp_symbols1012(VkPhysicalDeviceSamplerYcbcrConversionFeatures* instance) { instance->~VkPhysicalDeviceSamplerYcbcrConversionFeatures(); } }
extern "C" { void AcidSharp_symbols1013(void* instance) { new (instance) VkSamplerYcbcrConversionImageFormatProperties(); } }
extern "C" { void AcidSharp_symbols1014(void* instance, const VkSamplerYcbcrConversionImageFormatProperties& _0) { new (instance) VkSamplerYcbcrConversionImageFormatProperties(_0); } }
VkSamplerYcbcrConversionImageFormatProperties& (VkSamplerYcbcrConversionImageFormatProperties::*AcidSharp_symbols1015)(const VkSamplerYcbcrConversionImageFormatProperties&) = &VkSamplerYcbcrConversionImageFormatProperties::operator=;
VkSamplerYcbcrConversionImageFormatProperties& (VkSamplerYcbcrConversionImageFormatProperties::*AcidSharp_symbols1016)(VkSamplerYcbcrConversionImageFormatProperties&&) = &VkSamplerYcbcrConversionImageFormatProperties::operator=;
extern "C" { void AcidSharp_symbols1017(VkSamplerYcbcrConversionImageFormatProperties* instance) { instance->~VkSamplerYcbcrConversionImageFormatProperties(); } }
extern "C" { void AcidSharp_symbols1018(void* instance) { new (instance) VkDescriptorUpdateTemplateEntry(); } }
extern "C" { void AcidSharp_symbols1019(void* instance, const VkDescriptorUpdateTemplateEntry& _0) { new (instance) VkDescriptorUpdateTemplateEntry(_0); } }
VkDescriptorUpdateTemplateEntry& (VkDescriptorUpdateTemplateEntry::*AcidSharp_symbols1020)(const VkDescriptorUpdateTemplateEntry&) = &VkDescriptorUpdateTemplateEntry::operator=;
VkDescriptorUpdateTemplateEntry& (VkDescriptorUpdateTemplateEntry::*AcidSharp_symbols1021)(VkDescriptorUpdateTemplateEntry&&) = &VkDescriptorUpdateTemplateEntry::operator=;
extern "C" { void AcidSharp_symbols1022(VkDescriptorUpdateTemplateEntry* instance) { instance->~VkDescriptorUpdateTemplateEntry(); } }
extern "C" { void AcidSharp_symbols1023(void* instance) { new (instance) VkDescriptorUpdateTemplateCreateInfo(); } }
extern "C" { void AcidSharp_symbols1024(void* instance, const VkDescriptorUpdateTemplateCreateInfo& _0) { new (instance) VkDescriptorUpdateTemplateCreateInfo(_0); } }
VkDescriptorUpdateTemplateCreateInfo& (VkDescriptorUpdateTemplateCreateInfo::*AcidSharp_symbols1025)(const VkDescriptorUpdateTemplateCreateInfo&) = &VkDescriptorUpdateTemplateCreateInfo::operator=;
VkDescriptorUpdateTemplateCreateInfo& (VkDescriptorUpdateTemplateCreateInfo::*AcidSharp_symbols1026)(VkDescriptorUpdateTemplateCreateInfo&&) = &VkDescriptorUpdateTemplateCreateInfo::operator=;
extern "C" { void AcidSharp_symbols1027(VkDescriptorUpdateTemplateCreateInfo* instance) { instance->~VkDescriptorUpdateTemplateCreateInfo(); } }
extern "C" { void AcidSharp_symbols1028(void* instance) { new (instance) VkExternalMemoryProperties(); } }
extern "C" { void AcidSharp_symbols1029(void* instance, const VkExternalMemoryProperties& _0) { new (instance) VkExternalMemoryProperties(_0); } }
VkExternalMemoryProperties& (VkExternalMemoryProperties::*AcidSharp_symbols1030)(const VkExternalMemoryProperties&) = &VkExternalMemoryProperties::operator=;
VkExternalMemoryProperties& (VkExternalMemoryProperties::*AcidSharp_symbols1031)(VkExternalMemoryProperties&&) = &VkExternalMemoryProperties::operator=;
extern "C" { void AcidSharp_symbols1032(VkExternalMemoryProperties* instance) { instance->~VkExternalMemoryProperties(); } }
extern "C" { void AcidSharp_symbols1033(void* instance) { new (instance) VkPhysicalDeviceExternalImageFormatInfo(); } }
extern "C" { void AcidSharp_symbols1034(void* instance, const VkPhysicalDeviceExternalImageFormatInfo& _0) { new (instance) VkPhysicalDeviceExternalImageFormatInfo(_0); } }
VkPhysicalDeviceExternalImageFormatInfo& (VkPhysicalDeviceExternalImageFormatInfo::*AcidSharp_symbols1035)(const VkPhysicalDeviceExternalImageFormatInfo&) = &VkPhysicalDeviceExternalImageFormatInfo::operator=;
VkPhysicalDeviceExternalImageFormatInfo& (VkPhysicalDeviceExternalImageFormatInfo::*AcidSharp_symbols1036)(VkPhysicalDeviceExternalImageFormatInfo&&) = &VkPhysicalDeviceExternalImageFormatInfo::operator=;
extern "C" { void AcidSharp_symbols1037(VkPhysicalDeviceExternalImageFormatInfo* instance) { instance->~VkPhysicalDeviceExternalImageFormatInfo(); } }
extern "C" { void AcidSharp_symbols1038(void* instance) { new (instance) VkExternalImageFormatProperties(); } }
extern "C" { void AcidSharp_symbols1039(void* instance, const VkExternalImageFormatProperties& _0) { new (instance) VkExternalImageFormatProperties(_0); } }
VkExternalImageFormatProperties& (VkExternalImageFormatProperties::*AcidSharp_symbols1040)(const VkExternalImageFormatProperties&) = &VkExternalImageFormatProperties::operator=;
VkExternalImageFormatProperties& (VkExternalImageFormatProperties::*AcidSharp_symbols1041)(VkExternalImageFormatProperties&&) = &VkExternalImageFormatProperties::operator=;
extern "C" { void AcidSharp_symbols1042(VkExternalImageFormatProperties* instance) { instance->~VkExternalImageFormatProperties(); } }
extern "C" { void AcidSharp_symbols1043(void* instance) { new (instance) VkPhysicalDeviceExternalBufferInfo(); } }
extern "C" { void AcidSharp_symbols1044(void* instance, const VkPhysicalDeviceExternalBufferInfo& _0) { new (instance) VkPhysicalDeviceExternalBufferInfo(_0); } }
VkPhysicalDeviceExternalBufferInfo& (VkPhysicalDeviceExternalBufferInfo::*AcidSharp_symbols1045)(const VkPhysicalDeviceExternalBufferInfo&) = &VkPhysicalDeviceExternalBufferInfo::operator=;
VkPhysicalDeviceExternalBufferInfo& (VkPhysicalDeviceExternalBufferInfo::*AcidSharp_symbols1046)(VkPhysicalDeviceExternalBufferInfo&&) = &VkPhysicalDeviceExternalBufferInfo::operator=;
extern "C" { void AcidSharp_symbols1047(VkPhysicalDeviceExternalBufferInfo* instance) { instance->~VkPhysicalDeviceExternalBufferInfo(); } }
extern "C" { void AcidSharp_symbols1048(void* instance) { new (instance) VkExternalBufferProperties(); } }
extern "C" { void AcidSharp_symbols1049(void* instance, const VkExternalBufferProperties& _0) { new (instance) VkExternalBufferProperties(_0); } }
VkExternalBufferProperties& (VkExternalBufferProperties::*AcidSharp_symbols1050)(const VkExternalBufferProperties&) = &VkExternalBufferProperties::operator=;
VkExternalBufferProperties& (VkExternalBufferProperties::*AcidSharp_symbols1051)(VkExternalBufferProperties&&) = &VkExternalBufferProperties::operator=;
extern "C" { void AcidSharp_symbols1052(VkExternalBufferProperties* instance) { instance->~VkExternalBufferProperties(); } }
extern "C" { void AcidSharp_symbols1053(void* instance) { new (instance) VkPhysicalDeviceIDProperties(); } }
extern "C" { void AcidSharp_symbols1054(void* instance, const VkPhysicalDeviceIDProperties& _0) { new (instance) VkPhysicalDeviceIDProperties(_0); } }
VkPhysicalDeviceIDProperties& (VkPhysicalDeviceIDProperties::*AcidSharp_symbols1055)(const VkPhysicalDeviceIDProperties&) = &VkPhysicalDeviceIDProperties::operator=;
VkPhysicalDeviceIDProperties& (VkPhysicalDeviceIDProperties::*AcidSharp_symbols1056)(VkPhysicalDeviceIDProperties&&) = &VkPhysicalDeviceIDProperties::operator=;
extern "C" { void AcidSharp_symbols1057(VkPhysicalDeviceIDProperties* instance) { instance->~VkPhysicalDeviceIDProperties(); } }
extern "C" { void AcidSharp_symbols1058(void* instance) { new (instance) VkExternalMemoryImageCreateInfo(); } }
extern "C" { void AcidSharp_symbols1059(void* instance, const VkExternalMemoryImageCreateInfo& _0) { new (instance) VkExternalMemoryImageCreateInfo(_0); } }
VkExternalMemoryImageCreateInfo& (VkExternalMemoryImageCreateInfo::*AcidSharp_symbols1060)(const VkExternalMemoryImageCreateInfo&) = &VkExternalMemoryImageCreateInfo::operator=;
VkExternalMemoryImageCreateInfo& (VkExternalMemoryImageCreateInfo::*AcidSharp_symbols1061)(VkExternalMemoryImageCreateInfo&&) = &VkExternalMemoryImageCreateInfo::operator=;
extern "C" { void AcidSharp_symbols1062(VkExternalMemoryImageCreateInfo* instance) { instance->~VkExternalMemoryImageCreateInfo(); } }
extern "C" { void AcidSharp_symbols1063(void* instance) { new (instance) VkExternalMemoryBufferCreateInfo(); } }
extern "C" { void AcidSharp_symbols1064(void* instance, const VkExternalMemoryBufferCreateInfo& _0) { new (instance) VkExternalMemoryBufferCreateInfo(_0); } }
VkExternalMemoryBufferCreateInfo& (VkExternalMemoryBufferCreateInfo::*AcidSharp_symbols1065)(const VkExternalMemoryBufferCreateInfo&) = &VkExternalMemoryBufferCreateInfo::operator=;
VkExternalMemoryBufferCreateInfo& (VkExternalMemoryBufferCreateInfo::*AcidSharp_symbols1066)(VkExternalMemoryBufferCreateInfo&&) = &VkExternalMemoryBufferCreateInfo::operator=;
extern "C" { void AcidSharp_symbols1067(VkExternalMemoryBufferCreateInfo* instance) { instance->~VkExternalMemoryBufferCreateInfo(); } }
extern "C" { void AcidSharp_symbols1068(void* instance) { new (instance) VkExportMemoryAllocateInfo(); } }
extern "C" { void AcidSharp_symbols1069(void* instance, const VkExportMemoryAllocateInfo& _0) { new (instance) VkExportMemoryAllocateInfo(_0); } }
VkExportMemoryAllocateInfo& (VkExportMemoryAllocateInfo::*AcidSharp_symbols1070)(const VkExportMemoryAllocateInfo&) = &VkExportMemoryAllocateInfo::operator=;
VkExportMemoryAllocateInfo& (VkExportMemoryAllocateInfo::*AcidSharp_symbols1071)(VkExportMemoryAllocateInfo&&) = &VkExportMemoryAllocateInfo::operator=;
extern "C" { void AcidSharp_symbols1072(VkExportMemoryAllocateInfo* instance) { instance->~VkExportMemoryAllocateInfo(); } }
extern "C" { void AcidSharp_symbols1073(void* instance) { new (instance) VkPhysicalDeviceExternalFenceInfo(); } }
extern "C" { void AcidSharp_symbols1074(void* instance, const VkPhysicalDeviceExternalFenceInfo& _0) { new (instance) VkPhysicalDeviceExternalFenceInfo(_0); } }
VkPhysicalDeviceExternalFenceInfo& (VkPhysicalDeviceExternalFenceInfo::*AcidSharp_symbols1075)(const VkPhysicalDeviceExternalFenceInfo&) = &VkPhysicalDeviceExternalFenceInfo::operator=;
VkPhysicalDeviceExternalFenceInfo& (VkPhysicalDeviceExternalFenceInfo::*AcidSharp_symbols1076)(VkPhysicalDeviceExternalFenceInfo&&) = &VkPhysicalDeviceExternalFenceInfo::operator=;
extern "C" { void AcidSharp_symbols1077(VkPhysicalDeviceExternalFenceInfo* instance) { instance->~VkPhysicalDeviceExternalFenceInfo(); } }
extern "C" { void AcidSharp_symbols1078(void* instance) { new (instance) VkExternalFenceProperties(); } }
extern "C" { void AcidSharp_symbols1079(void* instance, const VkExternalFenceProperties& _0) { new (instance) VkExternalFenceProperties(_0); } }
VkExternalFenceProperties& (VkExternalFenceProperties::*AcidSharp_symbols1080)(const VkExternalFenceProperties&) = &VkExternalFenceProperties::operator=;
VkExternalFenceProperties& (VkExternalFenceProperties::*AcidSharp_symbols1081)(VkExternalFenceProperties&&) = &VkExternalFenceProperties::operator=;
extern "C" { void AcidSharp_symbols1082(VkExternalFenceProperties* instance) { instance->~VkExternalFenceProperties(); } }
extern "C" { void AcidSharp_symbols1083(void* instance) { new (instance) VkExportFenceCreateInfo(); } }
extern "C" { void AcidSharp_symbols1084(void* instance, const VkExportFenceCreateInfo& _0) { new (instance) VkExportFenceCreateInfo(_0); } }
VkExportFenceCreateInfo& (VkExportFenceCreateInfo::*AcidSharp_symbols1085)(const VkExportFenceCreateInfo&) = &VkExportFenceCreateInfo::operator=;
VkExportFenceCreateInfo& (VkExportFenceCreateInfo::*AcidSharp_symbols1086)(VkExportFenceCreateInfo&&) = &VkExportFenceCreateInfo::operator=;
extern "C" { void AcidSharp_symbols1087(VkExportFenceCreateInfo* instance) { instance->~VkExportFenceCreateInfo(); } }
extern "C" { void AcidSharp_symbols1088(void* instance) { new (instance) VkExportSemaphoreCreateInfo(); } }
extern "C" { void AcidSharp_symbols1089(void* instance, const VkExportSemaphoreCreateInfo& _0) { new (instance) VkExportSemaphoreCreateInfo(_0); } }
VkExportSemaphoreCreateInfo& (VkExportSemaphoreCreateInfo::*AcidSharp_symbols1090)(const VkExportSemaphoreCreateInfo&) = &VkExportSemaphoreCreateInfo::operator=;
VkExportSemaphoreCreateInfo& (VkExportSemaphoreCreateInfo::*AcidSharp_symbols1091)(VkExportSemaphoreCreateInfo&&) = &VkExportSemaphoreCreateInfo::operator=;
extern "C" { void AcidSharp_symbols1092(VkExportSemaphoreCreateInfo* instance) { instance->~VkExportSemaphoreCreateInfo(); } }
extern "C" { void AcidSharp_symbols1093(void* instance) { new (instance) VkPhysicalDeviceExternalSemaphoreInfo(); } }
extern "C" { void AcidSharp_symbols1094(void* instance, const VkPhysicalDeviceExternalSemaphoreInfo& _0) { new (instance) VkPhysicalDeviceExternalSemaphoreInfo(_0); } }
VkPhysicalDeviceExternalSemaphoreInfo& (VkPhysicalDeviceExternalSemaphoreInfo::*AcidSharp_symbols1095)(const VkPhysicalDeviceExternalSemaphoreInfo&) = &VkPhysicalDeviceExternalSemaphoreInfo::operator=;
VkPhysicalDeviceExternalSemaphoreInfo& (VkPhysicalDeviceExternalSemaphoreInfo::*AcidSharp_symbols1096)(VkPhysicalDeviceExternalSemaphoreInfo&&) = &VkPhysicalDeviceExternalSemaphoreInfo::operator=;
extern "C" { void AcidSharp_symbols1097(VkPhysicalDeviceExternalSemaphoreInfo* instance) { instance->~VkPhysicalDeviceExternalSemaphoreInfo(); } }
extern "C" { void AcidSharp_symbols1098(void* instance) { new (instance) VkExternalSemaphoreProperties(); } }
extern "C" { void AcidSharp_symbols1099(void* instance, const VkExternalSemaphoreProperties& _0) { new (instance) VkExternalSemaphoreProperties(_0); } }
VkExternalSemaphoreProperties& (VkExternalSemaphoreProperties::*AcidSharp_symbols1100)(const VkExternalSemaphoreProperties&) = &VkExternalSemaphoreProperties::operator=;
VkExternalSemaphoreProperties& (VkExternalSemaphoreProperties::*AcidSharp_symbols1101)(VkExternalSemaphoreProperties&&) = &VkExternalSemaphoreProperties::operator=;
extern "C" { void AcidSharp_symbols1102(VkExternalSemaphoreProperties* instance) { instance->~VkExternalSemaphoreProperties(); } }
extern "C" { void AcidSharp_symbols1103(void* instance) { new (instance) VkPhysicalDeviceMaintenance3Properties(); } }
extern "C" { void AcidSharp_symbols1104(void* instance, const VkPhysicalDeviceMaintenance3Properties& _0) { new (instance) VkPhysicalDeviceMaintenance3Properties(_0); } }
VkPhysicalDeviceMaintenance3Properties& (VkPhysicalDeviceMaintenance3Properties::*AcidSharp_symbols1105)(const VkPhysicalDeviceMaintenance3Properties&) = &VkPhysicalDeviceMaintenance3Properties::operator=;
VkPhysicalDeviceMaintenance3Properties& (VkPhysicalDeviceMaintenance3Properties::*AcidSharp_symbols1106)(VkPhysicalDeviceMaintenance3Properties&&) = &VkPhysicalDeviceMaintenance3Properties::operator=;
extern "C" { void AcidSharp_symbols1107(VkPhysicalDeviceMaintenance3Properties* instance) { instance->~VkPhysicalDeviceMaintenance3Properties(); } }
extern "C" { void AcidSharp_symbols1108(void* instance) { new (instance) VkDescriptorSetLayoutSupport(); } }
extern "C" { void AcidSharp_symbols1109(void* instance, const VkDescriptorSetLayoutSupport& _0) { new (instance) VkDescriptorSetLayoutSupport(_0); } }
VkDescriptorSetLayoutSupport& (VkDescriptorSetLayoutSupport::*AcidSharp_symbols1110)(const VkDescriptorSetLayoutSupport&) = &VkDescriptorSetLayoutSupport::operator=;
VkDescriptorSetLayoutSupport& (VkDescriptorSetLayoutSupport::*AcidSharp_symbols1111)(VkDescriptorSetLayoutSupport&&) = &VkDescriptorSetLayoutSupport::operator=;
extern "C" { void AcidSharp_symbols1112(VkDescriptorSetLayoutSupport* instance) { instance->~VkDescriptorSetLayoutSupport(); } }
extern "C" { void AcidSharp_symbols1113(void* instance) { new (instance) VkPhysicalDeviceShaderDrawParameterFeatures(); } }
extern "C" { void AcidSharp_symbols1114(void* instance, const VkPhysicalDeviceShaderDrawParameterFeatures& _0) { new (instance) VkPhysicalDeviceShaderDrawParameterFeatures(_0); } }
VkPhysicalDeviceShaderDrawParameterFeatures& (VkPhysicalDeviceShaderDrawParameterFeatures::*AcidSharp_symbols1115)(const VkPhysicalDeviceShaderDrawParameterFeatures&) = &VkPhysicalDeviceShaderDrawParameterFeatures::operator=;
VkPhysicalDeviceShaderDrawParameterFeatures& (VkPhysicalDeviceShaderDrawParameterFeatures::*AcidSharp_symbols1116)(VkPhysicalDeviceShaderDrawParameterFeatures&&) = &VkPhysicalDeviceShaderDrawParameterFeatures::operator=;
extern "C" { void AcidSharp_symbols1117(VkPhysicalDeviceShaderDrawParameterFeatures* instance) { instance->~VkPhysicalDeviceShaderDrawParameterFeatures(); } }
extern "C" { void AcidSharp_symbols1118(void* instance, const VkSurfaceCapabilitiesKHR& _0) { new (instance) VkSurfaceCapabilitiesKHR(_0); } }
extern "C" { void AcidSharp_symbols1119(VkSurfaceCapabilitiesKHR* instance) { instance->~VkSurfaceCapabilitiesKHR(); } }
VkSurfaceCapabilitiesKHR& (VkSurfaceCapabilitiesKHR::*AcidSharp_symbols1120)(const VkSurfaceCapabilitiesKHR&) = &VkSurfaceCapabilitiesKHR::operator=;
VkSurfaceCapabilitiesKHR& (VkSurfaceCapabilitiesKHR::*AcidSharp_symbols1121)(VkSurfaceCapabilitiesKHR&&) = &VkSurfaceCapabilitiesKHR::operator=;
extern "C" { void AcidSharp_symbols1122(void* instance) { new (instance) VkSurfaceCapabilitiesKHR(); } }
extern "C" { void AcidSharp_symbols1123(void* instance, const VkSurfaceFormatKHR& _0) { new (instance) VkSurfaceFormatKHR(_0); } }
extern "C" { void AcidSharp_symbols1124(VkSurfaceFormatKHR* instance) { instance->~VkSurfaceFormatKHR(); } }
VkSurfaceFormatKHR& (VkSurfaceFormatKHR::*AcidSharp_symbols1125)(const VkSurfaceFormatKHR&) = &VkSurfaceFormatKHR::operator=;
VkSurfaceFormatKHR& (VkSurfaceFormatKHR::*AcidSharp_symbols1126)(VkSurfaceFormatKHR&&) = &VkSurfaceFormatKHR::operator=;
extern "C" { void AcidSharp_symbols1127(void* instance) { new (instance) VkSurfaceFormatKHR(); } }
extern "C" { void AcidSharp_symbols1128(void* instance) { new (instance) VkSwapchainCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols1129(void* instance, const VkSwapchainCreateInfoKHR& _0) { new (instance) VkSwapchainCreateInfoKHR(_0); } }
VkSwapchainCreateInfoKHR& (VkSwapchainCreateInfoKHR::*AcidSharp_symbols1130)(const VkSwapchainCreateInfoKHR&) = &VkSwapchainCreateInfoKHR::operator=;
VkSwapchainCreateInfoKHR& (VkSwapchainCreateInfoKHR::*AcidSharp_symbols1131)(VkSwapchainCreateInfoKHR&&) = &VkSwapchainCreateInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1132(VkSwapchainCreateInfoKHR* instance) { instance->~VkSwapchainCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols1133(void* instance) { new (instance) VkPresentInfoKHR(); } }
extern "C" { void AcidSharp_symbols1134(void* instance, const VkPresentInfoKHR& _0) { new (instance) VkPresentInfoKHR(_0); } }
VkPresentInfoKHR& (VkPresentInfoKHR::*AcidSharp_symbols1135)(const VkPresentInfoKHR&) = &VkPresentInfoKHR::operator=;
VkPresentInfoKHR& (VkPresentInfoKHR::*AcidSharp_symbols1136)(VkPresentInfoKHR&&) = &VkPresentInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1137(VkPresentInfoKHR* instance) { instance->~VkPresentInfoKHR(); } }
extern "C" { void AcidSharp_symbols1138(void* instance) { new (instance) VkImageSwapchainCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols1139(void* instance, const VkImageSwapchainCreateInfoKHR& _0) { new (instance) VkImageSwapchainCreateInfoKHR(_0); } }
VkImageSwapchainCreateInfoKHR& (VkImageSwapchainCreateInfoKHR::*AcidSharp_symbols1140)(const VkImageSwapchainCreateInfoKHR&) = &VkImageSwapchainCreateInfoKHR::operator=;
VkImageSwapchainCreateInfoKHR& (VkImageSwapchainCreateInfoKHR::*AcidSharp_symbols1141)(VkImageSwapchainCreateInfoKHR&&) = &VkImageSwapchainCreateInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1142(VkImageSwapchainCreateInfoKHR* instance) { instance->~VkImageSwapchainCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols1143(void* instance) { new (instance) VkBindImageMemorySwapchainInfoKHR(); } }
extern "C" { void AcidSharp_symbols1144(void* instance, const VkBindImageMemorySwapchainInfoKHR& _0) { new (instance) VkBindImageMemorySwapchainInfoKHR(_0); } }
VkBindImageMemorySwapchainInfoKHR& (VkBindImageMemorySwapchainInfoKHR::*AcidSharp_symbols1145)(const VkBindImageMemorySwapchainInfoKHR&) = &VkBindImageMemorySwapchainInfoKHR::operator=;
VkBindImageMemorySwapchainInfoKHR& (VkBindImageMemorySwapchainInfoKHR::*AcidSharp_symbols1146)(VkBindImageMemorySwapchainInfoKHR&&) = &VkBindImageMemorySwapchainInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1147(VkBindImageMemorySwapchainInfoKHR* instance) { instance->~VkBindImageMemorySwapchainInfoKHR(); } }
extern "C" { void AcidSharp_symbols1148(void* instance) { new (instance) VkAcquireNextImageInfoKHR(); } }
extern "C" { void AcidSharp_symbols1149(void* instance, const VkAcquireNextImageInfoKHR& _0) { new (instance) VkAcquireNextImageInfoKHR(_0); } }
VkAcquireNextImageInfoKHR& (VkAcquireNextImageInfoKHR::*AcidSharp_symbols1150)(const VkAcquireNextImageInfoKHR&) = &VkAcquireNextImageInfoKHR::operator=;
VkAcquireNextImageInfoKHR& (VkAcquireNextImageInfoKHR::*AcidSharp_symbols1151)(VkAcquireNextImageInfoKHR&&) = &VkAcquireNextImageInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1152(VkAcquireNextImageInfoKHR* instance) { instance->~VkAcquireNextImageInfoKHR(); } }
extern "C" { void AcidSharp_symbols1153(void* instance) { new (instance) VkDeviceGroupPresentCapabilitiesKHR(); } }
extern "C" { void AcidSharp_symbols1154(void* instance, const VkDeviceGroupPresentCapabilitiesKHR& _0) { new (instance) VkDeviceGroupPresentCapabilitiesKHR(_0); } }
VkDeviceGroupPresentCapabilitiesKHR& (VkDeviceGroupPresentCapabilitiesKHR::*AcidSharp_symbols1155)(const VkDeviceGroupPresentCapabilitiesKHR&) = &VkDeviceGroupPresentCapabilitiesKHR::operator=;
VkDeviceGroupPresentCapabilitiesKHR& (VkDeviceGroupPresentCapabilitiesKHR::*AcidSharp_symbols1156)(VkDeviceGroupPresentCapabilitiesKHR&&) = &VkDeviceGroupPresentCapabilitiesKHR::operator=;
extern "C" { void AcidSharp_symbols1157(VkDeviceGroupPresentCapabilitiesKHR* instance) { instance->~VkDeviceGroupPresentCapabilitiesKHR(); } }
extern "C" { void AcidSharp_symbols1158(void* instance) { new (instance) VkDeviceGroupPresentInfoKHR(); } }
extern "C" { void AcidSharp_symbols1159(void* instance, const VkDeviceGroupPresentInfoKHR& _0) { new (instance) VkDeviceGroupPresentInfoKHR(_0); } }
VkDeviceGroupPresentInfoKHR& (VkDeviceGroupPresentInfoKHR::*AcidSharp_symbols1160)(const VkDeviceGroupPresentInfoKHR&) = &VkDeviceGroupPresentInfoKHR::operator=;
VkDeviceGroupPresentInfoKHR& (VkDeviceGroupPresentInfoKHR::*AcidSharp_symbols1161)(VkDeviceGroupPresentInfoKHR&&) = &VkDeviceGroupPresentInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1162(VkDeviceGroupPresentInfoKHR* instance) { instance->~VkDeviceGroupPresentInfoKHR(); } }
extern "C" { void AcidSharp_symbols1163(void* instance) { new (instance) VkDeviceGroupSwapchainCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols1164(void* instance, const VkDeviceGroupSwapchainCreateInfoKHR& _0) { new (instance) VkDeviceGroupSwapchainCreateInfoKHR(_0); } }
VkDeviceGroupSwapchainCreateInfoKHR& (VkDeviceGroupSwapchainCreateInfoKHR::*AcidSharp_symbols1165)(const VkDeviceGroupSwapchainCreateInfoKHR&) = &VkDeviceGroupSwapchainCreateInfoKHR::operator=;
VkDeviceGroupSwapchainCreateInfoKHR& (VkDeviceGroupSwapchainCreateInfoKHR::*AcidSharp_symbols1166)(VkDeviceGroupSwapchainCreateInfoKHR&&) = &VkDeviceGroupSwapchainCreateInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1167(VkDeviceGroupSwapchainCreateInfoKHR* instance) { instance->~VkDeviceGroupSwapchainCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols1168(void* instance) { new (instance) VkDisplayPropertiesKHR(); } }
extern "C" { void AcidSharp_symbols1169(void* instance, const VkDisplayPropertiesKHR& _0) { new (instance) VkDisplayPropertiesKHR(_0); } }
VkDisplayPropertiesKHR& (VkDisplayPropertiesKHR::*AcidSharp_symbols1170)(const VkDisplayPropertiesKHR&) = &VkDisplayPropertiesKHR::operator=;
VkDisplayPropertiesKHR& (VkDisplayPropertiesKHR::*AcidSharp_symbols1171)(VkDisplayPropertiesKHR&&) = &VkDisplayPropertiesKHR::operator=;
extern "C" { void AcidSharp_symbols1172(VkDisplayPropertiesKHR* instance) { instance->~VkDisplayPropertiesKHR(); } }
extern "C" { void AcidSharp_symbols1173(void* instance) { new (instance) VkDisplayModeParametersKHR(); } }
extern "C" { void AcidSharp_symbols1174(void* instance, const VkDisplayModeParametersKHR& _0) { new (instance) VkDisplayModeParametersKHR(_0); } }
VkDisplayModeParametersKHR& (VkDisplayModeParametersKHR::*AcidSharp_symbols1175)(const VkDisplayModeParametersKHR&) = &VkDisplayModeParametersKHR::operator=;
VkDisplayModeParametersKHR& (VkDisplayModeParametersKHR::*AcidSharp_symbols1176)(VkDisplayModeParametersKHR&&) = &VkDisplayModeParametersKHR::operator=;
extern "C" { void AcidSharp_symbols1177(VkDisplayModeParametersKHR* instance) { instance->~VkDisplayModeParametersKHR(); } }
extern "C" { void AcidSharp_symbols1178(void* instance) { new (instance) VkDisplayModePropertiesKHR(); } }
extern "C" { void AcidSharp_symbols1179(void* instance, const VkDisplayModePropertiesKHR& _0) { new (instance) VkDisplayModePropertiesKHR(_0); } }
VkDisplayModePropertiesKHR& (VkDisplayModePropertiesKHR::*AcidSharp_symbols1180)(const VkDisplayModePropertiesKHR&) = &VkDisplayModePropertiesKHR::operator=;
VkDisplayModePropertiesKHR& (VkDisplayModePropertiesKHR::*AcidSharp_symbols1181)(VkDisplayModePropertiesKHR&&) = &VkDisplayModePropertiesKHR::operator=;
extern "C" { void AcidSharp_symbols1182(VkDisplayModePropertiesKHR* instance) { instance->~VkDisplayModePropertiesKHR(); } }
extern "C" { void AcidSharp_symbols1183(void* instance) { new (instance) VkDisplayModeCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols1184(void* instance, const VkDisplayModeCreateInfoKHR& _0) { new (instance) VkDisplayModeCreateInfoKHR(_0); } }
VkDisplayModeCreateInfoKHR& (VkDisplayModeCreateInfoKHR::*AcidSharp_symbols1185)(const VkDisplayModeCreateInfoKHR&) = &VkDisplayModeCreateInfoKHR::operator=;
VkDisplayModeCreateInfoKHR& (VkDisplayModeCreateInfoKHR::*AcidSharp_symbols1186)(VkDisplayModeCreateInfoKHR&&) = &VkDisplayModeCreateInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1187(VkDisplayModeCreateInfoKHR* instance) { instance->~VkDisplayModeCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols1188(void* instance) { new (instance) VkDisplayPlaneCapabilitiesKHR(); } }
extern "C" { void AcidSharp_symbols1189(void* instance, const VkDisplayPlaneCapabilitiesKHR& _0) { new (instance) VkDisplayPlaneCapabilitiesKHR(_0); } }
VkDisplayPlaneCapabilitiesKHR& (VkDisplayPlaneCapabilitiesKHR::*AcidSharp_symbols1190)(const VkDisplayPlaneCapabilitiesKHR&) = &VkDisplayPlaneCapabilitiesKHR::operator=;
VkDisplayPlaneCapabilitiesKHR& (VkDisplayPlaneCapabilitiesKHR::*AcidSharp_symbols1191)(VkDisplayPlaneCapabilitiesKHR&&) = &VkDisplayPlaneCapabilitiesKHR::operator=;
extern "C" { void AcidSharp_symbols1192(VkDisplayPlaneCapabilitiesKHR* instance) { instance->~VkDisplayPlaneCapabilitiesKHR(); } }
extern "C" { void AcidSharp_symbols1193(void* instance) { new (instance) VkDisplayPlanePropertiesKHR(); } }
extern "C" { void AcidSharp_symbols1194(void* instance, const VkDisplayPlanePropertiesKHR& _0) { new (instance) VkDisplayPlanePropertiesKHR(_0); } }
VkDisplayPlanePropertiesKHR& (VkDisplayPlanePropertiesKHR::*AcidSharp_symbols1195)(const VkDisplayPlanePropertiesKHR&) = &VkDisplayPlanePropertiesKHR::operator=;
VkDisplayPlanePropertiesKHR& (VkDisplayPlanePropertiesKHR::*AcidSharp_symbols1196)(VkDisplayPlanePropertiesKHR&&) = &VkDisplayPlanePropertiesKHR::operator=;
extern "C" { void AcidSharp_symbols1197(VkDisplayPlanePropertiesKHR* instance) { instance->~VkDisplayPlanePropertiesKHR(); } }
extern "C" { void AcidSharp_symbols1198(void* instance) { new (instance) VkDisplaySurfaceCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols1199(void* instance, const VkDisplaySurfaceCreateInfoKHR& _0) { new (instance) VkDisplaySurfaceCreateInfoKHR(_0); } }
VkDisplaySurfaceCreateInfoKHR& (VkDisplaySurfaceCreateInfoKHR::*AcidSharp_symbols1200)(const VkDisplaySurfaceCreateInfoKHR&) = &VkDisplaySurfaceCreateInfoKHR::operator=;
VkDisplaySurfaceCreateInfoKHR& (VkDisplaySurfaceCreateInfoKHR::*AcidSharp_symbols1201)(VkDisplaySurfaceCreateInfoKHR&&) = &VkDisplaySurfaceCreateInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1202(VkDisplaySurfaceCreateInfoKHR* instance) { instance->~VkDisplaySurfaceCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols1203(void* instance) { new (instance) VkDisplayPresentInfoKHR(); } }
extern "C" { void AcidSharp_symbols1204(void* instance, const VkDisplayPresentInfoKHR& _0) { new (instance) VkDisplayPresentInfoKHR(_0); } }
VkDisplayPresentInfoKHR& (VkDisplayPresentInfoKHR::*AcidSharp_symbols1205)(const VkDisplayPresentInfoKHR&) = &VkDisplayPresentInfoKHR::operator=;
VkDisplayPresentInfoKHR& (VkDisplayPresentInfoKHR::*AcidSharp_symbols1206)(VkDisplayPresentInfoKHR&&) = &VkDisplayPresentInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1207(VkDisplayPresentInfoKHR* instance) { instance->~VkDisplayPresentInfoKHR(); } }
extern "C" { void AcidSharp_symbols1208(void* instance) { new (instance) VkImportMemoryFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols1209(void* instance, const VkImportMemoryFdInfoKHR& _0) { new (instance) VkImportMemoryFdInfoKHR(_0); } }
VkImportMemoryFdInfoKHR& (VkImportMemoryFdInfoKHR::*AcidSharp_symbols1210)(const VkImportMemoryFdInfoKHR&) = &VkImportMemoryFdInfoKHR::operator=;
VkImportMemoryFdInfoKHR& (VkImportMemoryFdInfoKHR::*AcidSharp_symbols1211)(VkImportMemoryFdInfoKHR&&) = &VkImportMemoryFdInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1212(VkImportMemoryFdInfoKHR* instance) { instance->~VkImportMemoryFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols1213(void* instance) { new (instance) VkMemoryFdPropertiesKHR(); } }
extern "C" { void AcidSharp_symbols1214(void* instance, const VkMemoryFdPropertiesKHR& _0) { new (instance) VkMemoryFdPropertiesKHR(_0); } }
VkMemoryFdPropertiesKHR& (VkMemoryFdPropertiesKHR::*AcidSharp_symbols1215)(const VkMemoryFdPropertiesKHR&) = &VkMemoryFdPropertiesKHR::operator=;
VkMemoryFdPropertiesKHR& (VkMemoryFdPropertiesKHR::*AcidSharp_symbols1216)(VkMemoryFdPropertiesKHR&&) = &VkMemoryFdPropertiesKHR::operator=;
extern "C" { void AcidSharp_symbols1217(VkMemoryFdPropertiesKHR* instance) { instance->~VkMemoryFdPropertiesKHR(); } }
extern "C" { void AcidSharp_symbols1218(void* instance) { new (instance) VkMemoryGetFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols1219(void* instance, const VkMemoryGetFdInfoKHR& _0) { new (instance) VkMemoryGetFdInfoKHR(_0); } }
VkMemoryGetFdInfoKHR& (VkMemoryGetFdInfoKHR::*AcidSharp_symbols1220)(const VkMemoryGetFdInfoKHR&) = &VkMemoryGetFdInfoKHR::operator=;
VkMemoryGetFdInfoKHR& (VkMemoryGetFdInfoKHR::*AcidSharp_symbols1221)(VkMemoryGetFdInfoKHR&&) = &VkMemoryGetFdInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1222(VkMemoryGetFdInfoKHR* instance) { instance->~VkMemoryGetFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols1223(void* instance) { new (instance) VkImportSemaphoreFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols1224(void* instance, const VkImportSemaphoreFdInfoKHR& _0) { new (instance) VkImportSemaphoreFdInfoKHR(_0); } }
VkImportSemaphoreFdInfoKHR& (VkImportSemaphoreFdInfoKHR::*AcidSharp_symbols1225)(const VkImportSemaphoreFdInfoKHR&) = &VkImportSemaphoreFdInfoKHR::operator=;
VkImportSemaphoreFdInfoKHR& (VkImportSemaphoreFdInfoKHR::*AcidSharp_symbols1226)(VkImportSemaphoreFdInfoKHR&&) = &VkImportSemaphoreFdInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1227(VkImportSemaphoreFdInfoKHR* instance) { instance->~VkImportSemaphoreFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols1228(void* instance) { new (instance) VkSemaphoreGetFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols1229(void* instance, const VkSemaphoreGetFdInfoKHR& _0) { new (instance) VkSemaphoreGetFdInfoKHR(_0); } }
VkSemaphoreGetFdInfoKHR& (VkSemaphoreGetFdInfoKHR::*AcidSharp_symbols1230)(const VkSemaphoreGetFdInfoKHR&) = &VkSemaphoreGetFdInfoKHR::operator=;
VkSemaphoreGetFdInfoKHR& (VkSemaphoreGetFdInfoKHR::*AcidSharp_symbols1231)(VkSemaphoreGetFdInfoKHR&&) = &VkSemaphoreGetFdInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1232(VkSemaphoreGetFdInfoKHR* instance) { instance->~VkSemaphoreGetFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols1233(void* instance) { new (instance) VkPhysicalDevicePushDescriptorPropertiesKHR(); } }
extern "C" { void AcidSharp_symbols1234(void* instance, const VkPhysicalDevicePushDescriptorPropertiesKHR& _0) { new (instance) VkPhysicalDevicePushDescriptorPropertiesKHR(_0); } }
VkPhysicalDevicePushDescriptorPropertiesKHR& (VkPhysicalDevicePushDescriptorPropertiesKHR::*AcidSharp_symbols1235)(const VkPhysicalDevicePushDescriptorPropertiesKHR&) = &VkPhysicalDevicePushDescriptorPropertiesKHR::operator=;
VkPhysicalDevicePushDescriptorPropertiesKHR& (VkPhysicalDevicePushDescriptorPropertiesKHR::*AcidSharp_symbols1236)(VkPhysicalDevicePushDescriptorPropertiesKHR&&) = &VkPhysicalDevicePushDescriptorPropertiesKHR::operator=;
extern "C" { void AcidSharp_symbols1237(VkPhysicalDevicePushDescriptorPropertiesKHR* instance) { instance->~VkPhysicalDevicePushDescriptorPropertiesKHR(); } }
extern "C" { void AcidSharp_symbols1238(void* instance) { new (instance) VkRectLayerKHR(); } }
extern "C" { void AcidSharp_symbols1239(void* instance, const VkRectLayerKHR& _0) { new (instance) VkRectLayerKHR(_0); } }
VkRectLayerKHR& (VkRectLayerKHR::*AcidSharp_symbols1240)(const VkRectLayerKHR&) = &VkRectLayerKHR::operator=;
VkRectLayerKHR& (VkRectLayerKHR::*AcidSharp_symbols1241)(VkRectLayerKHR&&) = &VkRectLayerKHR::operator=;
extern "C" { void AcidSharp_symbols1242(VkRectLayerKHR* instance) { instance->~VkRectLayerKHR(); } }
extern "C" { void AcidSharp_symbols1243(void* instance) { new (instance) VkPresentRegionKHR(); } }
extern "C" { void AcidSharp_symbols1244(void* instance, const VkPresentRegionKHR& _0) { new (instance) VkPresentRegionKHR(_0); } }
VkPresentRegionKHR& (VkPresentRegionKHR::*AcidSharp_symbols1245)(const VkPresentRegionKHR&) = &VkPresentRegionKHR::operator=;
VkPresentRegionKHR& (VkPresentRegionKHR::*AcidSharp_symbols1246)(VkPresentRegionKHR&&) = &VkPresentRegionKHR::operator=;
extern "C" { void AcidSharp_symbols1247(VkPresentRegionKHR* instance) { instance->~VkPresentRegionKHR(); } }
extern "C" { void AcidSharp_symbols1248(void* instance) { new (instance) VkPresentRegionsKHR(); } }
extern "C" { void AcidSharp_symbols1249(void* instance, const VkPresentRegionsKHR& _0) { new (instance) VkPresentRegionsKHR(_0); } }
VkPresentRegionsKHR& (VkPresentRegionsKHR::*AcidSharp_symbols1250)(const VkPresentRegionsKHR&) = &VkPresentRegionsKHR::operator=;
VkPresentRegionsKHR& (VkPresentRegionsKHR::*AcidSharp_symbols1251)(VkPresentRegionsKHR&&) = &VkPresentRegionsKHR::operator=;
extern "C" { void AcidSharp_symbols1252(VkPresentRegionsKHR* instance) { instance->~VkPresentRegionsKHR(); } }
extern "C" { void AcidSharp_symbols1253(void* instance) { new (instance) VkAttachmentDescription2KHR(); } }
extern "C" { void AcidSharp_symbols1254(void* instance, const VkAttachmentDescription2KHR& _0) { new (instance) VkAttachmentDescription2KHR(_0); } }
VkAttachmentDescription2KHR& (VkAttachmentDescription2KHR::*AcidSharp_symbols1255)(const VkAttachmentDescription2KHR&) = &VkAttachmentDescription2KHR::operator=;
VkAttachmentDescription2KHR& (VkAttachmentDescription2KHR::*AcidSharp_symbols1256)(VkAttachmentDescription2KHR&&) = &VkAttachmentDescription2KHR::operator=;
extern "C" { void AcidSharp_symbols1257(VkAttachmentDescription2KHR* instance) { instance->~VkAttachmentDescription2KHR(); } }
extern "C" { void AcidSharp_symbols1258(void* instance) { new (instance) VkAttachmentReference2KHR(); } }
extern "C" { void AcidSharp_symbols1259(void* instance, const VkAttachmentReference2KHR& _0) { new (instance) VkAttachmentReference2KHR(_0); } }
VkAttachmentReference2KHR& (VkAttachmentReference2KHR::*AcidSharp_symbols1260)(const VkAttachmentReference2KHR&) = &VkAttachmentReference2KHR::operator=;
VkAttachmentReference2KHR& (VkAttachmentReference2KHR::*AcidSharp_symbols1261)(VkAttachmentReference2KHR&&) = &VkAttachmentReference2KHR::operator=;
extern "C" { void AcidSharp_symbols1262(VkAttachmentReference2KHR* instance) { instance->~VkAttachmentReference2KHR(); } }
extern "C" { void AcidSharp_symbols1263(void* instance) { new (instance) VkSubpassDescription2KHR(); } }
extern "C" { void AcidSharp_symbols1264(void* instance, const VkSubpassDescription2KHR& _0) { new (instance) VkSubpassDescription2KHR(_0); } }
VkSubpassDescription2KHR& (VkSubpassDescription2KHR::*AcidSharp_symbols1265)(const VkSubpassDescription2KHR&) = &VkSubpassDescription2KHR::operator=;
VkSubpassDescription2KHR& (VkSubpassDescription2KHR::*AcidSharp_symbols1266)(VkSubpassDescription2KHR&&) = &VkSubpassDescription2KHR::operator=;
extern "C" { void AcidSharp_symbols1267(VkSubpassDescription2KHR* instance) { instance->~VkSubpassDescription2KHR(); } }
extern "C" { void AcidSharp_symbols1268(void* instance) { new (instance) VkSubpassDependency2KHR(); } }
extern "C" { void AcidSharp_symbols1269(void* instance, const VkSubpassDependency2KHR& _0) { new (instance) VkSubpassDependency2KHR(_0); } }
VkSubpassDependency2KHR& (VkSubpassDependency2KHR::*AcidSharp_symbols1270)(const VkSubpassDependency2KHR&) = &VkSubpassDependency2KHR::operator=;
VkSubpassDependency2KHR& (VkSubpassDependency2KHR::*AcidSharp_symbols1271)(VkSubpassDependency2KHR&&) = &VkSubpassDependency2KHR::operator=;
extern "C" { void AcidSharp_symbols1272(VkSubpassDependency2KHR* instance) { instance->~VkSubpassDependency2KHR(); } }
extern "C" { void AcidSharp_symbols1273(void* instance) { new (instance) VkRenderPassCreateInfo2KHR(); } }
extern "C" { void AcidSharp_symbols1274(void* instance, const VkRenderPassCreateInfo2KHR& _0) { new (instance) VkRenderPassCreateInfo2KHR(_0); } }
VkRenderPassCreateInfo2KHR& (VkRenderPassCreateInfo2KHR::*AcidSharp_symbols1275)(const VkRenderPassCreateInfo2KHR&) = &VkRenderPassCreateInfo2KHR::operator=;
VkRenderPassCreateInfo2KHR& (VkRenderPassCreateInfo2KHR::*AcidSharp_symbols1276)(VkRenderPassCreateInfo2KHR&&) = &VkRenderPassCreateInfo2KHR::operator=;
extern "C" { void AcidSharp_symbols1277(VkRenderPassCreateInfo2KHR* instance) { instance->~VkRenderPassCreateInfo2KHR(); } }
extern "C" { void AcidSharp_symbols1278(void* instance) { new (instance) VkSubpassBeginInfoKHR(); } }
extern "C" { void AcidSharp_symbols1279(void* instance, const VkSubpassBeginInfoKHR& _0) { new (instance) VkSubpassBeginInfoKHR(_0); } }
VkSubpassBeginInfoKHR& (VkSubpassBeginInfoKHR::*AcidSharp_symbols1280)(const VkSubpassBeginInfoKHR&) = &VkSubpassBeginInfoKHR::operator=;
VkSubpassBeginInfoKHR& (VkSubpassBeginInfoKHR::*AcidSharp_symbols1281)(VkSubpassBeginInfoKHR&&) = &VkSubpassBeginInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1282(VkSubpassBeginInfoKHR* instance) { instance->~VkSubpassBeginInfoKHR(); } }
extern "C" { void AcidSharp_symbols1283(void* instance) { new (instance) VkSubpassEndInfoKHR(); } }
extern "C" { void AcidSharp_symbols1284(void* instance, const VkSubpassEndInfoKHR& _0) { new (instance) VkSubpassEndInfoKHR(_0); } }
VkSubpassEndInfoKHR& (VkSubpassEndInfoKHR::*AcidSharp_symbols1285)(const VkSubpassEndInfoKHR&) = &VkSubpassEndInfoKHR::operator=;
VkSubpassEndInfoKHR& (VkSubpassEndInfoKHR::*AcidSharp_symbols1286)(VkSubpassEndInfoKHR&&) = &VkSubpassEndInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1287(VkSubpassEndInfoKHR* instance) { instance->~VkSubpassEndInfoKHR(); } }
extern "C" { void AcidSharp_symbols1288(void* instance) { new (instance) VkSharedPresentSurfaceCapabilitiesKHR(); } }
extern "C" { void AcidSharp_symbols1289(void* instance, const VkSharedPresentSurfaceCapabilitiesKHR& _0) { new (instance) VkSharedPresentSurfaceCapabilitiesKHR(_0); } }
VkSharedPresentSurfaceCapabilitiesKHR& (VkSharedPresentSurfaceCapabilitiesKHR::*AcidSharp_symbols1290)(const VkSharedPresentSurfaceCapabilitiesKHR&) = &VkSharedPresentSurfaceCapabilitiesKHR::operator=;
VkSharedPresentSurfaceCapabilitiesKHR& (VkSharedPresentSurfaceCapabilitiesKHR::*AcidSharp_symbols1291)(VkSharedPresentSurfaceCapabilitiesKHR&&) = &VkSharedPresentSurfaceCapabilitiesKHR::operator=;
extern "C" { void AcidSharp_symbols1292(VkSharedPresentSurfaceCapabilitiesKHR* instance) { instance->~VkSharedPresentSurfaceCapabilitiesKHR(); } }
extern "C" { void AcidSharp_symbols1293(void* instance) { new (instance) VkImportFenceFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols1294(void* instance, const VkImportFenceFdInfoKHR& _0) { new (instance) VkImportFenceFdInfoKHR(_0); } }
VkImportFenceFdInfoKHR& (VkImportFenceFdInfoKHR::*AcidSharp_symbols1295)(const VkImportFenceFdInfoKHR&) = &VkImportFenceFdInfoKHR::operator=;
VkImportFenceFdInfoKHR& (VkImportFenceFdInfoKHR::*AcidSharp_symbols1296)(VkImportFenceFdInfoKHR&&) = &VkImportFenceFdInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1297(VkImportFenceFdInfoKHR* instance) { instance->~VkImportFenceFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols1298(void* instance) { new (instance) VkFenceGetFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols1299(void* instance, const VkFenceGetFdInfoKHR& _0) { new (instance) VkFenceGetFdInfoKHR(_0); } }
VkFenceGetFdInfoKHR& (VkFenceGetFdInfoKHR::*AcidSharp_symbols1300)(const VkFenceGetFdInfoKHR&) = &VkFenceGetFdInfoKHR::operator=;
VkFenceGetFdInfoKHR& (VkFenceGetFdInfoKHR::*AcidSharp_symbols1301)(VkFenceGetFdInfoKHR&&) = &VkFenceGetFdInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1302(VkFenceGetFdInfoKHR* instance) { instance->~VkFenceGetFdInfoKHR(); } }
extern "C" { void AcidSharp_symbols1303(void* instance) { new (instance) VkPhysicalDeviceSurfaceInfo2KHR(); } }
extern "C" { void AcidSharp_symbols1304(void* instance, const VkPhysicalDeviceSurfaceInfo2KHR& _0) { new (instance) VkPhysicalDeviceSurfaceInfo2KHR(_0); } }
VkPhysicalDeviceSurfaceInfo2KHR& (VkPhysicalDeviceSurfaceInfo2KHR::*AcidSharp_symbols1305)(const VkPhysicalDeviceSurfaceInfo2KHR&) = &VkPhysicalDeviceSurfaceInfo2KHR::operator=;
VkPhysicalDeviceSurfaceInfo2KHR& (VkPhysicalDeviceSurfaceInfo2KHR::*AcidSharp_symbols1306)(VkPhysicalDeviceSurfaceInfo2KHR&&) = &VkPhysicalDeviceSurfaceInfo2KHR::operator=;
extern "C" { void AcidSharp_symbols1307(VkPhysicalDeviceSurfaceInfo2KHR* instance) { instance->~VkPhysicalDeviceSurfaceInfo2KHR(); } }
extern "C" { void AcidSharp_symbols1308(void* instance) { new (instance) VkSurfaceCapabilities2KHR(); } }
extern "C" { void AcidSharp_symbols1309(void* instance, const VkSurfaceCapabilities2KHR& _0) { new (instance) VkSurfaceCapabilities2KHR(_0); } }
VkSurfaceCapabilities2KHR& (VkSurfaceCapabilities2KHR::*AcidSharp_symbols1310)(const VkSurfaceCapabilities2KHR&) = &VkSurfaceCapabilities2KHR::operator=;
VkSurfaceCapabilities2KHR& (VkSurfaceCapabilities2KHR::*AcidSharp_symbols1311)(VkSurfaceCapabilities2KHR&&) = &VkSurfaceCapabilities2KHR::operator=;
extern "C" { void AcidSharp_symbols1312(VkSurfaceCapabilities2KHR* instance) { instance->~VkSurfaceCapabilities2KHR(); } }
extern "C" { void AcidSharp_symbols1313(void* instance) { new (instance) VkSurfaceFormat2KHR(); } }
extern "C" { void AcidSharp_symbols1314(void* instance, const VkSurfaceFormat2KHR& _0) { new (instance) VkSurfaceFormat2KHR(_0); } }
VkSurfaceFormat2KHR& (VkSurfaceFormat2KHR::*AcidSharp_symbols1315)(const VkSurfaceFormat2KHR&) = &VkSurfaceFormat2KHR::operator=;
VkSurfaceFormat2KHR& (VkSurfaceFormat2KHR::*AcidSharp_symbols1316)(VkSurfaceFormat2KHR&&) = &VkSurfaceFormat2KHR::operator=;
extern "C" { void AcidSharp_symbols1317(VkSurfaceFormat2KHR* instance) { instance->~VkSurfaceFormat2KHR(); } }
extern "C" { void AcidSharp_symbols1318(void* instance) { new (instance) VkDisplayProperties2KHR(); } }
extern "C" { void AcidSharp_symbols1319(void* instance, const VkDisplayProperties2KHR& _0) { new (instance) VkDisplayProperties2KHR(_0); } }
VkDisplayProperties2KHR& (VkDisplayProperties2KHR::*AcidSharp_symbols1320)(const VkDisplayProperties2KHR&) = &VkDisplayProperties2KHR::operator=;
VkDisplayProperties2KHR& (VkDisplayProperties2KHR::*AcidSharp_symbols1321)(VkDisplayProperties2KHR&&) = &VkDisplayProperties2KHR::operator=;
extern "C" { void AcidSharp_symbols1322(VkDisplayProperties2KHR* instance) { instance->~VkDisplayProperties2KHR(); } }
extern "C" { void AcidSharp_symbols1323(void* instance) { new (instance) VkDisplayPlaneProperties2KHR(); } }
extern "C" { void AcidSharp_symbols1324(void* instance, const VkDisplayPlaneProperties2KHR& _0) { new (instance) VkDisplayPlaneProperties2KHR(_0); } }
VkDisplayPlaneProperties2KHR& (VkDisplayPlaneProperties2KHR::*AcidSharp_symbols1325)(const VkDisplayPlaneProperties2KHR&) = &VkDisplayPlaneProperties2KHR::operator=;
VkDisplayPlaneProperties2KHR& (VkDisplayPlaneProperties2KHR::*AcidSharp_symbols1326)(VkDisplayPlaneProperties2KHR&&) = &VkDisplayPlaneProperties2KHR::operator=;
extern "C" { void AcidSharp_symbols1327(VkDisplayPlaneProperties2KHR* instance) { instance->~VkDisplayPlaneProperties2KHR(); } }
extern "C" { void AcidSharp_symbols1328(void* instance) { new (instance) VkDisplayModeProperties2KHR(); } }
extern "C" { void AcidSharp_symbols1329(void* instance, const VkDisplayModeProperties2KHR& _0) { new (instance) VkDisplayModeProperties2KHR(_0); } }
VkDisplayModeProperties2KHR& (VkDisplayModeProperties2KHR::*AcidSharp_symbols1330)(const VkDisplayModeProperties2KHR&) = &VkDisplayModeProperties2KHR::operator=;
VkDisplayModeProperties2KHR& (VkDisplayModeProperties2KHR::*AcidSharp_symbols1331)(VkDisplayModeProperties2KHR&&) = &VkDisplayModeProperties2KHR::operator=;
extern "C" { void AcidSharp_symbols1332(VkDisplayModeProperties2KHR* instance) { instance->~VkDisplayModeProperties2KHR(); } }
extern "C" { void AcidSharp_symbols1333(void* instance) { new (instance) VkDisplayPlaneInfo2KHR(); } }
extern "C" { void AcidSharp_symbols1334(void* instance, const VkDisplayPlaneInfo2KHR& _0) { new (instance) VkDisplayPlaneInfo2KHR(_0); } }
VkDisplayPlaneInfo2KHR& (VkDisplayPlaneInfo2KHR::*AcidSharp_symbols1335)(const VkDisplayPlaneInfo2KHR&) = &VkDisplayPlaneInfo2KHR::operator=;
VkDisplayPlaneInfo2KHR& (VkDisplayPlaneInfo2KHR::*AcidSharp_symbols1336)(VkDisplayPlaneInfo2KHR&&) = &VkDisplayPlaneInfo2KHR::operator=;
extern "C" { void AcidSharp_symbols1337(VkDisplayPlaneInfo2KHR* instance) { instance->~VkDisplayPlaneInfo2KHR(); } }
extern "C" { void AcidSharp_symbols1338(void* instance) { new (instance) VkDisplayPlaneCapabilities2KHR(); } }
extern "C" { void AcidSharp_symbols1339(void* instance, const VkDisplayPlaneCapabilities2KHR& _0) { new (instance) VkDisplayPlaneCapabilities2KHR(_0); } }
VkDisplayPlaneCapabilities2KHR& (VkDisplayPlaneCapabilities2KHR::*AcidSharp_symbols1340)(const VkDisplayPlaneCapabilities2KHR&) = &VkDisplayPlaneCapabilities2KHR::operator=;
VkDisplayPlaneCapabilities2KHR& (VkDisplayPlaneCapabilities2KHR::*AcidSharp_symbols1341)(VkDisplayPlaneCapabilities2KHR&&) = &VkDisplayPlaneCapabilities2KHR::operator=;
extern "C" { void AcidSharp_symbols1342(VkDisplayPlaneCapabilities2KHR* instance) { instance->~VkDisplayPlaneCapabilities2KHR(); } }
extern "C" { void AcidSharp_symbols1343(void* instance) { new (instance) VkImageFormatListCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols1344(void* instance, const VkImageFormatListCreateInfoKHR& _0) { new (instance) VkImageFormatListCreateInfoKHR(_0); } }
VkImageFormatListCreateInfoKHR& (VkImageFormatListCreateInfoKHR::*AcidSharp_symbols1345)(const VkImageFormatListCreateInfoKHR&) = &VkImageFormatListCreateInfoKHR::operator=;
VkImageFormatListCreateInfoKHR& (VkImageFormatListCreateInfoKHR::*AcidSharp_symbols1346)(VkImageFormatListCreateInfoKHR&&) = &VkImageFormatListCreateInfoKHR::operator=;
extern "C" { void AcidSharp_symbols1347(VkImageFormatListCreateInfoKHR* instance) { instance->~VkImageFormatListCreateInfoKHR(); } }
extern "C" { void AcidSharp_symbols1348(void* instance) { new (instance) VkPhysicalDevice8BitStorageFeaturesKHR(); } }
extern "C" { void AcidSharp_symbols1349(void* instance, const VkPhysicalDevice8BitStorageFeaturesKHR& _0) { new (instance) VkPhysicalDevice8BitStorageFeaturesKHR(_0); } }
VkPhysicalDevice8BitStorageFeaturesKHR& (VkPhysicalDevice8BitStorageFeaturesKHR::*AcidSharp_symbols1350)(const VkPhysicalDevice8BitStorageFeaturesKHR&) = &VkPhysicalDevice8BitStorageFeaturesKHR::operator=;
VkPhysicalDevice8BitStorageFeaturesKHR& (VkPhysicalDevice8BitStorageFeaturesKHR::*AcidSharp_symbols1351)(VkPhysicalDevice8BitStorageFeaturesKHR&&) = &VkPhysicalDevice8BitStorageFeaturesKHR::operator=;
extern "C" { void AcidSharp_symbols1352(VkPhysicalDevice8BitStorageFeaturesKHR* instance) { instance->~VkPhysicalDevice8BitStorageFeaturesKHR(); } }
extern "C" { void AcidSharp_symbols1353(void* instance) { new (instance) VkDebugReportCallbackCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1354(void* instance, const VkDebugReportCallbackCreateInfoEXT& _0) { new (instance) VkDebugReportCallbackCreateInfoEXT(_0); } }
VkDebugReportCallbackCreateInfoEXT& (VkDebugReportCallbackCreateInfoEXT::*AcidSharp_symbols1355)(const VkDebugReportCallbackCreateInfoEXT&) = &VkDebugReportCallbackCreateInfoEXT::operator=;
VkDebugReportCallbackCreateInfoEXT& (VkDebugReportCallbackCreateInfoEXT::*AcidSharp_symbols1356)(VkDebugReportCallbackCreateInfoEXT&&) = &VkDebugReportCallbackCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1357(VkDebugReportCallbackCreateInfoEXT* instance) { instance->~VkDebugReportCallbackCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1358(void* instance) { new (instance) VkPipelineRasterizationStateRasterizationOrderAMD(); } }
extern "C" { void AcidSharp_symbols1359(void* instance, const VkPipelineRasterizationStateRasterizationOrderAMD& _0) { new (instance) VkPipelineRasterizationStateRasterizationOrderAMD(_0); } }
VkPipelineRasterizationStateRasterizationOrderAMD& (VkPipelineRasterizationStateRasterizationOrderAMD::*AcidSharp_symbols1360)(const VkPipelineRasterizationStateRasterizationOrderAMD&) = &VkPipelineRasterizationStateRasterizationOrderAMD::operator=;
VkPipelineRasterizationStateRasterizationOrderAMD& (VkPipelineRasterizationStateRasterizationOrderAMD::*AcidSharp_symbols1361)(VkPipelineRasterizationStateRasterizationOrderAMD&&) = &VkPipelineRasterizationStateRasterizationOrderAMD::operator=;
extern "C" { void AcidSharp_symbols1362(VkPipelineRasterizationStateRasterizationOrderAMD* instance) { instance->~VkPipelineRasterizationStateRasterizationOrderAMD(); } }
extern "C" { void AcidSharp_symbols1363(void* instance) { new (instance) VkDebugMarkerObjectNameInfoEXT(); } }
extern "C" { void AcidSharp_symbols1364(void* instance, const VkDebugMarkerObjectNameInfoEXT& _0) { new (instance) VkDebugMarkerObjectNameInfoEXT(_0); } }
VkDebugMarkerObjectNameInfoEXT& (VkDebugMarkerObjectNameInfoEXT::*AcidSharp_symbols1365)(const VkDebugMarkerObjectNameInfoEXT&) = &VkDebugMarkerObjectNameInfoEXT::operator=;
VkDebugMarkerObjectNameInfoEXT& (VkDebugMarkerObjectNameInfoEXT::*AcidSharp_symbols1366)(VkDebugMarkerObjectNameInfoEXT&&) = &VkDebugMarkerObjectNameInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1367(VkDebugMarkerObjectNameInfoEXT* instance) { instance->~VkDebugMarkerObjectNameInfoEXT(); } }
extern "C" { void AcidSharp_symbols1368(void* instance) { new (instance) VkDebugMarkerObjectTagInfoEXT(); } }
extern "C" { void AcidSharp_symbols1369(void* instance, const VkDebugMarkerObjectTagInfoEXT& _0) { new (instance) VkDebugMarkerObjectTagInfoEXT(_0); } }
VkDebugMarkerObjectTagInfoEXT& (VkDebugMarkerObjectTagInfoEXT::*AcidSharp_symbols1370)(const VkDebugMarkerObjectTagInfoEXT&) = &VkDebugMarkerObjectTagInfoEXT::operator=;
VkDebugMarkerObjectTagInfoEXT& (VkDebugMarkerObjectTagInfoEXT::*AcidSharp_symbols1371)(VkDebugMarkerObjectTagInfoEXT&&) = &VkDebugMarkerObjectTagInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1372(VkDebugMarkerObjectTagInfoEXT* instance) { instance->~VkDebugMarkerObjectTagInfoEXT(); } }
extern "C" { void AcidSharp_symbols1373(void* instance) { new (instance) VkDebugMarkerMarkerInfoEXT(); } }
extern "C" { void AcidSharp_symbols1374(void* instance, const VkDebugMarkerMarkerInfoEXT& _0) { new (instance) VkDebugMarkerMarkerInfoEXT(_0); } }
VkDebugMarkerMarkerInfoEXT& (VkDebugMarkerMarkerInfoEXT::*AcidSharp_symbols1375)(const VkDebugMarkerMarkerInfoEXT&) = &VkDebugMarkerMarkerInfoEXT::operator=;
VkDebugMarkerMarkerInfoEXT& (VkDebugMarkerMarkerInfoEXT::*AcidSharp_symbols1376)(VkDebugMarkerMarkerInfoEXT&&) = &VkDebugMarkerMarkerInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1377(VkDebugMarkerMarkerInfoEXT* instance) { instance->~VkDebugMarkerMarkerInfoEXT(); } }
extern "C" { void AcidSharp_symbols1378(void* instance) { new (instance) VkDedicatedAllocationImageCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1379(void* instance, const VkDedicatedAllocationImageCreateInfoNV& _0) { new (instance) VkDedicatedAllocationImageCreateInfoNV(_0); } }
VkDedicatedAllocationImageCreateInfoNV& (VkDedicatedAllocationImageCreateInfoNV::*AcidSharp_symbols1380)(const VkDedicatedAllocationImageCreateInfoNV&) = &VkDedicatedAllocationImageCreateInfoNV::operator=;
VkDedicatedAllocationImageCreateInfoNV& (VkDedicatedAllocationImageCreateInfoNV::*AcidSharp_symbols1381)(VkDedicatedAllocationImageCreateInfoNV&&) = &VkDedicatedAllocationImageCreateInfoNV::operator=;
extern "C" { void AcidSharp_symbols1382(VkDedicatedAllocationImageCreateInfoNV* instance) { instance->~VkDedicatedAllocationImageCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1383(void* instance) { new (instance) VkDedicatedAllocationBufferCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1384(void* instance, const VkDedicatedAllocationBufferCreateInfoNV& _0) { new (instance) VkDedicatedAllocationBufferCreateInfoNV(_0); } }
VkDedicatedAllocationBufferCreateInfoNV& (VkDedicatedAllocationBufferCreateInfoNV::*AcidSharp_symbols1385)(const VkDedicatedAllocationBufferCreateInfoNV&) = &VkDedicatedAllocationBufferCreateInfoNV::operator=;
VkDedicatedAllocationBufferCreateInfoNV& (VkDedicatedAllocationBufferCreateInfoNV::*AcidSharp_symbols1386)(VkDedicatedAllocationBufferCreateInfoNV&&) = &VkDedicatedAllocationBufferCreateInfoNV::operator=;
extern "C" { void AcidSharp_symbols1387(VkDedicatedAllocationBufferCreateInfoNV* instance) { instance->~VkDedicatedAllocationBufferCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1388(void* instance) { new (instance) VkDedicatedAllocationMemoryAllocateInfoNV(); } }
extern "C" { void AcidSharp_symbols1389(void* instance, const VkDedicatedAllocationMemoryAllocateInfoNV& _0) { new (instance) VkDedicatedAllocationMemoryAllocateInfoNV(_0); } }
VkDedicatedAllocationMemoryAllocateInfoNV& (VkDedicatedAllocationMemoryAllocateInfoNV::*AcidSharp_symbols1390)(const VkDedicatedAllocationMemoryAllocateInfoNV&) = &VkDedicatedAllocationMemoryAllocateInfoNV::operator=;
VkDedicatedAllocationMemoryAllocateInfoNV& (VkDedicatedAllocationMemoryAllocateInfoNV::*AcidSharp_symbols1391)(VkDedicatedAllocationMemoryAllocateInfoNV&&) = &VkDedicatedAllocationMemoryAllocateInfoNV::operator=;
extern "C" { void AcidSharp_symbols1392(VkDedicatedAllocationMemoryAllocateInfoNV* instance) { instance->~VkDedicatedAllocationMemoryAllocateInfoNV(); } }
extern "C" { void AcidSharp_symbols1393(void* instance) { new (instance) VkTextureLODGatherFormatPropertiesAMD(); } }
extern "C" { void AcidSharp_symbols1394(void* instance, const VkTextureLODGatherFormatPropertiesAMD& _0) { new (instance) VkTextureLODGatherFormatPropertiesAMD(_0); } }
VkTextureLODGatherFormatPropertiesAMD& (VkTextureLODGatherFormatPropertiesAMD::*AcidSharp_symbols1395)(const VkTextureLODGatherFormatPropertiesAMD&) = &VkTextureLODGatherFormatPropertiesAMD::operator=;
VkTextureLODGatherFormatPropertiesAMD& (VkTextureLODGatherFormatPropertiesAMD::*AcidSharp_symbols1396)(VkTextureLODGatherFormatPropertiesAMD&&) = &VkTextureLODGatherFormatPropertiesAMD::operator=;
extern "C" { void AcidSharp_symbols1397(VkTextureLODGatherFormatPropertiesAMD* instance) { instance->~VkTextureLODGatherFormatPropertiesAMD(); } }
extern "C" { void AcidSharp_symbols1398(void* instance) { new (instance) VkShaderResourceUsageAMD(); } }
extern "C" { void AcidSharp_symbols1399(void* instance, const VkShaderResourceUsageAMD& _0) { new (instance) VkShaderResourceUsageAMD(_0); } }
VkShaderResourceUsageAMD& (VkShaderResourceUsageAMD::*AcidSharp_symbols1400)(const VkShaderResourceUsageAMD&) = &VkShaderResourceUsageAMD::operator=;
VkShaderResourceUsageAMD& (VkShaderResourceUsageAMD::*AcidSharp_symbols1401)(VkShaderResourceUsageAMD&&) = &VkShaderResourceUsageAMD::operator=;
extern "C" { void AcidSharp_symbols1402(VkShaderResourceUsageAMD* instance) { instance->~VkShaderResourceUsageAMD(); } }
extern "C" { void AcidSharp_symbols1403(void* instance) { new (instance) VkShaderStatisticsInfoAMD(); } }
extern "C" { void AcidSharp_symbols1404(void* instance, const VkShaderStatisticsInfoAMD& _0) { new (instance) VkShaderStatisticsInfoAMD(_0); } }
VkShaderStatisticsInfoAMD& (VkShaderStatisticsInfoAMD::*AcidSharp_symbols1405)(const VkShaderStatisticsInfoAMD&) = &VkShaderStatisticsInfoAMD::operator=;
VkShaderStatisticsInfoAMD& (VkShaderStatisticsInfoAMD::*AcidSharp_symbols1406)(VkShaderStatisticsInfoAMD&&) = &VkShaderStatisticsInfoAMD::operator=;
extern "C" { void AcidSharp_symbols1407(VkShaderStatisticsInfoAMD* instance) { instance->~VkShaderStatisticsInfoAMD(); } }
extern "C" { void AcidSharp_symbols1408(void* instance) { new (instance) VkExternalImageFormatPropertiesNV(); } }
extern "C" { void AcidSharp_symbols1409(void* instance, const VkExternalImageFormatPropertiesNV& _0) { new (instance) VkExternalImageFormatPropertiesNV(_0); } }
VkExternalImageFormatPropertiesNV& (VkExternalImageFormatPropertiesNV::*AcidSharp_symbols1410)(const VkExternalImageFormatPropertiesNV&) = &VkExternalImageFormatPropertiesNV::operator=;
VkExternalImageFormatPropertiesNV& (VkExternalImageFormatPropertiesNV::*AcidSharp_symbols1411)(VkExternalImageFormatPropertiesNV&&) = &VkExternalImageFormatPropertiesNV::operator=;
extern "C" { void AcidSharp_symbols1412(VkExternalImageFormatPropertiesNV* instance) { instance->~VkExternalImageFormatPropertiesNV(); } }
extern "C" { void AcidSharp_symbols1413(void* instance) { new (instance) VkExternalMemoryImageCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1414(void* instance, const VkExternalMemoryImageCreateInfoNV& _0) { new (instance) VkExternalMemoryImageCreateInfoNV(_0); } }
VkExternalMemoryImageCreateInfoNV& (VkExternalMemoryImageCreateInfoNV::*AcidSharp_symbols1415)(const VkExternalMemoryImageCreateInfoNV&) = &VkExternalMemoryImageCreateInfoNV::operator=;
VkExternalMemoryImageCreateInfoNV& (VkExternalMemoryImageCreateInfoNV::*AcidSharp_symbols1416)(VkExternalMemoryImageCreateInfoNV&&) = &VkExternalMemoryImageCreateInfoNV::operator=;
extern "C" { void AcidSharp_symbols1417(VkExternalMemoryImageCreateInfoNV* instance) { instance->~VkExternalMemoryImageCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1418(void* instance) { new (instance) VkExportMemoryAllocateInfoNV(); } }
extern "C" { void AcidSharp_symbols1419(void* instance, const VkExportMemoryAllocateInfoNV& _0) { new (instance) VkExportMemoryAllocateInfoNV(_0); } }
VkExportMemoryAllocateInfoNV& (VkExportMemoryAllocateInfoNV::*AcidSharp_symbols1420)(const VkExportMemoryAllocateInfoNV&) = &VkExportMemoryAllocateInfoNV::operator=;
VkExportMemoryAllocateInfoNV& (VkExportMemoryAllocateInfoNV::*AcidSharp_symbols1421)(VkExportMemoryAllocateInfoNV&&) = &VkExportMemoryAllocateInfoNV::operator=;
extern "C" { void AcidSharp_symbols1422(VkExportMemoryAllocateInfoNV* instance) { instance->~VkExportMemoryAllocateInfoNV(); } }
extern "C" { void AcidSharp_symbols1423(void* instance) { new (instance) VkValidationFlagsEXT(); } }
extern "C" { void AcidSharp_symbols1424(void* instance, const VkValidationFlagsEXT& _0) { new (instance) VkValidationFlagsEXT(_0); } }
VkValidationFlagsEXT& (VkValidationFlagsEXT::*AcidSharp_symbols1425)(const VkValidationFlagsEXT&) = &VkValidationFlagsEXT::operator=;
VkValidationFlagsEXT& (VkValidationFlagsEXT::*AcidSharp_symbols1426)(VkValidationFlagsEXT&&) = &VkValidationFlagsEXT::operator=;
extern "C" { void AcidSharp_symbols1427(VkValidationFlagsEXT* instance) { instance->~VkValidationFlagsEXT(); } }
extern "C" { void AcidSharp_symbols1428(void* instance) { new (instance) VkConditionalRenderingBeginInfoEXT(); } }
extern "C" { void AcidSharp_symbols1429(void* instance, const VkConditionalRenderingBeginInfoEXT& _0) { new (instance) VkConditionalRenderingBeginInfoEXT(_0); } }
VkConditionalRenderingBeginInfoEXT& (VkConditionalRenderingBeginInfoEXT::*AcidSharp_symbols1430)(const VkConditionalRenderingBeginInfoEXT&) = &VkConditionalRenderingBeginInfoEXT::operator=;
VkConditionalRenderingBeginInfoEXT& (VkConditionalRenderingBeginInfoEXT::*AcidSharp_symbols1431)(VkConditionalRenderingBeginInfoEXT&&) = &VkConditionalRenderingBeginInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1432(VkConditionalRenderingBeginInfoEXT* instance) { instance->~VkConditionalRenderingBeginInfoEXT(); } }
extern "C" { void AcidSharp_symbols1433(void* instance) { new (instance) VkPhysicalDeviceConditionalRenderingFeaturesEXT(); } }
extern "C" { void AcidSharp_symbols1434(void* instance, const VkPhysicalDeviceConditionalRenderingFeaturesEXT& _0) { new (instance) VkPhysicalDeviceConditionalRenderingFeaturesEXT(_0); } }
VkPhysicalDeviceConditionalRenderingFeaturesEXT& (VkPhysicalDeviceConditionalRenderingFeaturesEXT::*AcidSharp_symbols1435)(const VkPhysicalDeviceConditionalRenderingFeaturesEXT&) = &VkPhysicalDeviceConditionalRenderingFeaturesEXT::operator=;
VkPhysicalDeviceConditionalRenderingFeaturesEXT& (VkPhysicalDeviceConditionalRenderingFeaturesEXT::*AcidSharp_symbols1436)(VkPhysicalDeviceConditionalRenderingFeaturesEXT&&) = &VkPhysicalDeviceConditionalRenderingFeaturesEXT::operator=;
extern "C" { void AcidSharp_symbols1437(VkPhysicalDeviceConditionalRenderingFeaturesEXT* instance) { instance->~VkPhysicalDeviceConditionalRenderingFeaturesEXT(); } }
extern "C" { void AcidSharp_symbols1438(void* instance) { new (instance) VkCommandBufferInheritanceConditionalRenderingInfoEXT(); } }
extern "C" { void AcidSharp_symbols1439(void* instance, const VkCommandBufferInheritanceConditionalRenderingInfoEXT& _0) { new (instance) VkCommandBufferInheritanceConditionalRenderingInfoEXT(_0); } }
VkCommandBufferInheritanceConditionalRenderingInfoEXT& (VkCommandBufferInheritanceConditionalRenderingInfoEXT::*AcidSharp_symbols1440)(const VkCommandBufferInheritanceConditionalRenderingInfoEXT&) = &VkCommandBufferInheritanceConditionalRenderingInfoEXT::operator=;
VkCommandBufferInheritanceConditionalRenderingInfoEXT& (VkCommandBufferInheritanceConditionalRenderingInfoEXT::*AcidSharp_symbols1441)(VkCommandBufferInheritanceConditionalRenderingInfoEXT&&) = &VkCommandBufferInheritanceConditionalRenderingInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1442(VkCommandBufferInheritanceConditionalRenderingInfoEXT* instance) { instance->~VkCommandBufferInheritanceConditionalRenderingInfoEXT(); } }
extern "C" { void AcidSharp_symbols1443(void* instance) { new (instance) VkDeviceGeneratedCommandsFeaturesNVX(); } }
extern "C" { void AcidSharp_symbols1444(void* instance, const VkDeviceGeneratedCommandsFeaturesNVX& _0) { new (instance) VkDeviceGeneratedCommandsFeaturesNVX(_0); } }
VkDeviceGeneratedCommandsFeaturesNVX& (VkDeviceGeneratedCommandsFeaturesNVX::*AcidSharp_symbols1445)(const VkDeviceGeneratedCommandsFeaturesNVX&) = &VkDeviceGeneratedCommandsFeaturesNVX::operator=;
VkDeviceGeneratedCommandsFeaturesNVX& (VkDeviceGeneratedCommandsFeaturesNVX::*AcidSharp_symbols1446)(VkDeviceGeneratedCommandsFeaturesNVX&&) = &VkDeviceGeneratedCommandsFeaturesNVX::operator=;
extern "C" { void AcidSharp_symbols1447(VkDeviceGeneratedCommandsFeaturesNVX* instance) { instance->~VkDeviceGeneratedCommandsFeaturesNVX(); } }
extern "C" { void AcidSharp_symbols1448(void* instance) { new (instance) VkDeviceGeneratedCommandsLimitsNVX(); } }
extern "C" { void AcidSharp_symbols1449(void* instance, const VkDeviceGeneratedCommandsLimitsNVX& _0) { new (instance) VkDeviceGeneratedCommandsLimitsNVX(_0); } }
VkDeviceGeneratedCommandsLimitsNVX& (VkDeviceGeneratedCommandsLimitsNVX::*AcidSharp_symbols1450)(const VkDeviceGeneratedCommandsLimitsNVX&) = &VkDeviceGeneratedCommandsLimitsNVX::operator=;
VkDeviceGeneratedCommandsLimitsNVX& (VkDeviceGeneratedCommandsLimitsNVX::*AcidSharp_symbols1451)(VkDeviceGeneratedCommandsLimitsNVX&&) = &VkDeviceGeneratedCommandsLimitsNVX::operator=;
extern "C" { void AcidSharp_symbols1452(VkDeviceGeneratedCommandsLimitsNVX* instance) { instance->~VkDeviceGeneratedCommandsLimitsNVX(); } }
extern "C" { void AcidSharp_symbols1453(void* instance) { new (instance) VkIndirectCommandsTokenNVX(); } }
extern "C" { void AcidSharp_symbols1454(void* instance, const VkIndirectCommandsTokenNVX& _0) { new (instance) VkIndirectCommandsTokenNVX(_0); } }
VkIndirectCommandsTokenNVX& (VkIndirectCommandsTokenNVX::*AcidSharp_symbols1455)(const VkIndirectCommandsTokenNVX&) = &VkIndirectCommandsTokenNVX::operator=;
VkIndirectCommandsTokenNVX& (VkIndirectCommandsTokenNVX::*AcidSharp_symbols1456)(VkIndirectCommandsTokenNVX&&) = &VkIndirectCommandsTokenNVX::operator=;
extern "C" { void AcidSharp_symbols1457(VkIndirectCommandsTokenNVX* instance) { instance->~VkIndirectCommandsTokenNVX(); } }
extern "C" { void AcidSharp_symbols1458(void* instance) { new (instance) VkIndirectCommandsLayoutTokenNVX(); } }
extern "C" { void AcidSharp_symbols1459(void* instance, const VkIndirectCommandsLayoutTokenNVX& _0) { new (instance) VkIndirectCommandsLayoutTokenNVX(_0); } }
VkIndirectCommandsLayoutTokenNVX& (VkIndirectCommandsLayoutTokenNVX::*AcidSharp_symbols1460)(const VkIndirectCommandsLayoutTokenNVX&) = &VkIndirectCommandsLayoutTokenNVX::operator=;
VkIndirectCommandsLayoutTokenNVX& (VkIndirectCommandsLayoutTokenNVX::*AcidSharp_symbols1461)(VkIndirectCommandsLayoutTokenNVX&&) = &VkIndirectCommandsLayoutTokenNVX::operator=;
extern "C" { void AcidSharp_symbols1462(VkIndirectCommandsLayoutTokenNVX* instance) { instance->~VkIndirectCommandsLayoutTokenNVX(); } }
extern "C" { void AcidSharp_symbols1463(void* instance) { new (instance) VkIndirectCommandsLayoutCreateInfoNVX(); } }
extern "C" { void AcidSharp_symbols1464(void* instance, const VkIndirectCommandsLayoutCreateInfoNVX& _0) { new (instance) VkIndirectCommandsLayoutCreateInfoNVX(_0); } }
VkIndirectCommandsLayoutCreateInfoNVX& (VkIndirectCommandsLayoutCreateInfoNVX::*AcidSharp_symbols1465)(const VkIndirectCommandsLayoutCreateInfoNVX&) = &VkIndirectCommandsLayoutCreateInfoNVX::operator=;
VkIndirectCommandsLayoutCreateInfoNVX& (VkIndirectCommandsLayoutCreateInfoNVX::*AcidSharp_symbols1466)(VkIndirectCommandsLayoutCreateInfoNVX&&) = &VkIndirectCommandsLayoutCreateInfoNVX::operator=;
extern "C" { void AcidSharp_symbols1467(VkIndirectCommandsLayoutCreateInfoNVX* instance) { instance->~VkIndirectCommandsLayoutCreateInfoNVX(); } }
extern "C" { void AcidSharp_symbols1468(void* instance) { new (instance) VkCmdProcessCommandsInfoNVX(); } }
extern "C" { void AcidSharp_symbols1469(void* instance, const VkCmdProcessCommandsInfoNVX& _0) { new (instance) VkCmdProcessCommandsInfoNVX(_0); } }
VkCmdProcessCommandsInfoNVX& (VkCmdProcessCommandsInfoNVX::*AcidSharp_symbols1470)(const VkCmdProcessCommandsInfoNVX&) = &VkCmdProcessCommandsInfoNVX::operator=;
VkCmdProcessCommandsInfoNVX& (VkCmdProcessCommandsInfoNVX::*AcidSharp_symbols1471)(VkCmdProcessCommandsInfoNVX&&) = &VkCmdProcessCommandsInfoNVX::operator=;
extern "C" { void AcidSharp_symbols1472(VkCmdProcessCommandsInfoNVX* instance) { instance->~VkCmdProcessCommandsInfoNVX(); } }
extern "C" { void AcidSharp_symbols1473(void* instance) { new (instance) VkCmdReserveSpaceForCommandsInfoNVX(); } }
extern "C" { void AcidSharp_symbols1474(void* instance, const VkCmdReserveSpaceForCommandsInfoNVX& _0) { new (instance) VkCmdReserveSpaceForCommandsInfoNVX(_0); } }
VkCmdReserveSpaceForCommandsInfoNVX& (VkCmdReserveSpaceForCommandsInfoNVX::*AcidSharp_symbols1475)(const VkCmdReserveSpaceForCommandsInfoNVX&) = &VkCmdReserveSpaceForCommandsInfoNVX::operator=;
VkCmdReserveSpaceForCommandsInfoNVX& (VkCmdReserveSpaceForCommandsInfoNVX::*AcidSharp_symbols1476)(VkCmdReserveSpaceForCommandsInfoNVX&&) = &VkCmdReserveSpaceForCommandsInfoNVX::operator=;
extern "C" { void AcidSharp_symbols1477(VkCmdReserveSpaceForCommandsInfoNVX* instance) { instance->~VkCmdReserveSpaceForCommandsInfoNVX(); } }
extern "C" { void AcidSharp_symbols1478(void* instance) { new (instance) VkObjectTableCreateInfoNVX(); } }
extern "C" { void AcidSharp_symbols1479(void* instance, const VkObjectTableCreateInfoNVX& _0) { new (instance) VkObjectTableCreateInfoNVX(_0); } }
VkObjectTableCreateInfoNVX& (VkObjectTableCreateInfoNVX::*AcidSharp_symbols1480)(const VkObjectTableCreateInfoNVX&) = &VkObjectTableCreateInfoNVX::operator=;
VkObjectTableCreateInfoNVX& (VkObjectTableCreateInfoNVX::*AcidSharp_symbols1481)(VkObjectTableCreateInfoNVX&&) = &VkObjectTableCreateInfoNVX::operator=;
extern "C" { void AcidSharp_symbols1482(VkObjectTableCreateInfoNVX* instance) { instance->~VkObjectTableCreateInfoNVX(); } }
extern "C" { void AcidSharp_symbols1483(void* instance) { new (instance) VkObjectTableEntryNVX(); } }
extern "C" { void AcidSharp_symbols1484(void* instance, const VkObjectTableEntryNVX& _0) { new (instance) VkObjectTableEntryNVX(_0); } }
VkObjectTableEntryNVX& (VkObjectTableEntryNVX::*AcidSharp_symbols1485)(const VkObjectTableEntryNVX&) = &VkObjectTableEntryNVX::operator=;
VkObjectTableEntryNVX& (VkObjectTableEntryNVX::*AcidSharp_symbols1486)(VkObjectTableEntryNVX&&) = &VkObjectTableEntryNVX::operator=;
extern "C" { void AcidSharp_symbols1487(VkObjectTableEntryNVX* instance) { instance->~VkObjectTableEntryNVX(); } }
extern "C" { void AcidSharp_symbols1488(void* instance) { new (instance) VkObjectTablePipelineEntryNVX(); } }
extern "C" { void AcidSharp_symbols1489(void* instance, const VkObjectTablePipelineEntryNVX& _0) { new (instance) VkObjectTablePipelineEntryNVX(_0); } }
VkObjectTablePipelineEntryNVX& (VkObjectTablePipelineEntryNVX::*AcidSharp_symbols1490)(const VkObjectTablePipelineEntryNVX&) = &VkObjectTablePipelineEntryNVX::operator=;
VkObjectTablePipelineEntryNVX& (VkObjectTablePipelineEntryNVX::*AcidSharp_symbols1491)(VkObjectTablePipelineEntryNVX&&) = &VkObjectTablePipelineEntryNVX::operator=;
extern "C" { void AcidSharp_symbols1492(VkObjectTablePipelineEntryNVX* instance) { instance->~VkObjectTablePipelineEntryNVX(); } }
extern "C" { void AcidSharp_symbols1493(void* instance) { new (instance) VkObjectTableDescriptorSetEntryNVX(); } }
extern "C" { void AcidSharp_symbols1494(void* instance, const VkObjectTableDescriptorSetEntryNVX& _0) { new (instance) VkObjectTableDescriptorSetEntryNVX(_0); } }
VkObjectTableDescriptorSetEntryNVX& (VkObjectTableDescriptorSetEntryNVX::*AcidSharp_symbols1495)(const VkObjectTableDescriptorSetEntryNVX&) = &VkObjectTableDescriptorSetEntryNVX::operator=;
VkObjectTableDescriptorSetEntryNVX& (VkObjectTableDescriptorSetEntryNVX::*AcidSharp_symbols1496)(VkObjectTableDescriptorSetEntryNVX&&) = &VkObjectTableDescriptorSetEntryNVX::operator=;
extern "C" { void AcidSharp_symbols1497(VkObjectTableDescriptorSetEntryNVX* instance) { instance->~VkObjectTableDescriptorSetEntryNVX(); } }
extern "C" { void AcidSharp_symbols1498(void* instance) { new (instance) VkObjectTableVertexBufferEntryNVX(); } }
extern "C" { void AcidSharp_symbols1499(void* instance, const VkObjectTableVertexBufferEntryNVX& _0) { new (instance) VkObjectTableVertexBufferEntryNVX(_0); } }
VkObjectTableVertexBufferEntryNVX& (VkObjectTableVertexBufferEntryNVX::*AcidSharp_symbols1500)(const VkObjectTableVertexBufferEntryNVX&) = &VkObjectTableVertexBufferEntryNVX::operator=;
VkObjectTableVertexBufferEntryNVX& (VkObjectTableVertexBufferEntryNVX::*AcidSharp_symbols1501)(VkObjectTableVertexBufferEntryNVX&&) = &VkObjectTableVertexBufferEntryNVX::operator=;
extern "C" { void AcidSharp_symbols1502(VkObjectTableVertexBufferEntryNVX* instance) { instance->~VkObjectTableVertexBufferEntryNVX(); } }
extern "C" { void AcidSharp_symbols1503(void* instance) { new (instance) VkObjectTableIndexBufferEntryNVX(); } }
extern "C" { void AcidSharp_symbols1504(void* instance, const VkObjectTableIndexBufferEntryNVX& _0) { new (instance) VkObjectTableIndexBufferEntryNVX(_0); } }
VkObjectTableIndexBufferEntryNVX& (VkObjectTableIndexBufferEntryNVX::*AcidSharp_symbols1505)(const VkObjectTableIndexBufferEntryNVX&) = &VkObjectTableIndexBufferEntryNVX::operator=;
VkObjectTableIndexBufferEntryNVX& (VkObjectTableIndexBufferEntryNVX::*AcidSharp_symbols1506)(VkObjectTableIndexBufferEntryNVX&&) = &VkObjectTableIndexBufferEntryNVX::operator=;
extern "C" { void AcidSharp_symbols1507(VkObjectTableIndexBufferEntryNVX* instance) { instance->~VkObjectTableIndexBufferEntryNVX(); } }
extern "C" { void AcidSharp_symbols1508(void* instance) { new (instance) VkObjectTablePushConstantEntryNVX(); } }
extern "C" { void AcidSharp_symbols1509(void* instance, const VkObjectTablePushConstantEntryNVX& _0) { new (instance) VkObjectTablePushConstantEntryNVX(_0); } }
VkObjectTablePushConstantEntryNVX& (VkObjectTablePushConstantEntryNVX::*AcidSharp_symbols1510)(const VkObjectTablePushConstantEntryNVX&) = &VkObjectTablePushConstantEntryNVX::operator=;
VkObjectTablePushConstantEntryNVX& (VkObjectTablePushConstantEntryNVX::*AcidSharp_symbols1511)(VkObjectTablePushConstantEntryNVX&&) = &VkObjectTablePushConstantEntryNVX::operator=;
extern "C" { void AcidSharp_symbols1512(VkObjectTablePushConstantEntryNVX* instance) { instance->~VkObjectTablePushConstantEntryNVX(); } }
extern "C" { void AcidSharp_symbols1513(void* instance) { new (instance) VkViewportWScalingNV(); } }
extern "C" { void AcidSharp_symbols1514(void* instance, const VkViewportWScalingNV& _0) { new (instance) VkViewportWScalingNV(_0); } }
VkViewportWScalingNV& (VkViewportWScalingNV::*AcidSharp_symbols1515)(const VkViewportWScalingNV&) = &VkViewportWScalingNV::operator=;
VkViewportWScalingNV& (VkViewportWScalingNV::*AcidSharp_symbols1516)(VkViewportWScalingNV&&) = &VkViewportWScalingNV::operator=;
extern "C" { void AcidSharp_symbols1517(VkViewportWScalingNV* instance) { instance->~VkViewportWScalingNV(); } }
extern "C" { void AcidSharp_symbols1518(void* instance) { new (instance) VkPipelineViewportWScalingStateCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1519(void* instance, const VkPipelineViewportWScalingStateCreateInfoNV& _0) { new (instance) VkPipelineViewportWScalingStateCreateInfoNV(_0); } }
VkPipelineViewportWScalingStateCreateInfoNV& (VkPipelineViewportWScalingStateCreateInfoNV::*AcidSharp_symbols1520)(const VkPipelineViewportWScalingStateCreateInfoNV&) = &VkPipelineViewportWScalingStateCreateInfoNV::operator=;
VkPipelineViewportWScalingStateCreateInfoNV& (VkPipelineViewportWScalingStateCreateInfoNV::*AcidSharp_symbols1521)(VkPipelineViewportWScalingStateCreateInfoNV&&) = &VkPipelineViewportWScalingStateCreateInfoNV::operator=;
extern "C" { void AcidSharp_symbols1522(VkPipelineViewportWScalingStateCreateInfoNV* instance) { instance->~VkPipelineViewportWScalingStateCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1523(void* instance) { new (instance) VkSurfaceCapabilities2EXT(); } }
extern "C" { void AcidSharp_symbols1524(void* instance, const VkSurfaceCapabilities2EXT& _0) { new (instance) VkSurfaceCapabilities2EXT(_0); } }
VkSurfaceCapabilities2EXT& (VkSurfaceCapabilities2EXT::*AcidSharp_symbols1525)(const VkSurfaceCapabilities2EXT&) = &VkSurfaceCapabilities2EXT::operator=;
VkSurfaceCapabilities2EXT& (VkSurfaceCapabilities2EXT::*AcidSharp_symbols1526)(VkSurfaceCapabilities2EXT&&) = &VkSurfaceCapabilities2EXT::operator=;
extern "C" { void AcidSharp_symbols1527(VkSurfaceCapabilities2EXT* instance) { instance->~VkSurfaceCapabilities2EXT(); } }
extern "C" { void AcidSharp_symbols1528(void* instance) { new (instance) VkDisplayPowerInfoEXT(); } }
extern "C" { void AcidSharp_symbols1529(void* instance, const VkDisplayPowerInfoEXT& _0) { new (instance) VkDisplayPowerInfoEXT(_0); } }
VkDisplayPowerInfoEXT& (VkDisplayPowerInfoEXT::*AcidSharp_symbols1530)(const VkDisplayPowerInfoEXT&) = &VkDisplayPowerInfoEXT::operator=;
VkDisplayPowerInfoEXT& (VkDisplayPowerInfoEXT::*AcidSharp_symbols1531)(VkDisplayPowerInfoEXT&&) = &VkDisplayPowerInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1532(VkDisplayPowerInfoEXT* instance) { instance->~VkDisplayPowerInfoEXT(); } }
extern "C" { void AcidSharp_symbols1533(void* instance) { new (instance) VkDeviceEventInfoEXT(); } }
extern "C" { void AcidSharp_symbols1534(void* instance, const VkDeviceEventInfoEXT& _0) { new (instance) VkDeviceEventInfoEXT(_0); } }
VkDeviceEventInfoEXT& (VkDeviceEventInfoEXT::*AcidSharp_symbols1535)(const VkDeviceEventInfoEXT&) = &VkDeviceEventInfoEXT::operator=;
VkDeviceEventInfoEXT& (VkDeviceEventInfoEXT::*AcidSharp_symbols1536)(VkDeviceEventInfoEXT&&) = &VkDeviceEventInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1537(VkDeviceEventInfoEXT* instance) { instance->~VkDeviceEventInfoEXT(); } }
extern "C" { void AcidSharp_symbols1538(void* instance) { new (instance) VkDisplayEventInfoEXT(); } }
extern "C" { void AcidSharp_symbols1539(void* instance, const VkDisplayEventInfoEXT& _0) { new (instance) VkDisplayEventInfoEXT(_0); } }
VkDisplayEventInfoEXT& (VkDisplayEventInfoEXT::*AcidSharp_symbols1540)(const VkDisplayEventInfoEXT&) = &VkDisplayEventInfoEXT::operator=;
VkDisplayEventInfoEXT& (VkDisplayEventInfoEXT::*AcidSharp_symbols1541)(VkDisplayEventInfoEXT&&) = &VkDisplayEventInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1542(VkDisplayEventInfoEXT* instance) { instance->~VkDisplayEventInfoEXT(); } }
extern "C" { void AcidSharp_symbols1543(void* instance) { new (instance) VkSwapchainCounterCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1544(void* instance, const VkSwapchainCounterCreateInfoEXT& _0) { new (instance) VkSwapchainCounterCreateInfoEXT(_0); } }
VkSwapchainCounterCreateInfoEXT& (VkSwapchainCounterCreateInfoEXT::*AcidSharp_symbols1545)(const VkSwapchainCounterCreateInfoEXT&) = &VkSwapchainCounterCreateInfoEXT::operator=;
VkSwapchainCounterCreateInfoEXT& (VkSwapchainCounterCreateInfoEXT::*AcidSharp_symbols1546)(VkSwapchainCounterCreateInfoEXT&&) = &VkSwapchainCounterCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1547(VkSwapchainCounterCreateInfoEXT* instance) { instance->~VkSwapchainCounterCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1548(void* instance) { new (instance) VkRefreshCycleDurationGOOGLE(); } }
extern "C" { void AcidSharp_symbols1549(void* instance, const VkRefreshCycleDurationGOOGLE& _0) { new (instance) VkRefreshCycleDurationGOOGLE(_0); } }
VkRefreshCycleDurationGOOGLE& (VkRefreshCycleDurationGOOGLE::*AcidSharp_symbols1550)(const VkRefreshCycleDurationGOOGLE&) = &VkRefreshCycleDurationGOOGLE::operator=;
VkRefreshCycleDurationGOOGLE& (VkRefreshCycleDurationGOOGLE::*AcidSharp_symbols1551)(VkRefreshCycleDurationGOOGLE&&) = &VkRefreshCycleDurationGOOGLE::operator=;
extern "C" { void AcidSharp_symbols1552(VkRefreshCycleDurationGOOGLE* instance) { instance->~VkRefreshCycleDurationGOOGLE(); } }
extern "C" { void AcidSharp_symbols1553(void* instance) { new (instance) VkPastPresentationTimingGOOGLE(); } }
extern "C" { void AcidSharp_symbols1554(void* instance, const VkPastPresentationTimingGOOGLE& _0) { new (instance) VkPastPresentationTimingGOOGLE(_0); } }
VkPastPresentationTimingGOOGLE& (VkPastPresentationTimingGOOGLE::*AcidSharp_symbols1555)(const VkPastPresentationTimingGOOGLE&) = &VkPastPresentationTimingGOOGLE::operator=;
VkPastPresentationTimingGOOGLE& (VkPastPresentationTimingGOOGLE::*AcidSharp_symbols1556)(VkPastPresentationTimingGOOGLE&&) = &VkPastPresentationTimingGOOGLE::operator=;
extern "C" { void AcidSharp_symbols1557(VkPastPresentationTimingGOOGLE* instance) { instance->~VkPastPresentationTimingGOOGLE(); } }
extern "C" { void AcidSharp_symbols1558(void* instance) { new (instance) VkPresentTimeGOOGLE(); } }
extern "C" { void AcidSharp_symbols1559(void* instance, const VkPresentTimeGOOGLE& _0) { new (instance) VkPresentTimeGOOGLE(_0); } }
VkPresentTimeGOOGLE& (VkPresentTimeGOOGLE::*AcidSharp_symbols1560)(const VkPresentTimeGOOGLE&) = &VkPresentTimeGOOGLE::operator=;
VkPresentTimeGOOGLE& (VkPresentTimeGOOGLE::*AcidSharp_symbols1561)(VkPresentTimeGOOGLE&&) = &VkPresentTimeGOOGLE::operator=;
extern "C" { void AcidSharp_symbols1562(VkPresentTimeGOOGLE* instance) { instance->~VkPresentTimeGOOGLE(); } }
extern "C" { void AcidSharp_symbols1563(void* instance) { new (instance) VkPresentTimesInfoGOOGLE(); } }
extern "C" { void AcidSharp_symbols1564(void* instance, const VkPresentTimesInfoGOOGLE& _0) { new (instance) VkPresentTimesInfoGOOGLE(_0); } }
VkPresentTimesInfoGOOGLE& (VkPresentTimesInfoGOOGLE::*AcidSharp_symbols1565)(const VkPresentTimesInfoGOOGLE&) = &VkPresentTimesInfoGOOGLE::operator=;
VkPresentTimesInfoGOOGLE& (VkPresentTimesInfoGOOGLE::*AcidSharp_symbols1566)(VkPresentTimesInfoGOOGLE&&) = &VkPresentTimesInfoGOOGLE::operator=;
extern "C" { void AcidSharp_symbols1567(VkPresentTimesInfoGOOGLE* instance) { instance->~VkPresentTimesInfoGOOGLE(); } }
extern "C" { void AcidSharp_symbols1568(void* instance) { new (instance) VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(); } }
extern "C" { void AcidSharp_symbols1569(void* instance, const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& _0) { new (instance) VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(_0); } }
VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& (VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::*AcidSharp_symbols1570)(const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX&) = &VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::operator=;
VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& (VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::*AcidSharp_symbols1571)(VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX&&) = &VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::operator=;
extern "C" { void AcidSharp_symbols1572(VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX* instance) { instance->~VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(); } }
extern "C" { void AcidSharp_symbols1573(void* instance) { new (instance) VkViewportSwizzleNV(); } }
extern "C" { void AcidSharp_symbols1574(void* instance, const VkViewportSwizzleNV& _0) { new (instance) VkViewportSwizzleNV(_0); } }
VkViewportSwizzleNV& (VkViewportSwizzleNV::*AcidSharp_symbols1575)(const VkViewportSwizzleNV&) = &VkViewportSwizzleNV::operator=;
VkViewportSwizzleNV& (VkViewportSwizzleNV::*AcidSharp_symbols1576)(VkViewportSwizzleNV&&) = &VkViewportSwizzleNV::operator=;
extern "C" { void AcidSharp_symbols1577(VkViewportSwizzleNV* instance) { instance->~VkViewportSwizzleNV(); } }
extern "C" { void AcidSharp_symbols1578(void* instance) { new (instance) VkPipelineViewportSwizzleStateCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1579(void* instance, const VkPipelineViewportSwizzleStateCreateInfoNV& _0) { new (instance) VkPipelineViewportSwizzleStateCreateInfoNV(_0); } }
VkPipelineViewportSwizzleStateCreateInfoNV& (VkPipelineViewportSwizzleStateCreateInfoNV::*AcidSharp_symbols1580)(const VkPipelineViewportSwizzleStateCreateInfoNV&) = &VkPipelineViewportSwizzleStateCreateInfoNV::operator=;
VkPipelineViewportSwizzleStateCreateInfoNV& (VkPipelineViewportSwizzleStateCreateInfoNV::*AcidSharp_symbols1581)(VkPipelineViewportSwizzleStateCreateInfoNV&&) = &VkPipelineViewportSwizzleStateCreateInfoNV::operator=;
extern "C" { void AcidSharp_symbols1582(VkPipelineViewportSwizzleStateCreateInfoNV* instance) { instance->~VkPipelineViewportSwizzleStateCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1583(void* instance) { new (instance) VkPhysicalDeviceDiscardRectanglePropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1584(void* instance, const VkPhysicalDeviceDiscardRectanglePropertiesEXT& _0) { new (instance) VkPhysicalDeviceDiscardRectanglePropertiesEXT(_0); } }
VkPhysicalDeviceDiscardRectanglePropertiesEXT& (VkPhysicalDeviceDiscardRectanglePropertiesEXT::*AcidSharp_symbols1585)(const VkPhysicalDeviceDiscardRectanglePropertiesEXT&) = &VkPhysicalDeviceDiscardRectanglePropertiesEXT::operator=;
VkPhysicalDeviceDiscardRectanglePropertiesEXT& (VkPhysicalDeviceDiscardRectanglePropertiesEXT::*AcidSharp_symbols1586)(VkPhysicalDeviceDiscardRectanglePropertiesEXT&&) = &VkPhysicalDeviceDiscardRectanglePropertiesEXT::operator=;
extern "C" { void AcidSharp_symbols1587(VkPhysicalDeviceDiscardRectanglePropertiesEXT* instance) { instance->~VkPhysicalDeviceDiscardRectanglePropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1588(void* instance) { new (instance) VkPipelineDiscardRectangleStateCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1589(void* instance, const VkPipelineDiscardRectangleStateCreateInfoEXT& _0) { new (instance) VkPipelineDiscardRectangleStateCreateInfoEXT(_0); } }
VkPipelineDiscardRectangleStateCreateInfoEXT& (VkPipelineDiscardRectangleStateCreateInfoEXT::*AcidSharp_symbols1590)(const VkPipelineDiscardRectangleStateCreateInfoEXT&) = &VkPipelineDiscardRectangleStateCreateInfoEXT::operator=;
VkPipelineDiscardRectangleStateCreateInfoEXT& (VkPipelineDiscardRectangleStateCreateInfoEXT::*AcidSharp_symbols1591)(VkPipelineDiscardRectangleStateCreateInfoEXT&&) = &VkPipelineDiscardRectangleStateCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1592(VkPipelineDiscardRectangleStateCreateInfoEXT* instance) { instance->~VkPipelineDiscardRectangleStateCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1593(void* instance) { new (instance) VkPhysicalDeviceConservativeRasterizationPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1594(void* instance, const VkPhysicalDeviceConservativeRasterizationPropertiesEXT& _0) { new (instance) VkPhysicalDeviceConservativeRasterizationPropertiesEXT(_0); } }
VkPhysicalDeviceConservativeRasterizationPropertiesEXT& (VkPhysicalDeviceConservativeRasterizationPropertiesEXT::*AcidSharp_symbols1595)(const VkPhysicalDeviceConservativeRasterizationPropertiesEXT&) = &VkPhysicalDeviceConservativeRasterizationPropertiesEXT::operator=;
VkPhysicalDeviceConservativeRasterizationPropertiesEXT& (VkPhysicalDeviceConservativeRasterizationPropertiesEXT::*AcidSharp_symbols1596)(VkPhysicalDeviceConservativeRasterizationPropertiesEXT&&) = &VkPhysicalDeviceConservativeRasterizationPropertiesEXT::operator=;
extern "C" { void AcidSharp_symbols1597(VkPhysicalDeviceConservativeRasterizationPropertiesEXT* instance) { instance->~VkPhysicalDeviceConservativeRasterizationPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1598(void* instance) { new (instance) VkPipelineRasterizationConservativeStateCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1599(void* instance, const VkPipelineRasterizationConservativeStateCreateInfoEXT& _0) { new (instance) VkPipelineRasterizationConservativeStateCreateInfoEXT(_0); } }
VkPipelineRasterizationConservativeStateCreateInfoEXT& (VkPipelineRasterizationConservativeStateCreateInfoEXT::*AcidSharp_symbols1600)(const VkPipelineRasterizationConservativeStateCreateInfoEXT&) = &VkPipelineRasterizationConservativeStateCreateInfoEXT::operator=;
VkPipelineRasterizationConservativeStateCreateInfoEXT& (VkPipelineRasterizationConservativeStateCreateInfoEXT::*AcidSharp_symbols1601)(VkPipelineRasterizationConservativeStateCreateInfoEXT&&) = &VkPipelineRasterizationConservativeStateCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1602(VkPipelineRasterizationConservativeStateCreateInfoEXT* instance) { instance->~VkPipelineRasterizationConservativeStateCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1603(void* instance) { new (instance) VkXYColorEXT(); } }
extern "C" { void AcidSharp_symbols1604(void* instance, const VkXYColorEXT& _0) { new (instance) VkXYColorEXT(_0); } }
VkXYColorEXT& (VkXYColorEXT::*AcidSharp_symbols1605)(const VkXYColorEXT&) = &VkXYColorEXT::operator=;
VkXYColorEXT& (VkXYColorEXT::*AcidSharp_symbols1606)(VkXYColorEXT&&) = &VkXYColorEXT::operator=;
extern "C" { void AcidSharp_symbols1607(VkXYColorEXT* instance) { instance->~VkXYColorEXT(); } }
extern "C" { void AcidSharp_symbols1608(void* instance) { new (instance) VkHdrMetadataEXT(); } }
extern "C" { void AcidSharp_symbols1609(void* instance, const VkHdrMetadataEXT& _0) { new (instance) VkHdrMetadataEXT(_0); } }
VkHdrMetadataEXT& (VkHdrMetadataEXT::*AcidSharp_symbols1610)(const VkHdrMetadataEXT&) = &VkHdrMetadataEXT::operator=;
VkHdrMetadataEXT& (VkHdrMetadataEXT::*AcidSharp_symbols1611)(VkHdrMetadataEXT&&) = &VkHdrMetadataEXT::operator=;
extern "C" { void AcidSharp_symbols1612(VkHdrMetadataEXT* instance) { instance->~VkHdrMetadataEXT(); } }
extern "C" { void AcidSharp_symbols1613(void* instance) { new (instance) VkDebugUtilsObjectNameInfoEXT(); } }
extern "C" { void AcidSharp_symbols1614(void* instance, const VkDebugUtilsObjectNameInfoEXT& _0) { new (instance) VkDebugUtilsObjectNameInfoEXT(_0); } }
VkDebugUtilsObjectNameInfoEXT& (VkDebugUtilsObjectNameInfoEXT::*AcidSharp_symbols1615)(const VkDebugUtilsObjectNameInfoEXT&) = &VkDebugUtilsObjectNameInfoEXT::operator=;
VkDebugUtilsObjectNameInfoEXT& (VkDebugUtilsObjectNameInfoEXT::*AcidSharp_symbols1616)(VkDebugUtilsObjectNameInfoEXT&&) = &VkDebugUtilsObjectNameInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1617(VkDebugUtilsObjectNameInfoEXT* instance) { instance->~VkDebugUtilsObjectNameInfoEXT(); } }
extern "C" { void AcidSharp_symbols1618(void* instance) { new (instance) VkDebugUtilsObjectTagInfoEXT(); } }
extern "C" { void AcidSharp_symbols1619(void* instance, const VkDebugUtilsObjectTagInfoEXT& _0) { new (instance) VkDebugUtilsObjectTagInfoEXT(_0); } }
VkDebugUtilsObjectTagInfoEXT& (VkDebugUtilsObjectTagInfoEXT::*AcidSharp_symbols1620)(const VkDebugUtilsObjectTagInfoEXT&) = &VkDebugUtilsObjectTagInfoEXT::operator=;
VkDebugUtilsObjectTagInfoEXT& (VkDebugUtilsObjectTagInfoEXT::*AcidSharp_symbols1621)(VkDebugUtilsObjectTagInfoEXT&&) = &VkDebugUtilsObjectTagInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1622(VkDebugUtilsObjectTagInfoEXT* instance) { instance->~VkDebugUtilsObjectTagInfoEXT(); } }
extern "C" { void AcidSharp_symbols1623(void* instance) { new (instance) VkDebugUtilsLabelEXT(); } }
extern "C" { void AcidSharp_symbols1624(void* instance, const VkDebugUtilsLabelEXT& _0) { new (instance) VkDebugUtilsLabelEXT(_0); } }
VkDebugUtilsLabelEXT& (VkDebugUtilsLabelEXT::*AcidSharp_symbols1625)(const VkDebugUtilsLabelEXT&) = &VkDebugUtilsLabelEXT::operator=;
VkDebugUtilsLabelEXT& (VkDebugUtilsLabelEXT::*AcidSharp_symbols1626)(VkDebugUtilsLabelEXT&&) = &VkDebugUtilsLabelEXT::operator=;
extern "C" { void AcidSharp_symbols1627(VkDebugUtilsLabelEXT* instance) { instance->~VkDebugUtilsLabelEXT(); } }
extern "C" { void AcidSharp_symbols1628(void* instance) { new (instance) VkDebugUtilsMessengerCallbackDataEXT(); } }
extern "C" { void AcidSharp_symbols1629(void* instance, const VkDebugUtilsMessengerCallbackDataEXT& _0) { new (instance) VkDebugUtilsMessengerCallbackDataEXT(_0); } }
VkDebugUtilsMessengerCallbackDataEXT& (VkDebugUtilsMessengerCallbackDataEXT::*AcidSharp_symbols1630)(const VkDebugUtilsMessengerCallbackDataEXT&) = &VkDebugUtilsMessengerCallbackDataEXT::operator=;
VkDebugUtilsMessengerCallbackDataEXT& (VkDebugUtilsMessengerCallbackDataEXT::*AcidSharp_symbols1631)(VkDebugUtilsMessengerCallbackDataEXT&&) = &VkDebugUtilsMessengerCallbackDataEXT::operator=;
extern "C" { void AcidSharp_symbols1632(VkDebugUtilsMessengerCallbackDataEXT* instance) { instance->~VkDebugUtilsMessengerCallbackDataEXT(); } }
extern "C" { void AcidSharp_symbols1633(void* instance) { new (instance) VkDebugUtilsMessengerCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1634(void* instance, const VkDebugUtilsMessengerCreateInfoEXT& _0) { new (instance) VkDebugUtilsMessengerCreateInfoEXT(_0); } }
VkDebugUtilsMessengerCreateInfoEXT& (VkDebugUtilsMessengerCreateInfoEXT::*AcidSharp_symbols1635)(const VkDebugUtilsMessengerCreateInfoEXT&) = &VkDebugUtilsMessengerCreateInfoEXT::operator=;
VkDebugUtilsMessengerCreateInfoEXT& (VkDebugUtilsMessengerCreateInfoEXT::*AcidSharp_symbols1636)(VkDebugUtilsMessengerCreateInfoEXT&&) = &VkDebugUtilsMessengerCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1637(VkDebugUtilsMessengerCreateInfoEXT* instance) { instance->~VkDebugUtilsMessengerCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1638(void* instance) { new (instance) VkSamplerReductionModeCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1639(void* instance, const VkSamplerReductionModeCreateInfoEXT& _0) { new (instance) VkSamplerReductionModeCreateInfoEXT(_0); } }
VkSamplerReductionModeCreateInfoEXT& (VkSamplerReductionModeCreateInfoEXT::*AcidSharp_symbols1640)(const VkSamplerReductionModeCreateInfoEXT&) = &VkSamplerReductionModeCreateInfoEXT::operator=;
VkSamplerReductionModeCreateInfoEXT& (VkSamplerReductionModeCreateInfoEXT::*AcidSharp_symbols1641)(VkSamplerReductionModeCreateInfoEXT&&) = &VkSamplerReductionModeCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1642(VkSamplerReductionModeCreateInfoEXT* instance) { instance->~VkSamplerReductionModeCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1643(void* instance) { new (instance) VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1644(void* instance, const VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT& _0) { new (instance) VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT(_0); } }
VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT& (VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT::*AcidSharp_symbols1645)(const VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT&) = &VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT::operator=;
VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT& (VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT::*AcidSharp_symbols1646)(VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT&&) = &VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT::operator=;
extern "C" { void AcidSharp_symbols1647(VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT* instance) { instance->~VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1648(void* instance) { new (instance) VkSampleLocationEXT(); } }
extern "C" { void AcidSharp_symbols1649(void* instance, const VkSampleLocationEXT& _0) { new (instance) VkSampleLocationEXT(_0); } }
VkSampleLocationEXT& (VkSampleLocationEXT::*AcidSharp_symbols1650)(const VkSampleLocationEXT&) = &VkSampleLocationEXT::operator=;
VkSampleLocationEXT& (VkSampleLocationEXT::*AcidSharp_symbols1651)(VkSampleLocationEXT&&) = &VkSampleLocationEXT::operator=;
extern "C" { void AcidSharp_symbols1652(VkSampleLocationEXT* instance) { instance->~VkSampleLocationEXT(); } }
extern "C" { void AcidSharp_symbols1653(void* instance) { new (instance) VkSampleLocationsInfoEXT(); } }
extern "C" { void AcidSharp_symbols1654(void* instance, const VkSampleLocationsInfoEXT& _0) { new (instance) VkSampleLocationsInfoEXT(_0); } }
VkSampleLocationsInfoEXT& (VkSampleLocationsInfoEXT::*AcidSharp_symbols1655)(const VkSampleLocationsInfoEXT&) = &VkSampleLocationsInfoEXT::operator=;
VkSampleLocationsInfoEXT& (VkSampleLocationsInfoEXT::*AcidSharp_symbols1656)(VkSampleLocationsInfoEXT&&) = &VkSampleLocationsInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1657(VkSampleLocationsInfoEXT* instance) { instance->~VkSampleLocationsInfoEXT(); } }
extern "C" { void AcidSharp_symbols1658(void* instance) { new (instance) VkAttachmentSampleLocationsEXT(); } }
extern "C" { void AcidSharp_symbols1659(void* instance, const VkAttachmentSampleLocationsEXT& _0) { new (instance) VkAttachmentSampleLocationsEXT(_0); } }
VkAttachmentSampleLocationsEXT& (VkAttachmentSampleLocationsEXT::*AcidSharp_symbols1660)(const VkAttachmentSampleLocationsEXT&) = &VkAttachmentSampleLocationsEXT::operator=;
VkAttachmentSampleLocationsEXT& (VkAttachmentSampleLocationsEXT::*AcidSharp_symbols1661)(VkAttachmentSampleLocationsEXT&&) = &VkAttachmentSampleLocationsEXT::operator=;
extern "C" { void AcidSharp_symbols1662(VkAttachmentSampleLocationsEXT* instance) { instance->~VkAttachmentSampleLocationsEXT(); } }
extern "C" { void AcidSharp_symbols1663(void* instance) { new (instance) VkSubpassSampleLocationsEXT(); } }
extern "C" { void AcidSharp_symbols1664(void* instance, const VkSubpassSampleLocationsEXT& _0) { new (instance) VkSubpassSampleLocationsEXT(_0); } }
VkSubpassSampleLocationsEXT& (VkSubpassSampleLocationsEXT::*AcidSharp_symbols1665)(const VkSubpassSampleLocationsEXT&) = &VkSubpassSampleLocationsEXT::operator=;
VkSubpassSampleLocationsEXT& (VkSubpassSampleLocationsEXT::*AcidSharp_symbols1666)(VkSubpassSampleLocationsEXT&&) = &VkSubpassSampleLocationsEXT::operator=;
extern "C" { void AcidSharp_symbols1667(VkSubpassSampleLocationsEXT* instance) { instance->~VkSubpassSampleLocationsEXT(); } }
extern "C" { void AcidSharp_symbols1668(void* instance) { new (instance) VkRenderPassSampleLocationsBeginInfoEXT(); } }
extern "C" { void AcidSharp_symbols1669(void* instance, const VkRenderPassSampleLocationsBeginInfoEXT& _0) { new (instance) VkRenderPassSampleLocationsBeginInfoEXT(_0); } }
VkRenderPassSampleLocationsBeginInfoEXT& (VkRenderPassSampleLocationsBeginInfoEXT::*AcidSharp_symbols1670)(const VkRenderPassSampleLocationsBeginInfoEXT&) = &VkRenderPassSampleLocationsBeginInfoEXT::operator=;
VkRenderPassSampleLocationsBeginInfoEXT& (VkRenderPassSampleLocationsBeginInfoEXT::*AcidSharp_symbols1671)(VkRenderPassSampleLocationsBeginInfoEXT&&) = &VkRenderPassSampleLocationsBeginInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1672(VkRenderPassSampleLocationsBeginInfoEXT* instance) { instance->~VkRenderPassSampleLocationsBeginInfoEXT(); } }
extern "C" { void AcidSharp_symbols1673(void* instance) { new (instance) VkPipelineSampleLocationsStateCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1674(void* instance, const VkPipelineSampleLocationsStateCreateInfoEXT& _0) { new (instance) VkPipelineSampleLocationsStateCreateInfoEXT(_0); } }
VkPipelineSampleLocationsStateCreateInfoEXT& (VkPipelineSampleLocationsStateCreateInfoEXT::*AcidSharp_symbols1675)(const VkPipelineSampleLocationsStateCreateInfoEXT&) = &VkPipelineSampleLocationsStateCreateInfoEXT::operator=;
VkPipelineSampleLocationsStateCreateInfoEXT& (VkPipelineSampleLocationsStateCreateInfoEXT::*AcidSharp_symbols1676)(VkPipelineSampleLocationsStateCreateInfoEXT&&) = &VkPipelineSampleLocationsStateCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1677(VkPipelineSampleLocationsStateCreateInfoEXT* instance) { instance->~VkPipelineSampleLocationsStateCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1678(void* instance) { new (instance) VkPhysicalDeviceSampleLocationsPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1679(void* instance, const VkPhysicalDeviceSampleLocationsPropertiesEXT& _0) { new (instance) VkPhysicalDeviceSampleLocationsPropertiesEXT(_0); } }
VkPhysicalDeviceSampleLocationsPropertiesEXT& (VkPhysicalDeviceSampleLocationsPropertiesEXT::*AcidSharp_symbols1680)(const VkPhysicalDeviceSampleLocationsPropertiesEXT&) = &VkPhysicalDeviceSampleLocationsPropertiesEXT::operator=;
VkPhysicalDeviceSampleLocationsPropertiesEXT& (VkPhysicalDeviceSampleLocationsPropertiesEXT::*AcidSharp_symbols1681)(VkPhysicalDeviceSampleLocationsPropertiesEXT&&) = &VkPhysicalDeviceSampleLocationsPropertiesEXT::operator=;
extern "C" { void AcidSharp_symbols1682(VkPhysicalDeviceSampleLocationsPropertiesEXT* instance) { instance->~VkPhysicalDeviceSampleLocationsPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1683(void* instance) { new (instance) VkMultisamplePropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1684(void* instance, const VkMultisamplePropertiesEXT& _0) { new (instance) VkMultisamplePropertiesEXT(_0); } }
VkMultisamplePropertiesEXT& (VkMultisamplePropertiesEXT::*AcidSharp_symbols1685)(const VkMultisamplePropertiesEXT&) = &VkMultisamplePropertiesEXT::operator=;
VkMultisamplePropertiesEXT& (VkMultisamplePropertiesEXT::*AcidSharp_symbols1686)(VkMultisamplePropertiesEXT&&) = &VkMultisamplePropertiesEXT::operator=;
extern "C" { void AcidSharp_symbols1687(VkMultisamplePropertiesEXT* instance) { instance->~VkMultisamplePropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1688(void* instance) { new (instance) VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT(); } }
extern "C" { void AcidSharp_symbols1689(void* instance, const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& _0) { new (instance) VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT(_0); } }
VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& (VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT::*AcidSharp_symbols1690)(const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT&) = &VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT::operator=;
VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& (VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT::*AcidSharp_symbols1691)(VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT&&) = &VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT::operator=;
extern "C" { void AcidSharp_symbols1692(VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT* instance) { instance->~VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT(); } }
extern "C" { void AcidSharp_symbols1693(void* instance) { new (instance) VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1694(void* instance, const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& _0) { new (instance) VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT(_0); } }
VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& (VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::*AcidSharp_symbols1695)(const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT&) = &VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::operator=;
VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& (VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::*AcidSharp_symbols1696)(VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT&&) = &VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::operator=;
extern "C" { void AcidSharp_symbols1697(VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT* instance) { instance->~VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1698(void* instance) { new (instance) VkPipelineColorBlendAdvancedStateCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1699(void* instance, const VkPipelineColorBlendAdvancedStateCreateInfoEXT& _0) { new (instance) VkPipelineColorBlendAdvancedStateCreateInfoEXT(_0); } }
VkPipelineColorBlendAdvancedStateCreateInfoEXT& (VkPipelineColorBlendAdvancedStateCreateInfoEXT::*AcidSharp_symbols1700)(const VkPipelineColorBlendAdvancedStateCreateInfoEXT&) = &VkPipelineColorBlendAdvancedStateCreateInfoEXT::operator=;
VkPipelineColorBlendAdvancedStateCreateInfoEXT& (VkPipelineColorBlendAdvancedStateCreateInfoEXT::*AcidSharp_symbols1701)(VkPipelineColorBlendAdvancedStateCreateInfoEXT&&) = &VkPipelineColorBlendAdvancedStateCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1702(VkPipelineColorBlendAdvancedStateCreateInfoEXT* instance) { instance->~VkPipelineColorBlendAdvancedStateCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1703(void* instance) { new (instance) VkPipelineCoverageToColorStateCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1704(void* instance, const VkPipelineCoverageToColorStateCreateInfoNV& _0) { new (instance) VkPipelineCoverageToColorStateCreateInfoNV(_0); } }
VkPipelineCoverageToColorStateCreateInfoNV& (VkPipelineCoverageToColorStateCreateInfoNV::*AcidSharp_symbols1705)(const VkPipelineCoverageToColorStateCreateInfoNV&) = &VkPipelineCoverageToColorStateCreateInfoNV::operator=;
VkPipelineCoverageToColorStateCreateInfoNV& (VkPipelineCoverageToColorStateCreateInfoNV::*AcidSharp_symbols1706)(VkPipelineCoverageToColorStateCreateInfoNV&&) = &VkPipelineCoverageToColorStateCreateInfoNV::operator=;
extern "C" { void AcidSharp_symbols1707(VkPipelineCoverageToColorStateCreateInfoNV* instance) { instance->~VkPipelineCoverageToColorStateCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1708(void* instance) { new (instance) VkPipelineCoverageModulationStateCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1709(void* instance, const VkPipelineCoverageModulationStateCreateInfoNV& _0) { new (instance) VkPipelineCoverageModulationStateCreateInfoNV(_0); } }
VkPipelineCoverageModulationStateCreateInfoNV& (VkPipelineCoverageModulationStateCreateInfoNV::*AcidSharp_symbols1710)(const VkPipelineCoverageModulationStateCreateInfoNV&) = &VkPipelineCoverageModulationStateCreateInfoNV::operator=;
VkPipelineCoverageModulationStateCreateInfoNV& (VkPipelineCoverageModulationStateCreateInfoNV::*AcidSharp_symbols1711)(VkPipelineCoverageModulationStateCreateInfoNV&&) = &VkPipelineCoverageModulationStateCreateInfoNV::operator=;
extern "C" { void AcidSharp_symbols1712(VkPipelineCoverageModulationStateCreateInfoNV* instance) { instance->~VkPipelineCoverageModulationStateCreateInfoNV(); } }
extern "C" { void AcidSharp_symbols1713(void* instance) { new (instance) VkValidationCacheCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1714(void* instance, const VkValidationCacheCreateInfoEXT& _0) { new (instance) VkValidationCacheCreateInfoEXT(_0); } }
VkValidationCacheCreateInfoEXT& (VkValidationCacheCreateInfoEXT::*AcidSharp_symbols1715)(const VkValidationCacheCreateInfoEXT&) = &VkValidationCacheCreateInfoEXT::operator=;
VkValidationCacheCreateInfoEXT& (VkValidationCacheCreateInfoEXT::*AcidSharp_symbols1716)(VkValidationCacheCreateInfoEXT&&) = &VkValidationCacheCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1717(VkValidationCacheCreateInfoEXT* instance) { instance->~VkValidationCacheCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1718(void* instance) { new (instance) VkShaderModuleValidationCacheCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1719(void* instance, const VkShaderModuleValidationCacheCreateInfoEXT& _0) { new (instance) VkShaderModuleValidationCacheCreateInfoEXT(_0); } }
VkShaderModuleValidationCacheCreateInfoEXT& (VkShaderModuleValidationCacheCreateInfoEXT::*AcidSharp_symbols1720)(const VkShaderModuleValidationCacheCreateInfoEXT&) = &VkShaderModuleValidationCacheCreateInfoEXT::operator=;
VkShaderModuleValidationCacheCreateInfoEXT& (VkShaderModuleValidationCacheCreateInfoEXT::*AcidSharp_symbols1721)(VkShaderModuleValidationCacheCreateInfoEXT&&) = &VkShaderModuleValidationCacheCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1722(VkShaderModuleValidationCacheCreateInfoEXT* instance) { instance->~VkShaderModuleValidationCacheCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1723(void* instance) { new (instance) VkDescriptorSetLayoutBindingFlagsCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1724(void* instance, const VkDescriptorSetLayoutBindingFlagsCreateInfoEXT& _0) { new (instance) VkDescriptorSetLayoutBindingFlagsCreateInfoEXT(_0); } }
VkDescriptorSetLayoutBindingFlagsCreateInfoEXT& (VkDescriptorSetLayoutBindingFlagsCreateInfoEXT::*AcidSharp_symbols1725)(const VkDescriptorSetLayoutBindingFlagsCreateInfoEXT&) = &VkDescriptorSetLayoutBindingFlagsCreateInfoEXT::operator=;
VkDescriptorSetLayoutBindingFlagsCreateInfoEXT& (VkDescriptorSetLayoutBindingFlagsCreateInfoEXT::*AcidSharp_symbols1726)(VkDescriptorSetLayoutBindingFlagsCreateInfoEXT&&) = &VkDescriptorSetLayoutBindingFlagsCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1727(VkDescriptorSetLayoutBindingFlagsCreateInfoEXT* instance) { instance->~VkDescriptorSetLayoutBindingFlagsCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1728(void* instance) { new (instance) VkPhysicalDeviceDescriptorIndexingFeaturesEXT(); } }
extern "C" { void AcidSharp_symbols1729(void* instance, const VkPhysicalDeviceDescriptorIndexingFeaturesEXT& _0) { new (instance) VkPhysicalDeviceDescriptorIndexingFeaturesEXT(_0); } }
VkPhysicalDeviceDescriptorIndexingFeaturesEXT& (VkPhysicalDeviceDescriptorIndexingFeaturesEXT::*AcidSharp_symbols1730)(const VkPhysicalDeviceDescriptorIndexingFeaturesEXT&) = &VkPhysicalDeviceDescriptorIndexingFeaturesEXT::operator=;
VkPhysicalDeviceDescriptorIndexingFeaturesEXT& (VkPhysicalDeviceDescriptorIndexingFeaturesEXT::*AcidSharp_symbols1731)(VkPhysicalDeviceDescriptorIndexingFeaturesEXT&&) = &VkPhysicalDeviceDescriptorIndexingFeaturesEXT::operator=;
extern "C" { void AcidSharp_symbols1732(VkPhysicalDeviceDescriptorIndexingFeaturesEXT* instance) { instance->~VkPhysicalDeviceDescriptorIndexingFeaturesEXT(); } }
extern "C" { void AcidSharp_symbols1733(void* instance) { new (instance) VkPhysicalDeviceDescriptorIndexingPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1734(void* instance, const VkPhysicalDeviceDescriptorIndexingPropertiesEXT& _0) { new (instance) VkPhysicalDeviceDescriptorIndexingPropertiesEXT(_0); } }
VkPhysicalDeviceDescriptorIndexingPropertiesEXT& (VkPhysicalDeviceDescriptorIndexingPropertiesEXT::*AcidSharp_symbols1735)(const VkPhysicalDeviceDescriptorIndexingPropertiesEXT&) = &VkPhysicalDeviceDescriptorIndexingPropertiesEXT::operator=;
VkPhysicalDeviceDescriptorIndexingPropertiesEXT& (VkPhysicalDeviceDescriptorIndexingPropertiesEXT::*AcidSharp_symbols1736)(VkPhysicalDeviceDescriptorIndexingPropertiesEXT&&) = &VkPhysicalDeviceDescriptorIndexingPropertiesEXT::operator=;
extern "C" { void AcidSharp_symbols1737(VkPhysicalDeviceDescriptorIndexingPropertiesEXT* instance) { instance->~VkPhysicalDeviceDescriptorIndexingPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1738(void* instance) { new (instance) VkDescriptorSetVariableDescriptorCountAllocateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1739(void* instance, const VkDescriptorSetVariableDescriptorCountAllocateInfoEXT& _0) { new (instance) VkDescriptorSetVariableDescriptorCountAllocateInfoEXT(_0); } }
VkDescriptorSetVariableDescriptorCountAllocateInfoEXT& (VkDescriptorSetVariableDescriptorCountAllocateInfoEXT::*AcidSharp_symbols1740)(const VkDescriptorSetVariableDescriptorCountAllocateInfoEXT&) = &VkDescriptorSetVariableDescriptorCountAllocateInfoEXT::operator=;
VkDescriptorSetVariableDescriptorCountAllocateInfoEXT& (VkDescriptorSetVariableDescriptorCountAllocateInfoEXT::*AcidSharp_symbols1741)(VkDescriptorSetVariableDescriptorCountAllocateInfoEXT&&) = &VkDescriptorSetVariableDescriptorCountAllocateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1742(VkDescriptorSetVariableDescriptorCountAllocateInfoEXT* instance) { instance->~VkDescriptorSetVariableDescriptorCountAllocateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1743(void* instance) { new (instance) VkDescriptorSetVariableDescriptorCountLayoutSupportEXT(); } }
extern "C" { void AcidSharp_symbols1744(void* instance, const VkDescriptorSetVariableDescriptorCountLayoutSupportEXT& _0) { new (instance) VkDescriptorSetVariableDescriptorCountLayoutSupportEXT(_0); } }
VkDescriptorSetVariableDescriptorCountLayoutSupportEXT& (VkDescriptorSetVariableDescriptorCountLayoutSupportEXT::*AcidSharp_symbols1745)(const VkDescriptorSetVariableDescriptorCountLayoutSupportEXT&) = &VkDescriptorSetVariableDescriptorCountLayoutSupportEXT::operator=;
VkDescriptorSetVariableDescriptorCountLayoutSupportEXT& (VkDescriptorSetVariableDescriptorCountLayoutSupportEXT::*AcidSharp_symbols1746)(VkDescriptorSetVariableDescriptorCountLayoutSupportEXT&&) = &VkDescriptorSetVariableDescriptorCountLayoutSupportEXT::operator=;
extern "C" { void AcidSharp_symbols1747(VkDescriptorSetVariableDescriptorCountLayoutSupportEXT* instance) { instance->~VkDescriptorSetVariableDescriptorCountLayoutSupportEXT(); } }
extern "C" { void AcidSharp_symbols1748(void* instance) { new (instance) VkDeviceQueueGlobalPriorityCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1749(void* instance, const VkDeviceQueueGlobalPriorityCreateInfoEXT& _0) { new (instance) VkDeviceQueueGlobalPriorityCreateInfoEXT(_0); } }
VkDeviceQueueGlobalPriorityCreateInfoEXT& (VkDeviceQueueGlobalPriorityCreateInfoEXT::*AcidSharp_symbols1750)(const VkDeviceQueueGlobalPriorityCreateInfoEXT&) = &VkDeviceQueueGlobalPriorityCreateInfoEXT::operator=;
VkDeviceQueueGlobalPriorityCreateInfoEXT& (VkDeviceQueueGlobalPriorityCreateInfoEXT::*AcidSharp_symbols1751)(VkDeviceQueueGlobalPriorityCreateInfoEXT&&) = &VkDeviceQueueGlobalPriorityCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1752(VkDeviceQueueGlobalPriorityCreateInfoEXT* instance) { instance->~VkDeviceQueueGlobalPriorityCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1753(void* instance) { new (instance) VkImportMemoryHostPointerInfoEXT(); } }
extern "C" { void AcidSharp_symbols1754(void* instance, const VkImportMemoryHostPointerInfoEXT& _0) { new (instance) VkImportMemoryHostPointerInfoEXT(_0); } }
VkImportMemoryHostPointerInfoEXT& (VkImportMemoryHostPointerInfoEXT::*AcidSharp_symbols1755)(const VkImportMemoryHostPointerInfoEXT&) = &VkImportMemoryHostPointerInfoEXT::operator=;
VkImportMemoryHostPointerInfoEXT& (VkImportMemoryHostPointerInfoEXT::*AcidSharp_symbols1756)(VkImportMemoryHostPointerInfoEXT&&) = &VkImportMemoryHostPointerInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1757(VkImportMemoryHostPointerInfoEXT* instance) { instance->~VkImportMemoryHostPointerInfoEXT(); } }
extern "C" { void AcidSharp_symbols1758(void* instance) { new (instance) VkMemoryHostPointerPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1759(void* instance, const VkMemoryHostPointerPropertiesEXT& _0) { new (instance) VkMemoryHostPointerPropertiesEXT(_0); } }
VkMemoryHostPointerPropertiesEXT& (VkMemoryHostPointerPropertiesEXT::*AcidSharp_symbols1760)(const VkMemoryHostPointerPropertiesEXT&) = &VkMemoryHostPointerPropertiesEXT::operator=;
VkMemoryHostPointerPropertiesEXT& (VkMemoryHostPointerPropertiesEXT::*AcidSharp_symbols1761)(VkMemoryHostPointerPropertiesEXT&&) = &VkMemoryHostPointerPropertiesEXT::operator=;
extern "C" { void AcidSharp_symbols1762(VkMemoryHostPointerPropertiesEXT* instance) { instance->~VkMemoryHostPointerPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1763(void* instance) { new (instance) VkPhysicalDeviceExternalMemoryHostPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1764(void* instance, const VkPhysicalDeviceExternalMemoryHostPropertiesEXT& _0) { new (instance) VkPhysicalDeviceExternalMemoryHostPropertiesEXT(_0); } }
VkPhysicalDeviceExternalMemoryHostPropertiesEXT& (VkPhysicalDeviceExternalMemoryHostPropertiesEXT::*AcidSharp_symbols1765)(const VkPhysicalDeviceExternalMemoryHostPropertiesEXT&) = &VkPhysicalDeviceExternalMemoryHostPropertiesEXT::operator=;
VkPhysicalDeviceExternalMemoryHostPropertiesEXT& (VkPhysicalDeviceExternalMemoryHostPropertiesEXT::*AcidSharp_symbols1766)(VkPhysicalDeviceExternalMemoryHostPropertiesEXT&&) = &VkPhysicalDeviceExternalMemoryHostPropertiesEXT::operator=;
extern "C" { void AcidSharp_symbols1767(VkPhysicalDeviceExternalMemoryHostPropertiesEXT* instance) { instance->~VkPhysicalDeviceExternalMemoryHostPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1768(void* instance) { new (instance) VkPhysicalDeviceShaderCorePropertiesAMD(); } }
extern "C" { void AcidSharp_symbols1769(void* instance, const VkPhysicalDeviceShaderCorePropertiesAMD& _0) { new (instance) VkPhysicalDeviceShaderCorePropertiesAMD(_0); } }
VkPhysicalDeviceShaderCorePropertiesAMD& (VkPhysicalDeviceShaderCorePropertiesAMD::*AcidSharp_symbols1770)(const VkPhysicalDeviceShaderCorePropertiesAMD&) = &VkPhysicalDeviceShaderCorePropertiesAMD::operator=;
VkPhysicalDeviceShaderCorePropertiesAMD& (VkPhysicalDeviceShaderCorePropertiesAMD::*AcidSharp_symbols1771)(VkPhysicalDeviceShaderCorePropertiesAMD&&) = &VkPhysicalDeviceShaderCorePropertiesAMD::operator=;
extern "C" { void AcidSharp_symbols1772(VkPhysicalDeviceShaderCorePropertiesAMD* instance) { instance->~VkPhysicalDeviceShaderCorePropertiesAMD(); } }
extern "C" { void AcidSharp_symbols1773(void* instance) { new (instance) VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1774(void* instance, const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& _0) { new (instance) VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT(_0); } }
VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& (VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT::*AcidSharp_symbols1775)(const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT&) = &VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT::operator=;
VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& (VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT::*AcidSharp_symbols1776)(VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT&&) = &VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT::operator=;
extern "C" { void AcidSharp_symbols1777(VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT* instance) { instance->~VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT(); } }
extern "C" { void AcidSharp_symbols1778(void* instance) { new (instance) VkVertexInputBindingDivisorDescriptionEXT(); } }
extern "C" { void AcidSharp_symbols1779(void* instance, const VkVertexInputBindingDivisorDescriptionEXT& _0) { new (instance) VkVertexInputBindingDivisorDescriptionEXT(_0); } }
VkVertexInputBindingDivisorDescriptionEXT& (VkVertexInputBindingDivisorDescriptionEXT::*AcidSharp_symbols1780)(const VkVertexInputBindingDivisorDescriptionEXT&) = &VkVertexInputBindingDivisorDescriptionEXT::operator=;
VkVertexInputBindingDivisorDescriptionEXT& (VkVertexInputBindingDivisorDescriptionEXT::*AcidSharp_symbols1781)(VkVertexInputBindingDivisorDescriptionEXT&&) = &VkVertexInputBindingDivisorDescriptionEXT::operator=;
extern "C" { void AcidSharp_symbols1782(VkVertexInputBindingDivisorDescriptionEXT* instance) { instance->~VkVertexInputBindingDivisorDescriptionEXT(); } }
extern "C" { void AcidSharp_symbols1783(void* instance) { new (instance) VkPipelineVertexInputDivisorStateCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1784(void* instance, const VkPipelineVertexInputDivisorStateCreateInfoEXT& _0) { new (instance) VkPipelineVertexInputDivisorStateCreateInfoEXT(_0); } }
VkPipelineVertexInputDivisorStateCreateInfoEXT& (VkPipelineVertexInputDivisorStateCreateInfoEXT::*AcidSharp_symbols1785)(const VkPipelineVertexInputDivisorStateCreateInfoEXT&) = &VkPipelineVertexInputDivisorStateCreateInfoEXT::operator=;
VkPipelineVertexInputDivisorStateCreateInfoEXT& (VkPipelineVertexInputDivisorStateCreateInfoEXT::*AcidSharp_symbols1786)(VkPipelineVertexInputDivisorStateCreateInfoEXT&&) = &VkPipelineVertexInputDivisorStateCreateInfoEXT::operator=;
extern "C" { void AcidSharp_symbols1787(VkPipelineVertexInputDivisorStateCreateInfoEXT* instance) { instance->~VkPipelineVertexInputDivisorStateCreateInfoEXT(); } }
extern "C" { void AcidSharp_symbols1788(void* instance) { new (instance) VkQueueFamilyCheckpointPropertiesNV(); } }
extern "C" { void AcidSharp_symbols1789(void* instance, const VkQueueFamilyCheckpointPropertiesNV& _0) { new (instance) VkQueueFamilyCheckpointPropertiesNV(_0); } }
VkQueueFamilyCheckpointPropertiesNV& (VkQueueFamilyCheckpointPropertiesNV::*AcidSharp_symbols1790)(const VkQueueFamilyCheckpointPropertiesNV&) = &VkQueueFamilyCheckpointPropertiesNV::operator=;
VkQueueFamilyCheckpointPropertiesNV& (VkQueueFamilyCheckpointPropertiesNV::*AcidSharp_symbols1791)(VkQueueFamilyCheckpointPropertiesNV&&) = &VkQueueFamilyCheckpointPropertiesNV::operator=;
extern "C" { void AcidSharp_symbols1792(VkQueueFamilyCheckpointPropertiesNV* instance) { instance->~VkQueueFamilyCheckpointPropertiesNV(); } }
extern "C" { void AcidSharp_symbols1793(void* instance) { new (instance) VkCheckpointDataNV(); } }
extern "C" { void AcidSharp_symbols1794(void* instance, const VkCheckpointDataNV& _0) { new (instance) VkCheckpointDataNV(_0); } }
VkCheckpointDataNV& (VkCheckpointDataNV::*AcidSharp_symbols1795)(const VkCheckpointDataNV&) = &VkCheckpointDataNV::operator=;
VkCheckpointDataNV& (VkCheckpointDataNV::*AcidSharp_symbols1796)(VkCheckpointDataNV&&) = &VkCheckpointDataNV::operator=;
extern "C" { void AcidSharp_symbols1797(VkCheckpointDataNV* instance) { instance->~VkCheckpointDataNV(); } }
extern "C" { void AcidSharp_symbols1798(void* instance, const ::uint32_t& renderpass, const ::uint32_t& subpass) { new (instance) acid::GraphicsStage(renderpass, subpass); } }
::uint32_t (acid::GraphicsStage::*AcidSharp_symbols1799)() const = &acid::GraphicsStage::GetRenderpass;
::uint32_t (acid::GraphicsStage::*AcidSharp_symbols1800)() const = &acid::GraphicsStage::GetSubpass;
extern "C" { void AcidSharp_symbols1801(void* instance, const acid::GraphicsStage& _0) { new (instance) acid::GraphicsStage(_0); } }
acid::GraphicsStage& (acid::GraphicsStage::*AcidSharp_symbols1802)(const acid::GraphicsStage&) = &acid::GraphicsStage::operator=;
acid::GraphicsStage& (acid::GraphicsStage::*AcidSharp_symbols1803)(acid::GraphicsStage&&) = &acid::GraphicsStage::operator=;
extern "C" { void AcidSharp_symbols1804(acid::GraphicsStage* instance) { instance->~GraphicsStage(); } }
extern "C" { void AcidSharp_symbols1805(void* instance, const acid::VertexInput& _0) { new (instance) acid::VertexInput(_0); } }
acid::VertexInput& (acid::VertexInput::*AcidSharp_symbols1806)(acid::VertexInput&&) = &acid::VertexInput::operator=;
acid::VertexInput& (acid::VertexInput::*AcidSharp_symbols1807)(const acid::VertexInput&) = &acid::VertexInput::operator=;
extern "C" { void AcidSharp_symbols1808(void* instance, const ::uint32_t& binding, const ::VkShaderStageFlags& stage, const ::VkDescriptorSetLayoutBinding& descriptorSetLayoutBinding, const ::VkDescriptorPoolSize& descriptorPoolSize) { new (instance) acid::DescriptorType(binding, stage, descriptorSetLayoutBinding, descriptorPoolSize); } }
::uint32_t (acid::DescriptorType::*AcidSharp_symbols1809)() const = &acid::DescriptorType::GetBinding;
::VkShaderStageFlags (acid::DescriptorType::*AcidSharp_symbols1810)() const = &acid::DescriptorType::GetStage;
::VkDescriptorSetLayoutBinding (acid::DescriptorType::*AcidSharp_symbols1811)() const = &acid::DescriptorType::GetLayoutBinding;
::VkDescriptorPoolSize (acid::DescriptorType::*AcidSharp_symbols1812)() const = &acid::DescriptorType::GetPoolSize;
acid::DescriptorType& (acid::DescriptorType::*AcidSharp_symbols1813)(const acid::DescriptorType&) = &acid::DescriptorType::operator=;
acid::DescriptorType& (acid::DescriptorType::*AcidSharp_symbols1814)(acid::DescriptorType&&) = &acid::DescriptorType::operator=;
extern "C" { void AcidSharp_symbols1815(acid::DescriptorType* instance) { instance->~DescriptorType(); } }
extern "C" { void AcidSharp_symbols1816(void* instance, const acid::DescriptorType& _0) { new (instance) acid::DescriptorType(_0); } }
extern "C" { void AcidSharp_symbols1817(void* instance, const std::string& name, const std::string& value) { new (instance) acid::PipelineDefine(name, value); } }
std::string (acid::PipelineDefine::*AcidSharp_symbols1818)() const = &acid::PipelineDefine::GetName;
std::string (acid::PipelineDefine::*AcidSharp_symbols1819)() const = &acid::PipelineDefine::GetValue;
extern "C" { void AcidSharp_symbols1820(void* instance, const acid::PipelineDefine& _0) { new (instance) acid::PipelineDefine(_0); } }
acid::PipelineDefine& (acid::PipelineDefine::*AcidSharp_symbols1821)(acid::PipelineDefine&&) = &acid::PipelineDefine::operator=;
acid::PipelineDefine& (acid::PipelineDefine::*AcidSharp_symbols1822)(const acid::PipelineDefine&) = &acid::PipelineDefine::operator=;
acid::VertexInput (acid::PipelineCreate::*AcidSharp_symbols1823)() const = &acid::PipelineCreate::GetVertexInput;
acid::PipelineMode (acid::PipelineCreate::*AcidSharp_symbols1824)() const = &acid::PipelineCreate::GetMode;
::VkPolygonMode (acid::PipelineCreate::*AcidSharp_symbols1825)() const = &acid::PipelineCreate::GetPolygonMode;
::VkCullModeFlags (acid::PipelineCreate::*AcidSharp_symbols1826)() const = &acid::PipelineCreate::GetCullMode;
extern "C" { void AcidSharp_symbols1827(void* instance, const acid::PipelineCreate& _0) { new (instance) acid::PipelineCreate(_0); } }
acid::PipelineCreate& (acid::PipelineCreate::*AcidSharp_symbols1828)(acid::PipelineCreate&&) = &acid::PipelineCreate::operator=;
acid::PipelineCreate& (acid::PipelineCreate::*AcidSharp_symbols1829)(const acid::PipelineCreate&) = &acid::PipelineCreate::operator=;
::uint32_t (acid::ComputeCreate::*AcidSharp_symbols1830)() const = &acid::ComputeCreate::GetWidth;
::uint32_t (acid::ComputeCreate::*AcidSharp_symbols1831)() const = &acid::ComputeCreate::GetHeight;
::uint32_t (acid::ComputeCreate::*AcidSharp_symbols1832)() const = &acid::ComputeCreate::GetWorkgroupSize;
extern "C" { void AcidSharp_symbols1833(void* instance, const acid::ComputeCreate& _0) { new (instance) acid::ComputeCreate(_0); } }
acid::ComputeCreate& (acid::ComputeCreate::*AcidSharp_symbols1834)(acid::ComputeCreate&&) = &acid::ComputeCreate::operator=;
acid::ComputeCreate& (acid::ComputeCreate::*AcidSharp_symbols1835)(const acid::ComputeCreate&) = &acid::ComputeCreate::operator=;
extern "C" { void AcidSharp_symbols1836(void* instance, const ::uint32_t& binding, const acid::AttachmentType& type, const ::VkFormat& format, const acid::Colour& clearColour) { new (instance) acid::Attachment(binding, type, format, clearColour); } }
::uint32_t (acid::Attachment::*AcidSharp_symbols1837)() const = &acid::Attachment::GetBinding;
acid::AttachmentType (acid::Attachment::*AcidSharp_symbols1838)() const = &acid::Attachment::GetType;
::VkFormat (acid::Attachment::*AcidSharp_symbols1839)() const = &acid::Attachment::GetFormat;
acid::Colour (acid::Attachment::*AcidSharp_symbols1840)() const = &acid::Attachment::GetClearColour;
extern "C" { void AcidSharp_symbols1841(void* instance, const acid::Attachment& _0) { new (instance) acid::Attachment(_0); } }
acid::Attachment& (acid::Attachment::*AcidSharp_symbols1842)(acid::Attachment&&) = &acid::Attachment::operator=;
extern "C" { void AcidSharp_symbols1843(acid::Attachment* instance) { instance->~Attachment(); } }
acid::Attachment& (acid::Attachment::*AcidSharp_symbols1844)(const acid::Attachment&) = &acid::Attachment::operator=;
::uint32_t (acid::SubpassType::*AcidSharp_symbols1845)() const = &acid::SubpassType::GetBinding;
extern "C" { void AcidSharp_symbols1846(void* instance, const acid::SubpassType& _0) { new (instance) acid::SubpassType(_0); } }
acid::SubpassType& (acid::SubpassType::*AcidSharp_symbols1847)(acid::SubpassType&&) = &acid::SubpassType::operator=;
extern "C" { void AcidSharp_symbols1848(acid::SubpassType* instance) { instance->~SubpassType(); } }
acid::SubpassType& (acid::SubpassType::*AcidSharp_symbols1849)(const acid::SubpassType&) = &acid::SubpassType::operator=;
::uint32_t (acid::RenderpassCreate::*AcidSharp_symbols1850)() const = &acid::RenderpassCreate::GetWidth;
void (acid::RenderpassCreate::*AcidSharp_symbols1851)(const ::uint32_t&) = &acid::RenderpassCreate::SetWidth;
::uint32_t (acid::RenderpassCreate::*AcidSharp_symbols1852)() const = &acid::RenderpassCreate::GetHeight;
void (acid::RenderpassCreate::*AcidSharp_symbols1853)(const ::uint32_t&) = &acid::RenderpassCreate::SetHeight;
extern "C" { void AcidSharp_symbols1854(void* instance, const acid::RenderpassCreate& _0) { new (instance) acid::RenderpassCreate(_0); } }
acid::RenderpassCreate& (acid::RenderpassCreate::*AcidSharp_symbols1855)(acid::RenderpassCreate&&) = &acid::RenderpassCreate::operator=;
extern "C" { void AcidSharp_symbols1856(acid::RenderpassCreate* instance) { instance->~RenderpassCreate(); } }
acid::RenderpassCreate& (acid::RenderpassCreate::*AcidSharp_symbols1857)(const acid::RenderpassCreate&) = &acid::RenderpassCreate::operator=;
acid::IManagerRender& (acid::IManagerRender::*AcidSharp_symbols1858)(const acid::IManagerRender&) = &acid::IManagerRender::operator=;
acid::IResource& (acid::IResource::*AcidSharp_symbols1859)(const acid::IResource&) = &acid::IResource::operator=;
acid::Resources* (*AcidSharp_symbols1860)() = &acid::Resources::Get;
extern "C" { void AcidSharp_symbols1861(void* instance, const acid::Resources& _0) { new (instance) acid::Resources(_0); } }
acid::Resources& (acid::Resources::*AcidSharp_symbols1862)(const acid::Resources&) = &acid::Resources::operator=;
acid::Vector3 (acid::Ray::*AcidSharp_symbols1863)() const = &acid::Ray::GetOrigin;
acid::Vector3 (acid::Ray::*AcidSharp_symbols1864)() const = &acid::Ray::GetCurrentRay;
extern "C" { void AcidSharp_symbols1865(void* instance, const acid::Ray& _0) { new (instance) acid::Ray(_0); } }
acid::Ray& (acid::Ray::*AcidSharp_symbols1866)(const acid::Ray&) = &acid::Ray::operator=;
acid::ICamera& (acid::ICamera::*AcidSharp_symbols1867)(const acid::ICamera&) = &acid::ICamera::operator=;
acid::IAxis& (acid::IAxis::*AcidSharp_symbols1868)(const acid::IAxis&) = &acid::IAxis::operator=;
extern "C" { void AcidSharp_symbols1869(void* instance) { new (instance) GLFWvidmode(); } }
extern "C" { void AcidSharp_symbols1870(void* instance, const GLFWvidmode& _0) { new (instance) GLFWvidmode(_0); } }
GLFWvidmode& (GLFWvidmode::*AcidSharp_symbols1871)(const GLFWvidmode&) = &GLFWvidmode::operator=;
GLFWvidmode& (GLFWvidmode::*AcidSharp_symbols1872)(GLFWvidmode&&) = &GLFWvidmode::operator=;
extern "C" { void AcidSharp_symbols1873(GLFWvidmode* instance) { instance->~GLFWvidmode(); } }
extern "C" { void AcidSharp_symbols1874(void* instance) { new (instance) GLFWgammaramp(); } }
extern "C" { void AcidSharp_symbols1875(void* instance, const GLFWgammaramp& _0) { new (instance) GLFWgammaramp(_0); } }
GLFWgammaramp& (GLFWgammaramp::*AcidSharp_symbols1876)(const GLFWgammaramp&) = &GLFWgammaramp::operator=;
GLFWgammaramp& (GLFWgammaramp::*AcidSharp_symbols1877)(GLFWgammaramp&&) = &GLFWgammaramp::operator=;
extern "C" { void AcidSharp_symbols1878(GLFWgammaramp* instance) { instance->~GLFWgammaramp(); } }
extern "C" { void AcidSharp_symbols1879(void* instance) { new (instance) GLFWimage(); } }
extern "C" { void AcidSharp_symbols1880(void* instance, const GLFWimage& _0) { new (instance) GLFWimage(_0); } }
GLFWimage& (GLFWimage::*AcidSharp_symbols1881)(const GLFWimage&) = &GLFWimage::operator=;
GLFWimage& (GLFWimage::*AcidSharp_symbols1882)(GLFWimage&&) = &GLFWimage::operator=;
extern "C" { void AcidSharp_symbols1883(GLFWimage* instance) { instance->~GLFWimage(); } }
extern "C" { void AcidSharp_symbols1884(void* instance) { new (instance) GLFWgamepadstate(); } }
extern "C" { void AcidSharp_symbols1885(void* instance, const GLFWgamepadstate& _0) { new (instance) GLFWgamepadstate(_0); } }
GLFWgamepadstate& (GLFWgamepadstate::*AcidSharp_symbols1886)(const GLFWgamepadstate&) = &GLFWgamepadstate::operator=;
GLFWgamepadstate& (GLFWgamepadstate::*AcidSharp_symbols1887)(GLFWgamepadstate&&) = &GLFWgamepadstate::operator=;
extern "C" { void AcidSharp_symbols1888(GLFWgamepadstate* instance) { instance->~GLFWgamepadstate(); } }
acid::Display* (*AcidSharp_symbols1889)() = &acid::Display::Get;
::uint32_t (acid::Display::*AcidSharp_symbols1890)() = &acid::Display::GetWidth;
::uint32_t (acid::Display::*AcidSharp_symbols1891)() const = &acid::Display::GetWindowWidth;
void (acid::Display::*AcidSharp_symbols1892)(const ::uint32_t&) = &acid::Display::SetWidth;
::uint32_t (acid::Display::*AcidSharp_symbols1893)() = &acid::Display::GetHeight;
::uint32_t (acid::Display::*AcidSharp_symbols1894)() const = &acid::Display::GetWindowHeight;
void (acid::Display::*AcidSharp_symbols1895)(const ::uint32_t&) = &acid::Display::SetHeight;
float (acid::Display::*AcidSharp_symbols1896)() const = &acid::Display::GetAspectRatio;
std::string (acid::Display::*AcidSharp_symbols1897)() const = &acid::Display::GetTitle;
std::string (acid::Display::*AcidSharp_symbols1898)() const = &acid::Display::GetIcon;
bool (acid::Display::*AcidSharp_symbols1899)() const = &acid::Display::IsAntialiasing;
void (acid::Display::*AcidSharp_symbols1900)(const bool&) = &acid::Display::SetAntialiasing;
bool (acid::Display::*AcidSharp_symbols1901)() const = &acid::Display::IsFullscreen;
bool (acid::Display::*AcidSharp_symbols1902)() const = &acid::Display::IsClosed;
bool (acid::Display::*AcidSharp_symbols1903)() const = &acid::Display::IsFocused;
int (acid::Display::*AcidSharp_symbols1904)() const = &acid::Display::GetWindowXPos;
int (acid::Display::*AcidSharp_symbols1905)() const = &acid::Display::GetWindowYPos;
bool (acid::Display::*AcidSharp_symbols1906)() const = &acid::Display::IsIconified;
::GLFWwindow* (acid::Display::*AcidSharp_symbols1907)() const = &acid::Display::GetWindow;
::VkInstance (acid::Display::*AcidSharp_symbols1908)() const = &acid::Display::GetInstance;
::VkSurfaceKHR (acid::Display::*AcidSharp_symbols1909)() const = &acid::Display::GetSurface;
::VkSurfaceCapabilitiesKHR (acid::Display::*AcidSharp_symbols1910)() const = &acid::Display::GetSurfaceCapabilities;
::VkSurfaceFormatKHR (acid::Display::*AcidSharp_symbols1911)() const = &acid::Display::GetSurfaceFormat;
::VkDevice (acid::Display::*AcidSharp_symbols1912)() const = &acid::Display::GetLogicalDevice;
::VkSampleCountFlagBits (acid::Display::*AcidSharp_symbols1913)() const = &acid::Display::GetMsaaSamples;
::VkPhysicalDevice (acid::Display::*AcidSharp_symbols1914)() const = &acid::Display::GetPhysicalDevice;
::VkPhysicalDeviceProperties (acid::Display::*AcidSharp_symbols1915)() const = &acid::Display::GetPhysicalDeviceProperties;
::VkPhysicalDeviceFeatures (acid::Display::*AcidSharp_symbols1916)() const = &acid::Display::GetPhysicalDeviceFeatures;
::VkPhysicalDeviceMemoryProperties (acid::Display::*AcidSharp_symbols1917)() const = &acid::Display::GetPhysicalDeviceMemoryProperties;
::VkQueue (acid::Display::*AcidSharp_symbols1918)() const = &acid::Display::GetGraphicsQueue;
::VkQueue (acid::Display::*AcidSharp_symbols1919)() const = &acid::Display::GetPresentQueue;
::VkQueue (acid::Display::*AcidSharp_symbols1920)() const = &acid::Display::GetComputeQueue;
::uint32_t (acid::Display::*AcidSharp_symbols1921)() const = &acid::Display::GetGraphicsFamily;
::uint32_t (acid::Display::*AcidSharp_symbols1922)() const = &acid::Display::GetPresentFamily;
::uint32_t (acid::Display::*AcidSharp_symbols1923)() const = &acid::Display::GetComputeFamily;
extern "C" { void AcidSharp_symbols1924(void* instance, const acid::Display& _0) { new (instance) acid::Display(_0); } }
acid::Display& (acid::Display::*AcidSharp_symbols1925)(const acid::Display&) = &acid::Display::operator=;
extern "C" { void AcidSharp_symbols1926(void* instance, const acid::Joystick& _0) { new (instance) acid::Joystick(_0); } }
acid::Joystick& (acid::Joystick::*AcidSharp_symbols1927)(acid::Joystick&&) = &acid::Joystick::operator=;
acid::Joystick& (acid::Joystick::*AcidSharp_symbols1928)(const acid::Joystick&) = &acid::Joystick::operator=;
acid::Joysticks* (*AcidSharp_symbols1929)() = &acid::Joysticks::Get;
bool (acid::Joysticks::*AcidSharp_symbols1930)(const acid::JoystickPort&) const = &acid::Joysticks::IsConnected;
std::string (acid::Joysticks::*AcidSharp_symbols1931)(const acid::JoystickPort&) const = &acid::Joysticks::GetName;
::uint32_t (acid::Joysticks::*AcidSharp_symbols1932)(const acid::JoystickPort&) const = &acid::Joysticks::GetCountButtons;
::uint32_t (acid::Joysticks::*AcidSharp_symbols1933)(const acid::JoystickPort&) const = &acid::Joysticks::GetCountAxes;
extern "C" { void AcidSharp_symbols1934(void* instance, const acid::Joysticks& _0) { new (instance) acid::Joysticks(_0); } }
acid::Joysticks& (acid::Joysticks::*AcidSharp_symbols1935)(const acid::Joysticks&) = &acid::Joysticks::operator=;
acid::JoystickPort (acid::AxisJoystick::*AcidSharp_symbols1936)() const = &acid::AxisJoystick::GetJoystick;
void (acid::AxisJoystick::*AcidSharp_symbols1937)(const acid::JoystickPort&) = &acid::AxisJoystick::SetJoystick;
extern "C" { void AcidSharp_symbols1938(void* instance, const acid::AxisJoystick& _0) { new (instance) acid::AxisJoystick(_0); } }
acid::AxisJoystick& (acid::AxisJoystick::*AcidSharp_symbols1939)(const acid::AxisJoystick&) = &acid::AxisJoystick::operator=;
acid::IButton& (acid::IButton::*AcidSharp_symbols1940)(const acid::IButton&) = &acid::IButton::operator=;
acid::JoystickPort (acid::ButtonJoystick::*AcidSharp_symbols1941)() const = &acid::ButtonJoystick::GetJoystick;
void (acid::ButtonJoystick::*AcidSharp_symbols1942)(const acid::JoystickPort&) = &acid::ButtonJoystick::SetJoystick;
extern "C" { void AcidSharp_symbols1943(void* instance, const acid::ButtonJoystick& _0) { new (instance) acid::ButtonJoystick(_0); } }
acid::ButtonJoystick& (acid::ButtonJoystick::*AcidSharp_symbols1944)(const acid::ButtonJoystick&) = &acid::ButtonJoystick::operator=;
acid::Mouse* (*AcidSharp_symbols1945)() = &acid::Mouse::Get;
std::string (acid::Mouse::*AcidSharp_symbols1946)() const = &acid::Mouse::GetCustomMouse;
float (acid::Mouse::*AcidSharp_symbols1947)() const = &acid::Mouse::GetPositionX;
float (acid::Mouse::*AcidSharp_symbols1948)() const = &acid::Mouse::GetPositionY;
float (acid::Mouse::*AcidSharp_symbols1949)() const = &acid::Mouse::GetDeltaX;
float (acid::Mouse::*AcidSharp_symbols1950)() const = &acid::Mouse::GetDeltaY;
float (acid::Mouse::*AcidSharp_symbols1951)() const = &acid::Mouse::GetDeltaWheel;
bool (acid::Mouse::*AcidSharp_symbols1952)() const = &acid::Mouse::IsDisplaySelected;
bool (acid::Mouse::*AcidSharp_symbols1953)() const = &acid::Mouse::IsCursorDisabled;
extern "C" { void AcidSharp_symbols1954(void* instance, const acid::Mouse& _0) { new (instance) acid::Mouse(_0); } }
acid::Mouse& (acid::Mouse::*AcidSharp_symbols1955)(const acid::Mouse&) = &acid::Mouse::operator=;
extern "C" { void AcidSharp_symbols1956(void* instance, const acid::ButtonMouse& _0) { new (instance) acid::ButtonMouse(_0); } }
acid::ButtonMouse& (acid::ButtonMouse::*AcidSharp_symbols1957)(const acid::ButtonMouse&) = &acid::ButtonMouse::operator=;
acid::Vector2 (acid::UiBound::*AcidSharp_symbols1958)() const = &acid::UiBound::GetPosition;
void (acid::UiBound::*AcidSharp_symbols1959)(const acid::Vector2&) = &acid::UiBound::SetPosition;
acid::Vector2 (acid::UiBound::*AcidSharp_symbols1960)() const = &acid::UiBound::GetReference;
void (acid::UiBound::*AcidSharp_symbols1961)(const acid::Vector2&) = &acid::UiBound::SetReference;
bool (acid::UiBound::*AcidSharp_symbols1962)() const = &acid::UiBound::IsAspectPosition;
void (acid::UiBound::*AcidSharp_symbols1963)(const bool&) = &acid::UiBound::SetAspectPosition;
bool (acid::UiBound::*AcidSharp_symbols1964)() const = &acid::UiBound::IsAspectSize;
void (acid::UiBound::*AcidSharp_symbols1965)(const bool&) = &acid::UiBound::SetAspectSize;
acid::Vector2 (acid::UiBound::*AcidSharp_symbols1966)() const = &acid::UiBound::GetDimensions;
void (acid::UiBound::*AcidSharp_symbols1967)(const acid::Vector2&) = &acid::UiBound::SetDimensions;
acid::UiObject* (acid::UiObject::*AcidSharp_symbols1968)() const = &acid::UiObject::GetParent;
void (acid::UiObject::*AcidSharp_symbols1969)(const bool&) = &acid::UiObject::SetVisible;
acid::UiBound& (acid::UiObject::*AcidSharp_symbols1970)() = &acid::UiObject::GetRectangle;
void (acid::UiObject::*AcidSharp_symbols1971)(const acid::UiBound&) = &acid::UiObject::SetRectangle;
acid::Vector4 (acid::UiObject::*AcidSharp_symbols1972)() const = &acid::UiObject::GetScissor;
void (acid::UiObject::*AcidSharp_symbols1973)(const acid::Vector4&) = &acid::UiObject::SetScissor;
acid::Vector2 (acid::UiObject::*AcidSharp_symbols1974)() const = &acid::UiObject::GetPositionOffset;
void (acid::UiObject::*AcidSharp_symbols1975)(const acid::Vector2&) = &acid::UiObject::SetPositionOffset;
acid::Vector4 (acid::UiObject::*AcidSharp_symbols1976)() const = &acid::UiObject::GetScreenTransform;
float (acid::UiObject::*AcidSharp_symbols1977)() const = &acid::UiObject::GetScale;
extern "C" { void AcidSharp_symbols1978(void* instance, const acid::UiObject& _0) { new (instance) acid::UiObject(_0); } }
acid::UiObject& (acid::UiObject::*AcidSharp_symbols1979)(const acid::UiObject&) = &acid::UiObject::operator=;
extern "C" { void AcidSharp_symbols1980(void* instance, const acid::JoystickPort& joystick, const ::uint32_t& joystickLeftClick, const ::uint32_t& joystickRightClick, const ::uint32_t& joystickAxisX, const ::uint32_t& joystickAxisY) { new (instance) acid::SelectorJoystick(joystick, joystickLeftClick, joystickRightClick, joystickAxisX, joystickAxisY); } }
extern "C" { void AcidSharp_symbols1981(acid::SelectorJoystick* instance) { instance->~SelectorJoystick(); } }
acid::JoystickPort (acid::SelectorJoystick::*AcidSharp_symbols1982)() const = &acid::SelectorJoystick::GetJoystick;
void (acid::SelectorJoystick::*AcidSharp_symbols1983)(const acid::JoystickPort&) = &acid::SelectorJoystick::SetJoystick;
acid::ButtonJoystick (acid::SelectorJoystick::*AcidSharp_symbols1984)() const = &acid::SelectorJoystick::GetClickLeft;
void (acid::SelectorJoystick::*AcidSharp_symbols1985)(const acid::ButtonJoystick&) = &acid::SelectorJoystick::SetClickLeft;
acid::ButtonJoystick (acid::SelectorJoystick::*AcidSharp_symbols1986)() const = &acid::SelectorJoystick::GetClickRight;
void (acid::SelectorJoystick::*AcidSharp_symbols1987)(const acid::ButtonJoystick&) = &acid::SelectorJoystick::SetClickRight;
acid::AxisJoystick (acid::SelectorJoystick::*AcidSharp_symbols1988)() const = &acid::SelectorJoystick::GetAxisX;
void (acid::SelectorJoystick::*AcidSharp_symbols1989)(const acid::AxisJoystick&) = &acid::SelectorJoystick::SetAxisX;
acid::AxisJoystick (acid::SelectorJoystick::*AcidSharp_symbols1990)() const = &acid::SelectorJoystick::GetAxisY;
void (acid::SelectorJoystick::*AcidSharp_symbols1991)(const acid::AxisJoystick&) = &acid::SelectorJoystick::SetAxisY;
extern "C" { void AcidSharp_symbols1992(void* instance, const acid::SelectorJoystick& _0) { new (instance) acid::SelectorJoystick(_0); } }
acid::SelectorJoystick& (acid::SelectorJoystick::*AcidSharp_symbols1993)(const acid::SelectorJoystick&) = &acid::SelectorJoystick::operator=;
float (acid::UiSelector::*AcidSharp_symbols1994)() const = &acid::UiSelector::GetCursorX;
float (acid::UiSelector::*AcidSharp_symbols1995)() const = &acid::UiSelector::GetCursorY;
bool (acid::UiSelector::*AcidSharp_symbols1996)() const = &acid::UiSelector::GetLeftClick;
bool (acid::UiSelector::*AcidSharp_symbols1997)() const = &acid::UiSelector::GetRightClick;
bool (acid::UiSelector::*AcidSharp_symbols1998)() const = &acid::UiSelector::WasLeftClick;
bool (acid::UiSelector::*AcidSharp_symbols1999)() const = &acid::UiSelector::WasRightClick;
extern "C" { void AcidSharp_symbols2000(void* instance, const acid::UiSelector& _0) { new (instance) acid::UiSelector(_0); } }
acid::UiSelector& (acid::UiSelector::*AcidSharp_symbols2001)(const acid::UiSelector&) = &acid::UiSelector::operator=;
btDiscreteDynamicsWorld* (acid::ScenePhysics::*AcidSharp_symbols2002)() = &acid::ScenePhysics::GetDynamicsWorld;
extern "C" { void AcidSharp_symbols2003(void* instance, const acid::ScenePhysics& _0) { new (instance) acid::ScenePhysics(_0); } }
acid::ScenePhysics& (acid::ScenePhysics::*AcidSharp_symbols2004)(const acid::ScenePhysics&) = &acid::ScenePhysics::operator=;
bool (acid::Force::*AcidSharp_symbols2005)() const = &acid::Force::IsExpired;
acid::Vector3 (acid::Force::*AcidSharp_symbols2006)() const = &acid::Force::GetForce;
void (acid::Force::*AcidSharp_symbols2007)(const acid::Vector3&) = &acid::Force::SetForce;
float (acid::Force::*AcidSharp_symbols2008)() const = &acid::Force::GetTimeLeft;
void (acid::Force::*AcidSharp_symbols2009)(float) = &acid::Force::SetTimeLeft;
acid::Vector3 (acid::Force::*AcidSharp_symbols2010)() const = &acid::Force::GetPosition;
void (acid::Force::*AcidSharp_symbols2011)(const acid::Vector3&) = &acid::Force::SetPosition;
extern "C" { void AcidSharp_symbols2012(void* instance, const acid::Force& _0) { new (instance) acid::Force(_0); } }
acid::Force& (acid::Force::*AcidSharp_symbols2013)(const acid::Force&) = &acid::Force::operator=;
float (acid::Rigidbody::*AcidSharp_symbols2014)() const = &acid::Rigidbody::GetMass;
float (acid::Rigidbody::*AcidSharp_symbols2015)() const = &acid::Rigidbody::GetFriction;
acid::Vector3 (acid::Rigidbody::*AcidSharp_symbols2016)() const = &acid::Rigidbody::GetLinearFactor;
acid::Vector3 (acid::Rigidbody::*AcidSharp_symbols2017)() const = &acid::Rigidbody::GetAngularFactor;
const acid::Vector3 (acid::Rigidbody::*AcidSharp_symbols2018)() const = &acid::Rigidbody::GetLinearVelocity;
const acid::Vector3 (acid::Rigidbody::*AcidSharp_symbols2019)() const = &acid::Rigidbody::GetAngularVelocity;
extern "C" { void AcidSharp_symbols2020(void* instance, const acid::Rigidbody& _0) { new (instance) acid::Rigidbody(_0); } }
acid::Rigidbody& (acid::Rigidbody::*AcidSharp_symbols2021)(const acid::Rigidbody&) = &acid::Rigidbody::operator=;
extern "C" { void AcidSharp_symbols2022(void* instance, const acid::SceneStructure& _0) { new (instance) acid::SceneStructure(_0); } }
acid::SceneStructure& (acid::SceneStructure::*AcidSharp_symbols2023)(const acid::SceneStructure&) = &acid::SceneStructure::operator=;
acid::ICamera* (acid::IScene::*AcidSharp_symbols2024)() const = &acid::IScene::GetCamera;
void (acid::IScene::*AcidSharp_symbols2025)(acid::ICamera*) = &acid::IScene::SetCamera;
acid::ScenePhysics* (acid::IScene::*AcidSharp_symbols2026)() const = &acid::IScene::GetPhysics;
acid::SceneStructure* (acid::IScene::*AcidSharp_symbols2027)() const = &acid::IScene::GetStructure;
bool (acid::IScene::*AcidSharp_symbols2028)() const = &acid::IScene::IsStarted;
void (acid::IScene::*AcidSharp_symbols2029)(const bool&) = &acid::IScene::SetStarted;
acid::IScene& (acid::IScene::*AcidSharp_symbols2030)(const acid::IScene&) = &acid::IScene::operator=;
extern "C" { void AcidSharp_symbols2031(void* instance, const acid::ComponentCreate& _0) { new (instance) acid::ComponentCreate(_0); } }
acid::ComponentCreate& (acid::ComponentCreate::*AcidSharp_symbols2032)(acid::ComponentCreate&&) = &acid::ComponentCreate::operator=;
extern "C" { void AcidSharp_symbols2033(void* instance) { new (instance) acid::ComponentCreate(); } }
acid::ComponentCreate& (acid::ComponentCreate::*AcidSharp_symbols2034)(const acid::ComponentCreate&) = &acid::ComponentCreate::operator=;
extern "C" { void AcidSharp_symbols2035(void* instance, const acid::ComponentRegister& _0) { new (instance) acid::ComponentRegister(_0); } }
acid::ComponentRegister& (acid::ComponentRegister::*AcidSharp_symbols2036)(const acid::ComponentRegister&) = &acid::ComponentRegister::operator=;
acid::Scenes* (*AcidSharp_symbols2037)() = &acid::Scenes::Get;
acid::IScene* (acid::Scenes::*AcidSharp_symbols2038)() const = &acid::Scenes::GetScene;
acid::IComponent* (acid::Scenes::*AcidSharp_symbols2039)(const std::string&) = &acid::Scenes::CreateComponent;
bool (acid::Scenes::*AcidSharp_symbols2040)(const std::string&) = &acid::Scenes::DeregisterComponent;
acid::ICamera* (acid::Scenes::*AcidSharp_symbols2041)() const = &acid::Scenes::GetCamera;
acid::ScenePhysics* (acid::Scenes::*AcidSharp_symbols2042)() const = &acid::Scenes::GetPhysics;
acid::SceneStructure* (acid::Scenes::*AcidSharp_symbols2043)() const = &acid::Scenes::GetStructure;
bool (acid::Scenes::*AcidSharp_symbols2044)() = &acid::Scenes::IsGamePaused;
extern "C" { void AcidSharp_symbols2045(void* instance, const acid::Scenes& _0) { new (instance) acid::Scenes(_0); } }
acid::Scenes& (acid::Scenes::*AcidSharp_symbols2046)(const acid::Scenes&) = &acid::Scenes::operator=;
bool (acid::CommandBuffer::*AcidSharp_symbols2047)() const = &acid::CommandBuffer::IsRunning;
::VkCommandBuffer (acid::CommandBuffer::*AcidSharp_symbols2048)() const = &acid::CommandBuffer::GetCommandBuffer;
extern "C" { void AcidSharp_symbols2049(void* instance, const acid::CommandBuffer& _0) { new (instance) acid::CommandBuffer(_0); } }
acid::CommandBuffer& (acid::CommandBuffer::*AcidSharp_symbols2050)(const acid::CommandBuffer&) = &acid::CommandBuffer::operator=;
extern "C" { void AcidSharp_symbols2051(void* instance, const std::string& name, const int& binding, const int& offset, const int& size, const int& glType, const ::VkShaderStageFlags& stageFlags) { new (instance) acid::Uniform(name, binding, offset, size, glType, stageFlags); } }
extern "C" { void AcidSharp_symbols2052(acid::Uniform* instance) { instance->~Uniform(); } }
std::string (acid::Uniform::*AcidSharp_symbols2053)() const = &acid::Uniform::GetName;
int (acid::Uniform::*AcidSharp_symbols2054)() const = &acid::Uniform::GetBinding;
int (acid::Uniform::*AcidSharp_symbols2055)() const = &acid::Uniform::GetOffset;
int (acid::Uniform::*AcidSharp_symbols2056)() const = &acid::Uniform::GetSize;
int (acid::Uniform::*AcidSharp_symbols2057)() const = &acid::Uniform::GetGlType;
::VkShaderStageFlags (acid::Uniform::*AcidSharp_symbols2058)() const = &acid::Uniform::GetStageFlags;
void (acid::Uniform::*AcidSharp_symbols2059)(const ::VkShaderStageFlags&) = &acid::Uniform::SetStageFlags;
bool (acid::Uniform::*AcidSharp_symbols2060)(const acid::Uniform&) const = &acid::Uniform::operator==;
bool (acid::Uniform::*AcidSharp_symbols2061)(const acid::Uniform&) const = &acid::Uniform::operator!=;
std::string (acid::Uniform::*AcidSharp_symbols2062)() const = &acid::Uniform::ToString;
extern "C" { void AcidSharp_symbols2063(void* instance, const acid::Uniform& _0) { new (instance) acid::Uniform(_0); } }
acid::Uniform& (acid::Uniform::*AcidSharp_symbols2064)(const acid::Uniform&) = &acid::Uniform::operator=;
extern "C" { void AcidSharp_symbols2065(void* instance, const std::string& name, const int& binding, const int& size, const ::VkShaderStageFlags& stageFlags) { new (instance) acid::UniformBlock(name, binding, size, stageFlags); } }
extern "C" { void AcidSharp_symbols2066(acid::UniformBlock* instance) { instance->~UniformBlock(); } }
void (acid::UniformBlock::*AcidSharp_symbols2067)(acid::Uniform*) = &acid::UniformBlock::AddUniform;
std::string (acid::UniformBlock::*AcidSharp_symbols2068)() const = &acid::UniformBlock::GetName;
int (acid::UniformBlock::*AcidSharp_symbols2069)() const = &acid::UniformBlock::GetBinding;
int (acid::UniformBlock::*AcidSharp_symbols2070)() const = &acid::UniformBlock::GetSize;
::VkShaderStageFlags (acid::UniformBlock::*AcidSharp_symbols2071)() const = &acid::UniformBlock::GetStageFlags;
void (acid::UniformBlock::*AcidSharp_symbols2072)(const ::VkShaderStageFlags&) = &acid::UniformBlock::SetStageFlags;
std::string (acid::UniformBlock::*AcidSharp_symbols2073)() const = &acid::UniformBlock::ToString;
extern "C" { void AcidSharp_symbols2074(void* instance, const acid::UniformBlock& _0) { new (instance) acid::UniformBlock(_0); } }
acid::UniformBlock& (acid::UniformBlock::*AcidSharp_symbols2075)(const acid::UniformBlock&) = &acid::UniformBlock::operator=;
extern "C" { void AcidSharp_symbols2076(void* instance, const std::string& name, const int& location, const int& size, const int& glType) { new (instance) acid::VertexAttribute(name, location, size, glType); } }
extern "C" { void AcidSharp_symbols2077(acid::VertexAttribute* instance) { instance->~VertexAttribute(); } }
std::string (acid::VertexAttribute::*AcidSharp_symbols2078)() const = &acid::VertexAttribute::GetName;
int (acid::VertexAttribute::*AcidSharp_symbols2079)() const = &acid::VertexAttribute::GetLocation;
int (acid::VertexAttribute::*AcidSharp_symbols2080)() const = &acid::VertexAttribute::GetSize;
int (acid::VertexAttribute::*AcidSharp_symbols2081)() const = &acid::VertexAttribute::GetGlType;
std::string (acid::VertexAttribute::*AcidSharp_symbols2082)() const = &acid::VertexAttribute::ToString;
extern "C" { void AcidSharp_symbols2083(void* instance, const acid::VertexAttribute& _0) { new (instance) acid::VertexAttribute(_0); } }
acid::VertexAttribute& (acid::VertexAttribute::*AcidSharp_symbols2084)(const acid::VertexAttribute&) = &acid::VertexAttribute::operator=;
std::string (acid::ShaderProgram::*AcidSharp_symbols2085)() const = &acid::ShaderProgram::GetName;
extern "C" { void AcidSharp_symbols2086(void* instance, const acid::ShaderProgram& _0) { new (instance) acid::ShaderProgram(_0); } }
acid::ShaderProgram& (acid::ShaderProgram::*AcidSharp_symbols2087)(const acid::ShaderProgram&) = &acid::ShaderProgram::operator=;
acid::IPipeline& (acid::IPipeline::*AcidSharp_symbols2088)(const acid::IPipeline&) = &acid::IPipeline::operator=;
::VkDescriptorSet (acid::DescriptorSet::*AcidSharp_symbols2089)() const = &acid::DescriptorSet::GetDescriptorSet;
extern "C" { void AcidSharp_symbols2090(void* instance, const acid::DescriptorSet& _0) { new (instance) acid::DescriptorSet(_0); } }
acid::DescriptorSet& (acid::DescriptorSet::*AcidSharp_symbols2091)(const acid::DescriptorSet&) = &acid::DescriptorSet::operator=;
::VkDeviceSize (acid::Buffer::*AcidSharp_symbols2092)() const = &acid::Buffer::GetSize;
::VkBuffer (acid::Buffer::*AcidSharp_symbols2093)() const = &acid::Buffer::GetBuffer;
::VkDeviceMemory (acid::Buffer::*AcidSharp_symbols2094)() const = &acid::Buffer::GetBufferMemory;
acid::Buffer& (acid::Buffer::*AcidSharp_symbols2095)(const acid::Buffer&) = &acid::Buffer::operator=;
extern "C" { void AcidSharp_symbols2096(void* instance, const acid::Buffer& _0) { new (instance) acid::Buffer(_0); } }
acid::IDescriptor& (acid::IDescriptor::*AcidSharp_symbols2097)(const acid::IDescriptor&) = &acid::IDescriptor::operator=;
::uint32_t (acid::Texture::*AcidSharp_symbols2098)() const = &acid::Texture::GetComponents;
::uint32_t (acid::Texture::*AcidSharp_symbols2099)() const = &acid::Texture::GetWidth;
::uint32_t (acid::Texture::*AcidSharp_symbols2100)() const = &acid::Texture::GetHeight;
::VkImage (acid::Texture::*AcidSharp_symbols2101)() const = &acid::Texture::GetImage;
::VkImageView (acid::Texture::*AcidSharp_symbols2102)() const = &acid::Texture::GetImageView;
::VkSampler (acid::Texture::*AcidSharp_symbols2103)() const = &acid::Texture::GetSampler;
extern "C" { void AcidSharp_symbols2104(void* instance, const acid::Texture& _0) { new (instance) acid::Texture(_0); } }
acid::Texture& (acid::Texture::*AcidSharp_symbols2105)(const acid::Texture&) = &acid::Texture::operator=;
std::string (acid::Cubemap::*AcidSharp_symbols2106)() = &acid::Cubemap::GetExtension;
::uint32_t (acid::Cubemap::*AcidSharp_symbols2107)() const = &acid::Cubemap::GetComponents;
::uint32_t (acid::Cubemap::*AcidSharp_symbols2108)() const = &acid::Cubemap::GetWidth;
::uint32_t (acid::Cubemap::*AcidSharp_symbols2109)() const = &acid::Cubemap::GetHeight;
::uint32_t (acid::Cubemap::*AcidSharp_symbols2110)() const = &acid::Cubemap::GetDepth;
::VkImage (acid::Cubemap::*AcidSharp_symbols2111)() const = &acid::Cubemap::GetImage;
::VkImageView (acid::Cubemap::*AcidSharp_symbols2112)() const = &acid::Cubemap::GetImageView;
::VkSampler (acid::Cubemap::*AcidSharp_symbols2113)() const = &acid::Cubemap::GetSampler;
extern "C" { void AcidSharp_symbols2114(void* instance, const acid::Cubemap& _0) { new (instance) acid::Cubemap(_0); } }
acid::Cubemap& (acid::Cubemap::*AcidSharp_symbols2115)(const acid::Cubemap&) = &acid::Cubemap::operator=;
extern "C" { void AcidSharp_symbols2116(void* instance) { new (instance) stbi_io_callbacks(); } }
extern "C" { void AcidSharp_symbols2117(void* instance, const stbi_io_callbacks& _0) { new (instance) stbi_io_callbacks(_0); } }
stbi_io_callbacks& (stbi_io_callbacks::*AcidSharp_symbols2118)(const stbi_io_callbacks&) = &stbi_io_callbacks::operator=;
stbi_io_callbacks& (stbi_io_callbacks::*AcidSharp_symbols2119)(stbi_io_callbacks&&) = &stbi_io_callbacks::operator=;
extern "C" { void AcidSharp_symbols2120(stbi_io_callbacks* instance) { instance->~stbi_io_callbacks(); } }
