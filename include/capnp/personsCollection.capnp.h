// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: personsCollection.capnp

#pragma once

#include <capnp/generated-header-support.h>
#include <kj/windows-sanity.h>

#if CAPNP_VERSION != 7000
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif

#include "person.capnp.h"

namespace capnp {
namespace schemas {

CAPNP_DECLARE_SCHEMA(dfaf416ff0c7f59b);

}  // namespace schemas
}  // namespace capnp

namespace personsCollection {

struct PersonsCollection {
  PersonsCollection() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(dfaf416ff0c7f59b, 0, 1)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

// =======================================================================================

class PersonsCollection::Reader {
public:
  typedef PersonsCollection Reads;

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

  inline bool hasPersons() const;
  inline  ::capnp::List< ::person::Person,  ::capnp::Kind::STRUCT>::Reader getPersons() const;

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

class PersonsCollection::Builder {
public:
  typedef PersonsCollection Builds;

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

  inline bool hasPersons();
  inline  ::capnp::List< ::person::Person,  ::capnp::Kind::STRUCT>::Builder getPersons();
  inline void setPersons( ::capnp::List< ::person::Person,  ::capnp::Kind::STRUCT>::Reader value);
  inline  ::capnp::List< ::person::Person,  ::capnp::Kind::STRUCT>::Builder initPersons(unsigned int size);
  inline void adoptPersons(::capnp::Orphan< ::capnp::List< ::person::Person,  ::capnp::Kind::STRUCT>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::person::Person,  ::capnp::Kind::STRUCT>> disownPersons();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class PersonsCollection::Pipeline {
public:
  typedef PersonsCollection Pipelines;

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

inline bool PersonsCollection::Reader::hasPersons() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool PersonsCollection::Builder::hasPersons() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::person::Person,  ::capnp::Kind::STRUCT>::Reader PersonsCollection::Reader::getPersons() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::person::Person,  ::capnp::Kind::STRUCT>>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::person::Person,  ::capnp::Kind::STRUCT>::Builder PersonsCollection::Builder::getPersons() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::person::Person,  ::capnp::Kind::STRUCT>>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void PersonsCollection::Builder::setPersons( ::capnp::List< ::person::Person,  ::capnp::Kind::STRUCT>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::person::Person,  ::capnp::Kind::STRUCT>>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::person::Person,  ::capnp::Kind::STRUCT>::Builder PersonsCollection::Builder::initPersons(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::person::Person,  ::capnp::Kind::STRUCT>>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), size);
}
inline void PersonsCollection::Builder::adoptPersons(
    ::capnp::Orphan< ::capnp::List< ::person::Person,  ::capnp::Kind::STRUCT>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::person::Person,  ::capnp::Kind::STRUCT>>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::person::Person,  ::capnp::Kind::STRUCT>> PersonsCollection::Builder::disownPersons() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::person::Person,  ::capnp::Kind::STRUCT>>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

}  // namespace
