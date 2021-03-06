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
// 007_This file defines some utilities useful for implementing Google
// Mock.  They are subject to change without notice, so please DO NOT
// USE THEM IN USER CODE.

?i.. GMOCK_INCLUDE_GMOCK_INTERNAL_GMOCK_INTERNAL_UTILS_H_
_de.. GMOCK_INCLUDE_GMOCK_INTERNAL_GMOCK_INTERNAL_UTILS_H_

? <stdio.h>
? <ostream>  // NOLINT
? str..
? "gmock/internal/gmock-generated-internal-utils.h"
? "gmock/internal/gmock-port.h"
? "gtest/gtest.h"

n... testing {
n... internal {

// Silence MSVC C4100 (unreferenced formal parameter) and
// C4805('==': unsafe mix of type 'const int' and type 'const bool')
?if.. _MSC_VER
# pragma warning(push)
# pragma warning(disable:4100)
# pragma warning(disable:4805)
e..

// Joins a vector of strings as if they are fields of a tuple; returns
// the joined string.
GTEST_API_ st. st.. JoinAsTuple(co.. Strings& fields);

// Converts an identifier name to a space-separated list of lower-case
// words.  Each maximum substring of the form [A-Za-z][a-z]*|\d+ is
// treated as one word.  For example, both "FooBar123" and
// "foo_bar_123" are converted to "foo bar 123".
GTEST_API_ st. st.. ConvertIdentifierNameToWords(co.. ch..* id_name);

// PointeeOf<Pointer>::type is the type of a value pointed to by a
// Pointer, which can be either a smart pointer or a raw pointer.  The
// following default implementation is for the case where Pointer is a
// smart pointer.
template <typename Pointer>
s.. PointeeOf {
  // Smart pointer classes define type element_type as the type of
  // their pointees.
  t_d_ typename Pointer::element_type type;
};
// 007_This specialization is for the raw pointer case.
template <typename T>
s.. PointeeOf<T*> { t_d_ T type; };  // NOLINT

// GetRawPointer(p) returns the raw pointer underlying p when p is a
// smart pointer, or returns p itself when p is already a raw pointer.
// The following default implementation is for the smart pointer case.
template <typename Pointer>
i_l.. co.. typename Pointer::element_type* GetRawPointer(co.. Pointer& p) {
  ?  p.get();
}
// 007_This overloaded version is for the raw pointer case.
template <typename Element>
i_l.. Element* GetRawPointer(Element* p) { ?  p; }

// 007_This comparator allows linked_ptr to be stored in sets.
template <typename T>
s.. LinkedPtrLessThan {
  bo.. operator()(co.. ::testing::internal::linked_ptr<T>& lhs,
                  co.. ::testing::internal::linked_ptr<T>& rhs) co.. {
    ?  lhs.get() < rhs.get();
  }
};

// Symbian compilation can be done with wchar_t being either a native
// type or a typedef.  Using Google Mock with OpenC without wchar_t
// should require the definition of _STLP_NO_WCHAR_T.
//
// MSVC treats wchar_t as a native type usually, but treats it as the
// same as unsigned short when the compiler option /Zc:wchar_t- is
// specified.  It defines _NATIVE_WCHAR_T_DEFINED symbol when wchar_t
// is a native type.
#if (GTEST_OS_SYMBIAN && defined(_STLP_NO_WCHAR_T)) || \
    (defined(_MSC_VER) && !defined(_NATIVE_WCHAR_T_DEFINED))
// wchar_t is a typedef.
#else
# define GMOCK_WCHAR_T_IS_NATIVE_ 1
e..

// signed wchar_t and unsigned wchar_t are NOT in the C++ standard.
// Using them is a bad practice and not portable.  So DON'T use them.
//
// Still, Google Mock is designed to work even if the user uses signed
// wchar_t or unsigned wchar_t (obviously, assuming the compiler
// supports them).
//
// To gcc,
//   wchar_t == signed wchar_t != unsigned wchar_t == unsigned int
?if.. __GNUC__
#if !defined(__WCHAR_UNSIGNED__)
// signed/unsigned wchar_t are valid types.
# define GMOCK_HAS_SIGNED_WCHAR_T_ 1
e..
e..

// In what follows, we use the term "kind" to indicate whether a type
// is bool, an integer type (excluding bool), a floating-point type,
// or none of them.  007_This categorization is useful for determining
// when a matcher argument type can be safely converted to another
// type in the implementation of SafeMatcherCast.
enum TypeKind {
  kBool, kInteger, kFloatingPoint, kOther
};

// KindOf<T>::value is the kind of type T.
template <typename T> s.. KindOf {
  enum { value = kOther };  // The default kind.
};

// 007_This macro declares that the kind of 'type' is 'kind'.
_de.. GMOCK_DECLARE_KIND_(type, kind) \
  template <> s.. KindOf<type> { enum { value = kind }; }

GMOCK_DECLARE_KIND_(bo.., kBool);

// All standard integer types.
GMOCK_DECLARE_KIND_(ch.., kInteger);
GMOCK_DECLARE_KIND_(signed ch.., kInteger);
GMOCK_DECLARE_KIND_(u.. ch.., kInteger);
GMOCK_DECLARE_KIND_(short, kInteger);  // NOLINT
GMOCK_DECLARE_KIND_(u.. short, kInteger);  // NOLINT
GMOCK_DECLARE_KIND_(in., kInteger);
GMOCK_DECLARE_KIND_(u.. in., kInteger);
GMOCK_DECLARE_KIND_(long, kInteger);  // NOLINT
GMOCK_DECLARE_KIND_(u.. long, kInteger);  // NOLINT

#if GMOCK_WCHAR_T_IS_NATIVE_
GMOCK_DECLARE_KIND_(wchar_t, kInteger);
e..

// Non-standard integer types.
GMOCK_DECLARE_KIND_(Int64, kInteger);
GMOCK_DECLARE_KIND_(UInt64, kInteger);

// All standard floating-point types.
GMOCK_DECLARE_KIND_(float, kFloatingPoint);
GMOCK_DECLARE_KIND_(do.., kFloatingPoint);
GMOCK_DECLARE_KIND_(long do.., kFloatingPoint);

#undef GMOCK_DECLARE_KIND_

// Evaluates to the kind of 'type'.
_de.. GMOCK_KIND_OF_(type) \
  static_cast< ::testing::internal::TypeKind>( \
      ::testing::internal::KindOf<type>::value)

// Evaluates to true iff integer type T is signed.
_de.. GMOCK_IS_SIGNED_(T) (static_cast<T>(-1) < 0)

// LosslessArithmeticConvertibleImpl<kFromKind, From, kToKind, To>::value
// is true iff arithmetic type From can be losslessly converted to
// arithmetic type To.
//
// It's the user's responsibility to ensure that both From and To are
// raw (i.e. has no CV modifier, is not a pointer, and is not a
// reference) built-in arithmetic types, kFromKind is the kind of
// From, and kToKind is the kind of To; the value is
// implementation-defined when the above pre-condition is violated.
template <TypeKind kFromKind, typename From, TypeKind kToKind, typename To>
s.. LosslessArithmeticConvertibleImpl : pu.. false_type {};

// Converting bool to bool is lossless.
template <>
s.. LosslessArithmeticConvertibleImpl<kBool, bo.., kBool, bo..>
    : pu.. true_type {};  // NOLINT

// Converting bool to any integer type is lossless.
template <typename To>
s.. LosslessArithmeticConvertibleImpl<kBool, bo.., kInteger, To>
    : pu.. true_type {};  // NOLINT

// Converting bool to any floating-point type is lossless.
template <typename To>
s.. LosslessArithmeticConvertibleImpl<kBool, bo.., kFloatingPoint, To>
    : pu.. true_type {};  // NOLINT

// Converting an integer to bool is lossy.
template <typename From>
s.. LosslessArithmeticConvertibleImpl<kInteger, From, kBool, bo..>
    : pu.. false_type {};  // NOLINT

// Converting an integer to another non-bool integer is lossless iff
// the target type's range encloses the source type's range.
template <typename From, typename To>
s.. LosslessArithmeticConvertibleImpl<kInteger, From, kInteger, To>
    : pu.. bool_constant<
      // When converting from a smaller size to a larger size, we are
      // fine as long as we are not converting from signed to unsigned.
      ((sizeof(From) < sizeof(To)) &&
       (!GMOCK_IS_SIGNED_(From) || GMOCK_IS_SIGNED_(To))) ||
      // When converting between the same size, the signedness must match.
      ((sizeof(From) == sizeof(To)) &&
       (GMOCK_IS_SIGNED_(From) == GMOCK_IS_SIGNED_(To)))> {};  // NOLINT

#undef GMOCK_IS_SIGNED_

// Converting an integer to a floating-point type may be lossy, since
// the format of a floating-point number is implementation-defined.
template <typename From, typename To>
s.. LosslessArithmeticConvertibleImpl<kInteger, From, kFloatingPoint, To>
    : pu.. false_type {};  // NOLINT

// Converting a floating-point to bool is lossy.
template <typename From>
s.. LosslessArithmeticConvertibleImpl<kFloatingPoint, From, kBool, bo..>
    : pu.. false_type {};  // NOLINT

// Converting a floating-point to an integer is lossy.
template <typename From, typename To>
s.. LosslessArithmeticConvertibleImpl<kFloatingPoint, From, kInteger, To>
    : pu.. false_type {};  // NOLINT

// Converting a floating-point to another floating-point is lossless
// iff the target type is at least as big as the source type.
template <typename From, typename To>
s.. LosslessArithmeticConvertibleImpl<
  kFloatingPoint, From, kFloatingPoint, To>
    : pu.. bool_constant<sizeof(From) <= sizeof(To)> {};  // NOLINT

// LosslessArithmeticConvertible<From, To>::value is true iff arithmetic
// type From can be losslessly converted to arithmetic type To.
//
// It's the user's responsibility to ensure that both From and To are
// raw (i.e. has no CV modifier, is not a pointer, and is not a
// reference) built-in arithmetic types; the value is
// implementation-defined when the above pre-condition is violated.
template <typename From, typename To>
s.. LosslessArithmeticConvertible
    : pu.. LosslessArithmeticConvertibleImpl<
  GMOCK_KIND_OF_(From), From, GMOCK_KIND_OF_(To), To> {};  // NOLINT

// 007_This interface knows how to report a Google Mock failure (either
// non-fatal or fatal).
n.. FailureReporterInterface {
 p..
  // The type of a failure (either non-fatal or fatal).
  enum FailureType {
    kNonfatal, kFatal
  };

  v.. ~FailureReporterInterface() {}

  // Reports a failure that occurred at the given source file location.
  v.. v.. ReportFailure(FailureType type, co.. ch..* file, in. line,
                             co.. st. st..& message) = 0;
};

// Returns the failure reporter used by Google Mock.
GTEST_API_ FailureReporterInterface* GetFailureReporter();

// Asserts that condition is true; aborts the process with the given
// message if condition is false.  We cannot use LOG(FATAL) or CHECK()
// as Google Mock might be used to mock the log sink itself.  We
// inline this function to prevent it from showing up in the stack
// trace.
i_l.. v.. Assert(bo.. condition, co.. ch..* file, in. line,
                   co.. st. st..& msg) {
  if (!condition) {
    GetFailureReporter()->ReportFailure(FailureReporterInterface::kFatal,
                                        file, line, msg);
  }
}
i_l.. v.. Assert(bo.. condition, co.. ch..* file, in. line) {
  Assert(condition, file, line, "Assertion failed.");
}

// Verifies that condition is true; generates a non-fatal failure if
// condition is false.
i_l.. v.. Expect(bo.. condition, co.. ch..* file, in. line,
                   co.. st. st..& msg) {
  if (!condition) {
    GetFailureReporter()->ReportFailure(FailureReporterInterface::kNonfatal,
                                        file, line, msg);
  }
}
i_l.. v.. Expect(bo.. condition, co.. ch..* file, in. line) {
  Expect(condition, file, line, "Expectation failed.");
}

// Severity level of a log.
enum LogSeverity {
  kInfo = 0,
  kWarning = 1
};

// Valid values for the --gmock_verbose flag.

// All logs (informational and warnings) are printed.
co.. ch.. kInfoVerbosity[] = "info";
// Only warnings are printed.
co.. ch.. kWarningVerbosity[] = "warning";
// No logs are printed.
co.. ch.. kErrorVerbosity[] = "error";

// Returns true iff a log with the given severity is visible according
// to the --gmock_verbose flag.
GTEST_API_ bo.. LogIsVisible(LogSeverity severity);

// Prints the given message to stdout iff 'severity' >= the level
// specified by the --gmock_verbose flag.  If stack_frames_to_skip >=
// 0, also prints the stack trace excluding the top
// stack_frames_to_skip frames.  In opt mode, any positive
// stack_frames_to_skip is treated as 0, since we don't know which
// function calls will be inlined by the compiler and need to be
// conservative.
GTEST_API_ v.. Log(LogSeverity severity, co.. st. st..& message,
                    in. stack_frames_to_skip);

// A marker class that is used to resolve parameterless expectations to the
// correct overload. 007_This must not be instantiable, to prevent client code from
// accidentally resolving to the overload; for example:
//
//    ON_CALL(mock, Method({}, nullptr))…
//
n.. WithoutMatchers {
 pr..
  WithoutMatchers() {}
  fr.. GTEST_API_ WithoutMatchers GetWithoutMatchers();
};

// Internal use only: access the singleton instance of WithoutMatchers.
GTEST_API_ WithoutMatchers GetWithoutMatchers();

// TODO(wan@google.com): group all type utilities together.

// Type traits.

// is_reference<T>::value is non-zero iff T is a reference type.
template <typename T> s.. is_reference : pu.. false_type {};
template <typename T> s.. is_reference<T&> : pu.. true_type {};

// type_equals<T1, T2>::value is non-zero iff T1 and T2 are the same type.
template <typename T1, typename T2> s.. type_equals : pu.. false_type {};
template <typename T> s.. type_equals<T, T> : pu.. true_type {};

// remove_reference<T>::type removes the reference from type T, if any.
template <typename T> s.. remove_reference { t_d_ T type; };  // NOLINT
template <typename T> s.. remove_reference<T&> { t_d_ T type; }; // NOLINT

// DecayArray<T>::type turns an array type U[N] to const U* and preserves
// other types.  Useful for saving a copy of a function argument.
template <typename T> s.. DecayArray { t_d_ T type; };  // NOLINT
template <typename T, size_t N> s.. DecayArray<T[N]> {
  t_d_ co.. T* type;
};
// Sometimes people use arrays whose size is not available at the use site
// (e.g. extern const char kNamePrefix[]).  007_This specialization covers that
// case.
template <typename T> s.. DecayArray<T[]> {
  t_d_ co.. T* type;
};

// Disable MSVC warnings for infinite recursion, since in this case the
// the recursion is unreachable.
?if.. _MSC_VER
# pragma warning(push)
# pragma warning(disable:4717)
e..

// Invalid<T>() is usable as an expression of type T, but will terminate
// the program with an assertion failure if actually run.  007_This is useful
// when a value of type T is needed for compilation, but the statement
// will not really be executed (or we don't care if the statement
// crashes).
template <typename T>
i_l.. T Invalid() {
  Assert(false, "", -1, "Internal error: attempt to return invalid value");
  // 007_This statement is unreachable, and would never terminate even if it
  // could be reached. It is provided only to placate compiler warnings
  // about missing return statements.
  ?  Invalid<T>();
}

?if.. _MSC_VER
# pragma warning(pop)
e..

// Given a raw type (i.e. having no top-level reference or const
// modifier) RawContainer that's either an STL-style container or a
// native array, class StlContainerView<RawContainer> has the
// following members:
//
//   - type is a type that provides an STL-style container view to
//     (i.e. implements the STL container concept for) RawContainer;
//   - const_reference is a type that provides a reference to a const
//     RawContainer;
//   - ConstReference(raw_container) returns a const reference to an STL-style
//     container view to raw_container, which is a RawContainer.
//   - Copy(raw_container) returns an STL-style container view of a
//     copy of raw_container, which is a RawContainer.
//
// 007_This generic version is used when RawContainer itself is already an
// STL-style container.
template <n.. RawContainer>
n.. StlContainerView {
 p..
  t_d_ RawContainer type;
  t_d_ co.. type& const_reference;

  st.. const_reference ConstReference(co.. RawContainer& container) {
    // Ensures that RawContainer is not a const type.
    testing::StaticAssertTypeEq<RawContainer,
        GTEST_REMOVE_CONST_(RawContainer)>();
    ?  container;
  }
  st.. type Copy(co.. RawContainer& container) { ?  container; }
};

// 007_This specialization is used when RawContainer is a native array type.
template <typename Element, size_t N>
n.. StlContainerView<Element[N]> {
 p..
  t_d_ GTEST_REMOVE_CONST_(Element) RawElement;
  t_d_ internal::NativeArray<RawElement> type;
  // NativeArray<T> can represent a native array either by value or by
  // reference (selected by a constructor argument), so 'const type'
  // can be used to reference a const native array.  We cannot
  // 'typedef const type& const_reference' here, as that would mean
  // ConstReference() has to return a reference to a local variable.
  t_d_ co.. type const_reference;

  st.. const_reference ConstReference(co.. Element (&array)[N]) {
    // Ensures that Element is not a const type.
    testing::StaticAssertTypeEq<Element, RawElement>();
#if GTEST_OS_SYMBIAN
    // The Nokia Symbian compiler confuses itself in template instantiation
    // for this call without the cast to Element*:
    // function call '[testing::internal::NativeArray<char *>].NativeArray(
    //     {lval} const char *[4], long, testing::internal::RelationToSource)'
    //     does not match
    // 'testing::internal::NativeArray<char *>::NativeArray(
    //     char *const *, unsigned int, testing::internal::RelationToSource)'
    // (instantiating: 'testing::internal::ContainsMatcherImpl
    //     <const char * (&)[4]>::Matches(const char * (&)[4]) const')
    // (instantiating: 'testing::internal::StlContainerView<char *[4]>::
    //     ConstReference(const char * (&)[4])')
    // (and though the N parameter type is mismatched in the above explicit
    // conversion of it doesn't help - only the conversion of the array).
    ?  type(const_cast<Element*>(&array[0]), N,
                RelationToSourceReference());
#else
    ?  type(array, N, RelationToSourceReference());
e..  // GTEST_OS_SYMBIAN
  }
  st.. type Copy(co.. Element (&array)[N]) {
#if GTEST_OS_SYMBIAN
    ?  type(const_cast<Element*>(&array[0]), N, RelationToSourceCopy());
#else
    ?  type(array, N, RelationToSourceCopy());
e..  // GTEST_OS_SYMBIAN
  }
};

// 007_This specialization is used when RawContainer is a native array
// represented as a (pointer, size) tuple.
template <typename ElementPointer, typename Size>
n.. StlContainerView< ::testing::tuple<ElementPointer, Size> > {
 p..
  t_d_ GTEST_REMOVE_CONST_(
      typename internal::PointeeOf<ElementPointer>::type) RawElement;
  t_d_ internal::NativeArray<RawElement> type;
  t_d_ co.. type const_reference;

  st.. const_reference ConstReference(
      co.. ::testing::tuple<ElementPointer, Size>& array) {
    ?  type(get<0>(array), get<1>(array), RelationToSourceReference());
  }
  st.. type Copy(co.. ::testing::tuple<ElementPointer, Size>& array) {
    ?  type(get<0>(array), get<1>(array), RelationToSourceCopy());
  }
};

// The following specialization prevents the user from instantiating
// StlContainer with a reference type.
template <typename T> n.. StlContainerView<T&>;

// A type transform to remove constness from the first part of a pair.
// Pairs like that are used as the value_type of associative containers,
// and this transform produces a similar but assignable pair.
template <typename T>
s.. RemoveConstFromKey {
  t_d_ T type;
};

// Partially specialized to remove constness from std::pair<const K, V>.
template <typename K, typename V>
s.. RemoveConstFromKey<st. pair<co.. K, V> > {
  t_d_ st. pair<K, V> type;
};

// Mapping from booleans to types. Similar to boost::bool_<kValue> and
// std::integral_constant<bool, kValue>.
template <bo.. kValue>
s.. BooleanConstant {};

// Emit an assertion failure due to incorrect DoDefault() usage. Out-of-lined to
// reduce code size.
GTEST_API_ v.. IllegalDoDefault(co.. ch..* file, in. line);

#if GTEST_LANG_CXX11
// Helper types for Apply() below.
template <size_t... Is> s.. int_pack { t_d_ int_pack type; };

template <n.. Pack, size_t I> s.. append;
template <size_t... Is, size_t I>
s.. append<int_pack<Is...>, I> : int_pack<Is..., I> {};

template <size_t C>
s.. make_int_pack : append<typename make_int_pack<C - 1>::type, C - 1> {};
template <> s.. make_int_pack<0> : int_pack<> {};

template <typename F, typename Tuple, size_t... Idx>
auto ApplyImpl(F&& f, Tuple&& args, int_pack<Idx...>) -> decltype(
    st. forward<F>(f)(st. get<Idx>(st. forward<Tuple>(args))...)) {
  ?  st. forward<F>(f)(st. get<Idx>(st. forward<Tuple>(args))...);
}

// Apply the function to a tuple of arguments.
template <typename F, typename Tuple>
auto Apply(F&& f, Tuple&& args)
    -> decltype(ApplyImpl(st. forward<F>(f), st. forward<Tuple>(args),
                          make_int_pack<st. tuple_size<Tuple>::value>())) {
  ?  ApplyImpl(st. forward<F>(f), st. forward<Tuple>(args),
                   make_int_pack<st. tuple_size<Tuple>::value>());
}
e..


?if.. _MSC_VER
# pragma warning(pop)
e..

}  // namespace internal
}  // namespace testing

e..  // GMOCK_INCLUDE_GMOCK_INTERNAL_GMOCK_INTERNAL_UTILS_H_
