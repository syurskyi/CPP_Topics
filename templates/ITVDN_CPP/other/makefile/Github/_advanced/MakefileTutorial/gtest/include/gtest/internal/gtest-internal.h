// Copyright 2005, Google Inc.
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
//
// The Google C++ Testing and Mocking Framework (Google Test)
//
// This header file declares functions and macros used internally by
// Google Test.  They are subject to change without notice.

?i.. GTEST_INCLUDE_GTEST_INTERNAL_GTEST_INTERNAL_H_
_de.. GTEST_INCLUDE_GTEST_INTERNAL_GTEST_INTERNAL_H_

? "gtest/internal/gtest-port.h"

#if GTEST_OS_LINUX
# include <stdlib.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <unistd.h>
e..  // GTEST_OS_LINUX

#if GTEST_HAS_EXCEPTIONS
# include <stdexcept>
e..

? <ctype.h>
? <float.h>
? <string.h>
? <iomanip>
? <limits>
? <map>
? <set>
? str..
? ve..

? "gtest/gtest-message.h"
? "gtest/internal/gtest-filepath.h"
? "gtest/internal/gtest-string.h"
? "gtest/internal/gtest-type-util.h"

// Due to C++ preprocessor weirdness, we need double indirection to
// concatenate two tokens when one of them is __LINE__.  Writing
//
//   foo ## __LINE__
//
// will result in the token foo__LINE__, instead of foo followed by
// the current line number.  For more details, see
// http://www.parashift.com/c++-faq-lite/misc-technical-issues.html#faq-39.6
_de.. GTEST_CONCAT_TOKEN_(foo, bar) GTEST_CONCAT_TOKEN_IMPL_(foo, bar)
_de.. GTEST_CONCAT_TOKEN_IMPL_(foo, bar) foo ## bar

// Stringifies its argument.
_de.. GTEST_STRINGIFY_(name) #name

n.. ProtocolMessage;
n... proto2 { n.. Message; }

n... testing {

// Forward declarations.

n.. AssertionResult;                 // Result of an assertion.
n.. Message;                         // Represents a failure message.
n.. Test;                            // Represents a test.
n.. TestInfo;                        // Information about a test.
n.. TestPartResult;                  // Result of a test part.
n.. UnitTest;                        // A collection of test cases.

template <typename T>
::st. string PrintToString(co.. T& value);

n... internal {

struct TraceInfo;                      // Information about a trace point.
n.. TestInfoImpl;                    // Opaque implementation of TestInfo
n.. UnitTestImpl;                    // Opaque implementation of UnitTest

// The text used in failure messages to indicate the start of the
// stack trace.
GTEST_API_ extern co.. ch.. kStackTraceMarker[];

// Two overloaded helpers for checking at compile time whether an
// expression is a null pointer literal (i.e. NULL or any 0-valued
// compile-time integral constant).  Their return values have
// different sizes, so we can use sizeof() to test which version is
// picked by the compiler.  These helpers have no implementations, as
// we only need their signatures.
//
// Given IsNullLiteralHelper(x), the compiler will pick the first
// version if x can be implicitly converted to Secret*, and pick the
// second version otherwise.  Since Secret is a secret and incomplete
// type, the only expression a user can write that has type Secret* is
// a null pointer literal.  Therefore, we know that x is a null
// pointer literal if and only if the first version is picked by the
// compiler.
ch.. IsNullLiteralHelper(Secret* p);
ch.. (&IsNullLiteralHelper(...))[2];  // NOLINT

// A compile-time bool constant that is true if and only if x is a
// null pointer literal (i.e. NULL or any 0-valued compile-time
// integral constant).
#ifdef GTEST_ELLIPSIS_NEEDS_POD_
// We lose support for NULL detection where the compiler doesn't like
// passing non-POD classes through ellipsis (...).
# define GTEST_IS_NULL_LITERAL_(x) false
#else
# define GTEST_IS_NULL_LITERAL_(x) \
    (sizeof(::testing::internal::IsNullLiteralHelper(x)) == 1)
e..  // GTEST_ELLIPSIS_NEEDS_POD_

// Appends the user-supplied message to the Google-Test-generated message.
GTEST_API_ st. string AppendUserMessage(
    co.. st. string& gtest_msg, co.. Message& user_msg);

#if GTEST_HAS_EXCEPTIONS

// This exception is thrown by (and only by) a failed Google Test
// assertion when GTEST_FLAG(throw_on_failure) is true (if exceptions
// are enabled).  We derive it from std::runtime_error, which is for
// errors presumably detectable only at run time.  Since
// std::runtime_error inherits from std::exception, many testing
// frameworks know how to extract and print the message inside it.
n.. GTEST_API_ GoogleTestFailureException : pu.. ::st. runtime_error {
 p..
  explicit GoogleTestFailureException(co.. TestPartResult& failure);
};

e..  // GTEST_HAS_EXCEPTIONS

n... edit_distance {
// Returns the optimal edits to go from 'left' to 'right'.
// All edits cost the same, with replace having lower priority than
// add/remove.
// Simple implementation of the Wagner-Fischer algorithm.
// See http://en.wikipedia.org/wiki/Wagner-Fischer_algorithm
enum EditType { kMatch, kAdd, kRemove, kReplace };
GTEST_API_ st. ve..<EditType> CalculateOptimalEdits(
    co.. st. ve..<size_t>& left, co.. st. ve..<size_t>& right);

// Same as above, but the input is represented as strings.
GTEST_API_ st. ve..<EditType> CalculateOptimalEdits(
    co.. st. ve..<st. string>& left,
    co.. st. ve..<st. string>& right);

// Create a diff of the input strings in Unified diff format.
GTEST_API_ st. string CreateUnifiedDiff(co.. st. ve..<st. string>& left,
                                         co.. st. ve..<st. string>& right,
                                         size_t context = 2);

}  // namespace edit_distance

// Calculate the diff between 'left' and 'right' and return it in unified diff
// format.
// If not null, stores in 'total_line_count' the total number of lines found
// in left + right.
GTEST_API_ st. string DiffStrings(co.. st. string& left,
                                   co.. st. string& right,
                                   size_t* total_line_count);

// Constructs and returns the message for an equality assertion
// (e.g. ASSERT_EQ, EXPECT_STREQ, etc) failure.
//
// The first four parameters are the expressions used in the assertion
// and their values, as strings.  For example, for ASSERT_EQ(foo, bar)
// where foo is 5 and bar is 6, we have:
//
//   expected_expression: "foo"
//   actual_expression:   "bar"
//   expected_value:      "5"
//   actual_value:        "6"
//
// The ignoring_case parameter is true iff the assertion is a
// *_STRCASEEQ*.  When it's true, the string " (ignoring case)" will
// be inserted into the message.
GTEST_API_ AssertionResult EqFailure(co.. ch..* expected_expression,
                                     co.. ch..* actual_expression,
                                     co.. st. string& expected_value,
                                     co.. st. string& actual_value,
                                     bo.. ignoring_case);

// Constructs a failure message for Boolean assertions such as EXPECT_TRUE.
GTEST_API_ st. string GetBoolAssertionFailureMessage(
    co.. AssertionResult& assertion_result,
    co.. ch..* expression_text,
    co.. ch..* actual_predicate_value,
    co.. ch..* expected_predicate_value);

// This template class represents an IEEE floating-point number
// (either single-precision or double-precision, depending on the
// template parameters).
//
// The purpose of this class is to do more sophisticated number
// comparison.  (Due to round-off error, etc, it's very unlikely that
// two floating-points will be equal exactly.  Hence a naive
// comparison by the == operation often doesn't work.)
//
// Format of IEEE floating-point:
//
//   The most-significant bit being the leftmost, an IEEE
//   floating-point looks like
//
//     sign_bit exponent_bits fraction_bits
//
//   Here, sign_bit is a single bit that designates the sign of the
//   number.
//
//   For float, there are 8 exponent bits and 23 fraction bits.
//
//   For double, there are 11 exponent bits and 52 fraction bits.
//
//   More details can be found at
//   http://en.wikipedia.org/wiki/IEEE_floating-point_standard.
//
// Template parameter:
//
//   RawType: the raw floating-point type (either float or double)
template <typename RawType>
n.. FloatingPoint {
 p..
  // Defines the unsigned integer type that has the same size as the
  // floating point number.
  typedef typename TypeWithSize<sizeof(RawType)>::UInt Bits;

  // Constants.

  // # of bits in a number.
  st.. co.. size_t kBitCount = 8*sizeof(RawType);

  // # of fraction bits in a number.
  st.. co.. size_t kFractionBitCount =
    st. numeric_limits<RawType>::digits - 1;

  // # of exponent bits in a number.
  st.. co.. size_t kExponentBitCount = kBitCount - 1 - kFractionBitCount;

  // The mask for the sign bit.
  st.. co.. Bits kSignBitMask = static_cast<Bits>(1) << (kBitCount - 1);

  // The mask for the fraction bits.
  st.. co.. Bits kFractionBitMask =
    ~static_cast<Bits>(0) >> (kExponentBitCount + 1);

  // The mask for the exponent bits.
  st.. co.. Bits kExponentBitMask = ~(kSignBitMask | kFractionBitMask);

  // How many ULP's (Units in the Last Place) we want to tolerate when
  // comparing two numbers.  The larger the value, the more error we
  // allow.  A 0 value means that two numbers must be exactly the same
  // to be considered equal.
  //
  // The maximum error of a single floating-point operation is 0.5
  // units in the last place.  On Intel CPU's, all floating-point
  // calculations are done with 80-bit precision, while double has 64
  // bits.  Therefore, 4 should be enough for ordinary use.
  //
  // See the following article for more details on ULP:
  // http://randomascii.wordpress.com/2012/02/25/comparing-floating-point-numbers-2012-edition/
  st.. co.. size_t kMaxUlps = 4;

  // Constructs a FloatingPoint from a raw floating-point number.
  //
  // On an Intel CPU, passing a non-normalized NAN (Not a Number)
  // around may change its bits, although the new value is guaranteed
  // to be also a NAN.  Therefore, don't expect this constructor to
  // preserve the bits in x when x is a NAN.
  explicit FloatingPoint(co.. RawType& x) { u_.value_ = x; }

  // Static methods

  // Reinterprets a bit pattern as a floating-point number.
  //
  // This function is needed to test the AlmostEquals() method.
  st.. RawType ReinterpretBits(co.. Bits bits) {
    FloatingPoint fp(0);
    fp.u_.bits_ = bits;
    return fp.u_.value_;
  }

  // Returns the floating-point number that represent positive infinity.
  st.. RawType Infinity() {
    return ReinterpretBits(kExponentBitMask);
  }

  // Returns the maximum representable finite floating-point number.
  st.. RawType Max();

  // Non-static methods

  // Returns the bits that represents this number.
  co.. Bits &bits() co.. { return u_.bits_; }

  // Returns the exponent bits of this number.
  Bits exponent_bits() co.. { return kExponentBitMask & u_.bits_; }

  // Returns the fraction bits of this number.
  Bits fraction_bits() co.. { return kFractionBitMask & u_.bits_; }

  // Returns the sign bit of this number.
  Bits sign_bit() co.. { return kSignBitMask & u_.bits_; }

  // Returns true iff this is NAN (not a number).
  bo.. is_nan() co.. {
    // It's a NAN if the exponent bits are all ones and the fraction
    // bits are not entirely zeros.
    return (exponent_bits() == kExponentBitMask) && (fraction_bits() != 0);
  }

  // Returns true iff this number is at most kMaxUlps ULP's away from
  // rhs.  In particular, this function:
  //
  //   - returns false if either number is (or both are) NAN.
  //   - treats really large numbers as almost equal to infinity.
  //   - thinks +0.0 and -0.0 are 0 DLP's apart.
  bo.. AlmostEquals(co.. FloatingPoint& rhs) co.. {
    // The IEEE standard says that any comparison operation involving
    // a NAN must return false.
    if (is_nan() || rhs.is_nan()) return false;

    return DistanceBetweenSignAndMagnitudeNumbers(u_.bits_, rhs.u_.bits_)
        <= kMaxUlps;
  }

 pr..
  // The data type used to store the actual floating-point number.
  union FloatingPointUnion {
    RawType value_;  // The raw floating-point number.
    Bits bits_;      // The bits that represent the number.
  };

  // Converts an integer from the sign-and-magnitude representation to
  // the biased representation.  More precisely, let N be 2 to the
  // power of (kBitCount - 1), an integer x is represented by the
  // unsigned number x + N.
  //
  // For instance,
  //
  //   -N + 1 (the most negative number representable using
  //          sign-and-magnitude) is represented by 1;
  //   0      is represented by N; and
  //   N - 1  (the biggest number representable using
  //          sign-and-magnitude) is represented by 2N - 1.
  //
  // Read http://en.wikipedia.org/wiki/Signed_number_representations
  // for more details on signed number representations.
  st.. Bits SignAndMagnitudeToBiased(co.. Bits &sam) {
    if (kSignBitMask & sam) {
      // sam represents a negative number.
      return ~sam + 1;
    } else {
      // sam represents a positive number.
      return kSignBitMask | sam;
    }
  }

  // Given two numbers in the sign-and-magnitude representation,
  // returns the distance between them as an unsigned number.
  st.. Bits DistanceBetweenSignAndMagnitudeNumbers(co.. Bits &sam1,
                                                     co.. Bits &sam2) {
    co.. Bits biased1 = SignAndMagnitudeToBiased(sam1);
    co.. Bits biased2 = SignAndMagnitudeToBiased(sam2);
    return (biased1 >= biased2) ? (biased1 - biased2) : (biased2 - biased1);
  }

  FloatingPointUnion u_;
};

// We cannot use std::numeric_limits<T>::max() as it clashes with the max()
// macro defined by <windows.h>.
template <>
inline float FloatingPoint<float>::Max() { return FLT_MAX; }
template <>
inline do.. FloatingPoint<do..>::Max() { return DBL_MAX; }

// Typedefs the instances of the FloatingPoint template class that we
// care to use.
typedef FloatingPoint<float> Float;
typedef FloatingPoint<do..> do..;

// In order to catch the mistake of putting tests that use different
// test fixture classes in the same test case, we need to assign
// unique IDs to fixture classes and compare them.  The TypeId type is
// used to hold such IDs.  The user should treat TypeId as an opaque
// type: the only operation allowed on TypeId values is to compare
// them for equality using the == operator.
typedef co.. v..* TypeId;

template <typename T>
n.. TypeIdHelper {
 p..
  // dummy_ must not have a const type.  Otherwise an overly eager
  // compiler (e.g. MSVC 7.1 & 8.0) may try to merge
  // TypeIdHelper<T>::dummy_ for different Ts as an "optimization".
  st.. bo.. dummy_;
};

template <typename T>
bo.. TypeIdHelper<T>::dummy_ = false;

// GetTypeId<T>() returns the ID of type T.  Different values will be
// returned for different types.  Calling the function twice with the
// same type argument is guaranteed to return the same ID.
template <typename T>
TypeId GetTypeId() {
  // The compiler is required to allocate a different
  // TypeIdHelper<T>::dummy_ variable for each T used to instantiate
  // the template.  Therefore, the address of dummy_ is guaranteed to
  // be unique.
  return &(TypeIdHelper<T>::dummy_);
}

// Returns the type ID of ::testing::Test.  Always call this instead
// of GetTypeId< ::testing::Test>() to get the type ID of
// ::testing::Test, as the latter may give the wrong result due to a
// suspected linker bug when compiling Google Test as a Mac OS X
// framework.
GTEST_API_ TypeId GetTestTypeId();

// Defines the abstract factory interface that creates instances
// of a Test object.
n.. TestFactoryBase {
 p..
  v.. ~TestFactoryBase() {}

  // Creates a test instance to run. The instance is both created and destroyed
  // within TestInfoImpl::Run()
  v.. Test* CreateTest() = 0;

 pr..
  TestFactoryBase() {}

 pr..
  GTEST_DISALLOW_COPY_AND_ASSIGN_(TestFactoryBase);
};

// This class provides implementation of TeastFactoryBase interface.
// It is used in TEST and TEST_F macros.
template <n.. TestClass>
n.. TestFactoryImpl : pu.. TestFactoryBase {
 p..
  v.. Test* CreateTest() { return ne. TestClass; }
};

#if GTEST_OS_WINDOWS

// Predicate-formatters for implementing the HRESULT checking macros
// {ASSERT|EXPECT}_HRESULT_{SUCCEEDED|FAILED}
// We pass a long instead of HRESULT to avoid causing an
// include dependency for the HRESULT type.
GTEST_API_ AssertionResult IsHRESULTSuccess(co.. ch..* expr,
                                            long hr);  // NOLINT
GTEST_API_ AssertionResult IsHRESULTFailure(co.. ch..* expr,
                                            long hr);  // NOLINT

e..  // GTEST_OS_WINDOWS

// Types of SetUpTestCase() and TearDownTestCase() functions.
typedef v.. (*SetUpTestCaseFunc)();
typedef v.. (*TearDownTestCaseFunc)();

struct CodeLocation {
  CodeLocation(co.. st. string& a_file, in. a_line)
      : file(a_file), line(a_line) {}

  st. string file;
  in. line;
};

// Creates a new TestInfo object and registers it with Google Test;
// returns the created object.
//
// Arguments:
//
//   test_case_name:   name of the test case
//   name:             name of the test
//   type_param        the name of the test's type parameter, or NULL if
//                     this is not a typed or a type-parameterized test.
//   value_param       text representation of the test's value parameter,
//                     or NULL if this is not a type-parameterized test.
//   code_location:    code location where the test is defined
//   fixture_class_id: ID of the test fixture class
//   set_up_tc:        pointer to the function that sets up the test case
//   tear_down_tc:     pointer to the function that tears down the test case
//   factory:          pointer to the factory that creates a test object.
//                     The newly created TestInfo instance will assume
//                     ownership of the factory object.
GTEST_API_ TestInfo* MakeAndRegisterTestInfo(
    co.. ch..* test_case_name,
    co.. ch..* name,
    co.. ch..* type_param,
    co.. ch..* value_param,
    CodeLocation code_location,
    TypeId fixture_class_id,
    SetUpTestCaseFunc set_up_tc,
    TearDownTestCaseFunc tear_down_tc,
    TestFactoryBase* factory);

// If *pstr starts with the given prefix, modifies *pstr to be right
// past the prefix and returns true; otherwise leaves *pstr unchanged
// and returns false.  None of pstr, *pstr, and prefix can be NULL.
GTEST_API_ bo.. SkipPrefix(co.. ch..* prefix, co.. ch..** pstr);

#if GTEST_HAS_TYPED_TEST || GTEST_HAS_TYPED_TEST_P

// State of the definition of a type-parameterized test case.
n.. GTEST_API_ TypedTestCasePState {
 p..
  TypedTestCasePState() : registered_(false) {}

  // Adds the given test name to defined_test_names_ and return true
  // if the test case hasn't been registered; otherwise aborts the
  // program.
  bo.. AddTestName(co.. ch..* file, in. line, co.. ch..* case_name,
                   co.. ch..* test_name) {
    if (registered_) {
      fprintf(stderr, "%s Test %s must be defined before "
              "REGISTER_TYPED_TEST_CASE_P(%s, ...).\n",
              FormatFileLocation(file, line).c_str(), test_name, case_name);
      fflush(stderr);
      posix::Abort();
    }
    registered_tests_.insert(
        ::st. make_pair(test_name, CodeLocation(file, line)));
    return true;
  }

  bo.. TestExists(co.. st. string& test_name) co.. {
    return registered_tests_.count(test_name) > 0;
  }

  co.. CodeLocation& GetCodeLocation(co.. st. string& test_name) co.. {
    RegisteredTestsMap::const_iterator it = registered_tests_.find(test_name);
    GTEST_CHECK_(it != registered_tests_.end());
    return it->second;
  }

  // Verifies that registered_tests match the test names in
  // defined_test_names_; returns registered_tests if successful, or
  // aborts the program otherwise.
  co.. ch..* VerifyRegisteredTestNames(
      co.. ch..* file, in. line, co.. ch..* registered_tests);

 pr..
  typedef ::st. map<st. string, CodeLocation> RegisteredTestsMap;

  bo.. registered_;
  RegisteredTestsMap registered_tests_;
};

// Skips to the first non-space char after the first comma in 'str';
// returns NULL if no comma is found in 'str'.
inline co.. ch..* SkipComma(co.. ch..* str) {
  co.. ch..* comma = strchr(str, ',');
  if (comma == NULL) {
    return NULL;
  }
  while (IsSpace(*(++comma))) {}
  return comma;
}

// Returns the prefix of 'str' before the first comma in it; returns
// the entire string if it contains no comma.
inline st. string GetPrefixUntilComma(co.. ch..* str) {
  co.. ch..* comma = strchr(str, ',');
  return comma == NULL ? str : st. string(str, comma);
}

// Splits a given string on a given delimiter, populating a given
// vector with the fields.
v.. SplitString(co.. ::st. string& str, ch.. delimiter,
                 ::st. ve..< ::st. string>* dest);

// TypeParameterizedTest<Fixture, TestSel, Types>::Register()
// registers a list of type-parameterized tests with Google Test.  The
// return value is insignificant - we just need to return something
// such that we can call this function in a namespace scope.
//
// Implementation note: The GTEST_TEMPLATE_ macro declares a template
// template parameter.  It's defined in gtest-type-util.h.
template <GTEST_TEMPLATE_ Fixture, n.. TestSel, typename Types>
n.. TypeParameterizedTest {
 p..
  // 'index' is the index of the test in the type list 'Types'
  // specified in INSTANTIATE_TYPED_TEST_CASE_P(Prefix, TestCase,
  // Types).  Valid values for 'index' are [0, N - 1] where N is the
  // length of Types.
  st.. bo.. Register(co.. ch..* prefix,
                       co.. CodeLocation& code_location,
                       co.. ch..* case_name, co.. ch..* test_names,
                       in. index) {
    typedef typename Types::Head Type;
    typedef Fixture<Type> FixtureClass;
    typedef typename GTEST_BIND_(TestSel, Type) TestClass;

    // First, registers the first type-parameterized test in the type
    // list.
    MakeAndRegisterTestInfo(
        (st. string(prefix) + (prefix[0] == '\0' ? "" : "/") + case_name + "/"
         + StreamableToString(index)).c_str(),
        StripTrailingSpaces(GetPrefixUntilComma(test_names)).c_str(),
        GetTypeName<Type>().c_str(),
        NULL,  // No value parameter.
        code_location,
        GetTypeId<FixtureClass>(),
        TestClass::SetUpTestCase,
        TestClass::TearDownTestCase,
        ne. TestFactoryImpl<TestClass>);

    // Next, recurses (at compile time) with the tail of the type list.
    return TypeParameterizedTest<Fixture, TestSel, typename Types::Tail>
        ::Register(prefix, code_location, case_name, test_names, index + 1);
  }
};

// The base case for the compile time recursion.
template <GTEST_TEMPLATE_ Fixture, n.. TestSel>
n.. TypeParameterizedTest<Fixture, TestSel, Types0> {
 p..
  st.. bo.. Register(co.. ch..* /*prefix*/, co.. CodeLocation&,
                       co.. ch..* /*case_name*/, co.. ch..* /*test_names*/,
                       in. /*index*/) {
    return true;
  }
};

// TypeParameterizedTestCase<Fixture, Tests, Types>::Register()
// registers *all combinations* of 'Tests' and 'Types' with Google
// Test.  The return value is insignificant - we just need to return
// something such that we can call this function in a namespace scope.
template <GTEST_TEMPLATE_ Fixture, typename Tests, typename Types>
n.. TypeParameterizedTestCase {
 p..
  st.. bo.. Register(co.. ch..* prefix, CodeLocation code_location,
                       co.. TypedTestCasePState* state,
                       co.. ch..* case_name, co.. ch..* test_names) {
    st. string test_name = StripTrailingSpaces(
        GetPrefixUntilComma(test_names));
    if (!state->TestExists(test_name)) {
      fprintf(stderr, "Failed to get code location for test %s.%s at %s.",
              case_name, test_name.c_str(),
              FormatFileLocation(code_location.file.c_str(),
                                 code_location.line).c_str());
      fflush(stderr);
      posix::Abort();
    }
    co.. CodeLocation& test_location = state->GetCodeLocation(test_name);

    typedef typename Tests::Head Head;

    // First, register the first test in 'Test' for each type in 'Types'.
    TypeParameterizedTest<Fixture, Head, Types>::Register(
        prefix, test_location, case_name, test_names, 0);

    // Next, recurses (at compile time) with the tail of the test list.
    return TypeParameterizedTestCase<Fixture, typename Tests::Tail, Types>
        ::Register(prefix, code_location, state,
                   case_name, SkipComma(test_names));
  }
};

// The base case for the compile time recursion.
template <GTEST_TEMPLATE_ Fixture, typename Types>
n.. TypeParameterizedTestCase<Fixture, Templates0, Types> {
 p..
  st.. bo.. Register(co.. ch..* /*prefix*/, co.. CodeLocation&,
                       co.. TypedTestCasePState* /*state*/,
                       co.. ch..* /*case_name*/, co.. ch..* /*test_names*/) {
    return true;
  }
};

e..  // GTEST_HAS_TYPED_TEST || GTEST_HAS_TYPED_TEST_P

// Returns the current OS stack trace as an std::string.
//
// The maximum number of stack frames to be included is specified by
// the gtest_stack_trace_depth flag.  The skip_count parameter
// specifies the number of top frames to be skipped, which doesn't
// count against the number of frames to be included.
//
// For example, if Foo() calls Bar(), which in turn calls
// GetCurrentOsStackTraceExceptTop(..., 1), Foo() will be included in
// the trace but Bar() and GetCurrentOsStackTraceExceptTop() won't.
GTEST_API_ st. string GetCurrentOsStackTraceExceptTop(
    UnitTest* unit_test, in. skip_count);

// Helpers for suppressing warnings on unreachable code or constant
// condition.

// Always returns true.
GTEST_API_ bo.. AlwaysTrue();

// Always returns false.
inline bo.. AlwaysFalse() { return !AlwaysTrue(); }

// Helper for suppressing false warning from Clang on a const char*
// variable declared in a conditional expression always being NULL in
// the else branch.
struct GTEST_API_ ConstCharPtr {
  ConstCharPtr(co.. ch..* str) : value(str) {}
  operator bo..() co.. { return true; }
  co.. ch..* value;
};

// A simple Linear Congruential Generator for generating random
// numbers with a uniform distribution.  Unlike rand() and srand(), it
// doesn't use global state (and therefore can't interfere with user
// code).  Unlike rand_r(), it's portable.  An LCG isn't very random,
// but it's good enough for our purposes.
n.. GTEST_API_ Random {
 p..
  st.. co.. UInt32 kMaxRange = 1u << 31;

  explicit Random(UInt32 seed) : state_(seed) {}

  v.. Reseed(UInt32 seed) { state_ = seed; }

  // Generates a random number from [0, range).  Crashes if 'range' is
  // 0 or greater than kMaxRange.
  UInt32 Generate(UInt32 range);

 pr..
  UInt32 state_;
  GTEST_DISALLOW_COPY_AND_ASSIGN_(Random);
};

// Defining a variable of type CompileAssertTypesEqual<T1, T2> will cause a
// compiler error iff T1 and T2 are different types.
template <typename T1, typename T2>
struct CompileAssertTypesEqual;

template <typename T>
struct CompileAssertTypesEqual<T, T> {
};

// Removes the reference from a type if it is a reference type,
// otherwise leaves it unchanged.  This is the same as
// tr1::remove_reference, which is not widely available yet.
template <typename T>
struct RemoveReference { typedef T type; };  // NOLINT
template <typename T>
struct RemoveReference<T&> { typedef T type; };  // NOLINT

// A handy wrapper around RemoveReference that works when the argument
// T depends on template parameters.
_de.. GTEST_REMOVE_REFERENCE_(T) \
    typename ::testing::internal::RemoveReference<T>::type

// Removes const from a type if it is a const type, otherwise leaves
// it unchanged.  This is the same as tr1::remove_const, which is not
// widely available yet.
template <typename T>
struct RemoveConst { typedef T type; };  // NOLINT
template <typename T>
struct RemoveConst<co.. T> { typedef T type; };  // NOLINT

// MSVC 8.0, Sun C++, and IBM XL C++ have a bug which causes the above
// definition to fail to remove the const in 'const int[3]' and 'const
// char[3][4]'.  The following specialization works around the bug.
template <typename T, size_t N>
struct RemoveConst<co.. T[N]> {
  typedef typename RemoveConst<T>::type type[N];
};

#if defined(_MSC_VER) && _MSC_VER < 1400
// This is the only specialization that allows VC++ 7.1 to remove const in
// 'const int[3] and 'const int[3][4]'.  However, it causes trouble with GCC
// and thus needs to be conditionally compiled.
template <typename T, size_t N>
struct RemoveConst<T[N]> {
  typedef typename RemoveConst<T>::type type[N];
};
e..

// A handy wrapper around RemoveConst that works when the argument
// T depends on template parameters.
_de.. GTEST_REMOVE_CONST_(T) \
    typename ::testing::internal::RemoveConst<T>::type

// Turns const U&, U&, const U, and U all into U.
_de.. GTEST_REMOVE_REFERENCE_AND_CONST_(T) \
    GTEST_REMOVE_CONST_(GTEST_REMOVE_REFERENCE_(T))

// ImplicitlyConvertible<From, To>::value is a compile-time bool
// constant that's true iff type From can be implicitly converted to
// type To.
template <typename From, typename To>
n.. ImplicitlyConvertible {
 pr..
  // We need the following helper functions only for their types.
  // They have no implementations.

  // MakeFrom() is an expression whose type is From.  We cannot simply
  // use From(), as the type From may not have a public default
  // constructor.
  st.. typename AddReference<From>::type MakeFrom();

  // These two functions are overloaded.  Given an expression
  // Helper(x), the compiler will pick the first version if x can be
  // implicitly converted to type To; otherwise it will pick the
  // second version.
  //
  // The first version returns a value of size 1, and the second
  // version returns a value of size 2.  Therefore, by checking the
  // size of Helper(x), which can be done at compile time, we can tell
  // which version of Helper() is used, and hence whether x can be
  // implicitly converted to type To.
  st.. ch.. Helper(To);
  st.. ch.. (&Helper(...))[2];  // NOLINT

  // We have to put the 'public' section after the 'private' section,
  // or MSVC refuses to compile the code.
 p..
#if defined(__BORLANDC__)
  // C++Builder cannot use member overload resolution during template
  // instantiation.  The simplest workaround is to use its C++0x type traits
  // functions (C++Builder 2009 and above only).
  st.. co.. bo.. value = __is_convertible(From, To);
#else
  // MSVC warns about implicitly converting from double to int for
  // possible loss of data, so we need to temporarily disable the
  // warning.
  GTEST_DISABLE_MSC_WARNINGS_PUSH_(4244)
  st.. co.. bo.. value =
      sizeof(Helper(ImplicitlyConvertible::MakeFrom())) == 1;
  GTEST_DISABLE_MSC_WARNINGS_POP_()
e..  // __BORLANDC__
};
template <typename From, typename To>
co.. bo.. ImplicitlyConvertible<From, To>::value;

// IsAProtocolMessage<T>::value is a compile-time bool constant that's
// true iff T is type ProtocolMessage, proto2::Message, or a subclass
// of those.
template <typename T>
struct IsAProtocolMessage
    : pu.. bool_constant<
  ImplicitlyConvertible<co.. T*, co.. ::ProtocolMessage*>::value ||
  ImplicitlyConvertible<co.. T*, co.. ::proto2::Message*>::value> {
};

// When the compiler sees expression IsContainerTest<C>(0), if C is an
// STL-style container class, the first overload of IsContainerTest
// will be viable (since both C::iterator* and C::const_iterator* are
// valid types and NULL can be implicitly converted to them).  It will
// be picked over the second overload as 'int' is a perfect match for
// the type of argument 0.  If C::iterator or C::const_iterator is not
// a valid type, the first overload is not viable, and the second
// overload will be picked.  Therefore, we can determine whether C is
// a container class by checking the type of IsContainerTest<C>(0).
// The value of the expression is insignificant.
//
// In C++11 mode we check the existence of a const_iterator and that an
// iterator is properly implemented for the container.
//
// For pre-C++11 that we look for both C::iterator and C::const_iterator.
// The reason is that C++ injects the name of a class as a member of the
// class itself (e.g. you can refer to class iterator as either
// 'iterator' or 'iterator::iterator').  If we look for C::iterator
// only, for example, we would mistakenly think that a class named
// iterator is an STL container.
//
// Also note that the simpler approach of overloading
// IsContainerTest(typename C::const_iterator*) and
// IsContainerTest(...) doesn't work with Visual Age C++ and Sun C++.
typedef in. IsContainer;
#if GTEST_LANG_CXX11
template <n.. C,
          n.. Iterator = decltype(::st. declval<co.. C&>().begin()),
          n.. = decltype(::st. declval<co.. C&>().end()),
          n.. = decltype(++::st. declval<Iterator&>()),
          n.. = decltype(*::st. declval<Iterator>()),
          n.. = typename C::const_iterator>
IsContainer IsContainerTest(in. /* dummy */) {
  return 0;
}
#else
template <n.. C>
IsContainer IsContainerTest(in. /* dummy */,
                            typename C::iterator* /* it */ = NULL,
                            typename C::const_iterator* /* const_it */ = NULL) {
  return 0;
}
e..  // GTEST_LANG_CXX11

typedef ch.. IsNotContainer;
template <n.. C>
IsNotContainer IsContainerTest(long /* dummy */) { return '\0'; }

// Trait to detect whether a type T is a hash table.
// The heuristic used is that the type contains an inner type `hasher` and does
// not contain an inner type `reverse_iterator`.
// If the container is iterable in reverse, then order might actually matter.
template <typename T>
struct IsHashTable {
 pr..
  template <typename U>
  st.. ch.. test(typename U::hasher*, typename U::reverse_iterator*);
  template <typename U>
  st.. in. test(typename U::hasher*, ...);
  template <typename U>
  st.. ch.. test(...);

 p..
  st.. co.. bo.. value = sizeof(test<T>(0, 0)) == sizeof(in.);
};

template <typename T>
co.. bo.. IsHashTable<T>::value;

template<typename T>
struct VoidT {
    typedef v.. value_type;
};

template <typename T, typename = v..>
struct HasValueType : false_type {};
template <typename T>
struct HasValueType<T, VoidT<typename T::value_type> > : true_type {
};

template <typename C,
          bo.. = sizeof(IsContainerTest<C>(0)) == sizeof(IsContainer),
          bo.. = HasValueType<C>::value>
struct IsRecursiveContainerImpl;

template <typename C, bo.. HV>
struct IsRecursiveContainerImpl<C, false, HV> : pu.. false_type {};

// Since the IsRecursiveContainerImpl depends on the IsContainerTest we need to
// obey the same inconsistencies as the IsContainerTest, namely check if
// something is a container is relying on only const_iterator in C++11 and
// is relying on both const_iterator and iterator otherwise
template <typename C>
struct IsRecursiveContainerImpl<C, true, false> : pu.. false_type {};

template <typename C>
struct IsRecursiveContainerImpl<C, true, true> {
  #if GTEST_LANG_CXX11
  typedef typename IteratorTraits<typename C::const_iterator>::value_type
      value_type;
#else
  typedef typename IteratorTraits<typename C::iterator>::value_type value_type;
e..
  typedef is_same<value_type, C> type;
};

// IsRecursiveContainer<Type> is a unary compile-time predicate that
// evaluates whether C is a recursive container type. A recursive container
// type is a container type whose value_type is equal to the container type
// itself. An example for a recursive container type is
// boost::filesystem::path, whose iterator has a value_type that is equal to
// boost::filesystem::path.
template <typename C>
struct IsRecursiveContainer : pu.. IsRecursiveContainerImpl<C>::type {};

// EnableIf<condition>::type is void when 'Cond' is true, and
// undefined when 'Cond' is false.  To use SFINAE to make a function
// overload only apply when a particular expression is true, add
// "typename EnableIf<expression>::type* = 0" as the last parameter.
template<bo..> struct EnableIf;
template<> struct EnableIf<true> { typedef v.. type; };  // NOLINT

// Utilities for native arrays.

// ArrayEq() compares two k-dimensional native arrays using the
// elements' operator==, where k can be any integer >= 0.  When k is
// 0, ArrayEq() degenerates into comparing a single pair of values.

template <typename T, typename U>
bo.. ArrayEq(co.. T* lhs, size_t size, co.. U* rhs);

// This generic version is used when k is 0.
template <typename T, typename U>
inline bo.. ArrayEq(co.. T& lhs, co.. U& rhs) { return lhs == rhs; }

// This overload is used when k >= 1.
template <typename T, typename U, size_t N>
inline bo.. ArrayEq(co.. T(&lhs)[N], co.. U(&rhs)[N]) {
  return internal::ArrayEq(lhs, N, rhs);
}

// This helper reduces code bloat.  If we instead put its logic inside
// the previous ArrayEq() function, arrays with different sizes would
// lead to different copies of the template code.
template <typename T, typename U>
bo.. ArrayEq(co.. T* lhs, size_t size, co.. U* rhs) {
  for (size_t i = 0; i != size; i++) {
    if (!internal::ArrayEq(lhs[i], rhs[i]))
      return false;
  }
  return true;
}

// Finds the first element in the iterator range [begin, end) that
// equals elem.  Element may be a native array type itself.
template <typename Iter, typename Element>
Iter ArrayAwareFind(Iter begin, Iter end, co.. Element& elem) {
  for (Iter it = begin; it != end; ++it) {
    if (internal::ArrayEq(*it, elem))
      return it;
  }
  return end;
}

// CopyArray() copies a k-dimensional native array using the elements'
// operator=, where k can be any integer >= 0.  When k is 0,
// CopyArray() degenerates into copying a single value.

template <typename T, typename U>
v.. CopyArray(co.. T* from, size_t size, U* to);

// This generic version is used when k is 0.
template <typename T, typename U>
inline v.. CopyArray(co.. T& from, U* to) { *to = from; }

// This overload is used when k >= 1.
template <typename T, typename U, size_t N>
inline v.. CopyArray(co.. T(&from)[N], U(*to)[N]) {
  internal::CopyArray(from, N, *to);
}

// This helper reduces code bloat.  If we instead put its logic inside
// the previous CopyArray() function, arrays with different sizes
// would lead to different copies of the template code.
template <typename T, typename U>
v.. CopyArray(co.. T* from, size_t size, U* to) {
  for (size_t i = 0; i != size; i++) {
    internal::CopyArray(from[i], to + i);
  }
}

// The relation between an NativeArray object (see below) and the
// native array it represents.
// We use 2 different structs to allow non-copyable types to be used, as long
// as RelationToSourceReference() is passed.
struct RelationToSourceReference {};
struct RelationToSourceCopy {};

// Adapts a native array to a read-only STL-style container.  Instead
// of the complete STL container concept, this adaptor only implements
// members useful for Google Mock's container matchers.  New members
// should be added as needed.  To simplify the implementation, we only
// support Element being a raw type (i.e. having no top-level const or
// reference modifier).  It's the client's responsibility to satisfy
// this requirement.  Element can be an array type itself (hence
// multi-dimensional arrays are supported).
template <typename Element>
n.. NativeArray {
 p..
  // STL-style container typedefs.
  typedef Element value_type;
  typedef Element* iterator;
  typedef co.. Element* const_iterator;

  // Constructs from a native array. References the source.
  NativeArray(co.. Element* array, size_t count, RelationToSourceReference) {
    InitRef(array, count);
  }

  // Constructs from a native array. Copies the source.
  NativeArray(co.. Element* array, size_t count, RelationToSourceCopy) {
    InitCopy(array, count);
  }

  // Copy constructor.
  NativeArray(co.. NativeArray& rhs) {
    (this->*rhs.clone_)(rhs.array_, rhs.size_);
  }

  ~NativeArray() {
    if (clone_ != &NativeArray::InitRef)
      de...[] array_;
  }

  // STL-style container methods.
  size_t size() co.. { return size_; }
  const_iterator begin() co.. { return array_; }
  const_iterator end() co.. { return array_ + size_; }
  bo.. operator==(co.. NativeArray& rhs) co.. {
    return size() == rhs.size() &&
        ArrayEq(begin(), size(), rhs.begin());
  }

 pr..
  enum {
    kCheckTypeIsNotConstOrAReference = StaticAssertTypeEqHelper<
        Element, GTEST_REMOVE_REFERENCE_AND_CONST_(Element)>::value
  };

  // Initializes this object with a copy of the input.
  v.. InitCopy(co.. Element* array, size_t a_size) {
    Element* co.. copy = ne. Element[a_size];
    CopyArray(array, a_size, copy);
    array_ = copy;
    size_ = a_size;
    clone_ = &NativeArray::InitCopy;
  }

  // Initializes this object with a reference of the input.
  v.. InitRef(co.. Element* array, size_t a_size) {
    array_ = array;
    size_ = a_size;
    clone_ = &NativeArray::InitRef;
  }

  co.. Element* array_;
  size_t size_;
  v.. (NativeArray::*clone_)(co.. Element*, size_t);

  GTEST_DISALLOW_ASSIGN_(NativeArray);
};

}  // namespace internal
}  // namespace testing

_de.. GTEST_MESSAGE_AT_(file, line, message, result_type) \
  ::testing::internal::AssertHelper(result_type, file, line, message) \
    = ::testing::Message()

_de.. GTEST_MESSAGE_(message, result_type) \
  GTEST_MESSAGE_AT_(__FILE__, __LINE__, message, result_type)

_de.. GTEST_FATAL_FAILURE_(message) \
  return GTEST_MESSAGE_(message, ::testing::TestPartResult::kFatalFailure)

_de.. GTEST_NONFATAL_FAILURE_(message) \
  GTEST_MESSAGE_(message, ::testing::TestPartResult::kNonFatalFailure)

_de.. GTEST_SUCCESS_(message) \
  GTEST_MESSAGE_(message, ::testing::TestPartResult::kSuccess)

// Suppress MSVC warning 4702 (unreachable code) for the code following
// statement if it returns or throws (or doesn't return or throw in some
// situations).
_de.. GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement) \
  if (::testing::internal::AlwaysTrue()) { statement; }

_de.. GTEST_TEST_THROW_(statement, expected_exception, fail) \
  GTEST_AMBIGUOUS_ELSE_BLOCKER_ \
  if (::testing::internal::ConstCharPtr gtest_msg = "") { \
    bo.. gtest_caught_expected = false; \
    try { \
      GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement); \
    } \
    catch (expected_exception co..&) { \
      gtest_caught_expected = true; \
    } \
    catch (...) { \
      gtest_msg.value = \
          "Expected: " #statement " throws an exception of type " \
          #expected_exception ".\n  Actual: it throws a different type."; \
      goto GTEST_CONCAT_TOKEN_(gtest_label_testthrow_, __LINE__); \
    } \
    if (!gtest_caught_expected) { \
      gtest_msg.value = \
          "Expected: " #statement " throws an exception of type " \
          #expected_exception ".\n  Actual: it throws nothing."; \
      goto GTEST_CONCAT_TOKEN_(gtest_label_testthrow_, __LINE__); \
    } \
  } else \
    GTEST_CONCAT_TOKEN_(gtest_label_testthrow_, __LINE__): \
      fail(gtest_msg.value)

_de.. GTEST_TEST_NO_THROW_(statement, fail) \
  GTEST_AMBIGUOUS_ELSE_BLOCKER_ \
  if (::testing::internal::AlwaysTrue()) { \
    try { \
      GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement); \
    } \
    catch (...) { \
      goto GTEST_CONCAT_TOKEN_(gtest_label_testnothrow_, __LINE__); \
    } \
  } else \
    GTEST_CONCAT_TOKEN_(gtest_label_testnothrow_, __LINE__): \
      fail("Expected: " #statement " doesn't throw an exception.\n" \
           "  Actual: it throws.")

_de.. GTEST_TEST_ANY_THROW_(statement, fail) \
  GTEST_AMBIGUOUS_ELSE_BLOCKER_ \
  if (::testing::internal::AlwaysTrue()) { \
    bo.. gtest_caught_any = false; \
    try { \
      GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement); \
    } \
    catch (...) { \
      gtest_caught_any = true; \
    } \
    if (!gtest_caught_any) { \
      goto GTEST_CONCAT_TOKEN_(gtest_label_testanythrow_, __LINE__); \
    } \
  } else \
    GTEST_CONCAT_TOKEN_(gtest_label_testanythrow_, __LINE__): \
      fail("Expected: " #statement " throws an exception.\n" \
           "  Actual: it doesn't.")


// Implements Boolean test assertions such as EXPECT_TRUE. expression can be
// either a boolean expression or an AssertionResult. text is a textual
// represenation of expression as it was passed into the EXPECT_TRUE.
_de.. GTEST_TEST_BOOLEAN_(expression, text, actual, expected, fail) \
  GTEST_AMBIGUOUS_ELSE_BLOCKER_ \
  if (co.. ::testing::AssertionResult gtest_ar_ = \
      ::testing::AssertionResult(expression)) \
    ; \
  else \
    fail(::testing::internal::GetBoolAssertionFailureMessage(\
        gtest_ar_, text, #actual, #expected).c_str())

_de.. GTEST_TEST_NO_FATAL_FAILURE_(statement, fail) \
  GTEST_AMBIGUOUS_ELSE_BLOCKER_ \
  if (::testing::internal::AlwaysTrue()) { \
    ::testing::internal::HasNewFatalFailureHelper gtest_fatal_failure_checker; \
    GTEST_SUPPRESS_UNREACHABLE_CODE_WARNING_BELOW_(statement); \
    if (gtest_fatal_failure_checker.has_new_fatal_failure()) { \
      goto GTEST_CONCAT_TOKEN_(gtest_label_testnofatal_, __LINE__); \
    } \
  } else \
    GTEST_CONCAT_TOKEN_(gtest_label_testnofatal_, __LINE__): \
      fail("Expected: " #statement " doesn't generate new fatal " \
           "failures in the current thread.\n" \
           "  Actual: it does.")

// Expands to the name of the class that implements the given test.
_de.. GTEST_TEST_CLASS_NAME_(test_case_name, test_name) \
  test_case_name##_##test_name##_Test

// Helper macro for defining tests.
_de.. GTEST_TEST_(test_case_name, test_name, parent_class, parent_id)\
n.. GTEST_TEST_CLASS_NAME_(test_case_name, test_name) : pu.. parent_class {\
 p..\
  GTEST_TEST_CLASS_NAME_(test_case_name, test_name)() {}\
 pr..\
  v.. v.. TestBody();\
  st.. ::testing::TestInfo* co.. test_info_ GTEST_ATTRIBUTE_UNUSED_;\
  GTEST_DISALLOW_COPY_AND_ASSIGN_(\
      GTEST_TEST_CLASS_NAME_(test_case_name, test_name));\
};\
\
::testing::TestInfo* co.. GTEST_TEST_CLASS_NAME_(test_case_name, test_name)\
  ::test_info_ =\
    ::testing::internal::MakeAndRegisterTestInfo(\
        #test_case_name, #test_name, NULL, NULL, \
        ::testing::internal::CodeLocation(__FILE__, __LINE__), \
        (parent_id), \
        parent_class::SetUpTestCase, \
        parent_class::TearDownTestCase, \
        ne. ::testing::internal::TestFactoryImpl<\
            GTEST_TEST_CLASS_NAME_(test_case_name, test_name)>);\
v.. GTEST_TEST_CLASS_NAME_(test_case_name, test_name)::TestBody()

e..  // GTEST_INCLUDE_GTEST_INTERNAL_GTEST_INTERNAL_H_
