// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: odTripCollection.capnp

#pragma once

#include <capnp/generated-header-support.h>
#include <kj/windows-sanity.h>

#if CAPNP_VERSION != 8000
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif

#include "odTrip.capnp.h"

namespace capnp {
namespace schemas {

CAPNP_DECLARE_SCHEMA(e1b76be126da4a62);

}  // namespace schemas
}  // namespace capnp

namespace odTripCollection {

struct OdTripCollection {
  OdTripCollection() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(e1b76be126da4a62, 0, 1)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

// =======================================================================================

class OdTripCollection::Reader {
public:
  typedef OdTripCollection Reads;

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

  inline bool hasOdTrips() const;
  inline  ::capnp::List< ::odTrip::OdTrip,  ::capnp::Kind::STRUCT>::Reader getOdTrips() const;

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

class OdTripCollection::Builder {
public:
  typedef OdTripCollection Builds;

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

  inline bool hasOdTrips();
  inline  ::capnp::List< ::odTrip::OdTrip,  ::capnp::Kind::STRUCT>::Builder getOdTrips();
  inline void setOdTrips( ::capnp::List< ::odTrip::OdTrip,  ::capnp::Kind::STRUCT>::Reader value);
  inline  ::capnp::List< ::odTrip::OdTrip,  ::capnp::Kind::STRUCT>::Builder initOdTrips(unsigned int size);
  inline void adoptOdTrips(::capnp::Orphan< ::capnp::List< ::odTrip::OdTrip,  ::capnp::Kind::STRUCT>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::odTrip::OdTrip,  ::capnp::Kind::STRUCT>> disownOdTrips();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class OdTripCollection::Pipeline {
public:
  typedef OdTripCollection Pipelines;

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

inline bool OdTripCollection::Reader::hasOdTrips() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool OdTripCollection::Builder::hasOdTrips() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::odTrip::OdTrip,  ::capnp::Kind::STRUCT>::Reader OdTripCollection::Reader::getOdTrips() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::odTrip::OdTrip,  ::capnp::Kind::STRUCT>>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::odTrip::OdTrip,  ::capnp::Kind::STRUCT>::Builder OdTripCollection::Builder::getOdTrips() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::odTrip::OdTrip,  ::capnp::Kind::STRUCT>>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void OdTripCollection::Builder::setOdTrips( ::capnp::List< ::odTrip::OdTrip,  ::capnp::Kind::STRUCT>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::odTrip::OdTrip,  ::capnp::Kind::STRUCT>>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::odTrip::OdTrip,  ::capnp::Kind::STRUCT>::Builder OdTripCollection::Builder::initOdTrips(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::odTrip::OdTrip,  ::capnp::Kind::STRUCT>>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), size);
}
inline void OdTripCollection::Builder::adoptOdTrips(
    ::capnp::Orphan< ::capnp::List< ::odTrip::OdTrip,  ::capnp::Kind::STRUCT>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::odTrip::OdTrip,  ::capnp::Kind::STRUCT>>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::odTrip::OdTrip,  ::capnp::Kind::STRUCT>> OdTripCollection::Builder::disownOdTrips() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::odTrip::OdTrip,  ::capnp::Kind::STRUCT>>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

}  // namespace

