// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: person.capnp

#pragma once

#include <capnp/generated-header-support.h>
#include <kj/windows-sanity.h>

#if CAPNP_VERSION != 7000
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif


namespace capnp {
namespace schemas {

CAPNP_DECLARE_SCHEMA(e900aec85ed9b47f);
CAPNP_DECLARE_SCHEMA(f694a97e73332360);
enum class AgeGroup_f694a97e73332360: uint16_t {
  AG0004,
  AG0509,
  AG1014,
  AG1519,
  AG2024,
  AG2529,
  AG3034,
  AG3539,
  AG4044,
  AG4549,
  AG5054,
  AG5559,
  AG6064,
  AG6569,
  AG7074,
  AG7579,
  AG8084,
  AG8589,
  AG9094,
  AG95PLUS,
  UNKNOWN,
};
CAPNP_DECLARE_ENUM(AgeGroup, f694a97e73332360);
CAPNP_DECLARE_SCHEMA(a79f42e72d3438eb);
enum class Gender_a79f42e72d3438eb: uint16_t {
  FEMALE,
  MALE,
  CUSTOM,
  UNKNOWN,
};
CAPNP_DECLARE_ENUM(Gender, a79f42e72d3438eb);
CAPNP_DECLARE_SCHEMA(82dd95eaca051112);
enum class Occupation_82dd95eaca051112: uint16_t {
  FULL_TIME_WORKER,
  PART_TIME_WORKER,
  FULL_TIME_STUDENT,
  PART_TIME_STUDENT,
  WORKER_AND_STUDENT,
  RETIRED,
  AT_HOME,
  OTHER,
  NON_APPLICABLE,
  UNKNOWN,
};
CAPNP_DECLARE_ENUM(Occupation, 82dd95eaca051112);

}  // namespace schemas
}  // namespace capnp

namespace person {

struct Person {
  Person() = delete;

  class Reader;
  class Builder;
  class Pipeline;
  typedef ::capnp::schemas::AgeGroup_f694a97e73332360 AgeGroup;

  typedef ::capnp::schemas::Gender_a79f42e72d3438eb Gender;

  typedef ::capnp::schemas::Occupation_82dd95eaca051112 Occupation;


  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(e900aec85ed9b47f, 5, 8)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

// =======================================================================================

class Person::Reader {
public:
  typedef Person Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline bool hasUuid() const;
  inline  ::capnp::Text::Reader getUuid() const;

  inline bool hasHouseholdUuid() const;
  inline  ::capnp::Text::Reader getHouseholdUuid() const;

  inline  ::uint32_t getId() const;

  inline float getExpansionFactor() const;

  inline  ::int16_t getAge() const;

  inline  ::int8_t getDrivingLicenseOwner() const;

  inline  ::int8_t getTransitPassOwner() const;

  inline  ::person::Person::AgeGroup getAgeGroup() const;

  inline  ::person::Person::Gender getGender() const;

  inline  ::person::Person::Occupation getOccupation() const;

  inline float getUsualWorkPlaceLatitude() const;

  inline float getUsualWorkPlaceLongitude() const;

  inline float getUsualschoolPlaceLatitude() const;

  inline float getUsualschoolPlaceLongitude() const;

  inline bool hasUsualWorkPlaceNodesUuids() const;
  inline  ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>::Reader getUsualWorkPlaceNodesUuids() const;

  inline bool hasUsualWorkPlaceNodesTravelTimes() const;
  inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Reader getUsualWorkPlaceNodesTravelTimes() const;

  inline bool hasUsualWorkPlaceNodesDistances() const;
  inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Reader getUsualWorkPlaceNodesDistances() const;

  inline bool hasUsualSchoolPlaceNodesUuids() const;
  inline  ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>::Reader getUsualSchoolPlaceNodesUuids() const;

  inline bool hasUsualSchoolPlaceNodesTravelTimes() const;
  inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Reader getUsualSchoolPlaceNodesTravelTimes() const;

  inline bool hasUsualSchoolPlaceNodesDistances() const;
  inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Reader getUsualSchoolPlaceNodesDistances() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class Person::Builder {
public:
  typedef Person Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline bool hasUuid();
  inline  ::capnp::Text::Builder getUuid();
  inline void setUuid( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initUuid(unsigned int size);
  inline void adoptUuid(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownUuid();

  inline bool hasHouseholdUuid();
  inline  ::capnp::Text::Builder getHouseholdUuid();
  inline void setHouseholdUuid( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initHouseholdUuid(unsigned int size);
  inline void adoptHouseholdUuid(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownHouseholdUuid();

  inline  ::uint32_t getId();
  inline void setId( ::uint32_t value);

  inline float getExpansionFactor();
  inline void setExpansionFactor(float value);

  inline  ::int16_t getAge();
  inline void setAge( ::int16_t value);

  inline  ::int8_t getDrivingLicenseOwner();
  inline void setDrivingLicenseOwner( ::int8_t value);

  inline  ::int8_t getTransitPassOwner();
  inline void setTransitPassOwner( ::int8_t value);

  inline  ::person::Person::AgeGroup getAgeGroup();
  inline void setAgeGroup( ::person::Person::AgeGroup value);

  inline  ::person::Person::Gender getGender();
  inline void setGender( ::person::Person::Gender value);

  inline  ::person::Person::Occupation getOccupation();
  inline void setOccupation( ::person::Person::Occupation value);

  inline float getUsualWorkPlaceLatitude();
  inline void setUsualWorkPlaceLatitude(float value);

  inline float getUsualWorkPlaceLongitude();
  inline void setUsualWorkPlaceLongitude(float value);

  inline float getUsualschoolPlaceLatitude();
  inline void setUsualschoolPlaceLatitude(float value);

  inline float getUsualschoolPlaceLongitude();
  inline void setUsualschoolPlaceLongitude(float value);

  inline bool hasUsualWorkPlaceNodesUuids();
  inline  ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>::Builder getUsualWorkPlaceNodesUuids();
  inline void setUsualWorkPlaceNodesUuids( ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>::Reader value);
  inline void setUsualWorkPlaceNodesUuids(::kj::ArrayPtr<const  ::capnp::Text::Reader> value);
  inline  ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>::Builder initUsualWorkPlaceNodesUuids(unsigned int size);
  inline void adoptUsualWorkPlaceNodesUuids(::capnp::Orphan< ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>> disownUsualWorkPlaceNodesUuids();

  inline bool hasUsualWorkPlaceNodesTravelTimes();
  inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Builder getUsualWorkPlaceNodesTravelTimes();
  inline void setUsualWorkPlaceNodesTravelTimes( ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Reader value);
  inline void setUsualWorkPlaceNodesTravelTimes(::kj::ArrayPtr<const  ::int32_t> value);
  inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Builder initUsualWorkPlaceNodesTravelTimes(unsigned int size);
  inline void adoptUsualWorkPlaceNodesTravelTimes(::capnp::Orphan< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>> disownUsualWorkPlaceNodesTravelTimes();

  inline bool hasUsualWorkPlaceNodesDistances();
  inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Builder getUsualWorkPlaceNodesDistances();
  inline void setUsualWorkPlaceNodesDistances( ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Reader value);
  inline void setUsualWorkPlaceNodesDistances(::kj::ArrayPtr<const  ::int32_t> value);
  inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Builder initUsualWorkPlaceNodesDistances(unsigned int size);
  inline void adoptUsualWorkPlaceNodesDistances(::capnp::Orphan< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>> disownUsualWorkPlaceNodesDistances();

  inline bool hasUsualSchoolPlaceNodesUuids();
  inline  ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>::Builder getUsualSchoolPlaceNodesUuids();
  inline void setUsualSchoolPlaceNodesUuids( ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>::Reader value);
  inline void setUsualSchoolPlaceNodesUuids(::kj::ArrayPtr<const  ::capnp::Text::Reader> value);
  inline  ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>::Builder initUsualSchoolPlaceNodesUuids(unsigned int size);
  inline void adoptUsualSchoolPlaceNodesUuids(::capnp::Orphan< ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>> disownUsualSchoolPlaceNodesUuids();

  inline bool hasUsualSchoolPlaceNodesTravelTimes();
  inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Builder getUsualSchoolPlaceNodesTravelTimes();
  inline void setUsualSchoolPlaceNodesTravelTimes( ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Reader value);
  inline void setUsualSchoolPlaceNodesTravelTimes(::kj::ArrayPtr<const  ::int32_t> value);
  inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Builder initUsualSchoolPlaceNodesTravelTimes(unsigned int size);
  inline void adoptUsualSchoolPlaceNodesTravelTimes(::capnp::Orphan< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>> disownUsualSchoolPlaceNodesTravelTimes();

  inline bool hasUsualSchoolPlaceNodesDistances();
  inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Builder getUsualSchoolPlaceNodesDistances();
  inline void setUsualSchoolPlaceNodesDistances( ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Reader value);
  inline void setUsualSchoolPlaceNodesDistances(::kj::ArrayPtr<const  ::int32_t> value);
  inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Builder initUsualSchoolPlaceNodesDistances(unsigned int size);
  inline void adoptUsualSchoolPlaceNodesDistances(::capnp::Orphan< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>> disownUsualSchoolPlaceNodesDistances();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class Person::Pipeline {
public:
  typedef Person Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

// =======================================================================================

inline bool Person::Reader::hasUuid() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool Person::Builder::hasUuid() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader Person::Reader::getUuid() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder Person::Builder::getUuid() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void Person::Builder::setUuid( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder Person::Builder::initUuid(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), size);
}
inline void Person::Builder::adoptUuid(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> Person::Builder::disownUuid() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

inline bool Person::Reader::hasHouseholdUuid() const {
  return !_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline bool Person::Builder::hasHouseholdUuid() {
  return !_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader Person::Reader::getHouseholdUuid() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder Person::Builder::getHouseholdUuid() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline void Person::Builder::setHouseholdUuid( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder Person::Builder::initHouseholdUuid(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), size);
}
inline void Person::Builder::adoptHouseholdUuid(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> Person::Builder::disownHouseholdUuid() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}

inline  ::uint32_t Person::Reader::getId() const {
  return _reader.getDataField< ::uint32_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}

inline  ::uint32_t Person::Builder::getId() {
  return _builder.getDataField< ::uint32_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}
inline void Person::Builder::setId( ::uint32_t value) {
  _builder.setDataField< ::uint32_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS, value);
}

inline float Person::Reader::getExpansionFactor() const {
  return _reader.getDataField<float>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}

inline float Person::Builder::getExpansionFactor() {
  return _builder.getDataField<float>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}
inline void Person::Builder::setExpansionFactor(float value) {
  _builder.setDataField<float>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS, value);
}

inline  ::int16_t Person::Reader::getAge() const {
  return _reader.getDataField< ::int16_t>(
      ::capnp::bounded<4>() * ::capnp::ELEMENTS);
}

inline  ::int16_t Person::Builder::getAge() {
  return _builder.getDataField< ::int16_t>(
      ::capnp::bounded<4>() * ::capnp::ELEMENTS);
}
inline void Person::Builder::setAge( ::int16_t value) {
  _builder.setDataField< ::int16_t>(
      ::capnp::bounded<4>() * ::capnp::ELEMENTS, value);
}

inline  ::int8_t Person::Reader::getDrivingLicenseOwner() const {
  return _reader.getDataField< ::int8_t>(
      ::capnp::bounded<10>() * ::capnp::ELEMENTS);
}

inline  ::int8_t Person::Builder::getDrivingLicenseOwner() {
  return _builder.getDataField< ::int8_t>(
      ::capnp::bounded<10>() * ::capnp::ELEMENTS);
}
inline void Person::Builder::setDrivingLicenseOwner( ::int8_t value) {
  _builder.setDataField< ::int8_t>(
      ::capnp::bounded<10>() * ::capnp::ELEMENTS, value);
}

inline  ::int8_t Person::Reader::getTransitPassOwner() const {
  return _reader.getDataField< ::int8_t>(
      ::capnp::bounded<11>() * ::capnp::ELEMENTS);
}

inline  ::int8_t Person::Builder::getTransitPassOwner() {
  return _builder.getDataField< ::int8_t>(
      ::capnp::bounded<11>() * ::capnp::ELEMENTS);
}
inline void Person::Builder::setTransitPassOwner( ::int8_t value) {
  _builder.setDataField< ::int8_t>(
      ::capnp::bounded<11>() * ::capnp::ELEMENTS, value);
}

inline  ::person::Person::AgeGroup Person::Reader::getAgeGroup() const {
  return _reader.getDataField< ::person::Person::AgeGroup>(
      ::capnp::bounded<6>() * ::capnp::ELEMENTS);
}

inline  ::person::Person::AgeGroup Person::Builder::getAgeGroup() {
  return _builder.getDataField< ::person::Person::AgeGroup>(
      ::capnp::bounded<6>() * ::capnp::ELEMENTS);
}
inline void Person::Builder::setAgeGroup( ::person::Person::AgeGroup value) {
  _builder.setDataField< ::person::Person::AgeGroup>(
      ::capnp::bounded<6>() * ::capnp::ELEMENTS, value);
}

inline  ::person::Person::Gender Person::Reader::getGender() const {
  return _reader.getDataField< ::person::Person::Gender>(
      ::capnp::bounded<7>() * ::capnp::ELEMENTS);
}

inline  ::person::Person::Gender Person::Builder::getGender() {
  return _builder.getDataField< ::person::Person::Gender>(
      ::capnp::bounded<7>() * ::capnp::ELEMENTS);
}
inline void Person::Builder::setGender( ::person::Person::Gender value) {
  _builder.setDataField< ::person::Person::Gender>(
      ::capnp::bounded<7>() * ::capnp::ELEMENTS, value);
}

inline  ::person::Person::Occupation Person::Reader::getOccupation() const {
  return _reader.getDataField< ::person::Person::Occupation>(
      ::capnp::bounded<8>() * ::capnp::ELEMENTS);
}

inline  ::person::Person::Occupation Person::Builder::getOccupation() {
  return _builder.getDataField< ::person::Person::Occupation>(
      ::capnp::bounded<8>() * ::capnp::ELEMENTS);
}
inline void Person::Builder::setOccupation( ::person::Person::Occupation value) {
  _builder.setDataField< ::person::Person::Occupation>(
      ::capnp::bounded<8>() * ::capnp::ELEMENTS, value);
}

inline float Person::Reader::getUsualWorkPlaceLatitude() const {
  return _reader.getDataField<float>(
      ::capnp::bounded<5>() * ::capnp::ELEMENTS);
}

inline float Person::Builder::getUsualWorkPlaceLatitude() {
  return _builder.getDataField<float>(
      ::capnp::bounded<5>() * ::capnp::ELEMENTS);
}
inline void Person::Builder::setUsualWorkPlaceLatitude(float value) {
  _builder.setDataField<float>(
      ::capnp::bounded<5>() * ::capnp::ELEMENTS, value);
}

inline float Person::Reader::getUsualWorkPlaceLongitude() const {
  return _reader.getDataField<float>(
      ::capnp::bounded<6>() * ::capnp::ELEMENTS);
}

inline float Person::Builder::getUsualWorkPlaceLongitude() {
  return _builder.getDataField<float>(
      ::capnp::bounded<6>() * ::capnp::ELEMENTS);
}
inline void Person::Builder::setUsualWorkPlaceLongitude(float value) {
  _builder.setDataField<float>(
      ::capnp::bounded<6>() * ::capnp::ELEMENTS, value);
}

inline float Person::Reader::getUsualschoolPlaceLatitude() const {
  return _reader.getDataField<float>(
      ::capnp::bounded<7>() * ::capnp::ELEMENTS);
}

inline float Person::Builder::getUsualschoolPlaceLatitude() {
  return _builder.getDataField<float>(
      ::capnp::bounded<7>() * ::capnp::ELEMENTS);
}
inline void Person::Builder::setUsualschoolPlaceLatitude(float value) {
  _builder.setDataField<float>(
      ::capnp::bounded<7>() * ::capnp::ELEMENTS, value);
}

inline float Person::Reader::getUsualschoolPlaceLongitude() const {
  return _reader.getDataField<float>(
      ::capnp::bounded<8>() * ::capnp::ELEMENTS);
}

inline float Person::Builder::getUsualschoolPlaceLongitude() {
  return _builder.getDataField<float>(
      ::capnp::bounded<8>() * ::capnp::ELEMENTS);
}
inline void Person::Builder::setUsualschoolPlaceLongitude(float value) {
  _builder.setDataField<float>(
      ::capnp::bounded<8>() * ::capnp::ELEMENTS, value);
}

inline bool Person::Reader::hasUsualWorkPlaceNodesUuids() const {
  return !_reader.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS).isNull();
}
inline bool Person::Builder::hasUsualWorkPlaceNodesUuids() {
  return !_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>::Reader Person::Reader::getUsualWorkPlaceNodesUuids() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>>::get(_reader.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>::Builder Person::Builder::getUsualWorkPlaceNodesUuids() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>>::get(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}
inline void Person::Builder::setUsualWorkPlaceNodesUuids( ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>>::set(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), value);
}
inline void Person::Builder::setUsualWorkPlaceNodesUuids(::kj::ArrayPtr<const  ::capnp::Text::Reader> value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>>::set(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>::Builder Person::Builder::initUsualWorkPlaceNodesUuids(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>>::init(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), size);
}
inline void Person::Builder::adoptUsualWorkPlaceNodesUuids(
    ::capnp::Orphan< ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>>::adopt(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>> Person::Builder::disownUsualWorkPlaceNodesUuids() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>>::disown(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}

inline bool Person::Reader::hasUsualWorkPlaceNodesTravelTimes() const {
  return !_reader.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS).isNull();
}
inline bool Person::Builder::hasUsualWorkPlaceNodesTravelTimes() {
  return !_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Reader Person::Reader::getUsualWorkPlaceNodesTravelTimes() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::get(_reader.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Builder Person::Builder::getUsualWorkPlaceNodesTravelTimes() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::get(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS));
}
inline void Person::Builder::setUsualWorkPlaceNodesTravelTimes( ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::set(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS), value);
}
inline void Person::Builder::setUsualWorkPlaceNodesTravelTimes(::kj::ArrayPtr<const  ::int32_t> value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::set(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Builder Person::Builder::initUsualWorkPlaceNodesTravelTimes(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::init(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS), size);
}
inline void Person::Builder::adoptUsualWorkPlaceNodesTravelTimes(
    ::capnp::Orphan< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::adopt(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>> Person::Builder::disownUsualWorkPlaceNodesTravelTimes() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::disown(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS));
}

inline bool Person::Reader::hasUsualWorkPlaceNodesDistances() const {
  return !_reader.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS).isNull();
}
inline bool Person::Builder::hasUsualWorkPlaceNodesDistances() {
  return !_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Reader Person::Reader::getUsualWorkPlaceNodesDistances() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::get(_reader.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Builder Person::Builder::getUsualWorkPlaceNodesDistances() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::get(_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS));
}
inline void Person::Builder::setUsualWorkPlaceNodesDistances( ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::set(_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS), value);
}
inline void Person::Builder::setUsualWorkPlaceNodesDistances(::kj::ArrayPtr<const  ::int32_t> value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::set(_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Builder Person::Builder::initUsualWorkPlaceNodesDistances(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::init(_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS), size);
}
inline void Person::Builder::adoptUsualWorkPlaceNodesDistances(
    ::capnp::Orphan< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::adopt(_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>> Person::Builder::disownUsualWorkPlaceNodesDistances() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::disown(_builder.getPointerField(
      ::capnp::bounded<4>() * ::capnp::POINTERS));
}

inline bool Person::Reader::hasUsualSchoolPlaceNodesUuids() const {
  return !_reader.getPointerField(
      ::capnp::bounded<5>() * ::capnp::POINTERS).isNull();
}
inline bool Person::Builder::hasUsualSchoolPlaceNodesUuids() {
  return !_builder.getPointerField(
      ::capnp::bounded<5>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>::Reader Person::Reader::getUsualSchoolPlaceNodesUuids() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>>::get(_reader.getPointerField(
      ::capnp::bounded<5>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>::Builder Person::Builder::getUsualSchoolPlaceNodesUuids() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>>::get(_builder.getPointerField(
      ::capnp::bounded<5>() * ::capnp::POINTERS));
}
inline void Person::Builder::setUsualSchoolPlaceNodesUuids( ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>>::set(_builder.getPointerField(
      ::capnp::bounded<5>() * ::capnp::POINTERS), value);
}
inline void Person::Builder::setUsualSchoolPlaceNodesUuids(::kj::ArrayPtr<const  ::capnp::Text::Reader> value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>>::set(_builder.getPointerField(
      ::capnp::bounded<5>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>::Builder Person::Builder::initUsualSchoolPlaceNodesUuids(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>>::init(_builder.getPointerField(
      ::capnp::bounded<5>() * ::capnp::POINTERS), size);
}
inline void Person::Builder::adoptUsualSchoolPlaceNodesUuids(
    ::capnp::Orphan< ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>>::adopt(_builder.getPointerField(
      ::capnp::bounded<5>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>> Person::Builder::disownUsualSchoolPlaceNodesUuids() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::capnp::Text,  ::capnp::Kind::BLOB>>::disown(_builder.getPointerField(
      ::capnp::bounded<5>() * ::capnp::POINTERS));
}

inline bool Person::Reader::hasUsualSchoolPlaceNodesTravelTimes() const {
  return !_reader.getPointerField(
      ::capnp::bounded<6>() * ::capnp::POINTERS).isNull();
}
inline bool Person::Builder::hasUsualSchoolPlaceNodesTravelTimes() {
  return !_builder.getPointerField(
      ::capnp::bounded<6>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Reader Person::Reader::getUsualSchoolPlaceNodesTravelTimes() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::get(_reader.getPointerField(
      ::capnp::bounded<6>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Builder Person::Builder::getUsualSchoolPlaceNodesTravelTimes() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::get(_builder.getPointerField(
      ::capnp::bounded<6>() * ::capnp::POINTERS));
}
inline void Person::Builder::setUsualSchoolPlaceNodesTravelTimes( ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::set(_builder.getPointerField(
      ::capnp::bounded<6>() * ::capnp::POINTERS), value);
}
inline void Person::Builder::setUsualSchoolPlaceNodesTravelTimes(::kj::ArrayPtr<const  ::int32_t> value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::set(_builder.getPointerField(
      ::capnp::bounded<6>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Builder Person::Builder::initUsualSchoolPlaceNodesTravelTimes(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::init(_builder.getPointerField(
      ::capnp::bounded<6>() * ::capnp::POINTERS), size);
}
inline void Person::Builder::adoptUsualSchoolPlaceNodesTravelTimes(
    ::capnp::Orphan< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::adopt(_builder.getPointerField(
      ::capnp::bounded<6>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>> Person::Builder::disownUsualSchoolPlaceNodesTravelTimes() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::disown(_builder.getPointerField(
      ::capnp::bounded<6>() * ::capnp::POINTERS));
}

inline bool Person::Reader::hasUsualSchoolPlaceNodesDistances() const {
  return !_reader.getPointerField(
      ::capnp::bounded<7>() * ::capnp::POINTERS).isNull();
}
inline bool Person::Builder::hasUsualSchoolPlaceNodesDistances() {
  return !_builder.getPointerField(
      ::capnp::bounded<7>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Reader Person::Reader::getUsualSchoolPlaceNodesDistances() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::get(_reader.getPointerField(
      ::capnp::bounded<7>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Builder Person::Builder::getUsualSchoolPlaceNodesDistances() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::get(_builder.getPointerField(
      ::capnp::bounded<7>() * ::capnp::POINTERS));
}
inline void Person::Builder::setUsualSchoolPlaceNodesDistances( ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::set(_builder.getPointerField(
      ::capnp::bounded<7>() * ::capnp::POINTERS), value);
}
inline void Person::Builder::setUsualSchoolPlaceNodesDistances(::kj::ArrayPtr<const  ::int32_t> value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::set(_builder.getPointerField(
      ::capnp::bounded<7>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>::Builder Person::Builder::initUsualSchoolPlaceNodesDistances(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::init(_builder.getPointerField(
      ::capnp::bounded<7>() * ::capnp::POINTERS), size);
}
inline void Person::Builder::adoptUsualSchoolPlaceNodesDistances(
    ::capnp::Orphan< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::adopt(_builder.getPointerField(
      ::capnp::bounded<7>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>> Person::Builder::disownUsualSchoolPlaceNodesDistances() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::int32_t,  ::capnp::Kind::PRIMITIVE>>::disown(_builder.getPointerField(
      ::capnp::bounded<7>() * ::capnp::POINTERS));
}

}  // namespace
