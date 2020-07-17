// Copyright 2007, Google Inc.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//     * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//     * Neither the name of Google Inc. nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// Author: wan@google.com (Zhanyong Wan)

// Google Mock - a framework for writing C++ mock classes.
//
// This file implements some commonly used argument matchers.  More
// matchers can be defined by the user implementing the
// MatcherInterface<T> interface if necessary.

?i.. GMOCK_INCLUDE_GMOCK_GMOCK_MATCHERS_H_
_de.. GMOCK_INCLUDE_GMOCK_GMOCK_MATCHERS_H_

? <math.h>
? <algorithm>
? <iterator>
? <limits>
? <ostream>  // NOLINT
? <sstream>
? str..
? <utility>
? ve..
? "gtest/gtest.h"
? "gmock/internal/gmock-internal-utils.h"
? "gmock/internal/gmock-port.h"

#if GTEST_HAS_STD_INITIALIZER_LIST_
# include <initializer_list>  // NOLINT -- must be after gtest.h
e..

n... testing {

// To implement a matcher Foo for type T, define:
//   1. a class FooMatcherImpl that implements the
//      MatcherInterface<T> interface, and
//   2. a factory function that creates a Matcher<T> object from a
//      FooMatcherImpl*.
//
// The two-level delegation design makes it possible to allow a user
// to write "v" instead of "Eq(v)" where a Matcher is expected, which
// is impossible if we pass matchers by pointers.  It also eases
// ownership management as Matcher objects can now be copied like
// plain values.

// MatchResultListener is an abstract class.  Its << operator can be
// used by a matcher to explain why a value matches or doesn't match.
//
// TODO(wan@google.com): add method
//   bool InterestedInWhy(bool result) const;
// to indicate whether the listener is interested in why the match
// result is 'result'.
n.. MatchResultListener {
 p..
  // Creates a listener object with the given underlying ostream.  The
  // listener does not own the ostream, and does not dereference it
  // in the constructor or destructor.
  explicit MatchResultListener(::st. ostream* os) : stream_(os) {}
  v.. ~MatchResultListener() = 0;  // Makes this class abstract.

  // Streams x to the underlying ostream; does nothing if the ostream
  // is NULL.
  template <typename T>
  MatchResultListener& operator<<(co.. T& x) {
    if (stream_ != NULL)
      *stream_ << x;
    return *this;
  }

  // Returns the underlying ostream.
  ::st. ostream* stream() { return stream_; }

  // Returns true iff the listener is interested in an explanation of
  // the match result.  A matcher's MatchAndExplain() method can use
  // this information to avoid generating the explanation when no one
  // intends to hear it.
  bo.. IsInterested() co.. { return stream_ != NULL; }

 pr..
  ::st. ostream* co.. stream_;

  GTEST_DISALLOW_COPY_AND_ASSIGN_(MatchResultListener);
};

inline MatchResultListener::~MatchResultListener() {
}

// An instance of a subclass of this knows how to describe itself as a
// matcher.
n.. MatcherDescriberInterface {
 p..
  v.. ~MatcherDescriberInterface() {}

  // Describes this matcher to an ostream.  The function should print
  // a verb phrase that describes the property a value matching this
  // matcher should have.  The subject of the verb phrase is the value
  // being matched.  For example, the DescribeTo() method of the Gt(7)
  // matcher prints "is greater than 7".
  v.. v.. DescribeTo(::st. ostream* os) co.. = 0;

  // Describes the negation of this matcher to an ostream.  For
  // example, if the description of this matcher is "is greater than
  // 7", the negated description could be "is not greater than 7".
  // You are not required to override this when implementing
  // MatcherInterface, but it is highly advised so that your matcher
  // can produce good error messages.
  v.. v.. DescribeNegationTo(::st. ostream* os) co.. {
    *os << "not (";
    DescribeTo(os);
    *os << ")";
  }
};

// The implementation of a matcher.
template <typename T>
n.. MatcherInterface : pu.. MatcherDescriberInterface {
 p..
  // Returns true iff the matcher matches x; also explains the match
  // result to 'listener' if necessary (see the next paragraph), in
  // the form of a non-restrictive relative clause ("which ...",
  // "whose ...", etc) that describes x.  For example, the
  // MatchAndExplain() method of the Pointee(...) matcher should
  // generate an explanation like "which points to ...".
  //
  // Implementations of MatchAndExplain() should add an explanation of
  // the match result *if and only if* they can provide additional
  // information that's not already present (or not obvious) in the
  // print-out of x and the matcher's description.  Whether the match
  // succeeds is not a factor in deciding whether an explanation is
  // needed, as sometimes the caller needs to print a failure message
  // when the match succeeds (e.g. when the matcher is used inside
  // Not()).
  //
  // For example, a "has at least 10 elements" matcher should explain
  // what the actual element count is, regardless of the match result,
  // as it is useful information to the reader; on the other hand, an
  // "is empty" matcher probably only needs to explain what the actual
  // size is when the match fails, as it's redundant to say that the
  // size is 0 when the value is already known to be empty.
  //
  // You should override this method when defining a new matcher.
  //
  // It's the responsibility of the caller (Google Mock) to guarantee
  // that 'listener' is not NULL.  This helps to simplify a matcher's
  // implementation when it doesn't care about the performance, as it
  // can talk to 'listener' without checking its validity first.
  // However, in order to implement dummy listeners efficiently,
  // listener->stream() may be NULL.
  v.. bo.. MatchAndExplain(T x, MatchResultListener* listener) co.. = 0;

  // Inherits these methods from MatcherDescriberInterface:
  //   v.. void DescribeTo(::std::ostream* os) const = 0;
  //   v.. void DescribeNegationTo(::std::ostream* os) const;
};

n... internal {

// Converts a MatcherInterface<T> to a MatcherInterface<const T&>.
template <typename T>
n.. MatcherInterfaceAdapter : pu.. MatcherInterface<co.. T&> {
 p..
  explicit MatcherInterfaceAdapter(co.. MatcherInterface<T>* impl)
      : impl_(impl) {}
  v.. ~MatcherInterfaceAdapter() { delete impl_; }

  v.. v.. DescribeTo(::st. ostream* os) co.. { impl_->DescribeTo(os); }

  v.. v.. DescribeNegationTo(::st. ostream* os) co.. {
    impl_->DescribeNegationTo(os);
  }

  v.. bo.. MatchAndExplain(co.. T& x,
                               MatchResultListener* listener) co.. {
    return impl_->MatchAndExplain(x, listener);
  }

 pr..
  co.. MatcherInterface<T>* co.. impl_;

  GTEST_DISALLOW_COPY_AND_ASSIGN_(MatcherInterfaceAdapter);
};

}  // namespace internal

// A match result listener that stores the explanation in a string.
n.. StringMatchResultListener : pu.. MatchResultListener {
 p..
  StringMatchResultListener() : MatchResultListener(&ss_) {}

  // Returns the explanation accumulated so far.
  st. string str() co.. { return ss_.str(); }

  // Clears the explanation accumulated so far.
  v.. Clear() { ss_.str(""); }

 pr..
  ::st. stringstream ss_;

  GTEST_DISALLOW_COPY_AND_ASSIGN_(StringMatchResultListener);
};

n... internal {

struct AnyEq {
  template <typename A, typename B>
  bo.. operator()(co.. A& a, co.. B& b) co.. { return a == b; }
};
struct AnyNe {
  template <typename A, typename B>
  bo.. operator()(co.. A& a, co.. B& b) co.. { return a != b; }
};
struct AnyLt {
  template <typename A, typename B>
  bo.. operator()(co.. A& a, co.. B& b) co.. { return a < b; }
};
struct AnyGt {
  template <typename A, typename B>
  bo.. operator()(co.. A& a, co.. B& b) co.. { return a > b; }
};
struct AnyLe {
  template <typename A, typename B>
  bo.. operator()(co.. A& a, co.. B& b) co.. { return a <= b; }
};
struct AnyGe {
  template <typename A, typename B>
  bo.. operator()(co.. A& a, co.. B& b) co.. { return a >= b; }
};

// A match result listener that ignores the explanation.
n.. DummyMatchResultListener : pu.. MatchResultListener {
 p..
  DummyMatchResultListener() : MatchResultListener(NULL) {}

 pr..
  GTEST_DISALLOW_COPY_AND_ASSIGN_(DummyMatchResultListener);
};

// A match result listener that forwards the explanation to a given
// ostream.  The difference between this and MatchResultListener is
// that the former is concrete.
n.. StreamMatchResultListener : pu.. MatchResultListener {
 p..
  explicit StreamMatchResultListener(::st. ostream* os)
      : MatchResultListener(os) {}

 pr..
  GTEST_DISALLOW_COPY_AND_ASSIGN_(StreamMatchResultListener);
};

// An internal class for implementing Matcher<T>, which will derive
// from it.  We put functionalities common to all Matcher<T>
// specializations here to avoid code duplication.
template <typename T>
n.. MatcherBase {
 p..
  // Returns true iff the matcher matches x; also explains the match
  // result to 'listener'.
  bo.. MatchAndExplain(GTEST_REFERENCE_TO_CONST_(T) x,
                       MatchResultListener* listener) co.. {
    return impl_->MatchAndExplain(x, listener);
  }

  // Returns true iff this matcher matches x.
  bo.. Matches(GTEST_REFERENCE_TO_CONST_(T) x) co.. {
    DummyMatchResultListener dummy;
    return MatchAndExplain(x, &dummy);
  }

  // Describes this matcher to an ostream.
  v.. DescribeTo(::st. ostream* os) co.. { impl_->DescribeTo(os); }

  // Describes the negation of this matcher to an ostream.
  v.. DescribeNegationTo(::st. ostream* os) co.. {
    impl_->DescribeNegationTo(os);
  }

  // Explains why x matches, or doesn't match, the matcher.
  v.. ExplainMatchResultTo(GTEST_REFERENCE_TO_CONST_(T) x,
                            ::st. ostream* os) co.. {
    StreamMatchResultListener listener(os);
    MatchAndExplain(x, &listener);
  }

  // Returns the describer for this matcher object; retains ownership
  // of the describer, which is only guaranteed to be alive when
  // this matcher object is alive.
  co.. MatcherDescriberInterface* GetDescriber() co.. {
    return impl_.get();
  }

 pr..
  MatcherBase() {}

  // Constructs a matcher from its implementation.
  explicit MatcherBase(
      co.. MatcherInterface<GTEST_REFERENCE_TO_CONST_(T)>* impl)
      : impl_(impl) {}

  template <typename U>
  explicit MatcherBase(
      co.. MatcherInterface<U>* impl,
      typename internal::EnableIf<
          !internal::IsSame<U, GTEST_REFERENCE_TO_CONST_(U)>::value>::type* =
          NULL)
      : impl_(new internal::MatcherInterfaceAdapter<U>(impl)) {}

  v.. ~MatcherBase() {}

 pr..
  // shared_ptr (util/gtl/shared_ptr.h) and linked_ptr have similar
  // interfaces.  The former dynamically allocates a chunk of memory
  // to hold the reference count, while the latter tracks all
  // references using a circular linked list without allocating
  // memory.  It has been observed that linked_ptr performs better in
  // typical scenarios.  However, shared_ptr can out-perform
  // linked_ptr when there are many more uses of the copy constructor
  // than the default constructor.
  //
  // If performance becomes a problem, we should see if using
  // shared_ptr helps.
  ::testing::internal::linked_ptr<
      co.. MatcherInterface<GTEST_REFERENCE_TO_CONST_(T)> >
      impl_;
};

}  // namespace internal

// A Matcher<T> is a copyable and IMMUTABLE (except by assignment)
// object that can check whether a value of type T matches.  The
// implementation of Matcher<T> is just a linked_ptr to const
// MatcherInterface<T>, so copying is fairly cheap.  Don't inherit
// from Matcher!
template <typename T>
n.. Matcher : pu.. internal::MatcherBase<T> {
 p..
  // Constructs a null matcher.  Needed for storing Matcher objects in STL
  // containers.  A default-constructed matcher is not yet initialized.  You
  // cannot use it until a valid value has been assigned to it.
  explicit Matcher() {}  // NOLINT

  // Constructs a matcher from its implementation.
  explicit Matcher(co.. MatcherInterface<GTEST_REFERENCE_TO_CONST_(T)>* impl)
      : internal::MatcherBase<T>(impl) {}

  template <typename U>
  explicit Matcher(co.. MatcherInterface<U>* impl,
                   typename internal::EnableIf<!internal::IsSame<
                       U, GTEST_REFERENCE_TO_CONST_(U)>::value>::type* = NULL)
      : internal::MatcherBase<T>(impl) {}

  // Implicit constructor here allows people to write
  // EXPECT_CALL(foo, Bar(5)) instead of EXPECT_CALL(foo, Bar(Eq(5))) sometimes
  Matcher(T value);  // NOLINT
};

// The following two specializations allow the user to write str
// instead of Eq(str) and "foo" instead of Eq("foo") when a std::string
// matcher is expected.
template <>
n.. GTEST_API_ Matcher<co.. st. string&>
    : pu.. internal::MatcherBase<co.. st. string&> {
 p..
  Matcher() {}

  explicit Matcher(co.. MatcherInterface<co.. st. string&>* impl)
      : internal::MatcherBase<co.. st. string&>(impl) {}

  // Allows the user to write str instead of Eq(str) sometimes, where
  // str is a std::string object.
  Matcher(co.. st. string& s);  // NOLINT

#if GTEST_HAS_GLOBAL_STRING
  // Allows the user to write str instead of Eq(str) sometimes, where
  // str is a ::string object.
  Matcher(co.. ::string& s);  // NOLINT
e..                         // GTEST_HAS_GLOBAL_STRING

  // Allows the user to write "foo" instead of Eq("foo") sometimes.
  Matcher(co.. ch..* s);  // NOLINT
};

template <>
n.. GTEST_API_ Matcher<st. string>
    : pu.. internal::MatcherBase<st. string> {
 p..
  Matcher() {}

  explicit Matcher(co.. MatcherInterface<co.. st. string&>* impl)
      : internal::MatcherBase<st. string>(impl) {}
  explicit Matcher(co.. MatcherInterface<st. string>* impl)
      : internal::MatcherBase<st. string>(impl) {}

  // Allows the user to write str instead of Eq(str) sometimes, where
  // str is a string object.
  Matcher(co.. st. string& s);  // NOLINT

#if GTEST_HAS_GLOBAL_STRING
  // Allows the user to write str instead of Eq(str) sometimes, where
  // str is a ::string object.
  Matcher(co.. ::string& s);  // NOLINT
e..                         // GTEST_HAS_GLOBAL_STRING

  // Allows the user to write "foo" instead of Eq("foo") sometimes.
  Matcher(co.. ch..* s);  // NOLINT
};

#if GTEST_HAS_GLOBAL_STRING
// The following two specializations allow the user to write str
// instead of Eq(str) and "foo" instead of Eq("foo") when a ::string
// matcher is expected.
template <>
n.. GTEST_API_ Matcher<co.. ::string&>
    : pu.. internal::MatcherBase<co.. ::string&> {
 p..
  Matcher() {}

  explicit Matcher(co.. MatcherInterface<co.. ::string&>* impl)
      : internal::MatcherBase<co.. ::string&>(impl) {}

  // Allows the user to write str instead of Eq(str) sometimes, where
  // str is a std::string object.
  Matcher(co.. st. string& s);  // NOLINT

  // Allows the user to write str instead of Eq(str) sometimes, where
  // str is a ::string object.
  Matcher(co.. ::string& s);  // NOLINT

  // Allows the user to write "foo" instead of Eq("foo") sometimes.
  Matcher(co.. ch..* s);  // NOLINT
};

template <>
n.. GTEST_API_ Matcher< ::string>
    : pu.. internal::MatcherBase< ::string> {
 p..
  Matcher() {}

  explicit Matcher(co.. MatcherInterface<co.. ::string&>* impl)
      : internal::MatcherBase< ::string>(impl) {}
  explicit Matcher(co.. MatcherInterface< ::string>* impl)
      : internal::MatcherBase< ::string>(impl) {}

  // Allows the user to write str instead of Eq(str) sometimes, where
  // str is a std::string object.
  Matcher(co.. st. string& s);  // NOLINT

  // Allows the user to write str instead of Eq(str) sometimes, where
  // str is a ::string object.
  Matcher(co.. ::string& s);  // NOLINT

  // Allows the user to write "foo" instead of Eq("foo") sometimes.
  Matcher(co.. ch..* s);  // NOLINT
};
e..  // GTEST_HAS_GLOBAL_STRING

#if GTEST_HAS_ABSL
// The following two specializations allow the user to write str
// instead of Eq(str) and "foo" instead of Eq("foo") when a absl::string_view
// matcher is expected.
template <>
n.. GTEST_API_ Matcher<co.. absl::string_view&>
    : pu.. internal::MatcherBase<co.. absl::string_view&> {
 p..
  Matcher() {}

  explicit Matcher(co.. MatcherInterface<co.. absl::string_view&>* impl)
      : internal::MatcherBase<co.. absl::string_view&>(impl) {}

  // Allows the user to write str instead of Eq(str) sometimes, where
  // str is a std::string object.
  Matcher(co.. st. string& s);  // NOLINT

#if GTEST_HAS_GLOBAL_STRING
  // Allows the user to write str instead of Eq(str) sometimes, where
  // str is a ::string object.
  Matcher(co.. ::string& s);  // NOLINT
e..                         // GTEST_HAS_GLOBAL_STRING

  // Allows the user to write "foo" instead of Eq("foo") sometimes.
  Matcher(co.. ch..* s);  // NOLINT

  // Allows the user to pass absl::string_views directly.
  Matcher(absl::string_view s);  // NOLINT
};

template <>
n.. GTEST_API_ Matcher<absl::string_view>
    : pu.. internal::MatcherBase<absl::string_view> {
 p..
  Matcher() {}

  explicit Matcher(co.. MatcherInterface<co.. absl::string_view&>* impl)
      : internal::MatcherBase<absl::string_view>(impl) {}
  explicit Matcher(co.. MatcherInterface<absl::string_view>* impl)
      : internal::MatcherBase<absl::string_view>(impl) {}

  // Allows the user to write str instead of Eq(str) sometimes, where
  // str is a std::string object.
  Matcher(co.. st. string& s);  // NOLINT

#if GTEST_HAS_GLOBAL_STRING
  // Allows the user to write str instead of Eq(str) sometimes, where
  // str is a ::string object.
  Matcher(co.. ::string& s);  // NOLINT
e..                         // GTEST_HAS_GLOBAL_STRING

  // Allows the user to write "foo" instead of Eq("foo") sometimes.
  Matcher(co.. ch..* s);  // NOLINT

  // Allows the user to pass absl::string_views directly.
  Matcher(absl::string_view s);  // NOLINT
};
e..  // GTEST_HAS_ABSL

// Prints a matcher in a human-readable format.
template <typename T>
st. ostream& operator<<(st. ostream& os, co.. Matcher<T>& matcher) {
  matcher.DescribeTo(&os);
  return os;
}

// The PolymorphicMatcher class template makes it easy to implement a
// polymorphic matcher (i.e. a matcher that can match values of more
// than one type, e.g. Eq(n) and NotNull()).
//
// To define a polymorphic matcher, a user should provide an Impl
// class that has a DescribeTo() method and a DescribeNegationTo()
// method, and define a member function (or member function template)
//
//   bool MatchAndExplain(const Value& value,
//                        MatchResultListener* listener) const;
//
// See the definition of NotNull() for a complete example.
template <n.. Impl>
n.. PolymorphicMatcher {
 p..
  explicit PolymorphicMatcher(co.. Impl& an_impl) : impl_(an_impl) {}

  // Returns a mutable reference to the underlying matcher
  // implementation object.
  Impl& mutable_impl() { return impl_; }

  // Returns an immutable reference to the underlying matcher
  // implementation object.
  co.. Impl& impl() co.. { return impl_; }

  template <typename T>
  operator Matcher<T>() co.. {
    return Matcher<T>(new MonomorphicImpl<GTEST_REFERENCE_TO_CONST_(T)>(impl_));
  }

 pr..
  template <typename T>
  n.. MonomorphicImpl : pu.. MatcherInterface<T> {
   p..
    explicit MonomorphicImpl(co.. Impl& impl) : impl_(impl) {}

    v.. v.. DescribeTo(::st. ostream* os) co.. {
      impl_.DescribeTo(os);
    }

    v.. v.. DescribeNegationTo(::st. ostream* os) co.. {
      impl_.DescribeNegationTo(os);
    }

    v.. bo.. MatchAndExplain(T x, MatchResultListener* listener) co.. {
      return impl_.MatchAndExplain(x, listener);
    }

   pr..
    co.. Impl impl_;

    GTEST_DISALLOW_ASSIGN_(MonomorphicImpl);
  };

  Impl impl_;

  GTEST_DISALLOW_ASSIGN_(PolymorphicMatcher);
};

// Creates a matcher from its implementation.  This is easier to use
// than the Matcher<T> constructor as it doesn't require you to
// explicitly write the template argument, e.g.
//
//   MakeMatcher(foo);
// vs
//   Matcher<const string&>(foo);
template <typename T>
inline Matcher<T> MakeMatcher(co.. MatcherInterface<T>* impl) {
  return Matcher<T>(impl);
}

// Creates a polymorphic matcher from its implementation.  This is
// easier to use than the PolymorphicMatcher<Impl> constructor as it
// doesn't require you to explicitly write the template argument, e.g.
//
//   MakePolymorphicMatcher(foo);
// vs
//   PolymorphicMatcher<TypeOfFoo>(foo);
template <n.. Impl>
inline PolymorphicMatcher<Impl> MakePolymorphicMatcher(co.. Impl& impl) {
  return PolymorphicMatcher<Impl>(impl);
}

// Anything inside the 'internal' namespace IS INTERNAL IMPLEMENTATION
// and MUST NOT BE USED IN USER CODE!!!
n... internal {

// The MatcherCastImpl class template is a helper for implementing
// MatcherCast().  We need this helper in order to partially
// specialize the implementation of MatcherCast() (C++ allows
// class/struct templates to be partially specialized, but not
// function templates.).

// This general version is used when MatcherCast()'s argument is a
// polymorphic matcher (i.e. something that can be converted to a
// Matcher but is not one yet; for example, Eq(value)) or a value (for
// example, "hello").
template <typename T, typename M>
n.. MatcherCastImpl {
 p..
  st.. Matcher<T> Cast(co.. M& polymorphic_matcher_or_value) {
    // M can be a polymorphic matcher, in which case we want to use
    // its conversion operator to create Matcher<T>.  Or it can be a value
    // that should be passed to the Matcher<T>'s constructor.
    //
    // We can't call Matcher<T>(polymorphic_matcher_or_value) when M is a
    // polymorphic matcher because it'll be ambiguous if T has an implicit
    // constructor from M (this usually happens when T has an implicit
    // constructor from any type).
    //
    // It won't work to unconditionally implict_cast
    // polymorphic_matcher_or_value to Matcher<T> because it won't trigger
    // a user-defined conversion from M to T if one exists (assuming M is
    // a value).
    return CastImpl(
        polymorphic_matcher_or_value,
        BooleanConstant<
            internal::ImplicitlyConvertible<M, Matcher<T> >::value>(),
        BooleanConstant<
            internal::ImplicitlyConvertible<M, T>::value>());
  }

 pr..
  template <bo.. Ignore>
  st.. Matcher<T> CastImpl(co.. M& polymorphic_matcher_or_value,
                             BooleanConstant<true> /* convertible_to_matcher */,
                             BooleanConstant<Ignore>) {
    // M is implicitly convertible to Matcher<T>, which means that either
    // M is a polymorphic matcher or Matcher<T> has an implicit constructor
    // from M.  In both cases using the implicit conversion will produce a
    // matcher.
    //
    // Even if T has an implicit constructor from M, it won't be called because
    // creating Matcher<T> would require a chain of two user-defined conversions
    // (first to create T from M and then to create Matcher<T> from T).
    return polymorphic_matcher_or_value;
  }

  // M can't be implicitly converted to Matcher<T>, so M isn't a polymorphic
  // matcher. It's a value of a type implicitly convertible to T. Use direct
  // initialization to create a matcher.
  st.. Matcher<T> CastImpl(
      co.. M& value, BooleanConstant<false> /* convertible_to_matcher */,
      BooleanConstant<true> /* convertible_to_T */) {
    return Matcher<T>(ImplicitCast_<T>(value));
  }

  // M can't be implicitly converted to either Matcher<T> or T. Attempt to use
  // polymorphic matcher Eq(value) in this case.
  //
  // Note that we first attempt to perform an implicit cast on the value and
  // only fall back to the polymorphic Eq() matcher afterwards because the
  // latter calls bool operator==(const Lhs& lhs, const Rhs& rhs) in the end
  // which might be undefined even when Rhs is implicitly convertible to Lhs
  // (e.g. std::pair<const int, int> vs. std::pair<int, int>).
  //
  // We don't define this method inline as we need the declaration of Eq().
  st.. Matcher<T> CastImpl(
      co.. M& value, BooleanConstant<false> /* convertible_to_matcher */,
      BooleanConstant<false> /* convertible_to_T */);
};

// This more specialized version is used when MatcherCast()'s argument
// is already a Matcher.  This only compiles when type T can be
// statically converted to type U.
template <typename T, typename U>
n.. MatcherCastImpl<T, Matcher<U> > {
 p..
  st.. Matcher<T> Cast(co.. Matcher<U>& source_matcher) {
    return Matcher<T>(new Impl(source_matcher));
  }

 pr..
  n.. Impl : pu.. MatcherInterface<T> {
   p..
    explicit Impl(co.. Matcher<U>& source_matcher)
        : source_matcher_(source_matcher) {}

    // We delegate the matching logic to the source matcher.
    v.. bo.. MatchAndExplain(T x, MatchResultListener* listener) co.. {
#if GTEST_LANG_CXX11
      using FromType = typename st. remove_cv<typename st. remove_pointer<
          typename st. remove_reference<T>::type>::type>::type;
      using ToType = typename st. remove_cv<typename st. remove_pointer<
          typename st. remove_reference<U>::type>::type>::type;
      // Do not allow implicitly converting base*/& to derived*/&.
      static_assert(
          // Do not trigger if only one of them is a pointer. That implies a
          // regular conversion and not a down_cast.
          (st. is_pointer<typename st. remove_reference<T>::type>::value !=
           st. is_pointer<typename st. remove_reference<U>::type>::value) ||
              st. is_same<FromType, ToType>::value ||
              !st. is_base_of<FromType, ToType>::value,
          "Can't implicitly convert from <base> to <derived>");
e..  // GTEST_LANG_CXX11

      return source_matcher_.MatchAndExplain(static_cast<U>(x), listener);
    }

    v.. v.. DescribeTo(::st. ostream* os) co.. {
      source_matcher_.DescribeTo(os);
    }

    v.. v.. DescribeNegationTo(::st. ostream* os) co.. {
      source_matcher_.DescribeNegationTo(os);
    }

   pr..
    co.. Matcher<U> source_matcher_;

    GTEST_DISALLOW_ASSIGN_(Impl);
  };
};

// This even more specialized version is used for efficiently casting
// a matcher to its own type.
template <typename T>
n.. MatcherCastImpl<T, Matcher<T> > {
 p..
  st.. Matcher<T> Cast(co.. Matcher<T>& matcher) { return matcher; }
};

}  // namespace internal

// In order to be safe and clear, casting between different matcher
// types is done explicitly via MatcherCast<T>(m), which takes a
// matcher m and returns a Matcher<T>.  It compiles only when T can be
// statically converted to the argument type of m.
template <typename T, typename M>
inline Matcher<T> MatcherCast(co.. M& matcher) {
  return internal::MatcherCastImpl<T, M>::Cast(matcher);
}

// Implements SafeMatcherCast().
//
// We use an intermediate class to do the actual safe casting as Nokia's
// Symbian compiler cannot decide between
// template <T, M> ... (M) and
// template <T, U> ... (const Matcher<U>&)
// for function templates but can for member function templates.
template <typename T>
n.. SafeMatcherCastImpl {
 p..
  // This overload handles polymorphic matchers and values only since
  // monomorphic matchers are handled by the next one.
  template <typename M>
  st.. inline Matcher<T> Cast(co.. M& polymorphic_matcher_or_value) {
    return internal::MatcherCastImpl<T, M>::Cast(polymorphic_matcher_or_value);
  }

  // This overload handles monomorphic matchers.
  //
  // In general, if type T can be implicitly converted to type U, we can
  // safely convert a Matcher<U> to a Matcher<T> (i.e. Matcher is
  // contravariant): just keep a copy of the original Matcher<U>, convert the
  // argument from type T to U, and then pass it to the underlying Matcher<U>.
  // The only exception is when U is a reference and T is not, as the
  // underlying Matcher<U> may be interested in the argument's address, which
  // is not preserved in the conversion from T to U.
  template <typename U>
  st.. inline Matcher<T> Cast(co.. Matcher<U>& matcher) {
    // Enforce that T can be implicitly converted to U.
    GTEST_COMPILE_ASSERT_((internal::ImplicitlyConvertible<T, U>::value),
                          T_must_be_implicitly_convertible_to_U);
    // Enforce that we are not converting a non-reference type T to a reference
    // type U.
    GTEST_COMPILE_ASSERT_(
        internal::is_reference<T>::value || !internal::is_reference<U>::value,
        cannot_convert_non_reference_arg_to_reference);
    // In case both T and U are arithmetic types, enforce that the
    // conversion is not lossy.
    typedef GTEST_REMOVE_REFERENCE_AND_CONST_(T) RawT;
    typedef GTEST_REMOVE_REFERENCE_AND_CONST_(U) RawU;
    co.. bo.. kTIsOther = GMOCK_KIND_OF_(RawT) == internal::kOther;
    co.. bo.. kUIsOther = GMOCK_KIND_OF_(RawU) == internal::kOther;
    GTEST_COMPILE_ASSERT_(
        kTIsOther || kUIsOther ||
        (internal::LosslessArithmeticConvertible<RawT, RawU>::value),
        conversion_of_arithmetic_types_must_be_lossless);
    return MatcherCast<T>(matcher);
  }
};

template <typename T, typename M>
inline Matcher<T> SafeMatcherCast(co.. M& polymorphic_matcher) {
  return SafeMatcherCastImpl<T>::Cast(polymorphic_matcher);
}

// A<T>() returns a matcher that matches any value of type T.
template <typename T>
Matcher<T> A();

// Anything inside the 'internal' namespace IS INTERNAL IMPLEMENTATION
// and MUST NOT BE USED IN USER CODE!!!
n... internal {

// If the explanation is not empty, prints it to the ostream.
inline v.. PrintIfNotEmpty(co.. st. string& explanation,
                            ::st. ostream* os) {
  if (explanation != "" && os != NULL) {
    *os << ", " << explanation;
  }
}

// Returns true if the given type name is easy to read by a human.
// This is used to decide whether printing the type of a value might
// be helpful.
inline bo.. IsReadableTypeName(co.. st. string& type_name) {
  // We consider a type name readable if it's short or doesn't contain
  // a template or function type.
  return (type_name.length() <= 20 ||
          type_name.find_first_of("<(") == st. string::npos);
}

// Matches the value against the given matcher, prints the value and explains
// the match result to the listener. Returns the match result.
// 'listener' must not be NULL.
// Value cannot be passed by const reference, because some matchers take a
// non-const argument.
template <typename Value, typename T>
bo.. MatchPrintAndExplain(Value& value, co.. Matcher<T>& matcher,
                          MatchResultListener* listener) {
  if (!listener->IsInterested()) {
    // If the listener is not interested, we do not need to construct the
    // inner explanation.
    return matcher.Matches(value);
  }

  StringMatchResultListener inner_listener;
  co.. bo.. match = matcher.MatchAndExplain(value, &inner_listener);

  UniversalPrint(value, listener->stream());
#if GTEST_HAS_RTTI
  co.. st. string& type_name = GetTypeName<Value>();
  if (IsReadableTypeName(type_name))
    *listener->stream() << " (of type " << type_name << ")";
e..
  PrintIfNotEmpty(inner_listener.str(), listener->stream());

  return match;
}

// An internal helper class for doing compile-time loop on a tuple's
// fields.
template <size_t N>
n.. TuplePrefix {
 p..
  // TuplePrefix<N>::Matches(matcher_tuple, value_tuple) returns true
  // iff the first N fields of matcher_tuple matches the first N
  // fields of value_tuple, respectively.
  template <typename MatcherTuple, typename ValueTuple>
  st.. bo.. Matches(co.. MatcherTuple& matcher_tuple,
                      co.. ValueTuple& value_tuple) {
    return TuplePrefix<N - 1>::Matches(matcher_tuple, value_tuple)
        && get<N - 1>(matcher_tuple).Matches(get<N - 1>(value_tuple));
  }

  // TuplePrefix<N>::ExplainMatchFailuresTo(matchers, values, os)
  // describes failures in matching the first N fields of matchers
  // against the first N fields of values.  If there is no failure,
  // nothing will be streamed to os.
  template <typename MatcherTuple, typename ValueTuple>
  st.. v.. ExplainMatchFailuresTo(co.. MatcherTuple& matchers,
                                     co.. ValueTuple& values,
                                     ::st. ostream* os) {
    // First, describes failures in the first N - 1 fields.
    TuplePrefix<N - 1>::ExplainMatchFailuresTo(matchers, values, os);

    // Then describes the failure (if any) in the (N - 1)-th (0-based)
    // field.
    typename tuple_element<N - 1, MatcherTuple>::type matcher =
        get<N - 1>(matchers);
    typedef typename tuple_element<N - 1, ValueTuple>::type Value;
    GTEST_REFERENCE_TO_CONST_(Value) value = get<N - 1>(values);
    StringMatchResultListener listener;
    if (!matcher.MatchAndExplain(value, &listener)) {
      // TODO(wan): include in the message the name of the parameter
      // as used in MOCK_METHOD*() when possible.
      *os << "  Expected arg #" << N - 1 << ": ";
      get<N - 1>(matchers).DescribeTo(os);
      *os << "\n           Actual: ";
      // We remove the reference in type Value to prevent the
      // universal printer from printing the address of value, which
      // isn't interesting to the user most of the time.  The
      // matcher's MatchAndExplain() method handles the case when
      // the address is interesting.
      internal::UniversalPrint(value, os);
      PrintIfNotEmpty(listener.str(), os);
      *os << "\n";
    }
  }
};

// The base case.
template <>
n.. TuplePrefix<0> {
 p..
  template <typename MatcherTuple, typename ValueTuple>
  st.. bo.. Matches(co.. MatcherTuple& /* matcher_tuple */,
                      co.. ValueTuple& /* value_tuple */) {
    return true;
  }

  template <typename MatcherTuple, typename ValueTuple>
  st.. v.. ExplainMatchFailuresTo(co.. MatcherTuple& /* matchers */,
                                     co.. ValueTuple& /* values */,
                                     ::st. ostream* /* os */) {}
};

// TupleMatches(matcher_tuple, value_tuple) returns true iff all
// matchers in matcher_tuple match the corresponding fields in
// value_tuple.  It is a compiler error if matcher_tuple and
// value_tuple have different number of fields or incompatible field
// types.
template <typename MatcherTuple, typename ValueTuple>
bo.. TupleMatches(co.. MatcherTuple& matcher_tuple,
                  co.. ValueTuple& value_tuple) {
  // Makes sure that matcher_tuple and value_tuple have the same
  // number of fields.
  GTEST_COMPILE_ASSERT_(tuple_size<MatcherTuple>::value ==
                        tuple_size<ValueTuple>::value,
                        matcher_and_value_have_different_numbers_of_fields);
  return TuplePrefix<tuple_size<ValueTuple>::value>::
      Matches(matcher_tuple, value_tuple);
}

// Describes failures in matching matchers against values.  If there
// is no failure, nothing will be streamed to os.
template <typename MatcherTuple, typename ValueTuple>
v.. ExplainMatchFailureTupleTo(co.. MatcherTuple& matchers,
                                co.. ValueTuple& values,
                                ::st. ostream* os) {
  TuplePrefix<tuple_size<MatcherTuple>::value>::ExplainMatchFailuresTo(
      matchers, values, os);
}

// TransformTupleValues and its helper.
//
// TransformTupleValuesHelper hides the internal machinery that
// TransformTupleValues uses to implement a tuple traversal.
template <typename Tuple, typename Func, typename OutIter>
n.. TransformTupleValuesHelper {
 pr..
  typedef ::testing::tuple_size<Tuple> TupleSize;

 p..
  // For each member of tuple 't', taken in order, evaluates '*out++ = f(t)'.
  // Returns the final value of 'out' in case the caller needs it.
  st.. OutIter Run(Func f, co.. Tuple& t, OutIter out) {
    return IterateOverTuple<Tuple, TupleSize::value>()(f, t, out);
  }

 pr..
  template <typename Tup, size_t kRemainingSize>
  struct IterateOverTuple {
    OutIter operator() (Func f, co.. Tup& t, OutIter out) co.. {
      *out++ = f(::testing::get<TupleSize::value - kRemainingSize>(t));
      return IterateOverTuple<Tup, kRemainingSize - 1>()(f, t, out);
    }
  };
  template <typename Tup>
  struct IterateOverTuple<Tup, 0> {
    OutIter operator() (Func /* f */, co.. Tup& /* t */, OutIter out) co.. {
      return out;
    }
  };
};

// Successively invokes 'f(element)' on each element of the tuple 't',
// appending each result to the 'out' iterator. Returns the final value
// of 'out'.
template <typename Tuple, typename Func, typename OutIter>
OutIter TransformTupleValues(Func f, co.. Tuple& t, OutIter out) {
  return TransformTupleValuesHelper<Tuple, Func, OutIter>::Run(f, t, out);
}

// Implements A<T>().
template <typename T>
n.. AnyMatcherImpl : pu.. MatcherInterface<GTEST_REFERENCE_TO_CONST_(T)> {
 p..
  v.. bo.. MatchAndExplain(GTEST_REFERENCE_TO_CONST_(T) /* x */,
                               MatchResultListener* /* listener */) co.. {
    return true;
  }
  v.. v.. DescribeTo(::st. ostream* os) co.. { *os << "is anything"; }
  v.. v.. DescribeNegationTo(::st. ostream* os) co.. {
    // This is mostly for completeness' safe, as it's not very useful
    // to write Not(A<bool>()).  However we cannot completely rule out
    // such a possibility, and it doesn't hurt to be prepared.
    *os << "never matches";
  }
};

// Implements _, a matcher that matches any value of any
// type.  This is a polymorphic matcher, so we need a template type
// conversion operator to make it appearing as a Matcher<T> for any
// type T.
n.. AnythingMatcher {
 p..
  template <typename T>
  operator Matcher<T>() co.. { return A<T>(); }
};

// Implements a matcher that compares a given value with a
// pre-supplied value using one of the ==, <=, <, etc, operators.  The
// two values being compared don't have to have the same type.
//
// The matcher defined here is polymorphic (for example, Eq(5) can be
// used to match an int, a short, a double, etc).  Therefore we use
// a template type conversion operator in the implementation.
//
// The following template definition assumes that the Rhs parameter is
// a "bare" type (i.e. neither 'const T' nor 'T&').
template <typename D, typename Rhs, typename Op>
n.. ComparisonBase {
 p..
  explicit ComparisonBase(co.. Rhs& rhs) : rhs_(rhs) {}
  template <typename Lhs>
  operator Matcher<Lhs>() co.. {
    return MakeMatcher(new Impl<Lhs>(rhs_));
  }

 pr..
  template <typename Lhs>
  n.. Impl : pu.. MatcherInterface<Lhs> {
   p..
    explicit Impl(co.. Rhs& rhs) : rhs_(rhs) {}
    v.. bo.. MatchAndExplain(
        Lhs lhs, MatchResultListener* /* listener */) co.. {
      return Op()(lhs, rhs_);
    }
    v.. v.. DescribeTo(::st. ostream* os) co.. {
      *os << D::Desc() << " ";
      UniversalPrint(rhs_, os);
    }
    v.. v.. DescribeNegationTo(::st. ostream* os) co.. {
      *os << D::NegatedDesc() <<  " ";
      UniversalPrint(rhs_, os);
    }
   pr..
    Rhs rhs_;
    GTEST_DISALLOW_ASSIGN_(Impl);
  };
  Rhs rhs_;
  GTEST_DISALLOW_ASSIGN_(ComparisonBase);
};

template <typename Rhs>
n.. EqMatcher : pu.. ComparisonBase<EqMatcher<Rhs>, Rhs, AnyEq> {
 p..
  explicit EqMatcher(co.. Rhs& rhs)
      : ComparisonBase<EqMatcher<Rhs>, Rhs, AnyEq>(rhs) { }
  st.. co.. ch..* Desc() { return "is equal to"; }
  st.. co.. ch..* NegatedDesc() { return "isn't equal to"; }
};
template <typename Rhs>
n.. NeMatcher : pu.. ComparisonBase<NeMatcher<Rhs>, Rhs, AnyNe> {
 p..
  explicit NeMatcher(co.. Rhs& rhs)
      : ComparisonBase<NeMatcher<Rhs>, Rhs, AnyNe>(rhs) { }
  st.. co.. ch..* Desc() { return "isn't equal to"; }
  st.. co.. ch..* NegatedDesc() { return "is equal to"; }
};
template <typename Rhs>
n.. LtMatcher : pu.. ComparisonBase<LtMatcher<Rhs>, Rhs, AnyLt> {
 p..
  explicit LtMatcher(co.. Rhs& rhs)
      : ComparisonBase<LtMatcher<Rhs>, Rhs, AnyLt>(rhs) { }
  st.. co.. ch..* Desc() { return "is <"; }
  st.. co.. ch..* NegatedDesc() { return "isn't <"; }
};
template <typename Rhs>
n.. GtMatcher : pu.. ComparisonBase<GtMatcher<Rhs>, Rhs, AnyGt> {
 p..
  explicit GtMatcher(co.. Rhs& rhs)
      : ComparisonBase<GtMatcher<Rhs>, Rhs, AnyGt>(rhs) { }
  st.. co.. ch..* Desc() { return "is >"; }
  st.. co.. ch..* NegatedDesc() { return "isn't >"; }
};
template <typename Rhs>
n.. LeMatcher : pu.. ComparisonBase<LeMatcher<Rhs>, Rhs, AnyLe> {
 p..
  explicit LeMatcher(co.. Rhs& rhs)
      : ComparisonBase<LeMatcher<Rhs>, Rhs, AnyLe>(rhs) { }
  st.. co.. ch..* Desc() { return "is <="; }
  st.. co.. ch..* NegatedDesc() { return "isn't <="; }
};
template <typename Rhs>
n.. GeMatcher : pu.. ComparisonBase<GeMatcher<Rhs>, Rhs, AnyGe> {
 p..
  explicit GeMatcher(co.. Rhs& rhs)
      : ComparisonBase<GeMatcher<Rhs>, Rhs, AnyGe>(rhs) { }
  st.. co.. ch..* Desc() { return "is >="; }
  st.. co.. ch..* NegatedDesc() { return "isn't >="; }
};

// Implements the polymorphic IsNull() matcher, which matches any raw or smart
// pointer that is NULL.
n.. IsNullMatcher {
 p..
  template <typename Pointer>
  bo.. MatchAndExplain(co.. Pointer& p,
                       MatchResultListener* /* listener */) co.. {
#if GTEST_LANG_CXX11
    return p == nullptr;
#else  // GTEST_LANG_CXX11
    return GetRawPointer(p) == NULL;
e..  // GTEST_LANG_CXX11
  }

  v.. DescribeTo(::st. ostream* os) co.. { *os << "is NULL"; }
  v.. DescribeNegationTo(::st. ostream* os) co.. {
    *os << "isn't NULL";
  }
};

// Implements the polymorphic NotNull() matcher, which matches any raw or smart
// pointer that is not NULL.
n.. NotNullMatcher {
 p..
  template <typename Pointer>
  bo.. MatchAndExplain(co.. Pointer& p,
                       MatchResultListener* /* listener */) co.. {
#if GTEST_LANG_CXX11
    return p != nullptr;
#else  // GTEST_LANG_CXX11
    return GetRawPointer(p) != NULL;
e..  // GTEST_LANG_CXX11
  }

  v.. DescribeTo(::st. ostream* os) co.. { *os << "isn't NULL"; }
  v.. DescribeNegationTo(::st. ostream* os) co.. {
    *os << "is NULL";
  }
};

// Ref(variable) matches any argument that is a reference to
// 'variable'.  This matcher is polymorphic as it can match any
// super type of the type of 'variable'.
//
// The RefMatcher template class implements Ref(variable).  It can
// only be instantiated with a reference type.  This prevents a user
// from mistakenly using Ref(x) to match a non-reference function
// argument.  For example, the following will righteously cause a
// compiler error:
//
//   int n;
//   Matcher<int> m1 = Ref(n);   // This won't compile.
//   Matcher<int&> m2 = Ref(n);  // This will compile.
template <typename T>
n.. RefMatcher;

template <typename T>
n.. RefMatcher<T&> {
  // Google Mock is a generic framework and thus needs to support
  // mocking any function types, including those that take non-const
  // reference arguments.  Therefore the template parameter T (and
  // Super below) can be instantiated to either a const type or a
  // non-const type.
 p..
  // RefMatcher() takes a T& instead of const T&, as we want the
  // compiler to catch using Ref(const_value) as a matcher for a
  // non-const reference.
  explicit RefMatcher(T& x) : object_(x) {}  // NOLINT

  template <typename Super>
  operator Matcher<Super&>() co.. {
    // By passing object_ (type T&) to Impl(), which expects a Super&,
    // we make sure that Super is a super type of T.  In particular,
    // this catches using Ref(const_value) as a matcher for a
    // non-const reference, as you cannot implicitly convert a const
    // reference to a non-const reference.
    return MakeMatcher(new Impl<Super>(object_));
  }

 pr..
  template <typename Super>
  n.. Impl : pu.. MatcherInterface<Super&> {
   p..
    explicit Impl(Super& x) : object_(x) {}  // NOLINT

    // MatchAndExplain() takes a Super& (as opposed to const Super&)
    // in order to match the interface MatcherInterface<Super&>.
    v.. bo.. MatchAndExplain(
        Super& x, MatchResultListener* listener) co.. {
      *listener << "which is located @" << static_cast<co.. v..*>(&x);
      return &x == &object_;
    }

    v.. v.. DescribeTo(::st. ostream* os) co.. {
      *os << "references the variable ";
      UniversalPrinter<Super&>::Print(object_, os);
    }

    v.. v.. DescribeNegationTo(::st. ostream* os) co.. {
      *os << "does not reference the variable ";
      UniversalPrinter<Super&>::Print(object_, os);
    }

   pr..
    co.. Super& object_;

    GTEST_DISALLOW_ASSIGN_(Impl);
  };

  T& object_;

  GTEST_DISALLOW_ASSIGN_(RefMatcher);
};

// Polymorphic helper functions for narrow and wide string matchers.
inline bo.. CaseInsensitiveCStringEquals(co.. ch..* lhs, co.. ch..* rhs) {
  return String::CaseInsensitiveCStringEquals(lhs, rhs);
}

inline bo.. CaseInsensitiveCStringEquals(co.. wchar_t* lhs,
                                         co.. wchar_t* rhs) {
  return String::CaseInsensitiveWideCStringEquals(lhs, rhs);
}

// String comparison for narrow or wide strings that can have embedded NUL
// characters.
template <typename StringType>
bo.. CaseInsensitiveStringEquals(co.. StringType& s1,
                                 co.. StringType& s2) {
  // Are the heads equal?
  if (!CaseInsensitiveCStringEquals(s1.c_str(), s2.c_str())) {
    return false;
  }

  // Skip the equal heads.
  co.. typename StringType::value_type nul = 0;
  co.. size_t i1 = s1.find(nul), i2 = s2.find(nul);

  // Are we at the end of either s1 or s2?
  if (i1 == StringType::npos || i2 == StringType::npos) {
    return i1 == i2;
  }

  // Are the tails equal?
  return CaseInsensitiveStringEquals(s1.substr(i1 + 1), s2.substr(i2 + 1));
}

// String matchers.

// Implements equality-based string matchers like StrEq, StrCaseNe, and etc.
template <typename StringType>
n.. StrEqualityMatcher {
 p..
  StrEqualityMatcher(co.. StringType& str, bo.. expect_eq,
                     bo.. case_sensitive)
      : string_(str), expect_eq_(expect_eq), case_sensitive_(case_sensitive) {}

#if GTEST_HAS_ABSL
  bo.. MatchAndExplain(co.. absl::string_view& s,
                       MatchResultListener* listener) co.. {
    if (s.data() == NULL) {
      return !expect_eq_;
    }
    // This should fail to compile if absl::string_view is used with wide
    // strings.
    co.. StringType& str = string(s);
    return MatchAndExplain(str, listener);
  }
e..  // GTEST_HAS_ABSL

  // Accepts pointer types, particularly:
  //   const char*
  //   char*
  //   const wchar_t*
  //   wchar_t*
  template <typename CharType>
  bo.. MatchAndExplain(CharType* s, MatchResultListener* listener) co.. {
    if (s == NULL) {
      return !expect_eq_;
    }
    return MatchAndExplain(StringType(s), listener);
  }

  // Matches anything that can convert to StringType.
  //
  // This is a template, not just a plain function with const StringType&,
  // because absl::string_view has some interfering non-explicit constructors.
  template <typename MatcheeStringType>
  bo.. MatchAndExplain(co.. MatcheeStringType& s,
                       MatchResultListener* /* listener */) co.. {
    co.. StringType& s2(s);
    co.. bo.. eq = case_sensitive_ ? s2 == string_ :
        CaseInsensitiveStringEquals(s2, string_);
    return expect_eq_ == eq;
  }

  v.. DescribeTo(::st. ostream* os) co.. {
    DescribeToHelper(expect_eq_, os);
  }

  v.. DescribeNegationTo(::st. ostream* os) co.. {
    DescribeToHelper(!expect_eq_, os);
  }

 pr..
  v.. DescribeToHelper(bo.. expect_eq, ::st. ostream* os) co.. {
    *os << (expect_eq ? "is " : "isn't ");
    *os << "equal to ";
    if (!case_sensitive_) {
      *os << "(ignoring case) ";
    }
    UniversalPrint(string_, os);
  }

  co.. StringType string_;
  co.. bo.. expect_eq_;
  co.. bo.. case_sensitive_;

  GTEST_DISALLOW_ASSIGN_(StrEqualityMatcher);
};

// Implements the polymorphic HasSubstr(substring) matcher, which
// can be used as a Matcher<T> as long as T can be converted to a
// string.
template <typename StringType>
n.. HasSubstrMatcher {
 p..
  explicit HasSubstrMatcher(co.. StringType& substring)
      : substring_(substring) {}

#if GTEST_HAS_ABSL
  bo.. MatchAndExplain(co.. absl::string_view& s,
                       MatchResultListener* listener) co.. {
    if (s.data() == NULL) {
      return false;
    }
    // This should fail to compile if absl::string_view is used with wide
    // strings.
    co.. StringType& str = string(s);
    return MatchAndExplain(str, listener);
  }
e..  // GTEST_HAS_ABSL

  // Accepts pointer types, particularly:
  //   const char*
  //   char*
  //   const wchar_t*
  //   wchar_t*
  template <typename CharType>
  bo.. MatchAndExplain(CharType* s, MatchResultListener* listener) co.. {
    return s != NULL && MatchAndExplain(StringType(s), listener);
  }

  // Matches anything that can convert to StringType.
  //
  // This is a template, not just a plain function with const StringType&,
  // because absl::string_view has some interfering non-explicit constructors.
  template <typename MatcheeStringType>
  bo.. MatchAndExplain(co.. MatcheeStringType& s,
                       MatchResultListener* /* listener */) co.. {
    co.. StringType& s2(s);
    return s2.find(substring_) != StringType::npos;
  }

  // Describes what this matcher matches.
  v.. DescribeTo(::st. ostream* os) co.. {
    *os << "has substring ";
    UniversalPrint(substring_, os);
  }

  v.. DescribeNegationTo(::st. ostream* os) co.. {
    *os << "has no substring ";
    UniversalPrint(substring_, os);
  }

 pr..
  co.. StringType substring_;

  GTEST_DISALLOW_ASSIGN_(HasSubstrMatcher);
};

// Implements the polymorphic StartsWith(substring) matcher, which
// can be used as a Matcher<T> as long as T can be converted to a
// string.
template <typename StringType>
n.. StartsWithMatcher {
 p..
  explicit StartsWithMatcher(co.. StringType& prefix) : prefix_(prefix) {
  }

#if GTEST_HAS_ABSL
  bo.. MatchAndExplain(co.. absl::string_view& s,
                       MatchResultListener* listener) co.. {
    if (s.data() == NULL) {
      return false;
    }
    // This should fail to compile if absl::string_view is used with wide
    // strings.
    co.. StringType& str = string(s);
    return MatchAndExplain(str, listener);
  }
e..  // GTEST_HAS_ABSL

  // Accepts pointer types, particularly:
  //   const char*
  //   char*
  //   const wchar_t*
  //   wchar_t*
  template <typename CharType>
  bo.. MatchAndExplain(CharType* s, MatchResultListener* listener) co.. {
    return s != NULL && MatchAndExplain(StringType(s), listener);
  }

  // Matches anything that can convert to StringType.
  //
  // This is a template, not just a plain function with const StringType&,
  // because absl::string_view has some interfering non-explicit constructors.
  template <typename MatcheeStringType>
  bo.. MatchAndExplain(co.. MatcheeStringType& s,
                       MatchResultListener* /* listener */) co.. {
    co.. StringType& s2(s);
    return s2.length() >= prefix_.length() &&
        s2.substr(0, prefix_.length()) == prefix_;
  }

  v.. DescribeTo(::st. ostream* os) co.. {
    *os << "starts with ";
    UniversalPrint(prefix_, os);
  }

  v.. DescribeNegationTo(::st. ostream* os) co.. {
    *os << "doesn't start with ";
    UniversalPrint(prefix_, os);
  }

 pr..
  co.. StringType prefix_;

  GTEST_DISALLOW_ASSIGN_(StartsWithMatcher);
};

// Implements the polymorphic EndsWith(substring) matcher, which
// can be used as a Matcher<T> as long as T can be converted to a
// string.
template <typename StringType>
n.. EndsWithMatcher {
 p..
  explicit EndsWithMatcher(co.. StringType& suffix) : suffix_(suffix) {}

#if GTEST_HAS_ABSL
  bo.. MatchAndExplain(co.. absl::string_view& s,
                       MatchResultListener* listener) co.. {
    if (s.data() == NULL) {
      return false;
    }
    // This should fail to compile if absl::string_view is used with wide
    // strings.
    co.. StringType& str = string(s);
    return MatchAndExplain(str, listener);
  }
e..  // GTEST_HAS_ABSL

  // Accepts pointer types, particularly:
  //   const char*
  //   char*
  //   const wchar_t*
  //   wchar_t*
  template <typename CharType>
  bo.. MatchAndExplain(CharType* s, MatchResultListener* listener) co.. {
    return s != NULL && MatchAndExplain(StringType(s), listener);
  }

  // Matches anything that can convert to StringType.
  //
  // This is a template, not just a plain function with const StringType&,
  // because absl::string_view has some interfering non-explicit constructors.
  template <typename MatcheeStringType>
  bo.. MatchAndExplain(co.. MatcheeStringType& s,
                       MatchResultListener* /* listener */) co.. {
    co.. StringType& s2(s);
    return s2.length() >= suffix_.length() &&
        s2.substr(s2.length() - suffix_.length()) == suffix_;
  }

  v.. DescribeTo(::st. ostream* os) co.. {
    *os << "ends with ";
    UniversalPrint(suffix_, os);
  }

  v.. DescribeNegationTo(::st. ostream* os) co.. {
    *os << "doesn't end with ";
    UniversalPrint(suffix_, os);
  }

 pr..
  co.. StringType suffix_;

  GTEST_DISALLOW_ASSIGN_(EndsWithMatcher);
};

// Implements polymorphic matchers MatchesRegex(regex) and
// ContainsRegex(regex), which can be used as a Matcher<T> as long as
// T can be converted to a string.
n.. MatchesRegexMatcher {
 p..
  MatchesRegexMatcher(co.. RE* regex, bo.. full_match)
      : regex_(regex), full_match_(full_match) {}

#if GTEST_HAS_ABSL
  bo.. MatchAndExplain(co.. absl::string_view& s,
                       MatchResultListener* listener) co.. {
    return s.data() && MatchAndExplain(string(s), listener);
  }
e..  // GTEST_HAS_ABSL

  // Accepts pointer types, particularly:
  //   const char*
  //   char*
  //   const wchar_t*
  //   wchar_t*
  template <typename CharType>
  bo.. MatchAndExplain(CharType* s, MatchResultListener* listener) co.. {
    return s != NULL && MatchAndExplain(st. string(s), listener);
  }

  // Matches anything that can convert to std::string.
  //
  // This is a template, not just a plain function with const std::string&,
  // because absl::string_view has some interfering non-explicit constructors.
  template <n.. MatcheeStringType>
  bo.. MatchAndExplain(co.. MatcheeStringType& s,
                       MatchResultListener* /* listener */) co.. {
    co.. st. string& s2(s);
    return full_match_ ? RE::FullMatch(s2, *regex_) :
        RE::PartialMatch(s2, *regex_);
  }

  v.. DescribeTo(::st. ostream* os) co.. {
    *os << (full_match_ ? "matches" : "contains")
        << " regular expression ";
    UniversalPrinter<st. string>::Print(regex_->pattern(), os);
  }

  v.. DescribeNegationTo(::st. ostream* os) co.. {
    *os << "doesn't " << (full_match_ ? "match" : "contain")
        << " regular expression ";
    UniversalPrinter<st. string>::Print(regex_->pattern(), os);
  }

 pr..
  co.. internal::linked_ptr<co.. RE> regex_;
  co.. bo.. full_match_;

  GTEST_DISALLOW_ASSIGN_(MatchesRegexMatcher);
};

// Implements a matcher that compares the two fields of a 2-tuple
// using one of the ==, <=, <, etc, operators.  The two fields being
// compared don't have to have the same type.
//
// The matcher defined here is polymorphic (for example, Eq() can be
// used to match a tuple<int, short>, a tuple<const long&, double>,
// etc).  Therefore we use a template type conversion operator in the
// implementation.
template <typename D, typename Op>
n.. PairMatchBase {
 p..
  template <typename T1, typename T2>
  operator Matcher< ::testing::tuple<T1, T2> >() co.. {
    return MakeMatcher(new Impl< ::testing::tuple<T1, T2> >);
  }
  template <typename T1, typename T2>
  operator Matcher<co.. ::testing::tuple<T1, T2>&>() co.. {
    return MakeMatcher(new Impl<co.. ::testing::tuple<T1, T2>&>);
  }

 pr..
  st.. ::st. ostream& GetDesc(::st. ostream& os) {  // NOLINT
    return os << D::Desc();
  }

  template <typename Tuple>
  n.. Impl : pu.. MatcherInterface<Tuple> {
   p..
    v.. bo.. MatchAndExplain(
        Tuple args,
        MatchResultListener* /* listener */) co.. {
      return Op()(::testing::get<0>(args), ::testing::get<1>(args));
    }
    v.. v.. DescribeTo(::st. ostream* os) co.. {
      *os << "are " << GetDesc;
    }
    v.. v.. DescribeNegationTo(::st. ostream* os) co.. {
      *os << "aren't " << GetDesc;
    }
  };
};

n.. Eq2Matcher : pu.. PairMatchBase<Eq2Matcher, AnyEq> {
 p..
  st.. co.. ch..* Desc() { return "an equal pair"; }
};
n.. Ne2Matcher : pu.. PairMatchBase<Ne2Matcher, AnyNe> {
 p..
  st.. co.. ch..* Desc() { return "an unequal pair"; }
};
n.. Lt2Matcher : pu.. PairMatchBase<Lt2Matcher, AnyLt> {
 p..
  st.. co.. ch..* Desc() { return "a pair where the first < the second"; }
};
n.. Gt2Matcher : pu.. PairMatchBase<Gt2Matcher, AnyGt> {
 p..
  st.. co.. ch..* Desc() { return "a pair where the first > the second"; }
};
n.. Le2Matcher : pu.. PairMatchBase<Le2Matcher, AnyLe> {
 p..
  st.. co.. ch..* Desc() { return "a pair where the first <= the second"; }
};
n.. Ge2Matcher : pu.. PairMatchBase<Ge2Matcher, AnyGe> {
 p..
  st.. co.. ch..* Desc() { return "a pair where the first >= the second"; }
};

// Implements the Not(...) matcher for a particular argument type T.
// We do not nest it inside the NotMatcher class template, as that
// will prevent different instantiations of NotMatcher from sharing
// the same NotMatcherImpl<T> class.
template <typename T>
n.. NotMatcherImpl : pu.. MatcherInterface<GTEST_REFERENCE_TO_CONST_(T)> {
 p..
  explicit NotMatcherImpl(co.. Matcher<T>& matcher)
      : matcher_(matcher) {}

  v.. bo.. MatchAndExplain(GTEST_REFERENCE_TO_CONST_(T) x,
                               MatchResultListener* listener) co.. {
    return !matcher_.MatchAndExplain(x, listener);
  }

  v.. v.. DescribeTo(::st. ostream* os) co.. {
    matcher_.DescribeNegationTo(os);
  }

  v.. v.. DescribeNegationTo(::st. ostream* os) co.. {
    matcher_.DescribeTo(os);
  }

 pr..
  co.. Matcher<T> matcher_;

  GTEST_DISALLOW_ASSIGN_(NotMatcherImpl);
};

// Implements the Not(m) matcher, which matches a value that doesn't
// match matcher m.
template <typename InnerMatcher>
n.. NotMatcher {
 p..
  explicit NotMatcher(InnerMatcher matcher) : matcher_(matcher) {}

  // This template type conversion operator allows Not(m) to be used
  // to match any type m can match.
  template <typename T>
  operator Matcher<T>() co.. {
    return Matcher<T>(new NotMatcherImpl<T>(SafeMatcherCast<T>(matcher_)));
  }

 pr..
  InnerMatcher matcher_;

  GTEST_DISALLOW_ASSIGN_(NotMatcher);
};

// Implements the AllOf(m1, m2) matcher for a particular argument type
// T. We do not nest it inside the BothOfMatcher class template, as
// that will prevent different instantiations of BothOfMatcher from
// sharing the same BothOfMatcherImpl<T> class.
template <typename T>
n.. AllOfMatcherImpl
    : pu.. MatcherInterface<GTEST_REFERENCE_TO_CONST_(T)> {
 p..
  explicit AllOfMatcherImpl(st. ve..<Matcher<T> > matchers)
      : matchers_(internal::move(matchers)) {}

  v.. v.. DescribeTo(::st. ostream* os) co.. {
    *os << "(";
    for (size_t i = 0; i < matchers_.size(); ++i) {
      if (i != 0) *os << ") and (";
      matchers_[i].DescribeTo(os);
    }
    *os << ")";
  }

  v.. v.. DescribeNegationTo(::st. ostream* os) co.. {
    *os << "(";
    for (size_t i = 0; i < matchers_.size(); ++i) {
      if (i != 0) *os << ") or (";
      matchers_[i].DescribeNegationTo(os);
    }
    *os << ")";
  }

  v.. bo.. MatchAndExplain(GTEST_REFERENCE_TO_CONST_(T) x,
                               MatchResultListener* listener) co.. {
    // If either matcher1_ or matcher2_ doesn't match x, we only need
    // to explain why one of them fails.
    st. string all_match_result;

    for (size_t i = 0; i < matchers_.size(); ++i) {
      StringMatchResultListener slistener;
      if (matchers_[i].MatchAndExplain(x, &slistener)) {
        if (all_match_result.empty()) {
          all_match_result = slistener.str();
        } else {
          st. string result = slistener.str();
          if (!result.empty()) {
            all_match_result += ", and ";
            all_match_result += result;
          }
        }
      } else {
        *listener << slistener.str();
        return false;
      }
    }

    // Otherwise we need to explain why *both* of them match.
    *listener << all_match_result;
    return true;
  }

 pr..
  co.. st. ve..<Matcher<T> > matchers_;

  GTEST_DISALLOW_ASSIGN_(AllOfMatcherImpl);
};

#if GTEST_LANG_CXX11
// VariadicMatcher is used for the variadic implementation of
// AllOf(m_1, m_2, ...) and AnyOf(m_1, m_2, ...).
// CombiningMatcher<T> is used to recursively combine the provided matchers
// (of type Args...).
template <template <typename T> n.. CombiningMatcher, typename... Args>
n.. VariadicMatcher {
 p..
  VariadicMatcher(co.. Args&... matchers)  // NOLINT
      : matchers_(matchers...) {
    static_assert(sizeof...(Args) > 0, "Must have at least one matcher.");
  }

  // This template type conversion operator allows an
  // VariadicMatcher<Matcher1, Matcher2...> object to match any type that
  // all of the provided matchers (Matcher1, Matcher2, ...) can match.
  template <typename T>
  operator Matcher<T>() co.. {
    st. ve..<Matcher<T> > values;
    CreateVariadicMatcher<T>(&values, st. integral_constant<size_t, 0>());
    return Matcher<T>(new CombiningMatcher<T>(internal::move(values)));
  }

 pr..
  template <typename T, size_t I>
  v.. CreateVariadicMatcher(st. ve..<Matcher<T> >* values,
                             st. integral_constant<size_t, I>) co.. {
    values->push_back(SafeMatcherCast<T>(st. get<I>(matchers_)));
    CreateVariadicMatcher<T>(values, st. integral_constant<size_t, I + 1>());
  }

  template <typename T>
  v.. CreateVariadicMatcher(
      st. ve..<Matcher<T> >*,
      st. integral_constant<size_t, sizeof...(Args)>) co.. {}

  tuple<Args...> matchers_;

  GTEST_DISALLOW_ASSIGN_(VariadicMatcher);
};

template <typename... Args>
using AllOfMatcher = VariadicMatcher<AllOfMatcherImpl, Args...>;

e..  // GTEST_LANG_CXX11

// Used for implementing the AllOf(m_1, ..., m_n) matcher, which
// matches a value that matches all of the matchers m_1, ..., and m_n.
template <typename Matcher1, typename Matcher2>
n.. BothOfMatcher {
 p..
  BothOfMatcher(Matcher1 matcher1, Matcher2 matcher2)
      : matcher1_(matcher1), matcher2_(matcher2) {}

  // This template type conversion operator allows a
  // BothOfMatcher<Matcher1, Matcher2> object to match any type that
  // both Matcher1 and Matcher2 can match.
  template <typename T>
  operator Matcher<T>() co.. {
    st. ve..<Matcher<T> > values;
    values.push_back(SafeMatcherCast<T>(matcher1_));
    values.push_back(SafeMatcherCast<T>(matcher2_));
    return Matcher<T>(new AllOfMatcherImpl<T>(internal::move(values)));
  }

 pr..
  Matcher1 matcher1_;
  Matcher2 matcher2_;

  GTEST_DISALLOW_ASSIGN_(BothOfMatcher);
};

// Implements the AnyOf(m1, m2) matcher for a particular argument type
// T.  We do not nest it inside the AnyOfMatcher class template, as
// that will prevent different instantiations of AnyOfMatcher from
// sharing the same EitherOfMatcherImpl<T> class.
template <typename T>
n.. AnyOfMatcherImpl
    : pu.. MatcherInterface<GTEST_REFERENCE_TO_CONST_(T)> {
 p..
  explicit AnyOfMatcherImpl(st. ve..<Matcher<T> > matchers)
      : matchers_(internal::move(matchers)) {}

  v.. v.. DescribeTo(::st. ostream* os) co.. {
    *os << "(";
    for (size_t i = 0; i < matchers_.size(); ++i) {
      if (i != 0) *os << ") or (";
      matchers_[i].DescribeTo(os);
    }
    *os << ")";
  }

  v.. v.. DescribeNegationTo(::st. ostream* os) co.. {
    *os << "(";
    for (size_t i = 0; i < matchers_.size(); ++i) {
      if (i != 0) *os << ") and (";
      matchers_[i].DescribeNegationTo(os);
    }
    *os << ")";
  }

  v.. bo.. MatchAndExplain(GTEST_REFERENCE_TO_CONST_(T) x,
                               MatchResultListener* listener) co.. {
    st. string no_match_result;

    // If either matcher1_ or matcher2_ matches x, we just need to
    // explain why *one* of them matches.
    for (size_t i = 0; i < matchers_.size(); ++i) {
      StringMatchResultListener slistener;
      if (matchers_[i].MatchAndExplain(x, &slistener)) {
        *listener << slistener.str();
        return true;
      } else {
        if (no_match_result.empty()) {
          no_match_result = slistener.str();
        } else {
          st. string result = slistener.str();
          if (!result.empty()) {
            no_match_result += ", and ";
            no_match_result += result;
          }
        }
      }
    }

    // Otherwise we need to explain why *both* of them fail.
    *listener << no_match_result;
    return false;
  }

 pr..
  co.. st. ve..<Matcher<T> > matchers_;

  GTEST_DISALLOW_ASSIGN_(AnyOfMatcherImpl);
};

#if GTEST_LANG_CXX11
// AnyOfMatcher is used for the variadic implementation of AnyOf(m_1, m_2, ...).
template <typename... Args>
using AnyOfMatcher = VariadicMatcher<AnyOfMatcherImpl, Args...>;

e..  // GTEST_LANG_CXX11

// Used for implementing the AnyOf(m_1, ..., m_n) matcher, which
// matches a value that matches at least one of the matchers m_1, ...,
// and m_n.
template <typename Matcher1, typename Matcher2>
n.. EitherOfMatcher {
 p..
  EitherOfMatcher(Matcher1 matcher1, Matcher2 matcher2)
      : matcher1_(matcher1), matcher2_(matcher2) {}

  // This template type conversion operator allows a
  // EitherOfMatcher<Matcher1, Matcher2> object to match any type that
  // both Matcher1 and Matcher2 can match.
  template <typename T>
  operator Matcher<T>() co.. {
    st. ve..<Matcher<T> > values;
    values.push_back(SafeMatcherCast<T>(matcher1_));
    values.push_back(SafeMatcherCast<T>(matcher2_));
    return Matcher<T>(new AnyOfMatcherImpl<T>(internal::move(values)));
  }

 pr..
  Matcher1 matcher1_;
  Matcher2 matcher2_;

  GTEST_DISALLOW_ASSIGN_(EitherOfMatcher);
};

// Used for implementing Truly(pred), which turns a predicate into a
// matcher.
template <typename Predicate>
n.. TrulyMatcher {
 p..
  explicit TrulyMatcher(Predicate pred) : predicate_(pred) {}

  // This method template allows Truly(pred) to be used as a matcher
  // for type T where T is the argument type of predicate 'pred'.  The
  // argument is passed by reference as the predicate may be
  // interested in the address of the argument.
  template <typename T>
  bo.. MatchAndExplain(T& x,  // NOLINT
                       MatchResultListener* /* listener */) co.. {
    // Without the if-statement, MSVC sometimes warns about converting
    // a value to bool (warning 4800).
    //
    // We cannot write 'return !!predicate_(x);' as that doesn't work
    // when predicate_(x) returns a class convertible to bool but
    // having no operator!().
    if (predicate_(x))
      return true;
    return false;
  }

  v.. DescribeTo(::st. ostream* os) co.. {
    *os << "satisfies the given predicate";
  }

  v.. DescribeNegationTo(::st. ostream* os) co.. {
    *os << "doesn't satisfy the given predicate";
  }

 pr..
  Predicate predicate_;

  GTEST_DISALLOW_ASSIGN_(TrulyMatcher);
};

// Used for implementing Matches(matcher), which turns a matcher into
// a predicate.
template <typename M>
n.. MatcherAsPredicate {
 p..
  explicit MatcherAsPredicate(M matcher) : matcher_(matcher) {}

  // This template operator() allows Matches(m) to be used as a
  // predicate on type T where m is a matcher on type T.
  //
  // The argument x is passed by reference instead of by value, as
  // some matcher may be interested in its address (e.g. as in
  // Matches(Ref(n))(x)).
  template <typename T>
  bo.. operator()(co.. T& x) co.. {
    // We let matcher_ commit to a particular type here instead of
    // when the MatcherAsPredicate object was constructed.  This
    // allows us to write Matches(m) where m is a polymorphic matcher
    // (e.g. Eq(5)).
    //
    // If we write Matcher<T>(matcher_).Matches(x) here, it won't
    // compile when matcher_ has type Matcher<const T&>; if we write
    // Matcher<const T&>(matcher_).Matches(x) here, it won't compile
    // when matcher_ has type Matcher<T>; if we just write
    // matcher_.Matches(x), it won't compile when matcher_ is
    // polymorphic, e.g. Eq(5).
    //
    // MatcherCast<const T&>() is necessary for making the code work
    // in all of the above situations.
    return MatcherCast<co.. T&>(matcher_).Matches(x);
  }

 pr..
  M matcher_;

  GTEST_DISALLOW_ASSIGN_(MatcherAsPredicate);
};

// For implementing ASSERT_THAT() and EXPECT_THAT().  The template
// argument M must be a type that can be converted to a matcher.
template <typename M>
n.. PredicateFormatterFromMatcher {
 p..
  explicit PredicateFormatterFromMatcher(M m) : matcher_(internal::move(m)) {}

  // This template () operator allows a PredicateFormatterFromMatcher
  // object to act as a predicate-formatter suitable for using with
  // Google Test's EXPECT_PRED_FORMAT1() macro.
  template <typename T>
  AssertionResult operator()(co.. ch..* value_text, co.. T& x) co.. {
    // We convert matcher_ to a Matcher<const T&> *now* instead of
    // when the PredicateFormatterFromMatcher object was constructed,
    // as matcher_ may be polymorphic (e.g. NotNull()) and we won't
    // know which type to instantiate it to until we actually see the
    // type of x here.
    //
    // We write SafeMatcherCast<const T&>(matcher_) instead of
    // Matcher<const T&>(matcher_), as the latter won't compile when
    // matcher_ has type Matcher<T> (e.g. An<int>()).
    // We don't write MatcherCast<const T&> either, as that allows
    // potentially unsafe downcasting of the matcher argument.
    co.. Matcher<co.. T&> matcher = SafeMatcherCast<co.. T&>(matcher_);
    StringMatchResultListener listener;
    if (MatchPrintAndExplain(x, matcher, &listener))
      return AssertionSuccess();

    ::st. stringstream ss;
    ss << "Value of: " << value_text << "\n"
       << "Expected: ";
    matcher.DescribeTo(&ss);
    ss << "\n  Actual: " << listener.str();
    return AssertionFailure() << ss.str();
  }

 pr..
  co.. M matcher_;

  GTEST_DISALLOW_ASSIGN_(PredicateFormatterFromMatcher);
};

// A helper function for converting a matcher to a predicate-formatter
// without the user needing to explicitly write the type.  This is
// used for implementing ASSERT_THAT() and EXPECT_THAT().
// Implementation detail: 'matcher' is received by-value to force decaying.
template <typename M>
inline PredicateFormatterFromMatcher<M>
MakePredicateFormatterFromMatcher(M matcher) {
  return PredicateFormatterFromMatcher<M>(internal::move(matcher));
}

// Implements the polymorphic floating point equality matcher, which matches
// two float values using ULP-based approximation or, optionally, a
// user-specified epsilon.  The template is meant to be instantiated with
// FloatType being either float or double.
template <typename FloatType>
n.. FloatingEqMatcher {
 p..
  // Constructor for FloatingEqMatcher.
  // The matcher's input will be compared with expected.  The matcher treats two
  // NANs as equal if nan_eq_nan is true.  Otherwise, under IEEE standards,
  // equality comparisons between NANs will always return false.  We specify a
  // negative max_abs_error_ term to indicate that ULP-based approximation will
  // be used for comparison.
  FloatingEqMatcher(FloatType expected, bo.. nan_eq_nan) :
    expected_(expected), nan_eq_nan_(nan_eq_nan), max_abs_error_(-1) {
  }

  // Constructor that supports a user-specified max_abs_error that will be used
  // for comparison instead of ULP-based approximation.  The max absolute
  // should be non-negative.
  FloatingEqMatcher(FloatType expected, bo.. nan_eq_nan,
                    FloatType max_abs_error)
      : expected_(expected),
        nan_eq_nan_(nan_eq_nan),
        max_abs_error_(max_abs_error) {
    GTEST_CHECK_(max_abs_error >= 0)
        << ", where max_abs_error is" << max_abs_error;
  }

  // Implements floating point equality matcher as a Matcher<T>.
  template <typename T>
  n.. Impl : pu.. MatcherInterface<T> {
   p..
    Impl(FloatType expected, bo.. nan_eq_nan, FloatType max_abs_error)
        : expected_(expected),
          nan_eq_nan_(nan_eq_nan),
          max_abs_error_(max_abs_error) {}

    v.. bo.. MatchAndExplain(T value,
                                 MatchResultListener* listener) co.. {
      co.. FloatingPoint<FloatType> actual(value), expected(expected_);

      // Compares NaNs first, if nan_eq_nan_ is true.
      if (actual.is_nan() || expected.is_nan()) {
        if (actual.is_nan() && expected.is_nan()) {
          return nan_eq_nan_;
        }
        // One is nan; the other is not nan.
        return false;
      }
      if (HasMaxAbsError()) {
        // We perform an equality check so that inf will match inf, regardless
        // of error bounds.  If the result of value - expected_ would result in
        // overflow or if either value is inf, the default result is infinity,
        // which should only match if max_abs_error_ is also infinity.
        if (value == expected_) {
          return true;
        }

        co.. FloatType diff = value - expected_;
        if (fabs(diff) <= max_abs_error_) {
          return true;
        }

        if (listener->IsInterested()) {
          *listener << "which is " << diff << " from " << expected_;
        }
        return false;
      } else {
        return actual.AlmostEquals(expected);
      }
    }

    v.. v.. DescribeTo(::st. ostream* os) co.. {
      // os->precision() returns the previously set precision, which we
      // store to restore the ostream to its original configuration
      // after outputting.
      co.. ::st. streamsize old_precision = os->precision(
          ::st. numeric_limits<FloatType>::digits10 + 2);
      if (FloatingPoint<FloatType>(expected_).is_nan()) {
        if (nan_eq_nan_) {
          *os << "is NaN";
        } else {
          *os << "never matches";
        }
      } else {
        *os << "is approximately " << expected_;
        if (HasMaxAbsError()) {
          *os << " (absolute error <= " << max_abs_error_ << ")";
        }
      }
      os->precision(old_precision);
    }

    v.. v.. DescribeNegationTo(::st. ostream* os) co.. {
      // As before, get original precision.
      co.. ::st. streamsize old_precision = os->precision(
          ::st. numeric_limits<FloatType>::digits10 + 2);
      if (FloatingPoint<FloatType>(expected_).is_nan()) {
        if (nan_eq_nan_) {
          *os << "isn't NaN";
        } else {
          *os << "is anything";
        }
      } else {
        *os << "isn't approximately " << expected_;
        if (HasMaxAbsError()) {
          *os << " (absolute error > " << max_abs_error_ << ")";
        }
      }
      // Restore original precision.
      os->precision(old_precision);
    }

   pr..
    bo.. HasMaxAbsError() co.. {
      return max_abs_error_ >= 0;
    }

    co.. FloatType expected_;
    co.. bo.. nan_eq_nan_;
    // max_abs_error will be used for value comparison when >= 0.
    co.. FloatType max_abs_error_;

    GTEST_DISALLOW_ASSIGN_(Impl);
  };

  // The following 3 type conversion operators allow FloatEq(expected) and
  // NanSensitiveFloatEq(expected) to be used as a Matcher<float>, a
  // Matcher<const float&>, or a Matcher<float&>, but nothing else.
  // (While Google's C++ coding style doesn't allow arguments passed
  // by non-const reference, we may see them in code not conforming to
  // the style.  Therefore Google Mock needs to support them.)
  operator Matcher<FloatType>() co.. {
    return MakeMatcher(
        new Impl<FloatType>(expected_, nan_eq_nan_, max_abs_error_));
  }

  operator Matcher<co.. FloatType&>() co.. {
    return MakeMatcher(
        new Impl<co.. FloatType&>(expected_, nan_eq_nan_, max_abs_error_));
  }

  operator Matcher<FloatType&>() co.. {
    return MakeMatcher(
        new Impl<FloatType&>(expected_, nan_eq_nan_, max_abs_error_));
  }

 pr..
  co.. FloatType expected_;
  co.. bo.. nan_eq_nan_;
  // max_abs_error will be used for value comparison when >= 0.
  co.. FloatType max_abs_error_;

  GTEST_DISALLOW_ASSIGN_(FloatingEqMatcher);
};

// A 2-tuple ("binary") wrapper around FloatingEqMatcher:
// FloatingEq2Matcher() matches (x, y) by matching FloatingEqMatcher(x, false)
// against y, and FloatingEq2Matcher(e) matches FloatingEqMatcher(x, false, e)
// against y. The former implements "Eq", the latter "Near". At present, there
// is no version that compares NaNs as equal.
template <typename FloatType>
n.. FloatingEq2Matcher {
 p..
  FloatingEq2Matcher() { Init(-1, false); }

  explicit FloatingEq2Matcher(bo.. nan_eq_nan) { Init(-1, nan_eq_nan); }

  explicit FloatingEq2Matcher(FloatType max_abs_error) {
    Init(max_abs_error, false);
  }

  FloatingEq2Matcher(FloatType max_abs_error, bo.. nan_eq_nan) {
    Init(max_abs_error, nan_eq_nan);
  }

  template <typename T1, typename T2>
  operator Matcher< ::testing::tuple<T1, T2> >() co.. {
    return MakeMatcher(
        new Impl< ::testing::tuple<T1, T2> >(max_abs_error_, nan_eq_nan_));
  }
  template <typename T1, typename T2>
  operator Matcher<co.. ::testing::tuple<T1, T2>&>() co.. {
    return MakeMatcher(
        new Impl<co.. ::testing::tuple<T1, T2>&>(max_abs_error_, nan_eq_nan_));
  }

 pr..
  st.. ::st. ostream& GetDesc(::st. ostream& os) {  // NOLINT
    return os << "an almost-equal pair";
  }

  template <typename Tuple>
  n.. Impl : pu.. MatcherInterface<Tuple> {
   p..
    Impl(FloatType max_abs_error, bo.. nan_eq_nan) :
        max_abs_error_(max_abs_error),
        nan_eq_nan_(nan_eq_nan) {}

    v.. bo.. MatchAndExplain(Tuple args,
                                 MatchResultListener* listener) co.. {
      if (max_abs_error_ == -1) {
        FloatingEqMatcher<FloatType> fm(::testing::get<0>(args), nan_eq_nan_);
        return static_cast<Matcher<FloatType> >(fm).MatchAndExplain(
            ::testing::get<1>(args), listener);
      } else {
        FloatingEqMatcher<FloatType> fm(::testing::get<0>(args), nan_eq_nan_,
                                        max_abs_error_);
        return static_cast<Matcher<FloatType> >(fm).MatchAndExplain(
            ::testing::get<1>(args), listener);
      }
    }
    v.. v.. DescribeTo(::st. ostream* os) co.. {
      *os << "are " << GetDesc;
    }
    v.. v.. DescribeNegationTo(::st. ostream* os) co.. {
      *os << "aren't " << GetDesc;
    }

   pr..
    FloatType max_abs_error_;
    co.. bo.. nan_eq_nan_;
  };

  v.. Init(FloatType max_abs_error_val, bo.. nan_eq_nan_val) {
    max_abs_error_ = max_abs_error_val;
    nan_eq_nan_ = nan_eq_nan_val;
  }
  FloatType max_abs_error_;
  bo.. nan_eq_nan_;
};

// Implements the Pointee(m) matcher for matching a pointer whose
// pointee matches matcher m.  The pointer can be either raw or smart.
template <typename InnerMatcher>
n.. PointeeMatcher {
 p..
  explicit PointeeMatcher(co.. InnerMatcher& matcher) : matcher_(matcher) {}

  // This type conversion operator template allows Pointee(m) to be
  // used as a matcher for any pointer type whose pointee type is
  // compatible with the inner matcher, where type Pointer can be
  // either a raw pointer or a smart pointer.
  //
  // The reason we do this instead of relying on
  // MakePolymorphicMatcher() is that the latter is not flexible
  // enough for implementing the DescribeTo() method of Pointee().
  template <typename Pointer>
  operator Matcher<Pointer>() co.. {
    return Matcher<Pointer>(
        new Impl<GTEST_REFERENCE_TO_CONST_(Pointer)>(matcher_));
  }

 pr..
  // The monomorphic implementation that works for a particular pointer type.
  template <typename Pointer>
  n.. Impl : pu.. MatcherInterface<Pointer> {
   p..
    typedef typename PointeeOf<GTEST_REMOVE_CONST_(  // NOLINT
        GTEST_REMOVE_REFERENCE_(Pointer))>::type Pointee;

    explicit Impl(co.. InnerMatcher& matcher)
        : matcher_(MatcherCast<co.. Pointee&>(matcher)) {}

    v.. v.. DescribeTo(::st. ostream* os) co.. {
      *os << "points to a value that ";
      matcher_.DescribeTo(os);
    }

    v.. v.. DescribeNegationTo(::st. ostream* os) co.. {
      *os << "does not point to a value that ";
      matcher_.DescribeTo(os);
    }

    v.. bo.. MatchAndExplain(Pointer pointer,
                                 MatchResultListener* listener) co.. {
      if (GetRawPointer(pointer) == NULL)
        return false;

      *listener << "which points to ";
      return MatchPrintAndExplain(*pointer, matcher_, listener);
    }

   pr..
    co.. Matcher<co.. Pointee&> matcher_;

    GTEST_DISALLOW_ASSIGN_(Impl);
  };

  co.. InnerMatcher matcher_;

  GTEST_DISALLOW_ASSIGN_(PointeeMatcher);
};

#if GTEST_HAS_RTTI
// Implements the WhenDynamicCastTo<T>(m) matcher that matches a pointer or
// reference that matches inner_matcher when dynamic_cast<T> is applied.
// The result of dynamic_cast<To> is forwarded to the inner matcher.
// If To is a pointer and the cast fails, the inner matcher will receive NULL.
// If To is a reference and the cast fails, this matcher returns false
// immediately.
template <typename To>
n.. WhenDynamicCastToMatcherBase {
 p..
  explicit WhenDynamicCastToMatcherBase(co.. Matcher<To>& matcher)
      : matcher_(matcher) {}

  v.. DescribeTo(::st. ostream* os) co.. {
    GetCastTypeDescription(os);
    matcher_.DescribeTo(os);
  }

  v.. DescribeNegationTo(::st. ostream* os) co.. {
    GetCastTypeDescription(os);
    matcher_.DescribeNegationTo(os);
  }

 pr..
  co.. Matcher<To> matcher_;

  st.. st. string GetToName() {
    return GetTypeName<To>();
  }

 pr..
  st.. v.. GetCastTypeDescription(::st. ostream* os) {
    *os << "when dynamic_cast to " << GetToName() << ", ";
  }

  GTEST_DISALLOW_ASSIGN_(WhenDynamicCastToMatcherBase);
};

// Primary template.
// To is a pointer. Cast and forward the result.
template <typename To>
n.. WhenDynamicCastToMatcher : pu.. WhenDynamicCastToMatcherBase<To> {
 p..
  explicit WhenDynamicCastToMatcher(co.. Matcher<To>& matcher)
      : WhenDynamicCastToMatcherBase<To>(matcher) {}

  template <typename From>
  bo.. MatchAndExplain(From from, MatchResultListener* listener) co.. {
    // TODO(sbenza): Add more detail on failures. ie did the dyn_cast fail?
    To to = dynamic_cast<To>(from);
    return MatchPrintAndExplain(to, this->matcher_, listener);
  }
};

// Specialize for references.
// In this case we return false if the dynamic_cast fails.
template <typename To>
n.. WhenDynamicCastToMatcher<To&> : pu.. WhenDynamicCastToMatcherBase<To&> {
 p..
  explicit WhenDynamicCastToMatcher(co.. Matcher<To&>& matcher)
      : WhenDynamicCastToMatcherBase<To&>(matcher) {}

  template <typename From>
  bo.. MatchAndExplain(From& from, MatchResultListener* listener) co.. {
    // We don't want an std::bad_cast here, so do the cast with pointers.
    To* to = dynamic_cast<To*>(&from);
    if (to == NULL) {
      *listener << "which cannot be dynamic_cast to " << this->GetToName();
      return false;
    }
    return MatchPrintAndExplain(*to, this->matcher_, listener);
  }
};
e..  // GTEST_HAS_RTTI

// Implements the Field() matcher for matching a field (i.e. member
// variable) of an object.
template <typename n.., typename FieldType>
n.. FieldMatcher {
 p..
  FieldMatcher(FieldType n..::*field,
               co.. Matcher<co.. FieldType&>& matcher)
      : field_(field), matcher_(matcher), whose_field_("whose given field ") {}

  FieldMatcher(co.. st. string& field_name, FieldType n..::*field,
               co.. Matcher<co.. FieldType&>& matcher)
      : field_(field),
        matcher_(matcher),
        whose_field_("whose field `" + field_name + "` ") {}

  v.. DescribeTo(::st. ostream* os) co.. {
    *os << "is an object " << whose_field_;
    matcher_.DescribeTo(os);
  }

  v.. DescribeNegationTo(::st. ostream* os) co.. {
    *os << "is an object " << whose_field_;
    matcher_.DescribeNegationTo(os);
  }

  template <typename T>
  bo.. MatchAndExplain(co.. T& value, MatchResultListener* listener) co.. {
    return MatchAndExplainImpl(
        typename ::testing::internal::
            is_pointer<GTEST_REMOVE_CONST_(T)>::type(),
        value, listener);
  }

 pr..
  // The first argument of MatchAndExplainImpl() is needed to help
  // Symbian's C++ compiler choose which overload to use.  Its type is
  // true_type iff the Field() matcher is used to match a pointer.
  bo.. MatchAndExplainImpl(false_type /* is_not_pointer */, co.. n..& obj,
                           MatchResultListener* listener) co.. {
    *listener << whose_field_ << "is ";
    return MatchPrintAndExplain(obj.*field_, matcher_, listener);
  }

  bo.. MatchAndExplainImpl(true_type /* is_pointer */, co.. n..* p,
                           MatchResultListener* listener) co.. {
    if (p == NULL)
      return false;

    *listener << "which points to an object ";
    // Since *p has a field, it must be a class/struct/union type and
    // thus cannot be a pointer.  Therefore we pass false_type() as
    // the first argument.
    return MatchAndExplainImpl(false_type(), *p, listener);
  }

  co.. FieldType n..::*field_;
  co.. Matcher<co.. FieldType&> matcher_;

  // Contains either "whose given field " if the name of the field is unknown
  // or "whose field `name_of_field` " if the name is known.
  co.. st. string whose_field_;

  GTEST_DISALLOW_ASSIGN_(FieldMatcher);
};

// Implements the Property() matcher for matching a property
// (i.e. return value of a getter method) of an object.
//
// Property is a const-qualified member function of Class returning
// PropertyType.
template <typename n.., typename PropertyType, typename Property>
n.. PropertyMatcher {
 p..
  // The property may have a reference type, so 'const PropertyType&'
  // may cause double references and fail to compile.  That's why we
  // need GTEST_REFERENCE_TO_CONST, which works regardless of
  // PropertyType being a reference or not.
  typedef GTEST_REFERENCE_TO_CONST_(PropertyType) RefToConstProperty;

  PropertyMatcher(Property property, co.. Matcher<RefToConstProperty>& matcher)
      : property_(property),
        matcher_(matcher),
        whose_property_("whose given property ") {}

  PropertyMatcher(co.. st. string& property_name, Property property,
                  co.. Matcher<RefToConstProperty>& matcher)
      : property_(property),
        matcher_(matcher),
        whose_property_("whose property `" + property_name + "` ") {}

  v.. DescribeTo(::st. ostream* os) co.. {
    *os << "is an object " << whose_property_;
    matcher_.DescribeTo(os);
  }

  v.. DescribeNegationTo(::st. ostream* os) co.. {
    *os << "is an object " << whose_property_;
    matcher_.DescribeNegationTo(os);
  }

  template <typename T>
  bo.. MatchAndExplain(co.. T&value, MatchResultListener* listener) co.. {
    return MatchAndExplainImpl(
        typename ::testing::internal::
            is_pointer<GTEST_REMOVE_CONST_(T)>::type(),
        value, listener);
  }

 pr..
  // The first argument of MatchAndExplainImpl() is needed to help
  // Symbian's C++ compiler choose which overload to use.  Its type is
  // true_type iff the Property() matcher is used to match a pointer.
  bo.. MatchAndExplainImpl(false_type /* is_not_pointer */, co.. n..& obj,
                           MatchResultListener* listener) co.. {
    *listener << whose_property_ << "is ";
    // Cannot pass the return value (for example, int) to MatchPrintAndExplain,
    // which takes a non-const reference as argument.
#if defined(_PREFAST_ ) && _MSC_VER == 1800
    // Workaround bug in VC++ 2013's /analyze parser.
    // https://connect.microsoft.com/VisualStudio/feedback/details/1106363/internal-compiler-error-with-analyze-due-to-failure-to-infer-move
    posix::Abort();  // To make sure it is never run.
    return false;
#else
    RefToConstProperty result = (obj.*property_)();
    return MatchPrintAndExplain(result, matcher_, listener);
e..
  }

  bo.. MatchAndExplainImpl(true_type /* is_pointer */, co.. n..* p,
                           MatchResultListener* listener) co.. {
    if (p == NULL)
      return false;

    *listener << "which points to an object ";
    // Since *p has a property method, it must be a class/struct/union
    // type and thus cannot be a pointer.  Therefore we pass
    // false_type() as the first argument.
    return MatchAndExplainImpl(false_type(), *p, listener);
  }

  Property property_;
  co.. Matcher<RefToConstProperty> matcher_;

  // Contains either "whose given property " if the name of the property is
  // unknown or "whose property `name_of_property` " if the name is known.
  co.. st. string whose_property_;

  GTEST_DISALLOW_ASSIGN_(PropertyMatcher);
};

// Type traits specifying various features of different functors for ResultOf.
// The default template specifies features for functor objects.
// Functor classes have to typedef argument_type and result_type
// to be compatible with ResultOf.
template <typename Functor>
struct CallableTraits {
  typedef typename Functor::result_type ResultType;
  typedef Functor StorageType;

  st.. v.. CheckIsValid(Functor /* functor */) {}
  template <typename T>
  st.. ResultType Invoke(Functor f, T arg) { return f(arg); }
};

// Specialization for function pointers.
template <typename ArgType, typename ResType>
struct CallableTraits<ResType(*)(ArgType)> {
  typedef ResType ResultType;
  typedef ResType(*StorageType)(ArgType);

  st.. v.. CheckIsValid(ResType(*f)(ArgType)) {
    GTEST_CHECK_(f != NULL)
        << "NULL function pointer is passed into ResultOf().";
  }
  template <typename T>
  st.. ResType Invoke(ResType(*f)(ArgType), T arg) {
    return (*f)(arg);
  }
};

// Implements the ResultOf() matcher for matching a return value of a
// unary function of an object.
template <typename Callable>
n.. ResultOfMatcher {
 p..
  typedef typename CallableTraits<Callable>::ResultType ResultType;

  ResultOfMatcher(Callable callable, co.. Matcher<ResultType>& matcher)
      : callable_(callable), matcher_(matcher) {
    CallableTraits<Callable>::CheckIsValid(callable_);
  }

  template <typename T>
  operator Matcher<T>() co.. {
    return Matcher<T>(new Impl<T>(callable_, matcher_));
  }

 pr..
  typedef typename CallableTraits<Callable>::StorageType CallableStorageType;

  template <typename T>
  n.. Impl : pu.. MatcherInterface<T> {
   p..
    Impl(CallableStorageType callable, co.. Matcher<ResultType>& matcher)
        : callable_(callable), matcher_(matcher) {}

    v.. v.. DescribeTo(::st. ostream* os) co.. {
      *os << "is mapped by the given callable to a value that ";
      matcher_.DescribeTo(os);
    }

    v.. v.. DescribeNegationTo(::st. ostream* os) co.. {
      *os << "is mapped by the given callable to a value that ";
      matcher_.DescribeNegationTo(os);
    }

    v.. bo.. MatchAndExplain(T obj, MatchResultListener* listener) co.. {
      *listener << "which is mapped by the given callable to ";
      // Cannot pass the return value (for example, int) to
      // MatchPrintAndExplain, which takes a non-const reference as argument.
      ResultType result =
          CallableTraits<Callable>::template Invoke<T>(callable_, obj);
      return MatchPrintAndExplain(result, matcher_, listener);
    }

   pr..
    // Functors often define operator() as non-const method even though
    // they are actually stateless. But we need to use them even when
    // 'this' is a const pointer. It's the user's responsibility not to
    // use stateful callables with ResultOf(), which does't guarantee
    // how many times the callable will be invoked.
    mutable CallableStorageType callable_;
    co.. Matcher<ResultType> matcher_;

    GTEST_DISALLOW_ASSIGN_(Impl);
  };  // class Impl

  co.. CallableStorageType callable_;
  co.. Matcher<ResultType> matcher_;

  GTEST_DISALLOW_ASSIGN_(ResultOfMatcher);
};

// Implements a matcher that checks the size of an STL-style container.
template <typename SizeMatcher>
n.. SizeIsMatcher {
 p..
  explicit SizeIsMatcher(co.. SizeMatcher& size_matcher)
       : size_matcher_(size_matcher) {
  }

  template <typename Container>
  operator Matcher<Container>() co.. {
    return MakeMatcher(new Impl<Container>(size_matcher_));
  }

  template <typename Container>
  n.. Impl : pu.. MatcherInterface<Container> {
   p..
    typedef internal::StlContainerView<
         GTEST_REMOVE_REFERENCE_AND_CONST_(Container)> ContainerView;
    typedef typename ContainerView::type::size_type SizeType;
    explicit Impl(co.. SizeMatcher& size_matcher)
        : size_matcher_(MatcherCast<SizeType>(size_matcher)) {}

    v.. v.. DescribeTo(::st. ostream* os) co.. {
      *os << "size ";
      size_matcher_.DescribeTo(os);
    }
    v.. v.. DescribeNegationTo(::st. ostream* os) co.. {
      *os << "size ";
      size_matcher_.DescribeNegationTo(os);
    }

    v.. bo.. MatchAndExplain(Container container,
                                 MatchResultListener* listener) co.. {
      SizeType size = container.size();
      StringMatchResultListener size_listener;
      co.. bo.. result = size_matcher_.MatchAndExplain(size, &size_listener);
      *listener
          << "whose size " << size << (result ? " matches" : " doesn't match");
      PrintIfNotEmpty(size_listener.str(), listener->stream());
      return result;
    }

   pr..
    co.. Matcher<SizeType> size_matcher_;
    GTEST_DISALLOW_ASSIGN_(Impl);
  };

 pr..
  co.. SizeMatcher size_matcher_;
  GTEST_DISALLOW_ASSIGN_(SizeIsMatcher);
};

// Implements a matcher that checks the begin()..end() distance of an STL-style
// container.
template <typename DistanceMatcher>
n.. BeginEndDistanceIsMatcher {
 p..
  explicit BeginEndDistanceIsMatcher(co.. DistanceMatcher& distance_matcher)
      : distance_matcher_(distance_matcher) {}

  template <typename Container>
  operator Matcher<Container>() co.. {
    return MakeMatcher(new Impl<Container>(distance_matcher_));
  }

  template <typename Container>
  n.. Impl : pu.. MatcherInterface<Container> {
   p..
    typedef internal::StlContainerView<
        GTEST_REMOVE_REFERENCE_AND_CONST_(Container)> ContainerView;
    typedef typename st. iterator_traits<
        typename ContainerView::type::const_iterator>::difference_type
        DistanceType;
    explicit Impl(co.. DistanceMatcher& distance_matcher)
        : distance_matcher_(MatcherCast<DistanceType>(distance_matcher)) {}

    v.. v.. DescribeTo(::st. ostream* os) co.. {
      *os << "distance between begin() and end() ";
      distance_matcher_.DescribeTo(os);
    }
    v.. v.. DescribeNegationTo(::st. ostream* os) co.. {
      *os << "distance between begin() and end() ";
      distance_matcher_.DescribeNegationTo(os);
    }

    v.. bo.. MatchAndExplain(Container container,
                                 MatchResultListener* listener) co.. {
#if GTEST_HAS_STD_BEGIN_AND_END_
      using st. begin;
      using st. end;
      DistanceType distance = st. distance(begin(container), end(container));
#else
      DistanceType distance = st. distance(container.begin(), container.end());
e..
      StringMatchResultListener distance_listener;
      co.. bo.. result =
          distance_matcher_.MatchAndExplain(distance, &distance_listener);
      *listener << "whose distance between begin() and end() " << distance
                << (result ? " matches" : " doesn't match");
      PrintIfNotEmpty(distance_listener.str(), listener->stream());
      return result;
    }

   pr..
    co.. Matcher<DistanceType> distance_matcher_;
    GTEST_DISALLOW_ASSIGN_(Impl);
  };

 pr..
  co.. DistanceMatcher distance_matcher_;
  GTEST_DISALLOW_ASSIGN_(BeginEndDistanceIsMatcher);
};

// Implements an equality matcher for any STL-style container whose elements
// support ==. This matcher is like Eq(), but its failure explanations provide
// more detailed information that is useful when the container is used as a set.
// The failure message reports elements that are in one of the operands but not
// the other. The failure messages do not report duplicate or out-of-order
// elements in the containers (which don't properly matter to sets, but can
// occur if the containers are vectors or lists, for example).
//
// Uses the container's const_iterator, value_type, operator ==,
// begin(), and end().
template <typename Container>
n.. ContainerEqMatcher {
 p..
  typedef internal::StlContainerView<Container> View;
  typedef typename View::type StlContainer;
  typedef typename View::const_reference StlContainerReference;

  // We make a copy of expected in case the elements in it are modified
  // after this matcher is created.
  explicit ContainerEqMatcher(co.. Container& expected)
      : expected_(View::Copy(expected)) {
    // Makes sure the user doesn't instantiate this class template
    // with a const or reference type.
    (v..)testing::StaticAssertTypeEq<Container,
        GTEST_REMOVE_REFERENCE_AND_CONST_(Container)>();
  }

  v.. DescribeTo(::st. ostream* os) co.. {
    *os << "equals ";
    UniversalPrint(expected_, os);
  }
  v.. DescribeNegationTo(::st. ostream* os) co.. {
    *os << "does not equal ";
    UniversalPrint(expected_, os);
  }

  template <typename LhsContainer>
  bo.. MatchAndExplain(co.. LhsContainer& lhs,
                       MatchResultListener* listener) co.. {
    // GTEST_REMOVE_CONST_() is needed to work around an MSVC 8.0 bug
    // that causes LhsContainer to be a const type sometimes.
    typedef internal::StlContainerView<GTEST_REMOVE_CONST_(LhsContainer)>
        LhsView;
    typedef typename LhsView::type LhsStlContainer;
    StlContainerReference lhs_stl_container = LhsView::ConstReference(lhs);
    if (lhs_stl_container == expected_)
      return true;

    ::st. ostream* co.. os = listener->stream();
    if (os != NULL) {
      // Something is different. Check for extra values first.
      bo.. printed_header = false;
      for (typename LhsStlContainer::const_iterator it =
               lhs_stl_container.begin();
           it != lhs_stl_container.end(); ++it) {
        if (internal::ArrayAwareFind(expected_.begin(), expected_.end(), *it) ==
            expected_.end()) {
          if (printed_header) {
            *os << ", ";
          } else {
            *os << "which has these unexpected elements: ";
            printed_header = true;
          }
          UniversalPrint(*it, os);
        }
      }

      // Now check for missing values.
      bo.. printed_header2 = false;
      for (typename StlContainer::const_iterator it = expected_.begin();
           it != expected_.end(); ++it) {
        if (internal::ArrayAwareFind(
                lhs_stl_container.begin(), lhs_stl_container.end(), *it) ==
            lhs_stl_container.end()) {
          if (printed_header2) {
            *os << ", ";
          } else {
            *os << (printed_header ? ",\nand" : "which")
                << " doesn't have these expected elements: ";
            printed_header2 = true;
          }
          UniversalPrint(*it, os);
        }
      }
    }

    return false;
  }

 pr..
  co.. StlContainer expected_;

  GTEST_DISALLOW_ASSIGN_(ContainerEqMatcher);
};

// A comparator functor that uses the < operator to compare two values.
struct LessComparator {
  template <typename T, typename U>
  bo.. operator()(co.. T& lhs, co.. U& rhs) co.. { return lhs < rhs; }
};

// Implements WhenSortedBy(comparator, container_matcher).
template <typename Comparator, typename ContainerMatcher>
n.. WhenSortedByMatcher {
 p..
  WhenSortedByMatcher(co.. Comparator& comparator,
                      co.. ContainerMatcher& matcher)
      : comparator_(comparator), matcher_(matcher) {}

  template <typename LhsContainer>
  operator Matcher<LhsContainer>() co.. {
    return MakeMatcher(new Impl<LhsContainer>(comparator_, matcher_));
  }

  template <typename LhsContainer>
  n.. Impl : pu.. MatcherInterface<LhsContainer> {
   p..
    typedef internal::StlContainerView<
         GTEST_REMOVE_REFERENCE_AND_CONST_(LhsContainer)> LhsView;
    typedef typename LhsView::type LhsStlContainer;
    typedef typename LhsView::const_reference LhsStlContainerReference;
    // Transforms std::pair<const Key, Value> into std::pair<Key, Value>
    // so that we can match associative containers.
    typedef typename RemoveConstFromKey<
        typename LhsStlContainer::value_type>::type LhsValue;

    Impl(co.. Comparator& comparator, co.. ContainerMatcher& matcher)
        : comparator_(comparator), matcher_(matcher) {}

    v.. v.. DescribeTo(::st. ostream* os) co.. {
      *os << "(when sorted) ";
      matcher_.DescribeTo(os);
    }

    v.. v.. DescribeNegationTo(::st. ostream* os) co.. {
      *os << "(when sorted) ";
      matcher_.DescribeNegationTo(os);
    }

    v.. bo.. MatchAndExplain(LhsContainer lhs,
                                 MatchResultListener* listener) co.. {
      LhsStlContainerReference lhs_stl_container = LhsView::ConstReference(lhs);
      ::st. ve..<LhsValue> sorted_container(lhs_stl_container.begin(),
                                               lhs_stl_container.end());
      ::st. sort(
           sorted_container.begin(), sorted_container.end(), comparator_);

      if (!listener->IsInterested()) {
        // If the listener is not interested, we do not need to
        // construct the inner explanation.
        return matcher_.Matches(sorted_container);
      }

      *listener << "which is ";
      UniversalPrint(sorted_container, listener->stream());
      *listener << " when sorted";

      StringMatchResultListener inner_listener;
      co.. bo.. match = matcher_.MatchAndExplain(sorted_container,
                                                  &inner_listener);
      PrintIfNotEmpty(inner_listener.str(), listener->stream());
      return match;
    }

   pr..
    co.. Comparator comparator_;
    co.. Matcher<co.. ::st. ve..<LhsValue>&> matcher_;

    GTEST_DISALLOW_COPY_AND_ASSIGN_(Impl);
  };

 pr..
  co.. Comparator comparator_;
  co.. ContainerMatcher matcher_;

  GTEST_DISALLOW_ASSIGN_(WhenSortedByMatcher);
};

// Implements Pointwise(tuple_matcher, rhs_container).  tuple_matcher
// must be able to be safely cast to Matcher<tuple<const T1&, const
// T2&> >, where T1 and T2 are the types of elements in the LHS
// container and the RHS container respectively.
template <typename TupleMatcher, typename RhsContainer>
n.. PointwiseMatcher {
  GTEST_COMPILE_ASSERT_(
      !IsHashTable<GTEST_REMOVE_REFERENCE_AND_CONST_(RhsContainer)>::value,
      use_UnorderedPointwise_with_hash_tables);

 p..
  typedef internal::StlContainerView<RhsContainer> RhsView;
  typedef typename RhsView::type RhsStlContainer;
  typedef typename RhsStlContainer::value_type RhsValue;

  // Like ContainerEq, we make a copy of rhs in case the elements in
  // it are modified after this matcher is created.
  PointwiseMatcher(co.. TupleMatcher& tuple_matcher, co.. RhsContainer& rhs)
      : tuple_matcher_(tuple_matcher), rhs_(RhsView::Copy(rhs)) {
    // Makes sure the user doesn't instantiate this class template
    // with a const or reference type.
    (v..)testing::StaticAssertTypeEq<RhsContainer,
        GTEST_REMOVE_REFERENCE_AND_CONST_(RhsContainer)>();
  }

  template <typename LhsContainer>
  operator Matcher<LhsContainer>() co.. {
    GTEST_COMPILE_ASSERT_(
        !IsHashTable<GTEST_REMOVE_REFERENCE_AND_CONST_(LhsContainer)>::value,
        use_UnorderedPointwise_with_hash_tables);

    return MakeMatcher(new Impl<LhsContainer>(tuple_matcher_, rhs_));
  }

  template <typename LhsContainer>
  n.. Impl : pu.. MatcherInterface<LhsContainer> {
   p..
    typedef internal::StlContainerView<
         GTEST_REMOVE_REFERENCE_AND_CONST_(LhsContainer)> LhsView;
    typedef typename LhsView::type LhsStlContainer;
    typedef typename LhsView::const_reference LhsStlContainerReference;
    typedef typename LhsStlContainer::value_type LhsValue;
    // We pass the LHS value and the RHS value to the inner matcher by
    // reference, as they may be expensive to copy.  We must use tuple
    // instead of pair here, as a pair cannot hold references (C++ 98,
    // 20.2.2 [lib.pairs]).
    typedef ::testing::tuple<co.. LhsValue&, co.. RhsValue&> InnerMatcherArg;

    Impl(co.. TupleMatcher& tuple_matcher, co.. RhsStlContainer& rhs)
        // mono_tuple_matcher_ holds a monomorphic version of the tuple matcher.
        : mono_tuple_matcher_(SafeMatcherCast<InnerMatcherArg>(tuple_matcher)),
          rhs_(rhs) {}

    v.. v.. DescribeTo(::st. ostream* os) co.. {
      *os << "contains " << rhs_.size()
          << " values, where each value and its corresponding value in ";
      UniversalPrinter<RhsStlContainer>::Print(rhs_, os);
      *os << " ";
      mono_tuple_matcher_.DescribeTo(os);
    }
    v.. v.. DescribeNegationTo(::st. ostream* os) co.. {
      *os << "doesn't contain exactly " << rhs_.size()
          << " values, or contains a value x at some index i"
          << " where x and the i-th value of ";
      UniversalPrint(rhs_, os);
      *os << " ";
      mono_tuple_matcher_.DescribeNegationTo(os);
    }

    v.. bo.. MatchAndExplain(LhsContainer lhs,
                                 MatchResultListener* listener) co.. {
      LhsStlContainerReference lhs_stl_container = LhsView::ConstReference(lhs);
      co.. size_t actual_size = lhs_stl_container.size();
      if (actual_size != rhs_.size()) {
        *listener << "which contains " << actual_size << " values";
        return false;
      }

      typename LhsStlContainer::const_iterator left = lhs_stl_container.begin();
      typename RhsStlContainer::const_iterator right = rhs_.begin();
      for (size_t i = 0; i != actual_size; ++i, ++left, ++right) {
        if (listener->IsInterested()) {
          StringMatchResultListener inner_listener;
          // Create InnerMatcherArg as a temporarily object to avoid it outlives
          // *left and *right. Dereference or the conversion to `const T&` may
          // return temp objects, e.g for vector<bool>.
          if (!mono_tuple_matcher_.MatchAndExplain(
                  InnerMatcherArg(ImplicitCast_<co.. LhsValue&>(*left),
                                  ImplicitCast_<co.. RhsValue&>(*right)),
                  &inner_listener)) {
            *listener << "where the value pair (";
            UniversalPrint(*left, listener->stream());
            *listener << ", ";
            UniversalPrint(*right, listener->stream());
            *listener << ") at index #" << i << " don't match";
            PrintIfNotEmpty(inner_listener.str(), listener->stream());
            return false;
          }
        } else {
          if (!mono_tuple_matcher_.Matches(
                  InnerMatcherArg(ImplicitCast_<co.. LhsValue&>(*left),
                                  ImplicitCast_<co.. RhsValue&>(*right))))
            return false;
        }
      }

      return true;
    }

   pr..
    co.. Matcher<InnerMatcherArg> mono_tuple_matcher_;
    co.. RhsStlContainer rhs_;

    GTEST_DISALLOW_ASSIGN_(Impl);
  };

 pr..
  co.. TupleMatcher tuple_matcher_;
  co.. RhsStlContainer rhs_;

  GTEST_DISALLOW_ASSIGN_(PointwiseMatcher);
};

// Holds the logic common to ContainsMatcherImpl and EachMatcherImpl.
template <typename Container>
n.. QuantifierMatcherImpl : pu.. MatcherInterface<Container> {
 p..
  typedef GTEST_REMOVE_REFERENCE_AND_CONST_(Container) RawContainer;
  typedef StlContainerView<RawContainer> View;
  typedef typename View::type StlContainer;
  typedef typename View::const_reference StlContainerReference;
  typedef typename StlContainer::value_type Element;

  template <typename InnerMatcher>
  explicit QuantifierMatcherImpl(InnerMatcher inner_matcher)
      : inner_matcher_(
           testing::SafeMatcherCast<co.. Element&>(inner_matcher)) {}

  // Checks whether:
  // * All elements in the container match, if all_elements_should_match.
  // * Any element in the container matches, if !all_elements_should_match.
  bo.. MatchAndExplainImpl(bo.. all_elements_should_match,
                           Container container,
                           MatchResultListener* listener) co.. {
    StlContainerReference stl_container = View::ConstReference(container);
    size_t i = 0;
    for (typename StlContainer::const_iterator it = stl_container.begin();
         it != stl_container.end(); ++it, ++i) {
      StringMatchResultListener inner_listener;
      co.. bo.. matches = inner_matcher_.MatchAndExplain(*it, &inner_listener);

      if (matches != all_elements_should_match) {
        *listener << "whose element #" << i
                  << (matches ? " matches" : " doesn't match");
        PrintIfNotEmpty(inner_listener.str(), listener->stream());
        return !all_elements_should_match;
      }
    }
    return all_elements_should_match;
  }

 pr..
  co.. Matcher<co.. Element&> inner_matcher_;

  GTEST_DISALLOW_ASSIGN_(QuantifierMatcherImpl);
};

// Implements Contains(element_matcher) for the given argument type Container.
// Symmetric to EachMatcherImpl.
template <typename Container>
n.. ContainsMatcherImpl : pu.. QuantifierMatcherImpl<Container> {
 p..
  template <typename InnerMatcher>
  explicit ContainsMatcherImpl(InnerMatcher inner_matcher)
      : QuantifierMatcherImpl<Container>(inner_matcher) {}

  // Describes what this matcher does.
  v.. v.. DescribeTo(::st. ostream* os) co.. {
    *os << "contains at least one element that ";
    this->inner_matcher_.DescribeTo(os);
  }

  v.. v.. DescribeNegationTo(::st. ostream* os) co.. {
    *os << "doesn't contain any element that ";
    this->inner_matcher_.DescribeTo(os);
  }

  v.. bo.. MatchAndExplain(Container container,
                               MatchResultListener* listener) co.. {
    return this->MatchAndExplainImpl(false, container, listener);
  }

 pr..
  GTEST_DISALLOW_ASSIGN_(ContainsMatcherImpl);
};

// Implements Each(element_matcher) for the given argument type Container.
// Symmetric to ContainsMatcherImpl.
template <typename Container>
n.. EachMatcherImpl : pu.. QuantifierMatcherImpl<Container> {
 p..
  template <typename InnerMatcher>
  explicit EachMatcherImpl(InnerMatcher inner_matcher)
      : QuantifierMatcherImpl<Container>(inner_matcher) {}

  // Describes what this matcher does.
  v.. v.. DescribeTo(::st. ostream* os) co.. {
    *os << "only contains elements that ";
    this->inner_matcher_.DescribeTo(os);
  }

  v.. v.. DescribeNegationTo(::st. ostream* os) co.. {
    *os << "contains some element that ";
    this->inner_matcher_.DescribeNegationTo(os);
  }

  v.. bo.. MatchAndExplain(Container container,
                               MatchResultListener* listener) co.. {
    return this->MatchAndExplainImpl(true, container, listener);
  }

 pr..
  GTEST_DISALLOW_ASSIGN_(EachMatcherImpl);
};

// Implements polymorphic Contains(element_matcher).
template <typename M>
n.. ContainsMatcher {
 p..
  explicit ContainsMatcher(M m) : inner_matcher_(m) {}

  template <typename Container>
  operator Matcher<Container>() co.. {
    return MakeMatcher(new ContainsMatcherImpl<Container>(inner_matcher_));
  }

 pr..
  co.. M inner_matcher_;

  GTEST_DISALLOW_ASSIGN_(ContainsMatcher);
};

// Implements polymorphic Each(element_matcher).
template <typename M>
n.. EachMatcher {
 p..
  explicit EachMatcher(M m) : inner_matcher_(m) {}

  template <typename Container>
  operator Matcher<Container>() co.. {
    return MakeMatcher(new EachMatcherImpl<Container>(inner_matcher_));
  }

 pr..
  co.. M inner_matcher_;

  GTEST_DISALLOW_ASSIGN_(EachMatcher);
};

struct Rank1 {};
struct Rank0 : Rank1 {};

n... pair_getters {
#if GTEST_LANG_CXX11
using st. get;
template <typename T>
auto First(T& x, Rank1) -> decltype(get<0>(x)) {  // NOLINT
  return get<0>(x);
}
template <typename T>
auto First(T& x, Rank0) -> decltype((x.first)) {  // NOLINT
  return x.first;
}

template <typename T>
auto Second(T& x, Rank1) -> decltype(get<1>(x)) {  // NOLINT
  return get<1>(x);
}
template <typename T>
auto Second(T& x, Rank0) -> decltype((x.second)) {  // NOLINT
  return x.second;
}
#else
template <typename T>
typename T::first_type& First(T& x, Rank0) {  // NOLINT
  return x.first;
}
template <typename T>
co.. typename T::first_type& First(co.. T& x, Rank0) {
  return x.first;
}

template <typename T>
typename T::second_type& Second(T& x, Rank0) {  // NOLINT
  return x.second;
}
template <typename T>
co.. typename T::second_type& Second(co.. T& x, Rank0) {
  return x.second;
}
e..  // GTEST_LANG_CXX11
}  // namespace pair_getters

// Implements Key(inner_matcher) for the given argument pair type.
// Key(inner_matcher) matches an std::pair whose 'first' field matches
// inner_matcher.  For example, Contains(Key(Ge(5))) can be used to match an
// std::map that contains at least one element whose key is >= 5.
template <typename PairType>
n.. KeyMatcherImpl : pu.. MatcherInterface<PairType> {
 p..
  typedef GTEST_REMOVE_REFERENCE_AND_CONST_(PairType) RawPairType;
  typedef typename RawPairType::first_type KeyType;

  template <typename InnerMatcher>
  explicit KeyMatcherImpl(InnerMatcher inner_matcher)
      : inner_matcher_(
          testing::SafeMatcherCast<co.. KeyType&>(inner_matcher)) {
  }

  // Returns true iff 'key_value.first' (the key) matches the inner matcher.
  v.. bo.. MatchAndExplain(PairType key_value,
                               MatchResultListener* listener) co.. {
    StringMatchResultListener inner_listener;
    co.. bo.. match = inner_matcher_.MatchAndExplain(
        pair_getters::First(key_value, Rank0()), &inner_listener);
    co.. st. string explanation = inner_listener.str();
    if (explanation != "") {
      *listener << "whose first field is a value " << explanation;
    }
    return match;
  }

  // Describes what this matcher does.
  v.. v.. DescribeTo(::st. ostream* os) co.. {
    *os << "has a key that ";
    inner_matcher_.DescribeTo(os);
  }

  // Describes what the negation of this matcher does.
  v.. v.. DescribeNegationTo(::st. ostream* os) co.. {
    *os << "doesn't have a key that ";
    inner_matcher_.DescribeTo(os);
  }

 pr..
  co.. Matcher<co.. KeyType&> inner_matcher_;

  GTEST_DISALLOW_ASSIGN_(KeyMatcherImpl);
};

// Implements polymorphic Key(matcher_for_key).
template <typename M>
n.. KeyMatcher {
 p..
  explicit KeyMatcher(M m) : matcher_for_key_(m) {}

  template <typename PairType>
  operator Matcher<PairType>() co.. {
    return MakeMatcher(new KeyMatcherImpl<PairType>(matcher_for_key_));
  }

 pr..
  co.. M matcher_for_key_;

  GTEST_DISALLOW_ASSIGN_(KeyMatcher);
};

// Implements Pair(first_matcher, second_matcher) for the given argument pair
// type with its two matchers. See Pair() function below.
template <typename PairType>
n.. PairMatcherImpl : pu.. MatcherInterface<PairType> {
 p..
  typedef GTEST_REMOVE_REFERENCE_AND_CONST_(PairType) RawPairType;
  typedef typename RawPairType::first_type FirstType;
  typedef typename RawPairType::second_type SecondType;

  template <typename FirstMatcher, typename SecondMatcher>
  PairMatcherImpl(FirstMatcher first_matcher, SecondMatcher second_matcher)
      : first_matcher_(
            testing::SafeMatcherCast<co.. FirstType&>(first_matcher)),
        second_matcher_(
            testing::SafeMatcherCast<co.. SecondType&>(second_matcher)) {
  }

  // Describes what this matcher does.
  v.. v.. DescribeTo(::st. ostream* os) co.. {
    *os << "has a first field that ";
    first_matcher_.DescribeTo(os);
    *os << ", and has a second field that ";
    second_matcher_.DescribeTo(os);
  }

  // Describes what the negation of this matcher does.
  v.. v.. DescribeNegationTo(::st. ostream* os) co.. {
    *os << "has a first field that ";
    first_matcher_.DescribeNegationTo(os);
    *os << ", or has a second field that ";
    second_matcher_.DescribeNegationTo(os);
  }

  // Returns true iff 'a_pair.first' matches first_matcher and 'a_pair.second'
  // matches second_matcher.
  v.. bo.. MatchAndExplain(PairType a_pair,
                               MatchResultListener* listener) co.. {
    if (!listener->IsInterested()) {
      // If the listener is not interested, we don't need to construct the
      // explanation.
      return first_matcher_.Matches(pair_getters::First(a_pair, Rank0())) &&
             second_matcher_.Matches(pair_getters::Second(a_pair, Rank0()));
    }
    StringMatchResultListener first_inner_listener;
    if (!first_matcher_.MatchAndExplain(pair_getters::First(a_pair, Rank0()),
                                        &first_inner_listener)) {
      *listener << "whose first field does not match";
      PrintIfNotEmpty(first_inner_listener.str(), listener->stream());
      return false;
    }
    StringMatchResultListener second_inner_listener;
    if (!second_matcher_.MatchAndExplain(pair_getters::Second(a_pair, Rank0()),
                                         &second_inner_listener)) {
      *listener << "whose second field does not match";
      PrintIfNotEmpty(second_inner_listener.str(), listener->stream());
      return false;
    }
    ExplainSuccess(first_inner_listener.str(), second_inner_listener.str(),
                   listener);
    return true;
  }

 pr..
  v.. ExplainSuccess(co.. st. string& first_explanation,
                      co.. st. string& second_explanation,
                      MatchResultListener* listener) co.. {
    *listener << "whose both fields match";
    if (first_explanation != "") {
      *listener << ", where the first field is a value " << first_explanation;
    }
    if (second_explanation != "") {
      *listener << ", ";
      if (first_explanation != "") {
        *listener << "and ";
      } else {
        *listener << "where ";
      }
      *listener << "the second field is a value " << second_explanation;
    }
  }

  co.. Matcher<co.. FirstType&> first_matcher_;
  co.. Matcher<co.. SecondType&> second_matcher_;

  GTEST_DISALLOW_ASSIGN_(PairMatcherImpl);
};

// Implements polymorphic Pair(first_matcher, second_matcher).
template <typename FirstMatcher, typename SecondMatcher>
n.. PairMatcher {
 p..
  PairMatcher(FirstMatcher first_matcher, SecondMatcher second_matcher)
      : first_matcher_(first_matcher), second_matcher_(second_matcher) {}

  template <typename PairType>
  operator Matcher<PairType> () co.. {
    return MakeMatcher(
        new PairMatcherImpl<PairType>(
            first_matcher_, second_matcher_));
  }

 pr..
  co.. FirstMatcher first_matcher_;
  co.. SecondMatcher second_matcher_;

  GTEST_DISALLOW_ASSIGN_(PairMatcher);
};

// Implements ElementsAre() and ElementsAreArray().
template <typename Container>
n.. ElementsAreMatcherImpl : pu.. MatcherInterface<Container> {
 p..
  typedef GTEST_REMOVE_REFERENCE_AND_CONST_(Container) RawContainer;
  typedef internal::StlContainerView<RawContainer> View;
  typedef typename View::type StlContainer;
  typedef typename View::const_reference StlContainerReference;
  typedef typename StlContainer::value_type Element;

  // Constructs the matcher from a sequence of element values or
  // element matchers.
  template <typename InputIter>
  ElementsAreMatcherImpl(InputIter first, InputIter last) {
    while (first != last) {
      matchers_.push_back(MatcherCast<co.. Element&>(*first++));
    }
  }

  // Describes what this matcher does.
  v.. v.. DescribeTo(::st. ostream* os) co.. {
    if (count() == 0) {
      *os << "is empty";
    } else if (count() == 1) {
      *os << "has 1 element that ";
      matchers_[0].DescribeTo(os);
    } else {
      *os << "has " << Elements(count()) << " where\n";
      for (size_t i = 0; i != count(); ++i) {
        *os << "element #" << i << " ";
        matchers_[i].DescribeTo(os);
        if (i + 1 < count()) {
          *os << ",\n";
        }
      }
    }
  }

  // Describes what the negation of this matcher does.
  v.. v.. DescribeNegationTo(::st. ostream* os) co.. {
    if (count() == 0) {
      *os << "isn't empty";
      return;
    }

    *os << "doesn't have " << Elements(count()) << ", or\n";
    for (size_t i = 0; i != count(); ++i) {
      *os << "element #" << i << " ";
      matchers_[i].DescribeNegationTo(os);
      if (i + 1 < count()) {
        *os << ", or\n";
      }
    }
  }

  v.. bo.. MatchAndExplain(Container container,
                               MatchResultListener* listener) co.. {
    // To work with stream-like "containers", we must only walk
    // through the elements in one pass.

    co.. bo.. listener_interested = listener->IsInterested();

    // explanations[i] is the explanation of the element at index i.
    ::st. ve..<st. string> explanations(count());
    StlContainerReference stl_container = View::ConstReference(container);
    typename StlContainer::const_iterator it = stl_container.begin();
    size_t exam_pos = 0;
    bo.. mismatch_found = false;  // Have we found a mismatched element yet?

    // Go through the elements and matchers in pairs, until we reach
    // the end of either the elements or the matchers, or until we find a
    // mismatch.
    for (; it != stl_container.end() && exam_pos != count(); ++it, ++exam_pos) {
      bo.. match;  // Does the current element match the current matcher?
      if (listener_interested) {
        StringMatchResultListener s;
        match = matchers_[exam_pos].MatchAndExplain(*it, &s);
        explanations[exam_pos] = s.str();
      } else {
        match = matchers_[exam_pos].Matches(*it);
      }

      if (!match) {
        mismatch_found = true;
        break;
      }
    }
    // If mismatch_found is true, 'exam_pos' is the index of the mismatch.

    // Find how many elements the actual container has.  We avoid
    // calling size() s.t. this code works for stream-like "containers"
    // that don't define size().
    size_t actual_count = exam_pos;
    for (; it != stl_container.end(); ++it) {
      ++actual_count;
    }

    if (actual_count != count()) {
      // The element count doesn't match.  If the container is empty,
      // there's no need to explain anything as Google Mock already
      // prints the empty container.  Otherwise we just need to show
      // how many elements there actually are.
      if (listener_interested && (actual_count != 0)) {
        *listener << "which has " << Elements(actual_count);
      }
      return false;
    }

    if (mismatch_found) {
      // The element count matches, but the exam_pos-th element doesn't match.
      if (listener_interested) {
        *listener << "whose element #" << exam_pos << " doesn't match";
        PrintIfNotEmpty(explanations[exam_pos], listener->stream());
      }
      return false;
    }

    // Every element matches its expectation.  We need to explain why
    // (the obvious ones can be skipped).
    if (listener_interested) {
      bo.. reason_printed = false;
      for (size_t i = 0; i != count(); ++i) {
        co.. st. string& s = explanations[i];
        if (!s.empty()) {
          if (reason_printed) {
            *listener << ",\nand ";
          }
          *listener << "whose element #" << i << " matches, " << s;
          reason_printed = true;
        }
      }
    }
    return true;
  }

 pr..
  st.. Message Elements(size_t count) {
    return Message() << count << (count == 1 ? " element" : " elements");
  }

  size_t count() co.. { return matchers_.size(); }

  ::st. ve..<Matcher<co.. Element&> > matchers_;

  GTEST_DISALLOW_ASSIGN_(ElementsAreMatcherImpl);
};

// Connectivity matrix of (elements X matchers), in element-major order.
// Initially, there are no edges.
// Use NextGraph() to iterate over all possible edge configurations.
// Use Randomize() to generate a random edge configuration.
n.. GTEST_API_ MatchMatrix {
 p..
  MatchMatrix(size_t num_elements, size_t num_matchers)
      : num_elements_(num_elements),
        num_matchers_(num_matchers),
        matched_(num_elements_* num_matchers_, 0) {
  }

  size_t LhsSize() co.. { return num_elements_; }
  size_t RhsSize() co.. { return num_matchers_; }
  bo.. HasEdge(size_t ilhs, size_t irhs) co.. {
    return matched_[SpaceIndex(ilhs, irhs)] == 1;
  }
  v.. SetEdge(size_t ilhs, size_t irhs, bo.. b) {
    matched_[SpaceIndex(ilhs, irhs)] = b ? 1 : 0;
  }

  // Treating the connectivity matrix as a (LhsSize()*RhsSize())-bit number,
  // adds 1 to that number; returns false if incrementing the graph left it
  // empty.
  bo.. NextGraph();

  v.. Randomize();

  st. string DebugString() co..;

 pr..
  size_t SpaceIndex(size_t ilhs, size_t irhs) co.. {
    return ilhs * num_matchers_ + irhs;
  }

  size_t num_elements_;
  size_t num_matchers_;

  // Each element is a char interpreted as bool. They are stored as a
  // flattened array in lhs-major order, use 'SpaceIndex()' to translate
  // a (ilhs, irhs) matrix coordinate into an offset.
  ::st. ve..<ch..> matched_;
};

typedef ::st. pair<size_t, size_t> ElementMatcherPair;
typedef ::st. ve..<ElementMatcherPair> ElementMatcherPairs;

// Returns a maximum bipartite matching for the specified graph 'g'.
// The matching is represented as a vector of {element, matcher} pairs.
GTEST_API_ ElementMatcherPairs
FindMaxBipartiteMatching(co.. MatchMatrix& g);

struct UnorderedMatcherRequire {
  enum Flags {
    Superset = 1 << 0,
    Subset = 1 << 1,
    ExactMatch = Superset | Subset,
  };
};

// Untyped base class for implementing UnorderedElementsAre.  By
// putting logic that's not specific to the element type here, we
// reduce binary bloat and increase compilation speed.
n.. GTEST_API_ UnorderedElementsAreMatcherImplBase {
 pr..
  explicit UnorderedElementsAreMatcherImplBase(
      UnorderedMatcherRequire::Flags matcher_flags)
      : match_flags_(matcher_flags) {}

  // A vector of matcher describers, one for each element matcher.
  // Does not own the describers (and thus can be used only when the
  // element matchers are alive).
  typedef ::st. ve..<co.. MatcherDescriberInterface*> MatcherDescriberVec;

  // Describes this UnorderedElementsAre matcher.
  v.. DescribeToImpl(::st. ostream* os) co..;

  // Describes the negation of this UnorderedElementsAre matcher.
  v.. DescribeNegationToImpl(::st. ostream* os) co..;

  bo.. VerifyMatchMatrix(co.. ::st. ve..<st. string>& element_printouts,
                         co.. MatchMatrix& matrix,
                         MatchResultListener* listener) co..;

  bo.. FindPairing(co.. MatchMatrix& matrix,
                   MatchResultListener* listener) co..;

  MatcherDescriberVec& matcher_describers() {
    return matcher_describers_;
  }

  st.. Message Elements(size_t n) {
    return Message() << n << " element" << (n == 1 ? "" : "s");
  }

  UnorderedMatcherRequire::Flags match_flags() co.. { return match_flags_; }

 pr..
  UnorderedMatcherRequire::Flags match_flags_;
  MatcherDescriberVec matcher_describers_;

  GTEST_DISALLOW_ASSIGN_(UnorderedElementsAreMatcherImplBase);
};

// Implements UnorderedElementsAre, UnorderedElementsAreArray, IsSubsetOf, and
// IsSupersetOf.
template <typename Container>
n.. UnorderedElementsAreMatcherImpl
    : pu.. MatcherInterface<Container>,
      pu.. UnorderedElementsAreMatcherImplBase {
 p..
  typedef GTEST_REMOVE_REFERENCE_AND_CONST_(Container) RawContainer;
  typedef internal::StlContainerView<RawContainer> View;
  typedef typename View::type StlContainer;
  typedef typename View::const_reference StlContainerReference;
  typedef typename StlContainer::const_iterator StlContainerConstIterator;
  typedef typename StlContainer::value_type Element;

  template <typename InputIter>
  UnorderedElementsAreMatcherImpl(UnorderedMatcherRequire::Flags matcher_flags,
                                  InputIter first, InputIter last)
      : UnorderedElementsAreMatcherImplBase(matcher_flags) {
    for (; first != last; ++first) {
      matchers_.push_back(MatcherCast<co.. Element&>(*first));
      matcher_describers().push_back(matchers_.back().GetDescriber());
    }
  }

  // Describes what this matcher does.
  v.. v.. DescribeTo(::st. ostream* os) co.. {
    return UnorderedElementsAreMatcherImplBase::DescribeToImpl(os);
  }

  // Describes what the negation of this matcher does.
  v.. v.. DescribeNegationTo(::st. ostream* os) co.. {
    return UnorderedElementsAreMatcherImplBase::DescribeNegationToImpl(os);
  }

  v.. bo.. MatchAndExplain(Container container,
                               MatchResultListener* listener) co.. {
    StlContainerReference stl_container = View::ConstReference(container);
    ::st. ve..<st. string> element_printouts;
    MatchMatrix matrix =
        AnalyzeElements(stl_container.begin(), stl_container.end(),
                        &element_printouts, listener);

    if (matrix.LhsSize() == 0 && matrix.RhsSize() == 0) {
      return true;
    }

    if (match_flags() == UnorderedMatcherRequire::ExactMatch) {
      if (matrix.LhsSize() != matrix.RhsSize()) {
        // The element count doesn't match.  If the container is empty,
        // there's no need to explain anything as Google Mock already
        // prints the empty container. Otherwise we just need to show
        // how many elements there actually are.
        if (matrix.LhsSize() != 0 && listener->IsInterested()) {
          *listener << "which has " << Elements(matrix.LhsSize());
        }
        return false;
      }
    }

    return VerifyMatchMatrix(element_printouts, matrix, listener) &&
           FindPairing(matrix, listener);
  }

 pr..
  template <typename ElementIter>
  MatchMatrix AnalyzeElements(ElementIter elem_first, ElementIter elem_last,
                              ::st. ve..<st. string>* element_printouts,
                              MatchResultListener* listener) co.. {
    element_printouts->clear();
    ::st. ve..<ch..> did_match;
    size_t num_elements = 0;
    for (; elem_first != elem_last; ++num_elements, ++elem_first) {
      if (listener->IsInterested()) {
        element_printouts->push_back(PrintToString(*elem_first));
      }
      for (size_t irhs = 0; irhs != matchers_.size(); ++irhs) {
        did_match.push_back(Matches(matchers_[irhs])(*elem_first));
      }
    }

    MatchMatrix matrix(num_elements, matchers_.size());
    ::st. ve..<ch..>::const_iterator did_match_iter = did_match.begin();
    for (size_t ilhs = 0; ilhs != num_elements; ++ilhs) {
      for (size_t irhs = 0; irhs != matchers_.size(); ++irhs) {
        matrix.SetEdge(ilhs, irhs, *did_match_iter++ != 0);
      }
    }
    return matrix;
  }

  ::st. ve..<Matcher<co.. Element&> > matchers_;

  GTEST_DISALLOW_ASSIGN_(UnorderedElementsAreMatcherImpl);
};

// Functor for use in TransformTuple.
// Performs MatcherCast<Target> on an input argument of any type.
template <typename Target>
struct CastAndAppendTransform {
  template <typename Arg>
  Matcher<Target> operator()(co.. Arg& a) co.. {
    return MatcherCast<Target>(a);
  }
};

// Implements UnorderedElementsAre.
template <typename MatcherTuple>
n.. UnorderedElementsAreMatcher {
 p..
  explicit UnorderedElementsAreMatcher(co.. MatcherTuple& args)
      : matchers_(args) {}

  template <typename Container>
  operator Matcher<Container>() co.. {
    typedef GTEST_REMOVE_REFERENCE_AND_CONST_(Container) RawContainer;
    typedef typename internal::StlContainerView<RawContainer>::type View;
    typedef typename View::value_type Element;
    typedef ::st. ve..<Matcher<co.. Element&> > MatcherVec;
    MatcherVec matchers;
    matchers.reserve(::testing::tuple_size<MatcherTuple>::value);
    TransformTupleValues(CastAndAppendTransform<co.. Element&>(), matchers_,
                         ::st. back_inserter(matchers));
    return MakeMatcher(new UnorderedElementsAreMatcherImpl<Container>(
        UnorderedMatcherRequire::ExactMatch, matchers.begin(), matchers.end()));
  }

 pr..
  co.. MatcherTuple matchers_;
  GTEST_DISALLOW_ASSIGN_(UnorderedElementsAreMatcher);
};

// Implements ElementsAre.
template <typename MatcherTuple>
n.. ElementsAreMatcher {
 p..
  explicit ElementsAreMatcher(co.. MatcherTuple& args) : matchers_(args) {}

  template <typename Container>
  operator Matcher<Container>() co.. {
    GTEST_COMPILE_ASSERT_(
        !IsHashTable<GTEST_REMOVE_REFERENCE_AND_CONST_(Container)>::value ||
            ::testing::tuple_size<MatcherTuple>::value < 2,
        use_UnorderedElementsAre_with_hash_tables);

    typedef GTEST_REMOVE_REFERENCE_AND_CONST_(Container) RawContainer;
    typedef typename internal::StlContainerView<RawContainer>::type View;
    typedef typename View::value_type Element;
    typedef ::st. ve..<Matcher<co.. Element&> > MatcherVec;
    MatcherVec matchers;
    matchers.reserve(::testing::tuple_size<MatcherTuple>::value);
    TransformTupleValues(CastAndAppendTransform<co.. Element&>(), matchers_,
                         ::st. back_inserter(matchers));
    return MakeMatcher(new ElementsAreMatcherImpl<Container>(
                           matchers.begin(), matchers.end()));
  }

 pr..
  co.. MatcherTuple matchers_;
  GTEST_DISALLOW_ASSIGN_(ElementsAreMatcher);
};

// Implements UnorderedElementsAreArray(), IsSubsetOf(), and IsSupersetOf().
template <typename T>
n.. UnorderedElementsAreArrayMatcher {
 p..
  template <typename Iter>
  UnorderedElementsAreArrayMatcher(UnorderedMatcherRequire::Flags match_flags,
                                   Iter first, Iter last)
      : match_flags_(match_flags), matchers_(first, last) {}

  template <typename Container>
  operator Matcher<Container>() co.. {
    return MakeMatcher(new UnorderedElementsAreMatcherImpl<Container>(
        match_flags_, matchers_.begin(), matchers_.end()));
  }

 pr..
  UnorderedMatcherRequire::Flags match_flags_;
  ::st. ve..<T> matchers_;

  GTEST_DISALLOW_ASSIGN_(UnorderedElementsAreArrayMatcher);
};

// Implements ElementsAreArray().
template <typename T>
n.. ElementsAreArrayMatcher {
 p..
  template <typename Iter>
  ElementsAreArrayMatcher(Iter first, Iter last) : matchers_(first, last) {}

  template <typename Container>
  operator Matcher<Container>() co.. {
    GTEST_COMPILE_ASSERT_(
        !IsHashTable<GTEST_REMOVE_REFERENCE_AND_CONST_(Container)>::value,
        use_UnorderedElementsAreArray_with_hash_tables);

    return MakeMatcher(new ElementsAreMatcherImpl<Container>(
        matchers_.begin(), matchers_.end()));
  }

 pr..
  co.. ::st. ve..<T> matchers_;

  GTEST_DISALLOW_ASSIGN_(ElementsAreArrayMatcher);
};

// Given a 2-tuple matcher tm of type Tuple2Matcher and a value second
// of type Second, BoundSecondMatcher<Tuple2Matcher, Second>(tm,
// second) is a polymorphic matcher that matches a value x iff tm
// matches tuple (x, second).  Useful for implementing
// UnorderedPointwise() in terms of UnorderedElementsAreArray().
//
// BoundSecondMatcher is copyable and assignable, as we need to put
// instances of this class in a vector when implementing
// UnorderedPointwise().
template <typename Tuple2Matcher, typename Second>
n.. BoundSecondMatcher {
 p..
  BoundSecondMatcher(co.. Tuple2Matcher& tm, co.. Second& second)
      : tuple2_matcher_(tm), second_value_(second) {}

  template <typename T>
  operator Matcher<T>() co.. {
    return MakeMatcher(new Impl<T>(tuple2_matcher_, second_value_));
  }

  // We have to define this for UnorderedPointwise() to compile in
  // C++98 mode, as it puts BoundSecondMatcher instances in a vector,
  // which requires the elements to be assignable in C++98.  The
  // compiler cannot generate the operator= for us, as Tuple2Matcher
  // and Second may not be assignable.
  //
  // However, this should never be called, so the implementation just
  // need to assert.
  v.. operator=(co.. BoundSecondMatcher& /*rhs*/) {
    GTEST_LOG_(FATAL) << "BoundSecondMatcher should never be assigned.";
  }

 pr..
  template <typename T>
  n.. Impl : pu.. MatcherInterface<T> {
   p..
    typedef ::testing::tuple<T, Second> ArgTuple;

    Impl(co.. Tuple2Matcher& tm, co.. Second& second)
        : mono_tuple2_matcher_(SafeMatcherCast<co.. ArgTuple&>(tm)),
          second_value_(second) {}

    v.. v.. DescribeTo(::st. ostream* os) co.. {
      *os << "and ";
      UniversalPrint(second_value_, os);
      *os << " ";
      mono_tuple2_matcher_.DescribeTo(os);
    }

    v.. bo.. MatchAndExplain(T x, MatchResultListener* listener) co.. {
      return mono_tuple2_matcher_.MatchAndExplain(ArgTuple(x, second_value_),
                                                  listener);
    }

   pr..
    co.. Matcher<co.. ArgTuple&> mono_tuple2_matcher_;
    co.. Second second_value_;

    GTEST_DISALLOW_ASSIGN_(Impl);
  };

  co.. Tuple2Matcher tuple2_matcher_;
  co.. Second second_value_;
};

// Given a 2-tuple matcher tm and a value second,
// MatcherBindSecond(tm, second) returns a matcher that matches a
// value x iff tm matches tuple (x, second).  Useful for implementing
// UnorderedPointwise() in terms of UnorderedElementsAreArray().
template <typename Tuple2Matcher, typename Second>
BoundSecondMatcher<Tuple2Matcher, Second> MatcherBindSecond(
    co.. Tuple2Matcher& tm, co.. Second& second) {
  return BoundSecondMatcher<Tuple2Matcher, Second>(tm, second);
}

// Returns the description for a matcher defined using the MATCHER*()
// macro where the user-supplied description string is "", if
// 'negation' is false; otherwise returns the description of the
// negation of the matcher.  'param_values' contains a list of strings
// that are the print-out of the matcher's parameters.
GTEST_API_ st. string FormatMatcherDescription(bo.. negation,
                                                co.. ch..* matcher_name,
                                                co.. Strings& param_values);

// Implements a matcher that checks the value of a optional<> type variable.
template <typename ValueMatcher>
n.. OptionalMatcher {
 p..
  explicit OptionalMatcher(co.. ValueMatcher& value_matcher)
      : value_matcher_(value_matcher) {}

  template <typename Optional>
  operator Matcher<Optional>() co.. {
    return MakeMatcher(new Impl<Optional>(value_matcher_));
  }

  template <typename Optional>
  n.. Impl : pu.. MatcherInterface<Optional> {
   p..
    typedef GTEST_REMOVE_REFERENCE_AND_CONST_(Optional) OptionalView;
    typedef typename OptionalView::value_type ValueType;
    explicit Impl(co.. ValueMatcher& value_matcher)
        : value_matcher_(MatcherCast<ValueType>(value_matcher)) {}

    v.. v.. DescribeTo(::st. ostream* os) co.. {
      *os << "value ";
      value_matcher_.DescribeTo(os);
    }

    v.. v.. DescribeNegationTo(::st. ostream* os) co.. {
      *os << "value ";
      value_matcher_.DescribeNegationTo(os);
    }

    v.. bo.. MatchAndExplain(Optional optional,
                                 MatchResultListener* listener) co.. {
      if (!optional) {
        *listener << "which is not engaged";
        return false;
      }
      co.. ValueType& value = *optional;
      StringMatchResultListener value_listener;
      co.. bo.. match = value_matcher_.MatchAndExplain(value, &value_listener);
      *listener << "whose value " << PrintToString(value)
                << (match ? " matches" : " doesn't match");
      PrintIfNotEmpty(value_listener.str(), listener->stream());
      return match;
    }

   pr..
    co.. Matcher<ValueType> value_matcher_;
    GTEST_DISALLOW_ASSIGN_(Impl);
  };

 pr..
  co.. ValueMatcher value_matcher_;
  GTEST_DISALLOW_ASSIGN_(OptionalMatcher);
};

n... variant_matcher {
// Overloads to allow VariantMatcher to do proper ADL lookup.
template <typename T>
v.. holds_alternative() {}
template <typename T>
v.. get() {}

// Implements a matcher that checks the value of a variant<> type variable.
template <typename T>
n.. VariantMatcher {
 p..
  explicit VariantMatcher(::testing::Matcher<co.. T&> matcher)
      : matcher_(internal::move(matcher)) {}

  template <typename Variant>
  bo.. MatchAndExplain(co.. Variant& value,
                       ::testing::MatchResultListener* listener) co.. {
    if (!listener->IsInterested()) {
      return holds_alternative<T>(value) && matcher_.Matches(get<T>(value));
    }

    if (!holds_alternative<T>(value)) {
      *listener << "whose value is not of type '" << GetTypeName() << "'";
      return false;
    }

    co.. T& elem = get<T>(value);
    StringMatchResultListener elem_listener;
    co.. bo.. match = matcher_.MatchAndExplain(elem, &elem_listener);
    *listener << "whose value " << PrintToString(elem)
              << (match ? " matches" : " doesn't match");
    PrintIfNotEmpty(elem_listener.str(), listener->stream());
    return match;
  }

  v.. DescribeTo(st. ostream* os) co.. {
    *os << "is a variant<> with value of type '" << GetTypeName()
        << "' and the value ";
    matcher_.DescribeTo(os);
  }

  v.. DescribeNegationTo(st. ostream* os) co.. {
    *os << "is a variant<> with value of type other than '" << GetTypeName()
        << "' or the value ";
    matcher_.DescribeNegationTo(os);
  }

 pr..
  st.. st. string GetTypeName() {
#if GTEST_HAS_RTTI
    GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(
        return internal::GetTypeName<T>());
e..
    return "the element type";
  }

  co.. ::testing::Matcher<co.. T&> matcher_;
};

}  // namespace variant_matcher

n... any_cast_matcher {

// Overloads to allow AnyCastMatcher to do proper ADL lookup.
template <typename T>
v.. any_cast() {}

// Implements a matcher that any_casts the value.
template <typename T>
n.. AnyCastMatcher {
 p..
  explicit AnyCastMatcher(co.. ::testing::Matcher<co.. T&>& matcher)
      : matcher_(matcher) {}

  template <typename AnyType>
  bo.. MatchAndExplain(co.. AnyType& value,
                       ::testing::MatchResultListener* listener) co.. {
    if (!listener->IsInterested()) {
      co.. T* ptr = any_cast<T>(&value);
      return ptr != NULL && matcher_.Matches(*ptr);
    }

    co.. T* elem = any_cast<T>(&value);
    if (elem == NULL) {
      *listener << "whose value is not of type '" << GetTypeName() << "'";
      return false;
    }

    StringMatchResultListener elem_listener;
    co.. bo.. match = matcher_.MatchAndExplain(*elem, &elem_listener);
    *listener << "whose value " << PrintToString(*elem)
              << (match ? " matches" : " doesn't match");
    PrintIfNotEmpty(elem_listener.str(), listener->stream());
    return match;
  }

  v.. DescribeTo(st. ostream* os) co.. {
    *os << "is an 'any' type with value of type '" << GetTypeName()
        << "' and the value ";
    matcher_.DescribeTo(os);
  }

  v.. DescribeNegationTo(st. ostream* os) co.. {
    *os << "is an 'any' type with value of type other than '" << GetTypeName()
        << "' or the value ";
    matcher_.DescribeNegationTo(os);
  }

 pr..
  st.. st. string GetTypeName() {
#if GTEST_HAS_RTTI
    GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(
        return internal::GetTypeName<T>());
e..
    return "the element type";
  }

  co.. ::testing::Matcher<co.. T&> matcher_;
};

}  // namespace any_cast_matcher
}  // namespace internal

// ElementsAreArray(iterator_first, iterator_last)
// ElementsAreArray(pointer, count)
// ElementsAreArray(array)
// ElementsAreArray(container)
// ElementsAreArray({ e1, e2, ..., en })
//
// The ElementsAreArray() functions are like ElementsAre(...), except
// that they are given a homogeneous sequence rather than taking each
// element as a function argument. The sequence can be specified as an
// array, a pointer and count, a vector, an initializer list, or an
// STL iterator range. In each of these cases, the underlying sequence
// can be either a sequence of values or a sequence of matchers.
//
// All forms of ElementsAreArray() make a copy of the input matcher sequence.

template <typename Iter>
inline internal::ElementsAreArrayMatcher<
    typename ::st. iterator_traits<Iter>::value_type>
ElementsAreArray(Iter first, Iter last) {
  typedef typename ::st. iterator_traits<Iter>::value_type T;
  return internal::ElementsAreArrayMatcher<T>(first, last);
}

template <typename T>
inline internal::ElementsAreArrayMatcher<T> ElementsAreArray(
    co.. T* pointer, size_t count) {
  return ElementsAreArray(pointer, pointer + count);
}

template <typename T, size_t N>
inline internal::ElementsAreArrayMatcher<T> ElementsAreArray(
    co.. T (&array)[N]) {
  return ElementsAreArray(array, N);
}

template <typename Container>
inline internal::ElementsAreArrayMatcher<typename Container::value_type>
ElementsAreArray(co.. Container& container) {
  return ElementsAreArray(container.begin(), container.end());
}

#if GTEST_HAS_STD_INITIALIZER_LIST_
template <typename T>
inline internal::ElementsAreArrayMatcher<T>
ElementsAreArray(::st. initializer_list<T> xs) {
  return ElementsAreArray(xs.begin(), xs.end());
}
e..

// UnorderedElementsAreArray(iterator_first, iterator_last)
// UnorderedElementsAreArray(pointer, count)
// UnorderedElementsAreArray(array)
// UnorderedElementsAreArray(container)
// UnorderedElementsAreArray({ e1, e2, ..., en })
//
// UnorderedElementsAreArray() verifies that a bijective mapping onto a
// collection of matchers exists.
//
// The matchers can be specified as an array, a pointer and count, a container,
// an initializer list, or an STL iterator range. In each of these cases, the
// underlying matchers can be either values or matchers.

template <typename Iter>
inline internal::UnorderedElementsAreArrayMatcher<
    typename ::st. iterator_traits<Iter>::value_type>
UnorderedElementsAreArray(Iter first, Iter last) {
  typedef typename ::st. iterator_traits<Iter>::value_type T;
  return internal::UnorderedElementsAreArrayMatcher<T>(
      internal::UnorderedMatcherRequire::ExactMatch, first, last);
}

template <typename T>
inline internal::UnorderedElementsAreArrayMatcher<T>
UnorderedElementsAreArray(co.. T* pointer, size_t count) {
  return UnorderedElementsAreArray(pointer, pointer + count);
}

template <typename T, size_t N>
inline internal::UnorderedElementsAreArrayMatcher<T>
UnorderedElementsAreArray(co.. T (&array)[N]) {
  return UnorderedElementsAreArray(array, N);
}

template <typename Container>
inline internal::UnorderedElementsAreArrayMatcher<
    typename Container::value_type>
UnorderedElementsAreArray(co.. Container& container) {
  return UnorderedElementsAreArray(container.begin(), container.end());
}

#if GTEST_HAS_STD_INITIALIZER_LIST_
template <typename T>
inline internal::UnorderedElementsAreArrayMatcher<T>
UnorderedElementsAreArray(::st. initializer_list<T> xs) {
  return UnorderedElementsAreArray(xs.begin(), xs.end());
}
e..

// _ is a matcher that matches anything of any type.
//
// This definition is fine as:
//
//   1. The C++ standard permits using the name _ in a namespace that
//      is not the global namespace or ::std.
//   2. The AnythingMatcher class has no data member or constructor,
//      so it's OK to create global variables of this type.
//   3. c-style has approved of using _ in this case.
co.. internal::AnythingMatcher _ = {};
// Creates a matcher that matches any value of the given type T.
template <typename T>
inline Matcher<T> A() {
  return Matcher<T>(new internal::AnyMatcherImpl<T>());
}

// Creates a matcher that matches any value of the given type T.
template <typename T>
inline Matcher<T> An() { return A<T>(); }

// Creates a polymorphic matcher that matches anything equal to x.
// Note: if the parameter of Eq() were declared as const T&, Eq("foo")
// wouldn't compile.
template <typename T>
inline internal::EqMatcher<T> Eq(T x) { return internal::EqMatcher<T>(x); }

// Constructs a Matcher<T> from a 'value' of type T.  The constructed
// matcher matches any value that's equal to 'value'.
template <typename T>
Matcher<T>::Matcher(T value) { *this = Eq(value); }

template <typename T, typename M>
Matcher<T> internal::MatcherCastImpl<T, M>::CastImpl(
    co.. M& value,
    internal::BooleanConstant<false> /* convertible_to_matcher */,
    internal::BooleanConstant<false> /* convertible_to_T */) {
  return Eq(value);
}

// Creates a monomorphic matcher that matches anything with type Lhs
// and equal to rhs.  A user may need to use this instead of Eq(...)
// in order to resolve an overloading ambiguity.
//
// TypedEq<T>(x) is just a convenient short-hand for Matcher<T>(Eq(x))
// or Matcher<T>(x), but more readable than the latter.
//
// We could define similar monomorphic matchers for other comparison
// operations (e.g. TypedLt, TypedGe, and etc), but decided not to do
// it yet as those are used much less than Eq() in practice.  A user
// can always write Matcher<T>(Lt(5)) to be explicit about the type,
// for example.
template <typename Lhs, typename Rhs>
inline Matcher<Lhs> TypedEq(co.. Rhs& rhs) { return Eq(rhs); }

// Creates a polymorphic matcher that matches anything >= x.
template <typename Rhs>
inline internal::GeMatcher<Rhs> Ge(Rhs x) {
  return internal::GeMatcher<Rhs>(x);
}

// Creates a polymorphic matcher that matches anything > x.
template <typename Rhs>
inline internal::GtMatcher<Rhs> Gt(Rhs x) {
  return internal::GtMatcher<Rhs>(x);
}

// Creates a polymorphic matcher that matches anything <= x.
template <typename Rhs>
inline internal::LeMatcher<Rhs> Le(Rhs x) {
  return internal::LeMatcher<Rhs>(x);
}

// Creates a polymorphic matcher that matches anything < x.
template <typename Rhs>
inline internal::LtMatcher<Rhs> Lt(Rhs x) {
  return internal::LtMatcher<Rhs>(x);
}

// Creates a polymorphic matcher that matches anything != x.
template <typename Rhs>
inline internal::NeMatcher<Rhs> Ne(Rhs x) {
  return internal::NeMatcher<Rhs>(x);
}

// Creates a polymorphic matcher that matches any NULL pointer.
inline PolymorphicMatcher<internal::IsNullMatcher > IsNull() {
  return MakePolymorphicMatcher(internal::IsNullMatcher());
}

// Creates a polymorphic matcher that matches any non-NULL pointer.
// This is convenient as Not(NULL) doesn't compile (the compiler
// thinks that that expression is comparing a pointer with an integer).
inline PolymorphicMatcher<internal::NotNullMatcher > NotNull() {
  return MakePolymorphicMatcher(internal::NotNullMatcher());
}

// Creates a polymorphic matcher that matches any argument that
// references variable x.
template <typename T>
inline internal::RefMatcher<T&> Ref(T& x) {  // NOLINT
  return internal::RefMatcher<T&>(x);
}

// Creates a matcher that matches any double argument approximately
// equal to rhs, where two NANs are considered unequal.
inline internal::FloatingEqMatcher<do..> DoubleEq(do.. rhs) {
  return internal::FloatingEqMatcher<do..>(rhs, false);
}

// Creates a matcher that matches any double argument approximately
// equal to rhs, including NaN values when rhs is NaN.
inline internal::FloatingEqMatcher<do..> NanSensitiveDoubleEq(do.. rhs) {
  return internal::FloatingEqMatcher<do..>(rhs, true);
}

// Creates a matcher that matches any double argument approximately equal to
// rhs, up to the specified max absolute error bound, where two NANs are
// considered unequal.  The max absolute error bound must be non-negative.
inline internal::FloatingEqMatcher<do..> DoubleNear(
    do.. rhs, do.. max_abs_error) {
  return internal::FloatingEqMatcher<do..>(rhs, false, max_abs_error);
}

// Creates a matcher that matches any double argument approximately equal to
// rhs, up to the specified max absolute error bound, including NaN values when
// rhs is NaN.  The max absolute error bound must be non-negative.
inline internal::FloatingEqMatcher<do..> NanSensitiveDoubleNear(
    do.. rhs, do.. max_abs_error) {
  return internal::FloatingEqMatcher<do..>(rhs, true, max_abs_error);
}

// Creates a matcher that matches any float argument approximately
// equal to rhs, where two NANs are considered unequal.
inline internal::FloatingEqMatcher<float> FloatEq(float rhs) {
  return internal::FloatingEqMatcher<float>(rhs, false);
}

// Creates a matcher that matches any float argument approximately
// equal to rhs, including NaN values when rhs is NaN.
inline internal::FloatingEqMatcher<float> NanSensitiveFloatEq(float rhs) {
  return internal::FloatingEqMatcher<float>(rhs, true);
}

// Creates a matcher that matches any float argument approximately equal to
// rhs, up to the specified max absolute error bound, where two NANs are
// considered unequal.  The max absolute error bound must be non-negative.
inline internal::FloatingEqMatcher<float> FloatNear(
    float rhs, float max_abs_error) {
  return internal::FloatingEqMatcher<float>(rhs, false, max_abs_error);
}

// Creates a matcher that matches any float argument approximately equal to
// rhs, up to the specified max absolute error bound, including NaN values when
// rhs is NaN.  The max absolute error bound must be non-negative.
inline internal::FloatingEqMatcher<float> NanSensitiveFloatNear(
    float rhs, float max_abs_error) {
  return internal::FloatingEqMatcher<float>(rhs, true, max_abs_error);
}

// Creates a matcher that matches a pointer (raw or smart) that points
// to a value that matches inner_matcher.
template <typename InnerMatcher>
inline internal::PointeeMatcher<InnerMatcher> Pointee(
    co.. InnerMatcher& inner_matcher) {
  return internal::PointeeMatcher<InnerMatcher>(inner_matcher);
}

#if GTEST_HAS_RTTI
// Creates a matcher that matches a pointer or reference that matches
// inner_matcher when dynamic_cast<To> is applied.
// The result of dynamic_cast<To> is forwarded to the inner matcher.
// If To is a pointer and the cast fails, the inner matcher will receive NULL.
// If To is a reference and the cast fails, this matcher returns false
// immediately.
template <typename To>
inline PolymorphicMatcher<internal::WhenDynamicCastToMatcher<To> >
WhenDynamicCastTo(co.. Matcher<To>& inner_matcher) {
  return MakePolymorphicMatcher(
      internal::WhenDynamicCastToMatcher<To>(inner_matcher));
}
e..  // GTEST_HAS_RTTI

// Creates a matcher that matches an object whose given field matches
// 'matcher'.  For example,
//   Field(&Foo::number, Ge(5))
// matches a Foo object x iff x.number >= 5.
template <typename n.., typename FieldType, typename FieldMatcher>
inline PolymorphicMatcher<
  internal::FieldMatcher<n.., FieldType> > Field(
    FieldType n..::*field, co.. FieldMatcher& matcher) {
  return MakePolymorphicMatcher(
      internal::FieldMatcher<n.., FieldType>(
          field, MatcherCast<co.. FieldType&>(matcher)));
  // The call to MatcherCast() is required for supporting inner
  // matchers of compatible types.  For example, it allows
  //   Field(&Foo::bar, m)
  // to compile where bar is an int32 and m is a matcher for int64.
}

// Same as Field() but also takes the name of the field to provide better error
// messages.
template <typename n.., typename FieldType, typename FieldMatcher>
inline PolymorphicMatcher<internal::FieldMatcher<n.., FieldType> > Field(
    co.. st. string& field_name, FieldType n..::*field,
    co.. FieldMatcher& matcher) {
  return MakePolymorphicMatcher(internal::FieldMatcher<n.., FieldType>(
      field_name, field, MatcherCast<co.. FieldType&>(matcher)));
}

// Creates a matcher that matches an object whose given property
// matches 'matcher'.  For example,
//   Property(&Foo::str, StartsWith("hi"))
// matches a Foo object x iff x.str() starts with "hi".
template <typename n.., typename PropertyType, typename PropertyMatcher>
inline PolymorphicMatcher<internal::PropertyMatcher<
    n.., PropertyType, PropertyType (n..::*)() co..> >
Property(PropertyType (n..::*property)() co..,
         co.. PropertyMatcher& matcher) {
  return MakePolymorphicMatcher(
      internal::PropertyMatcher<n.., PropertyType,
                                PropertyType (n..::*)() co..>(
          property,
          MatcherCast<GTEST_REFERENCE_TO_CONST_(PropertyType)>(matcher)));
  // The call to MatcherCast() is required for supporting inner
  // matchers of compatible types.  For example, it allows
  //   Property(&Foo::bar, m)
  // to compile where bar() returns an int32 and m is a matcher for int64.
}

// Same as Property() above, but also takes the name of the property to provide
// better error messages.
template <typename n.., typename PropertyType, typename PropertyMatcher>
inline PolymorphicMatcher<internal::PropertyMatcher<
    n.., PropertyType, PropertyType (n..::*)() co..> >
Property(co.. st. string& property_name,
         PropertyType (n..::*property)() co..,
         co.. PropertyMatcher& matcher) {
  return MakePolymorphicMatcher(
      internal::PropertyMatcher<n.., PropertyType,
                                PropertyType (n..::*)() co..>(
          property_name, property,
          MatcherCast<GTEST_REFERENCE_TO_CONST_(PropertyType)>(matcher)));
}

#if GTEST_LANG_CXX11
// The same as above but for reference-qualified member functions.
template <typename n.., typename PropertyType, typename PropertyMatcher>
inline PolymorphicMatcher<internal::PropertyMatcher<
    n.., PropertyType, PropertyType (n..::*)() co.. &> >
Property(PropertyType (n..::*property)() co.. &,
         co.. PropertyMatcher& matcher) {
  return MakePolymorphicMatcher(
      internal::PropertyMatcher<n.., PropertyType,
                                PropertyType (n..::*)() co.. &>(
          property,
          MatcherCast<GTEST_REFERENCE_TO_CONST_(PropertyType)>(matcher)));
}
e..

// Creates a matcher that matches an object iff the result of applying
// a callable to x matches 'matcher'.
// For example,
//   ResultOf(f, StartsWith("hi"))
// matches a Foo object x iff f(x) starts with "hi".
// callable parameter can be a function, function pointer, or a functor.
// Callable has to satisfy the following conditions:
//   * It is required to keep no state affecting the results of
//     the calls on it and make no assumptions about how many calls
//     will be made. Any state it keeps must be protected from the
//     concurrent access.
//   * If it is a function object, it has to define type result_type.
//     We recommend deriving your functor classes from std::unary_function.
//
template <typename Callable, typename ResultOfMatcher>
internal::ResultOfMatcher<Callable> ResultOf(
    Callable callable, co.. ResultOfMatcher& matcher) {
  return internal::ResultOfMatcher<Callable>(
          callable,
          MatcherCast<typename internal::CallableTraits<Callable>::ResultType>(
              matcher));
  // The call to MatcherCast() is required for supporting inner
  // matchers of compatible types.  For example, it allows
  //   ResultOf(Function, m)
  // to compile where Function() returns an int32 and m is a matcher for int64.
}

// String matchers.

// Matches a string equal to str.
inline PolymorphicMatcher<internal::StrEqualityMatcher<st. string> > StrEq(
    co.. st. string& str) {
  return MakePolymorphicMatcher(
      internal::StrEqualityMatcher<st. string>(str, true, true));
}

// Matches a string not equal to str.
inline PolymorphicMatcher<internal::StrEqualityMatcher<st. string> > StrNe(
    co.. st. string& str) {
  return MakePolymorphicMatcher(
      internal::StrEqualityMatcher<st. string>(str, false, true));
}

// Matches a string equal to str, ignoring case.
inline PolymorphicMatcher<internal::StrEqualityMatcher<st. string> > StrCaseEq(
    co.. st. string& str) {
  return MakePolymorphicMatcher(
      internal::StrEqualityMatcher<st. string>(str, true, false));
}

// Matches a string not equal to str, ignoring case.
inline PolymorphicMatcher<internal::StrEqualityMatcher<st. string> > StrCaseNe(
    co.. st. string& str) {
  return MakePolymorphicMatcher(
      internal::StrEqualityMatcher<st. string>(str, false, false));
}

// Creates a matcher that matches any string, std::string, or C string
// that contains the given substring.
inline PolymorphicMatcher<internal::HasSubstrMatcher<st. string> > HasSubstr(
    co.. st. string& substring) {
  return MakePolymorphicMatcher(
      internal::HasSubstrMatcher<st. string>(substring));
}

// Matches a string that starts with 'prefix' (case-sensitive).
inline PolymorphicMatcher<internal::StartsWithMatcher<st. string> > StartsWith(
    co.. st. string& prefix) {
  return MakePolymorphicMatcher(
      internal::StartsWithMatcher<st. string>(prefix));
}

// Matches a string that ends with 'suffix' (case-sensitive).
inline PolymorphicMatcher<internal::EndsWithMatcher<st. string> > EndsWith(
    co.. st. string& suffix) {
  return MakePolymorphicMatcher(internal::EndsWithMatcher<st. string>(suffix));
}

// Matches a string that fully matches regular expression 'regex'.
// The matcher takes ownership of 'regex'.
inline PolymorphicMatcher<internal::MatchesRegexMatcher> MatchesRegex(
    co.. internal::RE* regex) {
  return MakePolymorphicMatcher(internal::MatchesRegexMatcher(regex, true));
}
inline PolymorphicMatcher<internal::MatchesRegexMatcher> MatchesRegex(
    co.. st. string& regex) {
  return MatchesRegex(new internal::RE(regex));
}

// Matches a string that contains regular expression 'regex'.
// The matcher takes ownership of 'regex'.
inline PolymorphicMatcher<internal::MatchesRegexMatcher> ContainsRegex(
    co.. internal::RE* regex) {
  return MakePolymorphicMatcher(internal::MatchesRegexMatcher(regex, false));
}
inline PolymorphicMatcher<internal::MatchesRegexMatcher> ContainsRegex(
    co.. st. string& regex) {
  return ContainsRegex(new internal::RE(regex));
}

#if GTEST_HAS_GLOBAL_WSTRING || GTEST_HAS_STD_WSTRING
// Wide string matchers.

// Matches a string equal to str.
inline PolymorphicMatcher<internal::StrEqualityMatcher<st. wstring> > StrEq(
    co.. st. wstring& str) {
  return MakePolymorphicMatcher(
      internal::StrEqualityMatcher<st. wstring>(str, true, true));
}

// Matches a string not equal to str.
inline PolymorphicMatcher<internal::StrEqualityMatcher<st. wstring> > StrNe(
    co.. st. wstring& str) {
  return MakePolymorphicMatcher(
      internal::StrEqualityMatcher<st. wstring>(str, false, true));
}

// Matches a string equal to str, ignoring case.
inline PolymorphicMatcher<internal::StrEqualityMatcher<st. wstring> >
StrCaseEq(co.. st. wstring& str) {
  return MakePolymorphicMatcher(
      internal::StrEqualityMatcher<st. wstring>(str, true, false));
}

// Matches a string not equal to str, ignoring case.
inline PolymorphicMatcher<internal::StrEqualityMatcher<st. wstring> >
StrCaseNe(co.. st. wstring& str) {
  return MakePolymorphicMatcher(
      internal::StrEqualityMatcher<st. wstring>(str, false, false));
}

// Creates a matcher that matches any ::wstring, std::wstring, or C wide string
// that contains the given substring.
inline PolymorphicMatcher<internal::HasSubstrMatcher<st. wstring> > HasSubstr(
    co.. st. wstring& substring) {
  return MakePolymorphicMatcher(
      internal::HasSubstrMatcher<st. wstring>(substring));
}

// Matches a string that starts with 'prefix' (case-sensitive).
inline PolymorphicMatcher<internal::StartsWithMatcher<st. wstring> >
StartsWith(co.. st. wstring& prefix) {
  return MakePolymorphicMatcher(
      internal::StartsWithMatcher<st. wstring>(prefix));
}

// Matches a string that ends with 'suffix' (case-sensitive).
inline PolymorphicMatcher<internal::EndsWithMatcher<st. wstring> > EndsWith(
    co.. st. wstring& suffix) {
  return MakePolymorphicMatcher(
      internal::EndsWithMatcher<st. wstring>(suffix));
}

e..  // GTEST_HAS_GLOBAL_WSTRING || GTEST_HAS_STD_WSTRING

// Creates a polymorphic matcher that matches a 2-tuple where the
// first field == the second field.
inline internal::Eq2Matcher Eq() { return internal::Eq2Matcher(); }

// Creates a polymorphic matcher that matches a 2-tuple where the
// first field >= the second field.
inline internal::Ge2Matcher Ge() { return internal::Ge2Matcher(); }

// Creates a polymorphic matcher that matches a 2-tuple where the
// first field > the second field.
inline internal::Gt2Matcher Gt() { return internal::Gt2Matcher(); }

// Creates a polymorphic matcher that matches a 2-tuple where the
// first field <= the second field.
inline internal::Le2Matcher Le() { return internal::Le2Matcher(); }

// Creates a polymorphic matcher that matches a 2-tuple where the
// first field < the second field.
inline internal::Lt2Matcher Lt() { return internal::Lt2Matcher(); }

// Creates a polymorphic matcher that matches a 2-tuple where the
// first field != the second field.
inline internal::Ne2Matcher Ne() { return internal::Ne2Matcher(); }

// Creates a polymorphic matcher that matches a 2-tuple where
// FloatEq(first field) matches the second field.
inline internal::FloatingEq2Matcher<float> FloatEq() {
  return internal::FloatingEq2Matcher<float>();
}

// Creates a polymorphic matcher that matches a 2-tuple where
// DoubleEq(first field) matches the second field.
inline internal::FloatingEq2Matcher<do..> DoubleEq() {
  return internal::FloatingEq2Matcher<do..>();
}

// Creates a polymorphic matcher that matches a 2-tuple where
// FloatEq(first field) matches the second field with NaN equality.
inline internal::FloatingEq2Matcher<float> NanSensitiveFloatEq() {
  return internal::FloatingEq2Matcher<float>(true);
}

// Creates a polymorphic matcher that matches a 2-tuple where
// DoubleEq(first field) matches the second field with NaN equality.
inline internal::FloatingEq2Matcher<do..> NanSensitiveDoubleEq() {
  return internal::FloatingEq2Matcher<do..>(true);
}

// Creates a polymorphic matcher that matches a 2-tuple where
// FloatNear(first field, max_abs_error) matches the second field.
inline internal::FloatingEq2Matcher<float> FloatNear(float max_abs_error) {
  return internal::FloatingEq2Matcher<float>(max_abs_error);
}

// Creates a polymorphic matcher that matches a 2-tuple where
// DoubleNear(first field, max_abs_error) matches the second field.
inline internal::FloatingEq2Matcher<do..> DoubleNear(do.. max_abs_error) {
  return internal::FloatingEq2Matcher<do..>(max_abs_error);
}

// Creates a polymorphic matcher that matches a 2-tuple where
// FloatNear(first field, max_abs_error) matches the second field with NaN
// equality.
inline internal::FloatingEq2Matcher<float> NanSensitiveFloatNear(
    float max_abs_error) {
  return internal::FloatingEq2Matcher<float>(max_abs_error, true);
}

// Creates a polymorphic matcher that matches a 2-tuple where
// DoubleNear(first field, max_abs_error) matches the second field with NaN
// equality.
inline internal::FloatingEq2Matcher<do..> NanSensitiveDoubleNear(
    do.. max_abs_error) {
  return internal::FloatingEq2Matcher<do..>(max_abs_error, true);
}

// Creates a matcher that matches any value of type T that m doesn't
// match.
template <typename InnerMatcher>
inline internal::NotMatcher<InnerMatcher> Not(InnerMatcher m) {
  return internal::NotMatcher<InnerMatcher>(m);
}

// Returns a matcher that matches anything that satisfies the given
// predicate.  The predicate can be any unary function or functor
// whose return type can be implicitly converted to bool.
template <typename Predicate>
inline PolymorphicMatcher<internal::TrulyMatcher<Predicate> >
Truly(Predicate pred) {
  return MakePolymorphicMatcher(internal::TrulyMatcher<Predicate>(pred));
}

// Returns a matcher that matches the container size. The container must
// support both size() and size_type which all STL-like containers provide.
// Note that the parameter 'size' can be a value of type size_type as well as
// matcher. For instance:
//   EXPECT_THAT(container, SizeIs(2));     // Checks container has 2 elements.
//   EXPECT_THAT(container, SizeIs(Le(2));  // Checks container has at most 2.
template <typename SizeMatcher>
inline internal::SizeIsMatcher<SizeMatcher>
SizeIs(co.. SizeMatcher& size_matcher) {
  return internal::SizeIsMatcher<SizeMatcher>(size_matcher);
}

// Returns a matcher that matches the distance between the container's begin()
// iterator and its end() iterator, i.e. the size of the container. This matcher
// can be used instead of SizeIs with containers such as std::forward_list which
// do not implement size(). The container must provide const_iterator (with
// valid iterator_traits), begin() and end().
template <typename DistanceMatcher>
inline internal::BeginEndDistanceIsMatcher<DistanceMatcher>
BeginEndDistanceIs(co.. DistanceMatcher& distance_matcher) {
  return internal::BeginEndDistanceIsMatcher<DistanceMatcher>(distance_matcher);
}

// Returns a matcher that matches an equal container.
// This matcher behaves like Eq(), but in the event of mismatch lists the
// values that are included in one container but not the other. (Duplicate
// values and order differences are not explained.)
template <typename Container>
inline PolymorphicMatcher<internal::ContainerEqMatcher<  // NOLINT
                            GTEST_REMOVE_CONST_(Container)> >
    ContainerEq(co.. Container& rhs) {
  // This following line is for working around a bug in MSVC 8.0,
  // which causes Container to be a const type sometimes.
  typedef GTEST_REMOVE_CONST_(Container) RawContainer;
  return MakePolymorphicMatcher(
      internal::ContainerEqMatcher<RawContainer>(rhs));
}

// Returns a matcher that matches a container that, when sorted using
// the given comparator, matches container_matcher.
template <typename Comparator, typename ContainerMatcher>
inline internal::WhenSortedByMatcher<Comparator, ContainerMatcher>
WhenSortedBy(co.. Comparator& comparator,
             co.. ContainerMatcher& container_matcher) {
  return internal::WhenSortedByMatcher<Comparator, ContainerMatcher>(
      comparator, container_matcher);
}

// Returns a matcher that matches a container that, when sorted using
// the < operator, matches container_matcher.
template <typename ContainerMatcher>
inline internal::WhenSortedByMatcher<internal::LessComparator, ContainerMatcher>
WhenSorted(co.. ContainerMatcher& container_matcher) {
  return
      internal::WhenSortedByMatcher<internal::LessComparator, ContainerMatcher>(
          internal::LessComparator(), container_matcher);
}

// Matches an STL-style container or a native array that contains the
// same number of elements as in rhs, where its i-th element and rhs's
// i-th element (as a pair) satisfy the given pair matcher, for all i.
// TupleMatcher must be able to be safely cast to Matcher<tuple<const
// T1&, const T2&> >, where T1 and T2 are the types of elements in the
// LHS container and the RHS container respectively.
template <typename TupleMatcher, typename Container>
inline internal::PointwiseMatcher<TupleMatcher,
                                  GTEST_REMOVE_CONST_(Container)>
Pointwise(co.. TupleMatcher& tuple_matcher, co.. Container& rhs) {
  // This following line is for working around a bug in MSVC 8.0,
  // which causes Container to be a const type sometimes (e.g. when
  // rhs is a const int[])..
  typedef GTEST_REMOVE_CONST_(Container) RawContainer;
  return internal::PointwiseMatcher<TupleMatcher, RawContainer>(
      tuple_matcher, rhs);
}

#if GTEST_HAS_STD_INITIALIZER_LIST_

// Supports the Pointwise(m, {a, b, c}) syntax.
template <typename TupleMatcher, typename T>
inline internal::PointwiseMatcher<TupleMatcher, st. ve..<T> > Pointwise(
    co.. TupleMatcher& tuple_matcher, st. initializer_list<T> rhs) {
  return Pointwise(tuple_matcher, st. ve..<T>(rhs));
}

e..  // GTEST_HAS_STD_INITIALIZER_LIST_

// UnorderedPointwise(pair_matcher, rhs) matches an STL-style
// container or a native array that contains the same number of
// elements as in rhs, where in some permutation of the container, its
// i-th element and rhs's i-th element (as a pair) satisfy the given
// pair matcher, for all i.  Tuple2Matcher must be able to be safely
// cast to Matcher<tuple<const T1&, const T2&> >, where T1 and T2 are
// the types of elements in the LHS container and the RHS container
// respectively.
//
// This is like Pointwise(pair_matcher, rhs), except that the element
// order doesn't matter.
template <typename Tuple2Matcher, typename RhsContainer>
inline internal::UnorderedElementsAreArrayMatcher<
    typename internal::BoundSecondMatcher<
        Tuple2Matcher, typename internal::StlContainerView<GTEST_REMOVE_CONST_(
                           RhsContainer)>::type::value_type> >
UnorderedPointwise(co.. Tuple2Matcher& tuple2_matcher,
                   co.. RhsContainer& rhs_container) {
  // This following line is for working around a bug in MSVC 8.0,
  // which causes RhsContainer to be a const type sometimes (e.g. when
  // rhs_container is a const int[]).
  typedef GTEST_REMOVE_CONST_(RhsContainer) RawRhsContainer;

  // RhsView allows the same code to handle RhsContainer being a
  // STL-style container and it being a native C-style array.
  typedef typename internal::StlContainerView<RawRhsContainer> RhsView;
  typedef typename RhsView::type RhsStlContainer;
  typedef typename RhsStlContainer::value_type Second;
  co.. RhsStlContainer& rhs_stl_container =
      RhsView::ConstReference(rhs_container);

  // Create a matcher for each element in rhs_container.
  ::st. ve..<internal::BoundSecondMatcher<Tuple2Matcher, Second> > matchers;
  for (typename RhsStlContainer::const_iterator it = rhs_stl_container.begin();
       it != rhs_stl_container.end(); ++it) {
    matchers.push_back(
        internal::MatcherBindSecond(tuple2_matcher, *it));
  }

  // Delegate the work to UnorderedElementsAreArray().
  return UnorderedElementsAreArray(matchers);
}

#if GTEST_HAS_STD_INITIALIZER_LIST_

// Supports the UnorderedPointwise(m, {a, b, c}) syntax.
template <typename Tuple2Matcher, typename T>
inline internal::UnorderedElementsAreArrayMatcher<
    typename internal::BoundSecondMatcher<Tuple2Matcher, T> >
UnorderedPointwise(co.. Tuple2Matcher& tuple2_matcher,
                   st. initializer_list<T> rhs) {
  return UnorderedPointwise(tuple2_matcher, st. ve..<T>(rhs));
}

e..  // GTEST_HAS_STD_INITIALIZER_LIST_

// Matches an STL-style container or a native array that contains at
// least one element matching the given value or matcher.
//
// Examples:
//   ::std::set<int> page_ids;
//   page_ids.insert(3);
//   page_ids.insert(1);
//   EXPECT_THAT(page_ids, Contains(1));
//   EXPECT_THAT(page_ids, Contains(Gt(2)));
//   EXPECT_THAT(page_ids, Not(Contains(4)));
//
//   ::std::map<int, size_t> page_lengths;
//   page_lengths[1] = 100;
//   EXPECT_THAT(page_lengths,
//               Contains(::std::pair<const int, size_t>(1, 100)));
//
//   const char* user_ids[] = { "joe", "mike", "tom" };
//   EXPECT_THAT(user_ids, Contains(Eq(::std::string("tom"))));
template <typename M>
inline internal::ContainsMatcher<M> Contains(M matcher) {
  return internal::ContainsMatcher<M>(matcher);
}

// IsSupersetOf(iterator_first, iterator_last)
// IsSupersetOf(pointer, count)
// IsSupersetOf(array)
// IsSupersetOf(container)
// IsSupersetOf({e1, e2, ..., en})
//
// IsSupersetOf() verifies that a surjective partial mapping onto a collection
// of matchers exists. In other words, a container matches
// IsSupersetOf({e1, ..., en}) if and only if there is a permutation
// {y1, ..., yn} of some of the container's elements where y1 matches e1,
// ..., and yn matches en. Obviously, the size of the container must be >= n
// in order to have a match. Examples:
//
// - {1, 2, 3} matches IsSupersetOf({Ge(3), Ne(0)}), as 3 matches Ge(3) and
//   1 matches Ne(0).
// - {1, 2} doesn't match IsSupersetOf({Eq(1), Lt(2)}), even though 1 matches
//   both Eq(1) and Lt(2). The reason is that different matchers must be used
//   for elements in different slots of the container.
// - {1, 1, 2} matches IsSupersetOf({Eq(1), Lt(2)}), as (the first) 1 matches
//   Eq(1) and (the second) 1 matches Lt(2).
// - {1, 2, 3} matches IsSupersetOf(Gt(1), Gt(1)), as 2 matches (the first)
//   Gt(1) and 3 matches (the second) Gt(1).
//
// The matchers can be specified as an array, a pointer and count, a container,
// an initializer list, or an STL iterator range. In each of these cases, the
// underlying matchers can be either values or matchers.

template <typename Iter>
inline internal::UnorderedElementsAreArrayMatcher<
    typename ::st. iterator_traits<Iter>::value_type>
IsSupersetOf(Iter first, Iter last) {
  typedef typename ::st. iterator_traits<Iter>::value_type T;
  return internal::UnorderedElementsAreArrayMatcher<T>(
      internal::UnorderedMatcherRequire::Superset, first, last);
}

template <typename T>
inline internal::UnorderedElementsAreArrayMatcher<T> IsSupersetOf(
    co.. T* pointer, size_t count) {
  return IsSupersetOf(pointer, pointer + count);
}

template <typename T, size_t N>
inline internal::UnorderedElementsAreArrayMatcher<T> IsSupersetOf(
    co.. T (&array)[N]) {
  return IsSupersetOf(array, N);
}

template <typename Container>
inline internal::UnorderedElementsAreArrayMatcher<
    typename Container::value_type>
IsSupersetOf(co.. Container& container) {
  return IsSupersetOf(container.begin(), container.end());
}

#if GTEST_HAS_STD_INITIALIZER_LIST_
template <typename T>
inline internal::UnorderedElementsAreArrayMatcher<T> IsSupersetOf(
    ::st. initializer_list<T> xs) {
  return IsSupersetOf(xs.begin(), xs.end());
}
e..

// IsSubsetOf(iterator_first, iterator_last)
// IsSubsetOf(pointer, count)
// IsSubsetOf(array)
// IsSubsetOf(container)
// IsSubsetOf({e1, e2, ..., en})
//
// IsSubsetOf() verifies that an injective mapping onto a collection of matchers
// exists.  In other words, a container matches IsSubsetOf({e1, ..., en}) if and
// only if there is a subset of matchers {m1, ..., mk} which would match the
// container using UnorderedElementsAre.  Obviously, the size of the container
// must be <= n in order to have a match. Examples:
//
// - {1} matches IsSubsetOf({Gt(0), Lt(0)}), as 1 matches Gt(0).
// - {1, -1} matches IsSubsetOf({Lt(0), Gt(0)}), as 1 matches Gt(0) and -1
//   matches Lt(0).
// - {1, 2} doesn't matches IsSubsetOf({Gt(0), Lt(0)}), even though 1 and 2 both
//   match Gt(0). The reason is that different matchers must be used for
//   elements in different slots of the container.
//
// The matchers can be specified as an array, a pointer and count, a container,
// an initializer list, or an STL iterator range. In each of these cases, the
// underlying matchers can be either values or matchers.

template <typename Iter>
inline internal::UnorderedElementsAreArrayMatcher<
    typename ::st. iterator_traits<Iter>::value_type>
IsSubsetOf(Iter first, Iter last) {
  typedef typename ::st. iterator_traits<Iter>::value_type T;
  return internal::UnorderedElementsAreArrayMatcher<T>(
      internal::UnorderedMatcherRequire::Subset, first, last);
}

template <typename T>
inline internal::UnorderedElementsAreArrayMatcher<T> IsSubsetOf(
    co.. T* pointer, size_t count) {
  return IsSubsetOf(pointer, pointer + count);
}

template <typename T, size_t N>
inline internal::UnorderedElementsAreArrayMatcher<T> IsSubsetOf(
    co.. T (&array)[N]) {
  return IsSubsetOf(array, N);
}

template <typename Container>
inline internal::UnorderedElementsAreArrayMatcher<
    typename Container::value_type>
IsSubsetOf(co.. Container& container) {
  return IsSubsetOf(container.begin(), container.end());
}

#if GTEST_HAS_STD_INITIALIZER_LIST_
template <typename T>
inline internal::UnorderedElementsAreArrayMatcher<T> IsSubsetOf(
    ::st. initializer_list<T> xs) {
  return IsSubsetOf(xs.begin(), xs.end());
}
e..

// Matches an STL-style container or a native array that contains only
// elements matching the given value or matcher.
//
// Each(m) is semantically equivalent to Not(Contains(Not(m))). Only
// the messages are different.
//
// Examples:
//   ::std::set<int> page_ids;
//   // Each(m) matches an empty container, regardless of what m is.
//   EXPECT_THAT(page_ids, Each(Eq(1)));
//   EXPECT_THAT(page_ids, Each(Eq(77)));
//
//   page_ids.insert(3);
//   EXPECT_THAT(page_ids, Each(Gt(0)));
//   EXPECT_THAT(page_ids, Not(Each(Gt(4))));
//   page_ids.insert(1);
//   EXPECT_THAT(page_ids, Not(Each(Lt(2))));
//
//   ::std::map<int, size_t> page_lengths;
//   page_lengths[1] = 100;
//   page_lengths[2] = 200;
//   page_lengths[3] = 300;
//   EXPECT_THAT(page_lengths, Not(Each(Pair(1, 100))));
//   EXPECT_THAT(page_lengths, Each(Key(Le(3))));
//
//   const char* user_ids[] = { "joe", "mike", "tom" };
//   EXPECT_THAT(user_ids, Not(Each(Eq(::std::string("tom")))));
template <typename M>
inline internal::EachMatcher<M> Each(M matcher) {
  return internal::EachMatcher<M>(matcher);
}

// Key(inner_matcher) matches an std::pair whose 'first' field matches
// inner_matcher.  For example, Contains(Key(Ge(5))) can be used to match an
// std::map that contains at least one element whose key is >= 5.
template <typename M>
inline internal::KeyMatcher<M> Key(M inner_matcher) {
  return internal::KeyMatcher<M>(inner_matcher);
}

// Pair(first_matcher, second_matcher) matches a std::pair whose 'first' field
// matches first_matcher and whose 'second' field matches second_matcher.  For
// example, EXPECT_THAT(map_type, ElementsAre(Pair(Ge(5), "foo"))) can be used
// to match a std::map<int, string> that contains exactly one element whose key
// is >= 5 and whose value equals "foo".
template <typename FirstMatcher, typename SecondMatcher>
inline internal::PairMatcher<FirstMatcher, SecondMatcher>
Pair(FirstMatcher first_matcher, SecondMatcher second_matcher) {
  return internal::PairMatcher<FirstMatcher, SecondMatcher>(
      first_matcher, second_matcher);
}

// Returns a predicate that is satisfied by anything that matches the
// given matcher.
template <typename M>
inline internal::MatcherAsPredicate<M> Matches(M matcher) {
  return internal::MatcherAsPredicate<M>(matcher);
}

// Returns true iff the value matches the matcher.
template <typename T, typename M>
inline bo.. Value(co.. T& value, M matcher) {
  return testing::Matches(matcher)(value);
}

// Matches the value against the given matcher and explains the match
// result to listener.
template <typename T, typename M>
inline bo.. ExplainMatchResult(
    M matcher, co.. T& value, MatchResultListener* listener) {
  return SafeMatcherCast<co.. T&>(matcher).MatchAndExplain(value, listener);
}

// Returns a string representation of the given matcher.  Useful for description
// strings of matchers defined using MATCHER_P* macros that accept matchers as
// their arguments.  For example:
//
// MATCHER_P(XAndYThat, matcher,
//           "X that " + DescribeMatcher<int>(matcher, negation) +
//               " and Y that " + DescribeMatcher<double>(matcher, negation)) {
//   return ExplainMatchResult(matcher, arg.x(), result_listener) &&
//          ExplainMatchResult(matcher, arg.y(), result_listener);
// }
template <typename T, typename M>
st. string DescribeMatcher(co.. M& matcher, bo.. negation = false) {
  ::st. stringstream ss;
  Matcher<T> monomorphic_matcher = SafeMatcherCast<T>(matcher);
  if (negation) {
    monomorphic_matcher.DescribeNegationTo(&ss);
  } else {
    monomorphic_matcher.DescribeTo(&ss);
  }
  return ss.str();
}

#if GTEST_LANG_CXX11
// Define variadic matcher versions. They are overloaded in
// gmock-generated-matchers.h for the cases supported by pre C++11 compilers.
template <typename... Args>
internal::AllOfMatcher<Args...> AllOf(co.. Args&... matchers) {
  return internal::AllOfMatcher<Args...>(matchers...);
}

template <typename... Args>
internal::AnyOfMatcher<Args...> AnyOf(co.. Args&... matchers) {
  return internal::AnyOfMatcher<Args...>(matchers...);
}

template <typename... Args>
internal::ElementsAreMatcher<tuple<typename st. decay<co.. Args&>::type...>>
ElementsAre(co.. Args&... matchers) {
  return internal::ElementsAreMatcher<
      tuple<typename st. decay<co.. Args&>::type...>>(
      make_tuple(matchers...));
}

template <typename... Args>
internal::UnorderedElementsAreMatcher<
    tuple<typename st. decay<co.. Args&>::type...>>
UnorderedElementsAre(co.. Args&... matchers) {
  return internal::UnorderedElementsAreMatcher<
      tuple<typename st. decay<co.. Args&>::type...>>(
      make_tuple(matchers...));
}

e..  // GTEST_LANG_CXX11

// AllArgs(m) is a synonym of m.  This is useful in
//
//   EXPECT_CALL(foo, Bar(_, _)).With(AllArgs(Eq()));
//
// which is easier to read than
//
//   EXPECT_CALL(foo, Bar(_, _)).With(Eq());
template <typename InnerMatcher>
inline InnerMatcher AllArgs(co.. InnerMatcher& matcher) { return matcher; }

// Returns a matcher that matches the value of an optional<> type variable.
// The matcher implementation only uses '!arg' and requires that the optional<>
// type has a 'value_type' member type and that '*arg' is of type 'value_type'
// and is printable using 'PrintToString'. It is compatible with
// std::optional/std::experimental::optional.
// Note that to compare an optional type variable against nullopt you should
// use Eq(nullopt) and not Optional(Eq(nullopt)). The latter implies that the
// optional value contains an optional itself.
template <typename ValueMatcher>
inline internal::OptionalMatcher<ValueMatcher> Optional(
    co.. ValueMatcher& value_matcher) {
  return internal::OptionalMatcher<ValueMatcher>(value_matcher);
}

// Returns a matcher that matches the value of a absl::any type variable.
template <typename T>
PolymorphicMatcher<internal::any_cast_matcher::AnyCastMatcher<T> > AnyWith(
    co.. Matcher<co.. T&>& matcher) {
  return MakePolymorphicMatcher(
      internal::any_cast_matcher::AnyCastMatcher<T>(matcher));
}

// Returns a matcher that matches the value of a variant<> type variable.
// The matcher implementation uses ADL to find the holds_alternative and get
// functions.
// It is compatible with std::variant.
template <typename T>
PolymorphicMatcher<internal::variant_matcher::VariantMatcher<T> > VariantWith(
    co.. Matcher<co.. T&>& matcher) {
  return MakePolymorphicMatcher(
      internal::variant_matcher::VariantMatcher<T>(matcher));
}

// These macros allow using matchers to check values in Google Test
// tests.  ASSERT_THAT(value, matcher) and EXPECT_THAT(value, matcher)
// succeed iff the value matches the matcher.  If the assertion fails,
// the value and the description of the matcher will be printed.
_de.. ASSERT_THAT(value, matcher) ASSERT_PRED_FORMAT1(\
    ::testing::internal::MakePredicateFormatterFromMatcher(matcher), value)
_de.. EXPECT_THAT(value, matcher) EXPECT_PRED_FORMAT1(\
    ::testing::internal::MakePredicateFormatterFromMatcher(matcher), value)

}  // namespace testing

// Include any custom callback matchers added by the local installation.
// We must include this header at the end to make sure it can use the
// declarations from this file.
? "gmock/internal/custom/gmock-matchers.h"

e..  // GMOCK_INCLUDE_GMOCK_GMOCK_MATCHERS_H_
