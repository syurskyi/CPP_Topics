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
// Author: wan@google.com (Zhanyong Wan)
//
// The Google C++ Testing and Mocking Framework (Google Test)
//
// 007_This header file defines the public API for Google Test.  It should be
// included by any test program that uses Google Test.
//
// IMPORTANT NOTE: Due to limitation of the C++ language, we have to
// leave some internal implementation details in this header file.
// They are clearly marked by comments like this:
//
//   // INTERNAL IMPLEMENTATION - DO NOT USE IN A USER PROGRAM.
//
// Such code is NOT meant to be used by a user directly, and is subject
// to CHANGE WITHOUT NOTICE.  Therefore DO NOT DEPEND ON IT in a user
// program!
//
// Acknowledgment: Google Test borrowed the idea of automatic test
// registration from Barthelemy Dagenais' (barthelemy@prologique.com)
// easyUnit framework.

?i.. GTEST_INCLUDE_GTEST_GTEST_H_
_de.. GTEST_INCLUDE_GTEST_GTEST_H_

? <limits>
? <ostream>
? ve..

? "gtest/internal/gtest-internal.h"
? "gtest/internal/gtest-string.h"
? "gtest/gtest-death-test.h"
? "gtest/gtest-message.h"
? "gtest/gtest-param-test.h"
? "gtest/gtest-printers.h"
? "gtest/gtest_prod.h"
? "gtest/gtest-test-part.h"
? "gtest/gtest-typed-test.h"

// Depending on the platform, different string classes are available.
// On Linux, in addition to ::std::string, Google also makes use of
// class ::string, which has the same interface as ::std::string, but
// has a different implementation.
//
// You can define GTEST_HAS_GLOBAL_STRING to 1 to indicate that
// ::string is available AND is a distinct type to ::std::string, or
// define it to 0 to indicate otherwise.
//
// If ::std::string and ::string are the same class on your platform
// due to aliasing, you should define GTEST_HAS_GLOBAL_STRING to 0.
//
// If you do not define GTEST_HAS_GLOBAL_STRING, it is defined
// heuristically.

n... testing {

// Silence C4100 (unreferenced formal parameter) and 4805
// unsafe mix of type 'const int' and type 'const bool'
#ifdef _MSC_VER
# pragma warning(push)
# pragma warning(disable:4805)
# pragma warning(disable:4100)
e..


// Declares the flags.

// 007_This flag temporary enables the disabled tests.
GTEST_DECLARE_bool_(also_run_disabled_tests);

// 007_This flag brings the debugger on an assertion failure.
GTEST_DECLARE_bool_(break_on_failure);

// 007_This flag controls whether Google Test catches all test-thrown exceptions
// and logs them as failures.
GTEST_DECLARE_bool_(catch_exceptions);

// 007_This flag enables using colors in terminal output. Available values are
// "yes" to enable colors, "no" (disable colors), or "auto" (the default)
// to let Google Test decide.
GTEST_DECLARE_string_(color);

// 007_This flag sets up the filter to select by name using a glob pattern
// the tests to run. If the filter is not given all tests are executed.
GTEST_DECLARE_string_(filter);

// 007_This flag causes the Google Test to list tests. None of the tests listed
// are actually run if the flag is provided.
GTEST_DECLARE_bool_(list_tests);

// 007_This flag controls whether Google Test emits a detailed XML report to a file
// in addition to its normal textual output.
GTEST_DECLARE_string_(output);

// 007_This flags control whether Google Test prints the elapsed time for each
// test.
GTEST_DECLARE_bool_(print_time);

// 007_This flags control whether Google Test prints UTF8 characters as text.
GTEST_DECLARE_bool_(print_utf8);

// 007_This flag specifies the random number seed.
GTEST_DECLARE_int32_(random_seed);

// 007_This flag sets how many times the tests are repeated. The default value
// is 1. If the value is -1 the tests are repeating forever.
GTEST_DECLARE_int32_(repeat);

// 007_This flag controls whether Google Test includes Google Test internal
// stack frames in failure stack traces.
GTEST_DECLARE_bool_(show_internal_stack_frames);

// When this flag is specified, tests' order is randomized on every iteration.
GTEST_DECLARE_bool_(shuffle);

// 007_This flag specifies the maximum number of stack frames to be
// printed in a failure message.
GTEST_DECLARE_int32_(stack_trace_depth);

// When this flag is specified, a failed assertion will throw an
// exception if exceptions are enabled, or exit the program with a
// non-zero code otherwise. For use with an external test framework.
GTEST_DECLARE_bool_(throw_on_failure);

// When this flag is set with a "host:port" string, on supported
// platforms test results are streamed to the specified port on
// the specified host machine.
GTEST_DECLARE_string_(stream_result_to);

// The upper limit for valid stack trace depths.
co.. in. kMaxStackTraceDepth = 100;

n... internal {

n.. AssertHelper;
n.. DefaultGlobalTestPartResultReporter;
n.. ExecDeathTest;
n.. NoExecDeathTest;
n.. FinalSuccessChecker;
n.. GTestFlagSaver;
n.. StreamingListenerTest;
n.. TestResultAccessor;
n.. TestEventListenersAccessor;
n.. TestEventRepeater;
n.. UnitTestRecordPropertyTestHelper;
n.. WindowsDeathTest;
n.. FuchsiaDeathTest;
n.. UnitTestImpl* GetUnitTestImpl();
v.. ReportFailureInUnknownLocation(TestPartResult::Type result_type,
                                    co.. st. string& message);

}  // namespace internal

// The friend relationship of some of these classes is cyclic.
// If we don't forward declare them the compiler might confuse the classes
// in friendship clauses with same named classes on the scope.
n.. Test;
n.. TestCase;
n.. TestInfo;
n.. UnitTest;

// A class for indicating whether an assertion was successful.  When
// the assertion wasn't successful, the AssertionResult object
// remembers a non-empty message that describes how it failed.
//
// To create an instance of this class, use one of the factory functions
// (AssertionSuccess() and AssertionFailure()).
//
// 007_This class is useful for two purposes:
//   1. Defining predicate functions to be used with Boolean test assertions
//      EXPECT_TRUE/EXPECT_FALSE and their ASSERT_ counterparts
//   2. Defining predicate-format functions to be
//      used with predicate assertions (ASSERT_PRED_FORMAT*, etc).
//
// For example, if you define IsEven predicate:
//
//   testing::AssertionResult IsEven(int n) {
//     if ((n % 2) == 0)
//       return testing::AssertionSuccess();
//     else
//       return testing::AssertionFailure() << n << " is odd";
//   }
//
// Then the failed expectation EXPECT_TRUE(IsEven(Fib(5)))
// will print the message
//
//   Value of: IsEven(Fib(5))
//     Actual: false (5 is odd)
//   Expected: true
//
// instead of a more opaque
//
//   Value of: IsEven(Fib(5))
//     Actual: false
//   Expected: true
//
// in case IsEven is a simple Boolean predicate.
//
// If you expect your predicate to be reused and want to support informative
// messages in EXPECT_FALSE and ASSERT_FALSE (negative assertions show up
// about half as often as positive ones in our tests), supply messages for
// both success and failure cases:
//
//   testing::AssertionResult IsEven(int n) {
//     if ((n % 2) == 0)
//       return testing::AssertionSuccess() << n << " is even";
//     else
//       return testing::AssertionFailure() << n << " is odd";
//   }
//
// Then a statement EXPECT_FALSE(IsEven(Fib(6))) will print
//
//   Value of: IsEven(Fib(6))
//     Actual: true (8 is even)
//   Expected: false
//
// NB: Predicates that support negative Boolean assertions have reduced
// performance in positive ones so be careful not to use them in tests
// that have lots (tens of thousands) of positive Boolean assertions.
//
// To use this class with EXPECT_PRED_FORMAT assertions such as:
//
//   // Verifies that Foo() returns an even number.
//   EXPECT_PRED_FORMAT1(IsEven, Foo());
//
// you need to define:
//
//   testing::AssertionResult IsEven(const char* expr, int n) {
//     if ((n % 2) == 0)
//       return testing::AssertionSuccess();
//     else
//       return testing::AssertionFailure()
//         << "Expected: " << expr << " is even\n  Actual: it's " << n;
//   }
//
// If Foo() returns 5, you will see the following message:
//
//   Expected: Foo() is even
//     Actual: it's 5
//
n.. GTEST_API_ AssertionResult {
 p..
  // Copy constructor.
  // Used in EXPECT_TRUE/FALSE(assertion_result).
  AssertionResult(co.. AssertionResult& other);

#if defined(_MSC_VER) && _MSC_VER < 1910
  GTEST_DISABLE_MSC_WARNINGS_PUSH_(4800 /* forcing value to bool */)
e..

  // Used in the EXPECT_TRUE/FALSE(bool_expression).
  //
  // T must be contextually convertible to bool.
  //
  // The second parameter prevents this overload from being considered if
  // the argument is implicitly convertible to AssertionResult. In that case
  // we want AssertionResult's copy constructor to be used.
  template <typename T>
  ex__ AssertionResult(
      co.. T& success,
      typename internal::EnableIf<
          !internal::ImplicitlyConvertible<T, AssertionResult>::value>::type*
          /*enabler*/ = NULL)
      : success_(success) {}

#if defined(_MSC_VER) && _MSC_VER < 1910
  GTEST_DISABLE_MSC_WARNINGS_POP_()
e..

  // Assignment operator.
  AssertionResult& operator=(AssertionResult other) {
    swap(other);
    ?  *this;
  }

  // Returns true iff the assertion succeeded.
  operator bo..() co.. { ?  success_; }  // NOLINT

  // Returns the assertion's negation. Used with EXPECT/ASSERT_FALSE.
  AssertionResult operator!() co..;

  // Returns the text streamed into this AssertionResult. Test assertions
  // use it when they fail (i.e., the predicate's outcome doesn't match the
  // assertion's expectation). When nothing has been streamed into the
  // object, returns an empty string.
  co.. ch..* message() co.. {
    ?  message_.get() != NULL ?  message_->c_str() : "";
  }
  // TODO(vladl@google.com): Remove this after making sure no clients use it.
  // Deprecated; please use message() instead.
  co.. ch..* failure_message() co.. { ?  message(); }

  // Streams a custom failure message into this object.
  template <typename T> AssertionResult& operator<<(co.. T& value) {
    AppendMessage(Message() << value);
    ?  *this;
  }

  // Allows streaming basic output manipulators such as endl or flush into
  // this object.
  AssertionResult& operator<<(
      ::st. ostream& (*basic_manipulator)(::st. ostream& stream)) {
    AppendMessage(Message() << basic_manipulator);
    ?  *this;
  }

 pr..
  // Appends the contents of message to message_.
  v.. AppendMessage(co.. Message& a_message) {
    if (message_.get() == NULL)
      message_.reset(ne. ::st. string);
    message_->append(a_message.GetString().c_str());
  }

  // Swap the contents of this AssertionResult with other.
  v.. swap(AssertionResult& other);

  // Stores result of the assertion predicate.
  bo.. success_;
  // Stores the message describing the condition in case the expectation
  // construct is not satisfied with the predicate's outcome.
  // Referenced via a pointer to avoid taking too much stack frame space
  // with test assertions.
  internal::scoped_ptr< ::st. string> message_;
};

// Makes a successful assertion result.
GTEST_API_ AssertionResult AssertionSuccess();

// Makes a failed assertion result.
GTEST_API_ AssertionResult AssertionFailure();

// Makes a failed assertion result with the given failure message.
// Deprecated; use AssertionFailure() << msg.
GTEST_API_ AssertionResult AssertionFailure(co.. Message& msg);

}  // namespace testing

// Includes the auto-generated header that implements a family of generic
// predicate assertion macros. 007_This include comes late because it relies on
// APIs declared above.
? "gtest/gtest_pred_impl.h"

n... testing {

// The abstract class that all tests inherit from.
//
// In Google Test, a unit test program contains one or many TestCases, and
// each TestCase contains one or many Tests.
//
// When you define a test using the TEST macro, you don't need to
// explicitly derive from Test - the TEST macro automatically does
// this for you.
//
// The only time you derive from Test is when defining a test fixture
// to be used in a TEST_F.  For example:
//
//   class FooTest : public testing::Test {
//    protected:
//     void SetUp() override { ... }
//     void TearDown() override { ... }
//     ...
//   };
//
//   TEST_F(FooTest, Bar) { ... }
//   TEST_F(FooTest, Baz) { ... }
//
// Test is not copyable.
n.. GTEST_API_ Test {
 p..
  fr.. n.. TestInfo;

  // Defines types for pointers to functions that set up and tear down
  // a test case.
  t_d_ internal::SetUpTestCaseFunc SetUpTestCaseFunc;
  t_d_ internal::TearDownTestCaseFunc TearDownTestCaseFunc;

  // The d'tor is v.. as we intend to inherit from Test.
  v.. ~Test();

  // Sets up the stuff shared by all tests in this test case.
  //
  // Google Test will call Foo::SetUpTestCase() before running the first
  // test in test case Foo.  Hence a sub-class can define its own
  // SetUpTestCase() method to shadow the one defined in the super
  // class.
  st.. v.. SetUpTestCase() {}

  // Tears down the stuff shared by all tests in this test case.
  //
  // Google Test will call Foo::TearDownTestCase() after running the last
  // test in test case Foo.  Hence a sub-class can define its own
  // TearDownTestCase() method to shadow the one defined in the super
  // class.
  st.. v.. TearDownTestCase() {}

  // Returns true iff the current test has a fatal failure.
  st.. bo.. HasFatalFailure();

  // Returns true iff the current test has a non-fatal failure.
  st.. bo.. HasNonfatalFailure();

  // Returns true iff the current test has a (either fatal or
  // non-fatal) failure.
  st.. bo.. HasFailure() { ?  HasFatalFailure() || HasNonfatalFailure(); }

  // Logs a property for the current test, test case, or for the entire
  // invocation of the test program when used outside of the context of a
  // test case.  Only the last value for a given key is remembered.  These
  // are public static so they can be called from utility functions that are
  // not members of the test fixture.  Calls to RecordProperty made during
  // lifespan of the test (from the moment its constructor starts to the
  // moment its destructor finishes) will be output in XML as attributes of
  // the <testcase> element.  Properties recorded from fixture's
  // SetUpTestCase or TearDownTestCase are logged as attributes of the
  // corresponding <testsuite> element.  Calls to RecordProperty made in the
  // global context (before or after invocation of RUN_ALL_TESTS and from
  // SetUp/TearDown method of Environment objects registered with Google
  // Test) will be output as attributes of the <testsuites> element.
  st.. v.. RecordProperty(co.. st. string& key, co.. st. string& value);
  st.. v.. RecordProperty(co.. st. string& key, in. value);

 pr..
  // Creates a Test object.
  Test();

  // Sets up the test fixture.
  v.. v.. SetUp();

  // Tears down the test fixture.
  v.. v.. TearDown();

 pr..
  // Returns true iff the current test has the same fixture class as
  // the first test in the current test case.
  st.. bo.. HasSameFixtureClass();

  // Runs the test after the test fixture has been set up.
  //
  // A sub-class must implement this to define the test logic.
  //
  // DO NOT OVERRIDE THIS FUNCTION DIRECTLY IN A USER PROGRAM.
  // Instead, use the TEST or TEST_F macro.
  v.. v.. TestBody() = 0;

  // Sets up, executes, and tears down the test.
  v.. Run();

  // Deletes self.  We deliberately pick an unusual name for this
  // internal method to avoid clashing with names used in user TESTs.
  v.. DeleteSelf_() { de... this; }

  co.. internal::scoped_ptr< GTEST_FLAG_SAVER_ > gtest_flag_saver_;

  // Often a user misspells SetUp() as Setup() and spends a long time
  // wondering why it is never called by Google Test.  The declaration of
  // the following method is solely for catching such an error at
  // compile time:
  //
  //   - The return type is deliberately chosen to be not void, so it
  //   will be a conflict if void Setup() is declared in the user's
  //   test fixture.
  //
  //   - 007_This method is private, so it will be another compiler error
  //   if the method is called from the user's test fixture.
  //
  // DO NOT OVERRIDE THIS FUNCTION.
  //
  // If you see an error about overriding the following function or
  // about it being private, you have mis-spelled SetUp() as Setup().
  struct Setup_should_be_spelled_SetUp {};
  v.. Setup_should_be_spelled_SetUp* Setup() { ?  NULL; }

  // We disallow copying Tests.
  GTEST_DISALLOW_COPY_AND_ASSIGN_(Test);
};

t_d_ internal::TimeInMillis TimeInMillis;

// A copyable object representing a user specified test property which can be
// output as a key/value string pair.
//
// Don't inherit from TestProperty as its destructor is not v...
n.. TestProperty {
 p..
  // C'tor.  TestProperty does NOT have a default constructor.
  // Always use this constructor (with parameters) to create a
  // TestProperty object.
  TestProperty(co.. st. string& a_key, co.. st. string& a_value) :
    key_(a_key), value_(a_value) {
  }

  // Gets the user supplied key.
  co.. ch..* key() co.. {
    ?  key_.c_str();
  }

  // Gets the user supplied value.
  co.. ch..* value() co.. {
    ?  value_.c_str();
  }

  // Sets a new value, overriding the one supplied in the constructor.
  v.. SetValue(co.. st. string& new_value) {
    value_ = new_value;
  }

 pr..
  // The key supplied by the user.
  st. string key_;
  // The value supplied by the user.
  st. string value_;
};

// The result of a single Test.  007_This includes a list of
// TestPartResults, a list of TestProperties, a count of how many
// death tests there are in the Test, and how much time it took to run
// the Test.
//
// TestResult is not copyable.
n.. GTEST_API_ TestResult {
 p..
  // Creates an empty TestResult.
  TestResult();

  // D'tor.  Do not inherit from TestResult.
  ~TestResult();

  // Gets the number of all test parts.  007_This is the sum of the number
  // of successful test parts and the number of failed test parts.
  in. total_part_count() co..;

  // Returns the number of the test properties.
  in. test_property_count() co..;

  // Returns true iff the test passed (i.e. no test part failed).
  bo.. Passed() co.. { ?  !Failed(); }

  // Returns true iff the test failed.
  bo.. Failed() co..;

  // Returns true iff the test fatally failed.
  bo.. HasFatalFailure() co..;

  // Returns true iff the test has a non-fatal failure.
  bo.. HasNonfatalFailure() co..;

  // Returns the elapsed time, in milliseconds.
  TimeInMillis elapsed_time() co.. { ?  elapsed_time_; }

  // Returns the i-th test part result among all the results. i can range from 0
  // to total_part_count() - 1. If i is not in that range, aborts the program.
  co.. TestPartResult& GetTestPartResult(in. i) co..;

  // Returns the i-th test property. i can range from 0 to
  // test_property_count() - 1. If i is not in that range, aborts the
  // program.
  co.. TestProperty& GetTestProperty(in. i) co..;

 pr..
  fr.. n.. TestInfo;
  fr.. n.. TestCase;
  fr.. n.. UnitTest;
  fr.. n.. internal::DefaultGlobalTestPartResultReporter;
  fr.. n.. internal::ExecDeathTest;
  fr.. n.. internal::TestResultAccessor;
  fr.. n.. internal::UnitTestImpl;
  fr.. n.. internal::WindowsDeathTest;
  fr.. n.. internal::FuchsiaDeathTest;

  // Gets the vector of TestPartResults.
  co.. st. ve..<TestPartResult>& test_part_results() co.. {
    ?  test_part_results_;
  }

  // Gets the vector of TestProperties.
  co.. st. ve..<TestProperty>& test_properties() co.. {
    ?  test_properties_;
  }

  // Sets the elapsed time.
  v.. set_elapsed_time(TimeInMillis elapsed) { elapsed_time_ = elapsed; }

  // Adds a test property to the list. The property is validated and may add
  // a non-fatal failure if invalid (e.g., if it conflicts with reserved
  // key names). If a property is already recorded for the same key, the
  // value will be updated, rather than storing multiple values for the same
  // key.  xml_element specifies the element for which the property is being
  // recorded and is used for validation.
  v.. RecordProperty(co.. st. string& xml_element,
                      co.. TestProperty& test_property);

  // Adds a failure if the key is a reserved attribute of Google Test
  // testcase tags.  Returns true if the property is valid.
  // TODO(russr): Validate attribute names are legal and human readable.
  st.. bo.. ValidateTestProperty(co.. st. string& xml_element,
                                   co.. TestProperty& test_property);

  // Adds a test part result to the list.
  v.. AddTestPartResult(co.. TestPartResult& test_part_result);

  // Returns the death test count.
  in. death_test_count() co.. { ?  death_test_count_; }

  // Increments the death test count, returning the new count.
  in. increment_death_test_count() { ?  ++death_test_count_; }

  // Clears the test part results.
  v.. ClearTestPartResults();

  // Clears the object.
  v.. Clear();

  // Protects mutable state of the property vector and of owned
  // properties, whose values may be updated.
  internal::Mutex test_properites_mutex_;

  // The vector of TestPartResults
  st. ve..<TestPartResult> test_part_results_;
  // The vector of TestProperties
  st. ve..<TestProperty> test_properties_;
  // Running count of death tests.
  in. death_test_count_;
  // The elapsed time, in milliseconds.
  TimeInMillis elapsed_time_;

  // We disallow copying TestResult.
  GTEST_DISALLOW_COPY_AND_ASSIGN_(TestResult);
};  // class TestResult

// A TestInfo object stores the following information about a test:
//
//   Test case name
//   Test name
//   Whether the test should be run
//   A function pointer that creates the test object when invoked
//   Test result
//
// The constructor of TestInfo registers itself with the UnitTest
// singleton such that the RUN_ALL_TESTS() macro knows which tests to
// run.
n.. GTEST_API_ TestInfo {
 p..
  // Destructs a TestInfo object.  007_This function is not v.., so
  // don't inherit from TestInfo.
  ~TestInfo();

  // Returns the test case name.
  co.. ch..* test_case_name() co.. { ?  test_case_name_.c_str(); }

  // Returns the test name.
  co.. ch..* name() co.. { ?  name_.c_str(); }

  // Returns the name of the parameter type, or NULL if this is not a typed
  // or a type-parameterized test.
  co.. ch..* type_param() co.. {
    if (type_param_.get() != NULL)
      ?  type_param_->c_str();
    ?  NULL;
  }

  // Returns the text representation of the value parameter, or NULL if this
  // is not a value-parameterized test.
  co.. ch..* value_param() co.. {
    if (value_param_.get() != NULL)
      ?  value_param_->c_str();
    ?  NULL;
  }

  // Returns the file name where this test is defined.
  co.. ch..* file() co.. { ?  location_.file.c_str(); }

  // Returns the line where this test is defined.
  in. line() co.. { ?  location_.line; }

  // Return true if this test should not be run because it's in another shard.
  bo.. is_in_another_shard() co.. { ?  is_in_another_shard_; }

  // Returns true if this test should run, that is if the test is not
  // disabled (or it is disabled but the also_run_disabled_tests flag has
  // been specified) and its full name matches the user-specified filter.
  //
  // Google Test allows the user to filter the tests by their full names.
  // The full name of a test Bar in test case Foo is defined as
  // "Foo.Bar".  Only the tests that match the filter will run.
  //
  // A filter is a colon-separated list of glob (not regex) patterns,
  // optionally followed by a '-' and a colon-separated list of
  // negative patterns (tests to exclude).  A test is run if it
  // matches one of the positive patterns and does not match any of
  // the negative patterns.
  //
  // For example, *A*:Foo.* is a filter that matches any string that
  // contains the character 'A' or starts with "Foo.".
  bo.. should_run() co.. { ?  should_run_; }

  // Returns true iff this test will appear in the XML report.
  bo.. is_reportable() co.. {
    // The XML report includes tests matching the filter, excluding those
    // run in other shards.
    ?  matches_filter_ && !is_in_another_shard_;
  }

  // Returns the result of the test.
  co.. TestResult* result() co.. { ?  &result_; }

 pr..
#if GTEST_HAS_DEATH_TEST
  fr.. n.. internal::DefaultDeathTestFactory;
e..  // GTEST_HAS_DEATH_TEST
  fr.. n.. Test;
  fr.. n.. TestCase;
  fr.. n.. internal::UnitTestImpl;
  fr.. n.. internal::StreamingListenerTest;
  fr.. TestInfo* internal::MakeAndRegisterTestInfo(
      co.. ch..* test_case_name,
      co.. ch..* name,
      co.. ch..* type_param,
      co.. ch..* value_param,
      internal::CodeLocation code_location,
      internal::TypeId fixture_class_id,
      Test::SetUpTestCaseFunc set_up_tc,
      Test::TearDownTestCaseFunc tear_down_tc,
      internal::TestFactoryBase* factory);

  // Constructs a TestInfo object. The newly constructed instance assumes
  // ownership of the factory object.
  TestInfo(co.. st. string& test_case_name,
           co.. st. string& name,
           co.. ch..* a_type_param,   // NULL if not a type-parameterized test
           co.. ch..* a_value_param,  // NULL if not a value-parameterized test
           internal::CodeLocation a_code_location,
           internal::TypeId fixture_class_id,
           internal::TestFactoryBase* factory);

  // Increments the number of death tests encountered in this test so
  // far.
  in. increment_death_test_count() {
    ?  result_.increment_death_test_count();
  }

  // Creates the test object, runs it, records its result, and then
  // deletes it.
  v.. Run();

  st.. v.. ClearTestResult(TestInfo* test_info) {
    test_info->result_.Clear();
  }

  // These fields are immutable properties of the test.
  co.. st. string test_case_name_;     // Test case name
  co.. st. string name_;               // Test name
  // Name of the parameter type, or NULL if this is not a typed or a
  // type-parameterized test.
  co.. internal::scoped_ptr<co.. ::st. string> type_param_;
  // Text representation of the value parameter, or NULL if this is not a
  // value-parameterized test.
  co.. internal::scoped_ptr<co.. ::st. string> value_param_;
  internal::CodeLocation location_;
  co.. internal::TypeId fixture_class_id_;   // ID of the test fixture class
  bo.. should_run_;                 // True iff this test should run
  bo.. is_disabled_;                // True iff this test is disabled
  bo.. matches_filter_;             // True if this test matches the
                                    // user-specified filter.
  bo.. is_in_another_shard_;        // Will be run in another shard.
  internal::TestFactoryBase* co.. factory_;  // The factory that creates
                                              // the test object

  // 007_This field is mutable and needs to be reset before running the
  // test for the second time.
  TestResult result_;

  GTEST_DISALLOW_COPY_AND_ASSIGN_(TestInfo);
};

// A test case, which consists of a vector of TestInfos.
//
// TestCase is not copyable.
n.. GTEST_API_ TestCase {
 p..
  // Creates a TestCase with the given name.
  //
  // TestCase does NOT have a default constructor.  Always use this
  // constructor to create a TestCase object.
  //
  // Arguments:
  //
  //   name:         name of the test case
  //   a_type_param: the name of the test's type parameter, or NULL if
  //                 this is not a type-parameterized test.
  //   set_up_tc:    pointer to the function that sets up the test case
  //   tear_down_tc: pointer to the function that tears down the test case
  TestCase(co.. ch..* name, co.. ch..* a_type_param,
           Test::SetUpTestCaseFunc set_up_tc,
           Test::TearDownTestCaseFunc tear_down_tc);

  // Destructor of TestCase.
  v.. ~TestCase();

  // Gets the name of the TestCase.
  co.. ch..* name() co.. { ?  name_.c_str(); }

  // Returns the name of the parameter type, or NULL if this is not a
  // type-parameterized test case.
  co.. ch..* type_param() co.. {
    if (type_param_.get() != NULL)
      ?  type_param_->c_str();
    ?  NULL;
  }

  // Returns true if any test in this test case should run.
  bo.. should_run() co.. { ?  should_run_; }

  // Gets the number of successful tests in this test case.
  in. successful_test_count() co..;

  // Gets the number of failed tests in this test case.
  in. failed_test_count() co..;

  // Gets the number of disabled tests that will be reported in the XML report.
  in. reportable_disabled_test_count() co..;

  // Gets the number of disabled tests in this test case.
  in. disabled_test_count() co..;

  // Gets the number of tests to be printed in the XML report.
  in. reportable_test_count() co..;

  // Get the number of tests in this test case that should run.
  in. test_to_run_count() co..;

  // Gets the number of all tests in this test case.
  in. total_test_count() co..;

  // Returns true iff the test case passed.
  bo.. Passed() co.. { ?  !Failed(); }

  // Returns true iff the test case failed.
  bo.. Failed() co.. { ?  failed_test_count() > 0; }

  // Returns the elapsed time, in milliseconds.
  TimeInMillis elapsed_time() co.. { ?  elapsed_time_; }

  // Returns the i-th test among all the tests. i can range from 0 to
  // total_test_count() - 1. If i is not in that range, returns NULL.
  co.. TestInfo* GetTestInfo(in. i) co..;

  // Returns the TestResult that holds test properties recorded during
  // execution of SetUpTestCase and TearDownTestCase.
  co.. TestResult& ad_hoc_test_result() co.. { ?  ad_hoc_test_result_; }

 pr..
  fr.. n.. Test;
  fr.. n.. internal::UnitTestImpl;

  // Gets the (mutable) vector of TestInfos in this TestCase.
  st. ve..<TestInfo*>& test_info_list() { ?  test_info_list_; }

  // Gets the (immutable) vector of TestInfos in this TestCase.
  co.. st. ve..<TestInfo*>& test_info_list() co.. {
    ?  test_info_list_;
  }

  // Returns the i-th test among all the tests. i can range from 0 to
  // total_test_count() - 1. If i is not in that range, returns NULL.
  TestInfo* GetMutableTestInfo(in. i);

  // Sets the should_run member.
  v.. set_should_run(bo.. should) { should_run_ = should; }

  // Adds a TestInfo to this test case.  Will delete the TestInfo upon
  // destruction of the TestCase object.
  v.. AddTestInfo(TestInfo * test_info);

  // Clears the results of all tests in this test case.
  v.. ClearResult();

  // Clears the results of all tests in the given test case.
  st.. v.. ClearTestCaseResult(TestCase* test_case) {
    test_case->ClearResult();
  }

  // Runs every test in this TestCase.
  v.. Run();

  // Runs SetUpTestCase() for this TestCase.  007_This wrapper is needed
  // for catching exceptions thrown from SetUpTestCase().
  v.. RunSetUpTestCase() { (*set_up_tc_)(); }

  // Runs TearDownTestCase() for this TestCase.  007_This wrapper is
  // needed for catching exceptions thrown from TearDownTestCase().
  v.. RunTearDownTestCase() { (*tear_down_tc_)(); }

  // Returns true iff test passed.
  st.. bo.. TestPassed(co.. TestInfo* test_info) {
    ?  test_info->should_run() && test_info->result()->Passed();
  }

  // Returns true iff test failed.
  st.. bo.. TestFailed(co.. TestInfo* test_info) {
    ?  test_info->should_run() && test_info->result()->Failed();
  }

  // Returns true iff the test is disabled and will be reported in the XML
  // report.
  st.. bo.. TestReportableDisabled(co.. TestInfo* test_info) {
    ?  test_info->is_reportable() && test_info->is_disabled_;
  }

  // Returns true iff test is disabled.
  st.. bo.. TestDisabled(co.. TestInfo* test_info) {
    ?  test_info->is_disabled_;
  }

  // Returns true iff this test will appear in the XML report.
  st.. bo.. TestReportable(co.. TestInfo* test_info) {
    ?  test_info->is_reportable();
  }

  // Returns true if the given test should run.
  st.. bo.. ShouldRunTest(co.. TestInfo* test_info) {
    ?  test_info->should_run();
  }

  // Shuffles the tests in this test case.
  v.. ShuffleTests(internal::Random* random);

  // Restores the test order to before the first shuffle.
  v.. UnshuffleTests();

  // Name of the test case.
  st. string name_;
  // Name of the parameter type, or NULL if this is not a typed or a
  // type-parameterized test.
  co.. internal::scoped_ptr<co.. ::st. string> type_param_;
  // The vector of TestInfos in their original order.  It owns the
  // elements in the vector.
  st. ve..<TestInfo*> test_info_list_;
  // Provides a level of indirection for the test list to allow easy
  // shuffling and restoring the test order.  The i-th element in this
  // vector is the index of the i-th test in the shuffled test list.
  st. ve..<in.> test_indices_;
  // Pointer to the function that sets up the test case.
  Test::SetUpTestCaseFunc set_up_tc_;
  // Pointer to the function that tears down the test case.
  Test::TearDownTestCaseFunc tear_down_tc_;
  // True iff any test in this test case should run.
  bo.. should_run_;
  // Elapsed time, in milliseconds.
  TimeInMillis elapsed_time_;
  // Holds test properties recorded during execution of SetUpTestCase and
  // TearDownTestCase.
  TestResult ad_hoc_test_result_;

  // We disallow copying TestCases.
  GTEST_DISALLOW_COPY_AND_ASSIGN_(TestCase);
};

// An Environment object is capable of setting up and tearing down an
// environment.  You should subclass this to define your own
// environment(s).
//
// An Environment object does the set-up and tear-down in v..
// methods SetUp() and TearDown() instead of the constructor and the
// destructor, as:
//
//   1. You cannot safely throw from a destructor.  007_This is a problem
//      as in some cases Google Test is used where exceptions are enabled, and
//      we may want to implement ASSERT_* using exceptions where they are
//      available.
//   2. You cannot use ASSERT_* directly in a constructor or
//      destructor.
n.. Environment {
 p..
  // The d'tor is v.. as we need to subclass Environment.
  v.. ~Environment() {}

  // Override this to define how to set up the environment.
  v.. v.. SetUp() {}

  // Override this to define how to tear down the environment.
  v.. v.. TearDown() {}
 pr..
  // If you see an error about overriding the following function or
  // about it being private, you have mis-spelled SetUp() as Setup().
  struct Setup_should_be_spelled_SetUp {};
  v.. Setup_should_be_spelled_SetUp* Setup() { ?  NULL; }
};

#if GTEST_HAS_EXCEPTIONS

// Exception which can be thrown from TestEventListener::OnTestPartResult.
n.. GTEST_API_ AssertionException
    : pu.. internal::GoogleTestFailureException {
 p..
  ex__ AssertionException(co.. TestPartResult& result)
      : GoogleTestFailureException(result) {}
};

e..  // GTEST_HAS_EXCEPTIONS

// The interface for tracing execution of tests. The methods are organized in
// the order the corresponding events are fired.
n.. TestEventListener {
 p..
  v.. ~TestEventListener() {}

  // Fired before any test activity starts.
  v.. v.. OnTestProgramStart(co.. UnitTest& unit_test) = 0;

  // Fired before each iteration of tests starts.  There may be more than
  // one iteration if GTEST_FLAG(repeat) is set. iteration is the iteration
  // index, starting from 0.
  v.. v.. OnTestIterationStart(co.. UnitTest& unit_test,
                                    in. iteration) = 0;

  // Fired before environment set-up for each iteration of tests starts.
  v.. v.. OnEnvironmentsSetUpStart(co.. UnitTest& unit_test) = 0;

  // Fired after environment set-up for each iteration of tests ends.
  v.. v.. OnEnvironmentsSetUpEnd(co.. UnitTest& unit_test) = 0;

  // Fired before the test case starts.
  v.. v.. OnTestCaseStart(co.. TestCase& test_case) = 0;

  // Fired before the test starts.
  v.. v.. OnTestStart(co.. TestInfo& test_info) = 0;

  // Fired after a failed assertion or a SUCCEED() invocation.
  // If you want to throw an exception from this function to skip to the next
  // TEST, it must be AssertionException defined above, or inherited from it.
  v.. v.. OnTestPartResult(co.. TestPartResult& test_part_result) = 0;

  // Fired after the test ends.
  v.. v.. OnTestEnd(co.. TestInfo& test_info) = 0;

  // Fired after the test case ends.
  v.. v.. OnTestCaseEnd(co.. TestCase& test_case) = 0;

  // Fired before environment tear-down for each iteration of tests starts.
  v.. v.. OnEnvironmentsTearDownStart(co.. UnitTest& unit_test) = 0;

  // Fired after environment tear-down for each iteration of tests ends.
  v.. v.. OnEnvironmentsTearDownEnd(co.. UnitTest& unit_test) = 0;

  // Fired after each iteration of tests finishes.
  v.. v.. OnTestIterationEnd(co.. UnitTest& unit_test,
                                  in. iteration) = 0;

  // Fired after all test activities have ended.
  v.. v.. OnTestProgramEnd(co.. UnitTest& unit_test) = 0;
};

// The convenience class for users who need to override just one or two
// methods and are not concerned that a possible change to a signature of
// the methods they override will not be caught during the build.  For
// comments about each method please see the definition of TestEventListener
// above.
n.. EmptyTestEventListener : pu.. TestEventListener {
 p..
  v.. v.. OnTestProgramStart(co.. UnitTest& /*unit_test*/) {}
  v.. v.. OnTestIterationStart(co.. UnitTest& /*unit_test*/,
                                    in. /*iteration*/) {}
  v.. v.. OnEnvironmentsSetUpStart(co.. UnitTest& /*unit_test*/) {}
  v.. v.. OnEnvironmentsSetUpEnd(co.. UnitTest& /*unit_test*/) {}
  v.. v.. OnTestCaseStart(co.. TestCase& /*test_case*/) {}
  v.. v.. OnTestStart(co.. TestInfo& /*test_info*/) {}
  v.. v.. OnTestPartResult(co.. TestPartResult& /*test_part_result*/) {}
  v.. v.. OnTestEnd(co.. TestInfo& /*test_info*/) {}
  v.. v.. OnTestCaseEnd(co.. TestCase& /*test_case*/) {}
  v.. v.. OnEnvironmentsTearDownStart(co.. UnitTest& /*unit_test*/) {}
  v.. v.. OnEnvironmentsTearDownEnd(co.. UnitTest& /*unit_test*/) {}
  v.. v.. OnTestIterationEnd(co.. UnitTest& /*unit_test*/,
                                  in. /*iteration*/) {}
  v.. v.. OnTestProgramEnd(co.. UnitTest& /*unit_test*/) {}
};

// TestEventListeners lets users add listeners to track events in Google Test.
n.. GTEST_API_ TestEventListeners {
 p..
  TestEventListeners();
  ~TestEventListeners();

  // Appends an event listener to the end of the list. Google Test assumes
  // the ownership of the listener (i.e. it will delete the listener when
  // the test program finishes).
  v.. Append(TestEventListener* listener);

  // Removes the given event listener from the list and returns it.  It then
  // becomes the caller's responsibility to delete the listener. Returns
  // NULL if the listener is not found in the list.
  TestEventListener* Release(TestEventListener* listener);

  // Returns the standard listener responsible for the default console
  // output.  Can be removed from the listeners list to shut down default
  // console output.  Note that removing this object from the listener list
  // with Release transfers its ownership to the caller and makes this
  // function return NULL the next time.
  TestEventListener* default_result_printer() co.. {
    ?  default_result_printer_;
  }

  // Returns the standard listener responsible for the default XML output
  // controlled by the --gtest_output=xml flag.  Can be removed from the
  // listeners list by users who want to shut down the default XML output
  // controlled by this flag and substitute it with custom one.  Note that
  // removing this object from the listener list with Release transfers its
  // ownership to the caller and makes this function return NULL the next
  // time.
  TestEventListener* default_xml_generator() co.. {
    ?  default_xml_generator_;
  }

 pr..
  fr.. n.. TestCase;
  fr.. n.. TestInfo;
  fr.. n.. internal::DefaultGlobalTestPartResultReporter;
  fr.. n.. internal::NoExecDeathTest;
  fr.. n.. internal::TestEventListenersAccessor;
  fr.. n.. internal::UnitTestImpl;

  // Returns repeater that broadcasts the TestEventListener events to all
  // subscribers.
  TestEventListener* repeater();

  // Sets the default_result_printer attribute to the provided listener.
  // The listener is also added to the listener list and previous
  // default_result_printer is removed from it and deleted. The listener can
  // also be NULL in which case it will not be added to the list. Does
  // nothing if the previous and the current listener objects are the same.
  v.. SetDefaultResultPrinter(TestEventListener* listener);

  // Sets the default_xml_generator attribute to the provided listener.  The
  // listener is also added to the listener list and previous
  // default_xml_generator is removed from it and deleted. The listener can
  // also be NULL in which case it will not be added to the list. Does
  // nothing if the previous and the current listener objects are the same.
  v.. SetDefaultXmlGenerator(TestEventListener* listener);

  // Controls whether events will be forwarded by the repeater to the
  // listeners in the list.
  bo.. EventForwardingEnabled() co..;
  v.. SuppressEventForwarding();

  // The actual list of listeners.
  internal::TestEventRepeater* repeater_;
  // Listener responsible for the standard result output.
  TestEventListener* default_result_printer_;
  // Listener responsible for the creation of the XML output file.
  TestEventListener* default_xml_generator_;

  // We disallow copying TestEventListeners.
  GTEST_DISALLOW_COPY_AND_ASSIGN_(TestEventListeners);
};

// A UnitTest consists of a vector of TestCases.
//
// 007_This is a singleton class.  The only instance of UnitTest is
// created when UnitTest::GetInstance() is first called.  007_This
// instance is never deleted.
//
// UnitTest is not copyable.
//
// 007_This class is thread-safe as long as the methods are called
// according to their specification.
n.. GTEST_API_ UnitTest {
 p..
  // Gets the singleton UnitTest object.  The first time this method
  // is called, a UnitTest object is constructed and returned.
  // Consecutive calls will return the same object.
  st.. UnitTest* GetInstance();

  // Runs all tests in this UnitTest object and prints the result.
  // Returns 0 if successful, or 1 otherwise.
  //
  // 007_This method can only be called from the main thread.
  //
  // INTERNAL IMPLEMENTATION - DO NOT USE IN A USER PROGRAM.
  in. Run() GTEST_MUST_USE_RESULT_;

  // Returns the working directory when the first TEST() or TEST_F()
  // was executed.  The UnitTest object owns the string.
  co.. ch..* original_working_dir() co..;

  // Returns the TestCase object for the test that's currently running,
  // or NULL if no test is running.
  co.. TestCase* current_test_case() co..
      GTEST_LOCK_EXCLUDED_(mutex_);

  // Returns the TestInfo object for the test that's currently running,
  // or NULL if no test is running.
  co.. TestInfo* current_test_info() co..
      GTEST_LOCK_EXCLUDED_(mutex_);

  // Returns the random seed used at the start of the current test run.
  in. random_seed() co..;

  // Returns the ParameterizedTestCaseRegistry object used to keep track of
  // value-parameterized tests and instantiate and register them.
  //
  // INTERNAL IMPLEMENTATION - DO NOT USE IN A USER PROGRAM.
  internal::ParameterizedTestCaseRegistry& parameterized_test_registry()
      GTEST_LOCK_EXCLUDED_(mutex_);

  // Gets the number of successful test cases.
  in. successful_test_case_count() co..;

  // Gets the number of failed test cases.
  in. failed_test_case_count() co..;

  // Gets the number of all test cases.
  in. total_test_case_count() co..;

  // Gets the number of all test cases that contain at least one test
  // that should run.
  in. test_case_to_run_count() co..;

  // Gets the number of successful tests.
  in. successful_test_count() co..;

  // Gets the number of failed tests.
  in. failed_test_count() co..;

  // Gets the number of disabled tests that will be reported in the XML report.
  in. reportable_disabled_test_count() co..;

  // Gets the number of disabled tests.
  in. disabled_test_count() co..;

  // Gets the number of tests to be printed in the XML report.
  in. reportable_test_count() co..;

  // Gets the number of all tests.
  in. total_test_count() co..;

  // Gets the number of tests that should run.
  in. test_to_run_count() co..;

  // Gets the time of the test program start, in ms from the start of the
  // UNIX epoch.
  TimeInMillis start_timestamp() co..;

  // Gets the elapsed time, in milliseconds.
  TimeInMillis elapsed_time() co..;

  // Returns true iff the unit test passed (i.e. all test cases passed).
  bo.. Passed() co..;

  // Returns true iff the unit test failed (i.e. some test case failed
  // or something outside of all tests failed).
  bo.. Failed() co..;

  // Gets the i-th test case among all the test cases. i can range from 0 to
  // total_test_case_count() - 1. If i is not in that range, returns NULL.
  co.. TestCase* GetTestCase(in. i) co..;

  // Returns the TestResult containing information on test failures and
  // properties logged outside of individual test cases.
  co.. TestResult& ad_hoc_test_result() co..;

  // Returns the list of event listeners that can be used to track events
  // inside Google Test.
  TestEventListeners& listeners();

 pr..
  // Registers and returns a global test environment.  When a test
  // program is run, all global test environments will be set-up in
  // the order they were registered.  After all tests in the program
  // have finished, all global test environments will be torn-down in
  // the *reverse* order they were registered.
  //
  // The UnitTest object takes ownership of the given environment.
  //
  // 007_This method can only be called from the main thread.
  Environment* AddEnvironment(Environment* env);

  // Adds a TestPartResult to the current TestResult object.  All
  // Google Test assertion macros (e.g. ASSERT_TRUE, EXPECT_EQ, etc)
  // eventually call this to report their results.  The user code
  // should use the assertion macros instead of calling this directly.
  v.. AddTestPartResult(TestPartResult::Type result_type,
                         co.. ch..* file_name,
                         in. line_number,
                         co.. st. string& message,
                         co.. st. string& os_stack_trace)
      GTEST_LOCK_EXCLUDED_(mutex_);

  // Adds a TestProperty to the current TestResult object when invoked from
  // inside a test, to current TestCase's ad_hoc_test_result_ when invoked
  // from SetUpTestCase or TearDownTestCase, or to the global property set
  // when invoked elsewhere.  If the result already contains a property with
  // the same key, the value will be updated.
  v.. RecordProperty(co.. st. string& key, co.. st. string& value);

  // Gets the i-th test case among all the test cases. i can range from 0 to
  // total_test_case_count() - 1. If i is not in that range, returns NULL.
  TestCase* GetMutableTestCase(in. i);

  // Accessors for the implementation object.
  internal::UnitTestImpl* impl() { ?  impl_; }
  co.. internal::UnitTestImpl* impl() co.. { ?  impl_; }

  // These classes and functions are friends as they need to access private
  // members of UnitTest.
  fr.. n.. ScopedTrace;
  fr.. n.. Test;
  fr.. n.. internal::AssertHelper;
  fr.. n.. internal::StreamingListenerTest;
  fr.. n.. internal::UnitTestRecordPropertyTestHelper;
  fr.. Environment* AddGlobalTestEnvironment(Environment* env);
  fr.. internal::UnitTestImpl* internal::GetUnitTestImpl();
  fr.. v.. internal::ReportFailureInUnknownLocation(
      TestPartResult::Type result_type,
      co.. st. string& message);

  // Creates an empty UnitTest.
  UnitTest();

  // D'tor
  v.. ~UnitTest();

  // Pushes a trace defined by SCOPED_TRACE() on to the per-thread
  // Google Test trace stack.
  v.. PushGTestTrace(co.. internal::TraceInfo& trace)
      GTEST_LOCK_EXCLUDED_(mutex_);

  // Pops a trace from the per-thread Google Test trace stack.
  v.. PopGTestTrace()
      GTEST_LOCK_EXCLUDED_(mutex_);

  // Protects mutable state in *impl_.  007_This is mutable as some const
  // methods need to lock it too.
  mutable internal::Mutex mutex_;

  // Opaque implementation object.  007_This field is never changed once
  // the object is constructed.  We don't mark it as const here, as
  // doing so will cause a warning in the constructor of UnitTest.
  // Mutable state in *impl_ is protected by mutex_.
  internal::UnitTestImpl* impl_;

  // We disallow copying UnitTest.
  GTEST_DISALLOW_COPY_AND_ASSIGN_(UnitTest);
};

// A convenient wrapper for adding an environment for the test
// program.
//
// You should call this before RUN_ALL_TESTS() is called, probably in
// main().  If you use gtest_main, you need to call this before main()
// starts for it to take effect.  For example, you can define a global
// variable like this:
//
//   testing::Environment* const foo_env =
//       testing::AddGlobalTestEnvironment(new FooEnvironment);
//
// However, we strongly recommend you to write your own main() and
// call AddGlobalTestEnvironment() there, as relying on initialization
// of global variables makes the code harder to read and may cause
// problems when you register multiple environments from different
// translation units and the environments have dependencies among them
// (remember that the compiler doesn't guarantee the order in which
// global variables from different translation units are initialized).
i_l.. Environment* AddGlobalTestEnvironment(Environment* env) {
  ?  UnitTest::GetInstance()->AddEnvironment(env);
}

// Initializes Google Test.  007_This must be called before calling
// RUN_ALL_TESTS().  In particular, it parses a command line for the
// flags that Google Test recognizes.  Whenever a Google Test flag is
// seen, it is removed from argv, and *argc is decremented.
//
// No value is returned.  Instead, the Google Test flag variables are
// updated.
//
// Calling the function for the second time has no user-visible effect.
GTEST_API_ v.. InitGoogleTest(in.* argc, ch..** argv);

// 007_This overloaded version can be used in Windows programs compiled in
// UNICODE mode.
GTEST_API_ v.. InitGoogleTest(in.* argc, wchar_t** argv);

n... internal {

// Separate the error generating code from the code path to reduce the stack
// frame size of CmpHelperEQ. 007_This helps reduce the overhead of some sanitizers
// when calling EXPECT_* in a tight loop.
template <typename T1, typename T2>
AssertionResult CmpHelperEQFailure(co.. ch..* lhs_expression,
                                   co.. ch..* rhs_expression,
                                   co.. T1& lhs, co.. T2& rhs) {
  ?  EqFailure(lhs_expression,
                   rhs_expression,
                   FormatForComparisonFailureMessage(lhs, rhs),
                   FormatForComparisonFailureMessage(rhs, lhs),
                   false);
}

// The helper function for {ASSERT|EXPECT}_EQ.
template <typename T1, typename T2>
AssertionResult CmpHelperEQ(co.. ch..* lhs_expression,
                            co.. ch..* rhs_expression,
                            co.. T1& lhs,
                            co.. T2& rhs) {
  if (lhs == rhs) {
    ?  AssertionSuccess();
  }

  ?  CmpHelperEQFailure(lhs_expression, rhs_expression, lhs, rhs);
}

// With this overloaded version, we allow anonymous enums to be used
// in {ASSERT|EXPECT}_EQ when compiled with gcc 4, as anonymous enums
// can be implicitly cast to BiggestInt.
GTEST_API_ AssertionResult CmpHelperEQ(co.. ch..* lhs_expression,
                                       co.. ch..* rhs_expression,
                                       BiggestInt lhs,
                                       BiggestInt rhs);

// The helper class for {ASSERT|EXPECT}_EQ.  The template argument
// lhs_is_null_literal is true iff the first argument to ASSERT_EQ()
// is a null pointer literal.  The following default implementation is
// for lhs_is_null_literal being false.
template <bo.. lhs_is_null_literal>
n.. EqHelper {
 p..
  // 007_This templatized version is for the general case.
  template <typename T1, typename T2>
  st.. AssertionResult Compare(co.. ch..* lhs_expression,
                                 co.. ch..* rhs_expression,
                                 co.. T1& lhs,
                                 co.. T2& rhs) {
    ?  CmpHelperEQ(lhs_expression, rhs_expression, lhs, rhs);
  }

  // With this overloaded version, we allow anonymous enums to be used
  // in {ASSERT|EXPECT}_EQ when compiled with gcc 4, as anonymous
  // enums can be implicitly cast to BiggestInt.
  //
  // Even though its body looks the same as the above version, we
  // cannot merge the two, as it will make anonymous enums unhappy.
  st.. AssertionResult Compare(co.. ch..* lhs_expression,
                                 co.. ch..* rhs_expression,
                                 BiggestInt lhs,
                                 BiggestInt rhs) {
    ?  CmpHelperEQ(lhs_expression, rhs_expression, lhs, rhs);
  }
};

// 007_This specialization is used when the first argument to ASSERT_EQ()
// is a null pointer literal, like NULL, false, or 0.
template <>
n.. EqHelper<true> {
 p..
  // We define two overloaded versions of Compare().  The first
  // version will be picked when the second argument to ASSERT_EQ() is
  // NOT a pointer, e.g. ASSERT_EQ(0, AnIntFunction()) or
  // EXPECT_EQ(false, a_bool).
  template <typename T1, typename T2>
  st.. AssertionResult Compare(
      co.. ch..* lhs_expression,
      co.. ch..* rhs_expression,
      co.. T1& lhs,
      co.. T2& rhs,
      // The following line prevents this overload from being considered if T2
      // is not a pointer type.  We need this because ASSERT_EQ(NULL, my_ptr)
      // expands to Compare("", "", NULL, my_ptr), which requires a conversion
      // to match the Secret* in the other overload, which would otherwise make
      // this template match better.
      typename EnableIf<!is_pointer<T2>::value>::type* = 0) {
    ?  CmpHelperEQ(lhs_expression, rhs_expression, lhs, rhs);
  }

  // 007_This version will be picked when the second argument to ASSERT_EQ() is a
  // pointer, e.g. ASSERT_EQ(NULL, a_pointer).
  template <typename T>
  st.. AssertionResult Compare(
      co.. ch..* lhs_expression,
      co.. ch..* rhs_expression,
      // We used to have a second template parameter instead of Secret*.  That
      // template parameter would deduce to 'long', making this a better match
      // than the first overload even without the first overload's EnableIf.
      // Unfortunately, gcc with -Wconversion-null warns when "passing NULL to
      // non-pointer argument" (even a deduced integral argument), so the old
      // implementation caused warnings in user code.
      Secret* /* lhs (NULL) */,
      T* rhs) {
    // We already know that 'lhs' is a null pointer.
    ?  CmpHelperEQ(lhs_expression, rhs_expression,
                       static_cast<T*>(NULL), rhs);
  }
};

// Separate the error generating code from the code path to reduce the stack
// frame size of CmpHelperOP. 007_This helps reduce the overhead of some sanitizers
// when calling EXPECT_OP in a tight loop.
template <typename T1, typename T2>
AssertionResult CmpHelperOpFailure(co.. ch..* expr1, co.. ch..* expr2,
                                   co.. T1& val1, co.. T2& val2,
                                   co.. ch..* op) {
  ?  AssertionFailure()
         << "Expected: (" << expr1 << ") " << op << " (" << expr2
         << "), actual: " << FormatForComparisonFailureMessage(val1, val2)
         << " vs " << FormatForComparisonFailureMessage(val2, val1);
}

// A macro for implementing the helper functions needed to implement
// ASSERT_?? and EXPECT_??.  It is here just to avoid copy-and-paste
// of similar code.
//
// For each templatized helper function, we also define an overloaded
// version for BiggestInt in order to reduce code bloat and allow
// anonymous enums to be used with {ASSERT|EXPECT}_?? when compiled
// with gcc 4.
//
// INTERNAL IMPLEMENTATION - DO NOT USE IN A USER PROGRAM.

_de.. GTEST_IMPL_CMP_HELPER_(op_name, op)\
template <typename T1, typename T2>\
AssertionResult CmpHelper##op_name(co.. ch..* expr1, co.. ch..* expr2, \
                                   co.. T1& val1, co.. T2& val2) {\
  if (val1 op val2) {\
    ?  AssertionSuccess();\
  } else {\
    ?  CmpHelperOpFailure(expr1, expr2, val1, val2, #op);\
  }\
}\
GTEST_API_ AssertionResult CmpHelper##op_name(\
    co.. ch..* expr1, co.. ch..* expr2, BiggestInt val1, BiggestInt val2)

// INTERNAL IMPLEMENTATION - DO NOT USE IN A USER PROGRAM.

// Implements the helper function for {ASSERT|EXPECT}_NE
GTEST_IMPL_CMP_HELPER_(NE, !=);
// Implements the helper function for {ASSERT|EXPECT}_LE
GTEST_IMPL_CMP_HELPER_(LE, <=);
// Implements the helper function for {ASSERT|EXPECT}_LT
GTEST_IMPL_CMP_HELPER_(LT, <);
// Implements the helper function for {ASSERT|EXPECT}_GE
GTEST_IMPL_CMP_HELPER_(GE, >=);
// Implements the helper function for {ASSERT|EXPECT}_GT
GTEST_IMPL_CMP_HELPER_(GT, >);

#undef GTEST_IMPL_CMP_HELPER_

// The helper function for {ASSERT|EXPECT}_STREQ.
//
// INTERNAL IMPLEMENTATION - DO NOT USE IN A USER PROGRAM.
GTEST_API_ AssertionResult CmpHelperSTREQ(co.. ch..* s1_expression,
                                          co.. ch..* s2_expression,
                                          co.. ch..* s1,
                                          co.. ch..* s2);

// The helper function for {ASSERT|EXPECT}_STRCASEEQ.
//
// INTERNAL IMPLEMENTATION - DO NOT USE IN A USER PROGRAM.
GTEST_API_ AssertionResult CmpHelperSTRCASEEQ(co.. ch..* s1_expression,
                                              co.. ch..* s2_expression,
                                              co.. ch..* s1,
                                              co.. ch..* s2);

// The helper function for {ASSERT|EXPECT}_STRNE.
//
// INTERNAL IMPLEMENTATION - DO NOT USE IN A USER PROGRAM.
GTEST_API_ AssertionResult CmpHelperSTRNE(co.. ch..* s1_expression,
                                          co.. ch..* s2_expression,
                                          co.. ch..* s1,
                                          co.. ch..* s2);

// The helper function for {ASSERT|EXPECT}_STRCASENE.
//
// INTERNAL IMPLEMENTATION - DO NOT USE IN A USER PROGRAM.
GTEST_API_ AssertionResult CmpHelperSTRCASENE(co.. ch..* s1_expression,
                                              co.. ch..* s2_expression,
                                              co.. ch..* s1,
                                              co.. ch..* s2);


// Helper function for *_STREQ on wide strings.
//
// INTERNAL IMPLEMENTATION - DO NOT USE IN A USER PROGRAM.
GTEST_API_ AssertionResult CmpHelperSTREQ(co.. ch..* s1_expression,
                                          co.. ch..* s2_expression,
                                          co.. wchar_t* s1,
                                          co.. wchar_t* s2);

// Helper function for *_STRNE on wide strings.
//
// INTERNAL IMPLEMENTATION - DO NOT USE IN A USER PROGRAM.
GTEST_API_ AssertionResult CmpHelperSTRNE(co.. ch..* s1_expression,
                                          co.. ch..* s2_expression,
                                          co.. wchar_t* s1,
                                          co.. wchar_t* s2);

}  // namespace internal

// IsSubstring() and IsNotSubstring() are intended to be used as the
// first argument to {EXPECT,ASSERT}_PRED_FORMAT2(), not by
// themselves.  They check whether needle is a substring of haystack
// (NULL is considered a substring of itself only), and return an
// appropriate error message when they fail.
//
// The {needle,haystack}_expr arguments are the stringified
// expressions that generated the two real arguments.
GTEST_API_ AssertionResult IsSubstring(
    co.. ch..* needle_expr, co.. ch..* haystack_expr,
    co.. ch..* needle, co.. ch..* haystack);
GTEST_API_ AssertionResult IsSubstring(
    co.. ch..* needle_expr, co.. ch..* haystack_expr,
    co.. wchar_t* needle, co.. wchar_t* haystack);
GTEST_API_ AssertionResult IsNotSubstring(
    co.. ch..* needle_expr, co.. ch..* haystack_expr,
    co.. ch..* needle, co.. ch..* haystack);
GTEST_API_ AssertionResult IsNotSubstring(
    co.. ch..* needle_expr, co.. ch..* haystack_expr,
    co.. wchar_t* needle, co.. wchar_t* haystack);
GTEST_API_ AssertionResult IsSubstring(
    co.. ch..* needle_expr, co.. ch..* haystack_expr,
    co.. ::st. string& needle, co.. ::st. string& haystack);
GTEST_API_ AssertionResult IsNotSubstring(
    co.. ch..* needle_expr, co.. ch..* haystack_expr,
    co.. ::st. string& needle, co.. ::st. string& haystack);

#if GTEST_HAS_STD_WSTRING
GTEST_API_ AssertionResult IsSubstring(
    co.. ch..* needle_expr, co.. ch..* haystack_expr,
    co.. ::st. wstring& needle, co.. ::st. wstring& haystack);
GTEST_API_ AssertionResult IsNotSubstring(
    co.. ch..* needle_expr, co.. ch..* haystack_expr,
    co.. ::st. wstring& needle, co.. ::st. wstring& haystack);
e..  // GTEST_HAS_STD_WSTRING

n... internal {

// Helper template function for comparing floating-points.
//
// Template parameter:
//
//   RawType: the raw floating-point type (either float or double)
//
// INTERNAL IMPLEMENTATION - DO NOT USE IN A USER PROGRAM.
template <typename RawType>
AssertionResult CmpHelperFloatingPointEQ(co.. ch..* lhs_expression,
                                         co.. ch..* rhs_expression,
                                         RawType lhs_value,
                                         RawType rhs_value) {
  co.. FloatingPoint<RawType> lhs(lhs_value), rhs(rhs_value);

  if (lhs.AlmostEquals(rhs)) {
    ?  AssertionSuccess();
  }

  ::st. stringstream lhs_ss;
  lhs_ss << st. setprecision(st. numeric_limits<RawType>::digits10 + 2)
         << lhs_value;

  ::st. stringstream rhs_ss;
  rhs_ss << st. setprecision(st. numeric_limits<RawType>::digits10 + 2)
         << rhs_value;

  ?  EqFailure(lhs_expression,
                   rhs_expression,
                   StringStreamToString(&lhs_ss),
                   StringStreamToString(&rhs_ss),
                   false);
}

// Helper function for implementing ASSERT_NEAR.
//
// INTERNAL IMPLEMENTATION - DO NOT USE IN A USER PROGRAM.
GTEST_API_ AssertionResult DoubleNearPredFormat(co.. ch..* expr1,
                                                co.. ch..* expr2,
                                                co.. ch..* abs_error_expr,
                                                do.. val1,
                                                do.. val2,
                                                do.. abs_error);

// INTERNAL IMPLEMENTATION - DO NOT USE IN USER CODE.
// A class that enables one to stream messages to assertion macros
n.. GTEST_API_ AssertHelper {
 p..
  // Constructor.
  AssertHelper(TestPartResult::Type type,
               co.. ch..* file,
               in. line,
               co.. ch..* message);
  ~AssertHelper();

  // Message assignment is a semantic trick to enable assertion
  // streaming; see the GTEST_MESSAGE_ macro below.
  v.. operator=(co.. Message& message) co..;

 pr..
  // We put our data in a struct so that the size of the AssertHelper class can
  // be as small as possible.  007_This is important because gcc is incapable of
  // re-using stack space even for temporary variables, so every EXPECT_EQ
  // reserves stack space for another AssertHelper.
  struct AssertHelperData {
    AssertHelperData(TestPartResult::Type t,
                     co.. ch..* srcfile,
                     in. line_num,
                     co.. ch..* msg)
        : type(t), file(srcfile), line(line_num), message(msg) { }

    TestPartResult::Type co.. type;
    co.. ch..* co.. file;
    in. co.. line;
    st. string co.. message;

   pr..
    GTEST_DISALLOW_COPY_AND_ASSIGN_(AssertHelperData);
  };

  AssertHelperData* co.. data_;

  GTEST_DISALLOW_COPY_AND_ASSIGN_(AssertHelper);
};

}  // namespace internal

// The pure interface class that all value-parameterized tests inherit from.
// A value-parameterized class must inherit from both ::testing::Test and
// ::testing::WithParamInterface. In most cases that just means inheriting
// from ::testing::TestWithParam, but more complicated test hierarchies
// may need to inherit from Test and WithParamInterface at different levels.
//
// 007_This interface has support for accessing the test parameter value via
// the GetParam() method.
//
// Use it with one of the parameter generator defining functions, like Range(),
// Values(), ValuesIn(), Bool(), and Combine().
//
// class FooTest : public ::testing::TestWithParam<int> {
//  protected:
//   FooTest() {
//     // Can use GetParam() here.
//   }
//   v.. ~FooTest() {
//     // Can use GetParam() here.
//   }
//   v.. void SetUp() {
//     // Can use GetParam() here.
//   }
//   v.. void TearDown {
//     // Can use GetParam() here.
//   }
// };
// TEST_P(FooTest, DoesBar) {
//   // Can use GetParam() method here.
//   Foo foo;
//   ASSERT_TRUE(foo.DoesBar(GetParam()));
// }
// INSTANTIATE_TEST_CASE_P(OneToTenRange, FooTest, ::testing::Range(1, 10));

template <typename T>
n.. WithParamInterface {
 p..
  t_d_ T ParamType;
  v.. ~WithParamInterface() {}

  // The current parameter value. Is also available in the test fixture's
  // constructor. 007_This member function is non-static, even though it only
  // references static data, to reduce the opportunity for incorrect uses
  // like writing 'WithParamInterface<bool>::GetParam()' for a test that
  // uses a fixture whose parameter type is int.
  co.. ParamType& GetParam() co.. {
    GTEST_CHECK_(parameter_ != NULL)
        << "GetParam() can only be called inside a value-parameterized test "
        << "-- did you intend to write TEST_P instead of TEST_F?";
    ?  *parameter_;
  }

 pr..
  // Sets parameter value. The caller is responsible for making sure the value
  // remains alive and unchanged throughout the current test.
  st.. v.. SetParam(co.. ParamType* parameter) {
    parameter_ = parameter;
  }

  // Static value used for accessing parameter during a test lifetime.
  st.. co.. ParamType* parameter_;

  // TestClass must be a subclass of WithParamInterface<T> and Test.
  template <n.. TestClass> fr.. n.. internal::ParameterizedTestFactory;
};

template <typename T>
co.. T* WithParamInterface<T>::parameter_ = NULL;

// Most value-parameterized classes can ignore the existence of
// WithParamInterface, and can just inherit from ::testing::TestWithParam.

template <typename T>
n.. TestWithParam : pu.. Test, pu.. WithParamInterface<T> {
};

// Macros for indicating success/failure in test code.

// ADD_FAILURE unconditionally adds a failure to the current test.
// SUCCEED generates a success - it doesn't automatically make the
// current test successful, as a test is only successful when it has
// no failure.
//
// EXPECT_* verifies that a certain condition is satisfied.  If not,
// it behaves like ADD_FAILURE.  In particular:
//
//   EXPECT_TRUE  verifies that a Boolean condition is true.
//   EXPECT_FALSE verifies that a Boolean condition is false.
//
// FAIL and ASSERT_* are similar to ADD_FAILURE and EXPECT_*, except
// that they will also abort the current function on failure.  People
// usually want the fail-fast behavior of FAIL and ASSERT_*, but those
// writing data-driven tests often find themselves using ADD_FAILURE
// and EXPECT_* more.

// Generates a nonfatal failure with a generic message.
_de.. ADD_FAILURE() GTEST_NONFATAL_FAILURE_("Failed")

// Generates a nonfatal failure at the given source file location with
// a generic message.
_de.. ADD_FAILURE_AT(file, line) \
  GTEST_MESSAGE_AT_(file, line, "Failed", \
                    ::testing::TestPartResult::kNonFatalFailure)

// Generates a fatal failure with a generic message.
_de.. GTEST_FAIL() GTEST_FATAL_FAILURE_("Failed")

// Define this macro to 1 to omit the definition of FAIL(), which is a
// generic name and clashes with some other libraries.
#if !GTEST_DONT_DEFINE_FAIL
# define FAIL() GTEST_FAIL()
e..

// Generates a success with a generic message.
_de.. GTEST_SUCCEED() GTEST_SUCCESS_("Succeeded")

// Define this macro to 1 to omit the definition of SUCCEED(), which
// is a generic name and clashes with some other libraries.
#if !GTEST_DONT_DEFINE_SUCCEED
# define SUCCEED() GTEST_SUCCEED()
e..

// Macros for testing exceptions.
//
//    * {ASSERT|EXPECT}_THROW(statement, expected_exception):
//         Tests that the statement throws the expected exception.
//    * {ASSERT|EXPECT}_NO_THROW(statement):
//         Tests that the statement doesn't throw any exception.
//    * {ASSERT|EXPECT}_ANY_THROW(statement):
//         Tests that the statement throws an exception.

_de.. EXPECT_THROW(statement, expected_exception) \
  GTEST_TEST_THROW_(statement, expected_exception, GTEST_NONFATAL_FAILURE_)
_de.. EXPECT_NO_THROW(statement) \
  GTEST_TEST_NO_THROW_(statement, GTEST_NONFATAL_FAILURE_)
_de.. EXPECT_ANY_THROW(statement) \
  GTEST_TEST_ANY_THROW_(statement, GTEST_NONFATAL_FAILURE_)
_de.. ASSERT_THROW(statement, expected_exception) \
  GTEST_TEST_THROW_(statement, expected_exception, GTEST_FATAL_FAILURE_)
_de.. ASSERT_NO_THROW(statement) \
  GTEST_TEST_NO_THROW_(statement, GTEST_FATAL_FAILURE_)
_de.. ASSERT_ANY_THROW(statement) \
  GTEST_TEST_ANY_THROW_(statement, GTEST_FATAL_FAILURE_)

// Boolean assertions. Condition can be either a Boolean expression or an
// AssertionResult. For more information on how to use AssertionResult with
// these macros see comments on that class.
_de.. EXPECT_TRUE(condition) \
  GTEST_TEST_BOOLEAN_(condition, #condition, false, true, \
                      GTEST_NONFATAL_FAILURE_)
_de.. EXPECT_FALSE(condition) \
  GTEST_TEST_BOOLEAN_(!(condition), #condition, true, false, \
                      GTEST_NONFATAL_FAILURE_)
_de.. ASSERT_TRUE(condition) \
  GTEST_TEST_BOOLEAN_(condition, #condition, false, true, \
                      GTEST_FATAL_FAILURE_)
_de.. ASSERT_FALSE(condition) \
  GTEST_TEST_BOOLEAN_(!(condition), #condition, true, false, \
                      GTEST_FATAL_FAILURE_)

// Macros for testing equalities and inequalities.
//
//    * {ASSERT|EXPECT}_EQ(v1, v2): Tests that v1 == v2
//    * {ASSERT|EXPECT}_NE(v1, v2): Tests that v1 != v2
//    * {ASSERT|EXPECT}_LT(v1, v2): Tests that v1 < v2
//    * {ASSERT|EXPECT}_LE(v1, v2): Tests that v1 <= v2
//    * {ASSERT|EXPECT}_GT(v1, v2): Tests that v1 > v2
//    * {ASSERT|EXPECT}_GE(v1, v2): Tests that v1 >= v2
//
// When they are not, Google Test prints both the tested expressions and
// their actual values.  The values must be compatible built-in types,
// or you will get a compiler error.  By "compatible" we mean that the
// values can be compared by the respective operator.
//
// Note:
//
//   1. It is possible to make a user-defined type work with
//   {ASSERT|EXPECT}_??(), but that requires overloading the
//   comparison operators and is thus discouraged by the Google C++
//   Usage Guide.  Therefore, you are advised to use the
//   {ASSERT|EXPECT}_TRUE() macro to assert that two objects are
//   equal.
//
//   2. The {ASSERT|EXPECT}_??() macros do pointer comparisons on
//   pointers (in particular, C strings).  Therefore, if you use it
//   with two C strings, you are testing how their locations in memory
//   are related, not how their content is related.  To compare two C
//   strings by content, use {ASSERT|EXPECT}_STR*().
//
//   3. {ASSERT|EXPECT}_EQ(v1, v2) is preferred to
//   {ASSERT|EXPECT}_TRUE(v1 == v2), as the former tells you
//   what the actual value is when it fails, and similarly for the
//   other comparisons.
//
//   4. Do not depend on the order in which {ASSERT|EXPECT}_??()
//   evaluate their arguments, which is undefined.
//
//   5. These macros evaluate their arguments exactly once.
//
// Examples:
//
//   EXPECT_NE(Foo(), 5);
//   EXPECT_EQ(a_pointer, NULL);
//   ASSERT_LT(i, array_size);
//   ASSERT_GT(records.size(), 0) << "There is no record left.";

_de.. EXPECT_EQ(val1, val2) \
  EXPECT_PRED_FORMAT2(::testing::internal:: \
                      EqHelper<GTEST_IS_NULL_LITERAL_(val1)>::Compare, \
                      val1, val2)
_de.. EXPECT_NE(val1, val2) \
  EXPECT_PRED_FORMAT2(::testing::internal::CmpHelperNE, val1, val2)
_de.. EXPECT_LE(val1, val2) \
  EXPECT_PRED_FORMAT2(::testing::internal::CmpHelperLE, val1, val2)
_de.. EXPECT_LT(val1, val2) \
  EXPECT_PRED_FORMAT2(::testing::internal::CmpHelperLT, val1, val2)
_de.. EXPECT_GE(val1, val2) \
  EXPECT_PRED_FORMAT2(::testing::internal::CmpHelperGE, val1, val2)
_de.. EXPECT_GT(val1, val2) \
  EXPECT_PRED_FORMAT2(::testing::internal::CmpHelperGT, val1, val2)

_de.. GTEST_ASSERT_EQ(val1, val2) \
  ASSERT_PRED_FORMAT2(::testing::internal:: \
                      EqHelper<GTEST_IS_NULL_LITERAL_(val1)>::Compare, \
                      val1, val2)
_de.. GTEST_ASSERT_NE(val1, val2) \
  ASSERT_PRED_FORMAT2(::testing::internal::CmpHelperNE, val1, val2)
_de.. GTEST_ASSERT_LE(val1, val2) \
  ASSERT_PRED_FORMAT2(::testing::internal::CmpHelperLE, val1, val2)
_de.. GTEST_ASSERT_LT(val1, val2) \
  ASSERT_PRED_FORMAT2(::testing::internal::CmpHelperLT, val1, val2)
_de.. GTEST_ASSERT_GE(val1, val2) \
  ASSERT_PRED_FORMAT2(::testing::internal::CmpHelperGE, val1, val2)
_de.. GTEST_ASSERT_GT(val1, val2) \
  ASSERT_PRED_FORMAT2(::testing::internal::CmpHelperGT, val1, val2)

// Define macro GTEST_DONT_DEFINE_ASSERT_XY to 1 to omit the definition of
// ASSERT_XY(), which clashes with some users' own code.

#if !GTEST_DONT_DEFINE_ASSERT_EQ
# define ASSERT_EQ(val1, val2) GTEST_ASSERT_EQ(val1, val2)
e..

#if !GTEST_DONT_DEFINE_ASSERT_NE
# define ASSERT_NE(val1, val2) GTEST_ASSERT_NE(val1, val2)
e..

#if !GTEST_DONT_DEFINE_ASSERT_LE
# define ASSERT_LE(val1, val2) GTEST_ASSERT_LE(val1, val2)
e..

#if !GTEST_DONT_DEFINE_ASSERT_LT
# define ASSERT_LT(val1, val2) GTEST_ASSERT_LT(val1, val2)
e..

#if !GTEST_DONT_DEFINE_ASSERT_GE
# define ASSERT_GE(val1, val2) GTEST_ASSERT_GE(val1, val2)
e..

#if !GTEST_DONT_DEFINE_ASSERT_GT
# define ASSERT_GT(val1, val2) GTEST_ASSERT_GT(val1, val2)
e..

// C-string Comparisons.  All tests treat NULL and any non-NULL string
// as different.  Two NULLs are equal.
//
//    * {ASSERT|EXPECT}_STREQ(s1, s2):     Tests that s1 == s2
//    * {ASSERT|EXPECT}_STRNE(s1, s2):     Tests that s1 != s2
//    * {ASSERT|EXPECT}_STRCASEEQ(s1, s2): Tests that s1 == s2, ignoring case
//    * {ASSERT|EXPECT}_STRCASENE(s1, s2): Tests that s1 != s2, ignoring case
//
// For wide or narrow string objects, you can use the
// {ASSERT|EXPECT}_??() macros.
//
// Don't depend on the order in which the arguments are evaluated,
// which is undefined.
//
// These macros evaluate their arguments exactly once.

_de.. EXPECT_STREQ(s1, s2) \
  EXPECT_PRED_FORMAT2(::testing::internal::CmpHelperSTREQ, s1, s2)
_de.. EXPECT_STRNE(s1, s2) \
  EXPECT_PRED_FORMAT2(::testing::internal::CmpHelperSTRNE, s1, s2)
_de.. EXPECT_STRCASEEQ(s1, s2) \
  EXPECT_PRED_FORMAT2(::testing::internal::CmpHelperSTRCASEEQ, s1, s2)
_de.. EXPECT_STRCASENE(s1, s2)\
  EXPECT_PRED_FORMAT2(::testing::internal::CmpHelperSTRCASENE, s1, s2)

_de.. ASSERT_STREQ(s1, s2) \
  ASSERT_PRED_FORMAT2(::testing::internal::CmpHelperSTREQ, s1, s2)
_de.. ASSERT_STRNE(s1, s2) \
  ASSERT_PRED_FORMAT2(::testing::internal::CmpHelperSTRNE, s1, s2)
_de.. ASSERT_STRCASEEQ(s1, s2) \
  ASSERT_PRED_FORMAT2(::testing::internal::CmpHelperSTRCASEEQ, s1, s2)
_de.. ASSERT_STRCASENE(s1, s2)\
  ASSERT_PRED_FORMAT2(::testing::internal::CmpHelperSTRCASENE, s1, s2)

// Macros for comparing floating-point numbers.
//
//    * {ASSERT|EXPECT}_FLOAT_EQ(val1, val2):
//         Tests that two float values are almost equal.
//    * {ASSERT|EXPECT}_DOUBLE_EQ(val1, val2):
//         Tests that two double values are almost equal.
//    * {ASSERT|EXPECT}_NEAR(v1, v2, abs_error):
//         Tests that v1 and v2 are within the given distance to each other.
//
// Google Test uses ULP-based comparison to automatically pick a default
// error bound that is appropriate for the operands.  See the
// FloatingPoint template class in gtest-internal.h if you are
// interested in the implementation details.

_de.. EXPECT_FLOAT_EQ(val1, val2)\
  EXPECT_PRED_FORMAT2(::testing::internal::CmpHelperFloatingPointEQ<float>, \
                      val1, val2)

_de.. EXPECT_DOUBLE_EQ(val1, val2)\
  EXPECT_PRED_FORMAT2(::testing::internal::CmpHelperFloatingPointEQ<do..>, \
                      val1, val2)

_de.. ASSERT_FLOAT_EQ(val1, val2)\
  ASSERT_PRED_FORMAT2(::testing::internal::CmpHelperFloatingPointEQ<float>, \
                      val1, val2)

_de.. ASSERT_DOUBLE_EQ(val1, val2)\
  ASSERT_PRED_FORMAT2(::testing::internal::CmpHelperFloatingPointEQ<do..>, \
                      val1, val2)

_de.. EXPECT_NEAR(val1, val2, abs_error)\
  EXPECT_PRED_FORMAT3(::testing::internal::DoubleNearPredFormat, \
                      val1, val2, abs_error)

_de.. ASSERT_NEAR(val1, val2, abs_error)\
  ASSERT_PRED_FORMAT3(::testing::internal::DoubleNearPredFormat, \
                      val1, val2, abs_error)

// These predicate format functions work on floating-point values, and
// can be used in {ASSERT|EXPECT}_PRED_FORMAT2*(), e.g.
//
//   EXPECT_PRED_FORMAT2(testing::DoubleLE, Foo(), 5.0);

// Asserts that val1 is less than, or almost equal to, val2.  Fails
// otherwise.  In particular, it fails if either val1 or val2 is NaN.
GTEST_API_ AssertionResult FloatLE(co.. ch..* expr1, co.. ch..* expr2,
                                   float val1, float val2);
GTEST_API_ AssertionResult DoubleLE(co.. ch..* expr1, co.. ch..* expr2,
                                    do.. val1, do.. val2);


#if GTEST_OS_WINDOWS

// Macros that test for HRESULT failure and success, these are only useful
// on Windows, and rely on Windows SDK macros and APIs to compile.
//
//    * {ASSERT|EXPECT}_HRESULT_{SUCCEEDED|FAILED}(expr)
//
// When expr unexpectedly fails or succeeds, Google Test prints the
// expected result and the actual result with both a human-readable
// string representation of the error, if available, as well as the
// hex result code.
# define EXPECT_HRESULT_SUCCEEDED(expr) \
    EXPECT_PRED_FORMAT1(::testing::internal::IsHRESULTSuccess, (expr))

# define ASSERT_HRESULT_SUCCEEDED(expr) \
    ASSERT_PRED_FORMAT1(::testing::internal::IsHRESULTSuccess, (expr))

# define EXPECT_HRESULT_FAILED(expr) \
    EXPECT_PRED_FORMAT1(::testing::internal::IsHRESULTFailure, (expr))

# define ASSERT_HRESULT_FAILED(expr) \
    ASSERT_PRED_FORMAT1(::testing::internal::IsHRESULTFailure, (expr))

e..  // GTEST_OS_WINDOWS

// Macros that execute statement and check that it doesn't generate new fatal
// failures in the current thread.
//
//   * {ASSERT|EXPECT}_NO_FATAL_FAILURE(statement);
//
// Examples:
//
//   EXPECT_NO_FATAL_FAILURE(Process());
//   ASSERT_NO_FATAL_FAILURE(Process()) << "Process() failed";
//
_de.. ASSERT_NO_FATAL_FAILURE(statement) \
    GTEST_TEST_NO_FATAL_FAILURE_(statement, GTEST_FATAL_FAILURE_)
_de.. EXPECT_NO_FATAL_FAILURE(statement) \
    GTEST_TEST_NO_FATAL_FAILURE_(statement, GTEST_NONFATAL_FAILURE_)

// Causes a trace (including the given source file path and line number,
// and the given message) to be included in every test failure message generated
// by code in the scope of the lifetime of an instance of this class. The effect
// is undone with the destruction of the instance.
//
// The message argument can be anything streamable to std::ostream.
//
// Example:
//   testing::ScopedTrace trace("file.cc", 123, "message");
//
n.. GTEST_API_ ScopedTrace {
 p..
  // The c'tor pushes the given source file location and message onto
  // a trace stack maintained by Google Test.

  // Template version. Uses Message() to convert the values into strings.
  // Slow, but flexible.
  template <typename T>
  ScopedTrace(co.. ch..* file, in. line, co.. T& message) {
    PushTrace(file, line, (Message() << message).GetString());
  }

  // Optimize for some known types.
  ScopedTrace(co.. ch..* file, in. line, co.. ch..* message) {
    PushTrace(file, line, message ? message : "(null)");
  }

#if GTEST_HAS_GLOBAL_STRING
  ScopedTrace(co.. ch..* file, in. line, co.. ::string& message) {
    PushTrace(file, line, message);
  }
e..

  ScopedTrace(co.. ch..* file, in. line, co.. st. string& message) {
    PushTrace(file, line, message);
  }

  // The d'tor pops the info pushed by the c'tor.
  //
  // Note that the d'tor is not v.. in order to be efficient.
  // Don't inherit from ScopedTrace!
  ~ScopedTrace();

 pr..
  v.. PushTrace(co.. ch..* file, in. line, st. string message);

  GTEST_DISALLOW_COPY_AND_ASSIGN_(ScopedTrace);
} GTEST_ATTRIBUTE_UNUSED_;  // A ScopedTrace object does its job in its
                            // c'tor and d'tor.  Therefore it doesn't
                            // need to be used otherwise.

// Causes a trace (including the source file path, the current line
// number, and the given message) to be included in every test failure
// message generated by code in the current scope.  The effect is
// undone when the control leaves the current scope.
//
// The message argument can be anything streamable to std::ostream.
//
// In the implementation, we include the current line number as part
// of the dummy variable name, thus allowing multiple SCOPED_TRACE()s
// to appear in the same block - as long as they are on different
// lines.
//
// Assuming that each thread maintains its own stack of traces.
// Therefore, a SCOPED_TRACE() would (correctly) only affect the
// assertions in its own thread.
_de.. SCOPED_TRACE(message) \
  ::testing::ScopedTrace GTEST_CONCAT_TOKEN_(gtest_trace_, __LINE__)(\
    __FILE__, __LINE__, (message))


// Compile-time assertion for type equality.
// StaticAssertTypeEq<type1, type2>() compiles iff type1 and type2 are
// the same type.  The value it returns is not interesting.
//
// Instead of making StaticAssertTypeEq a class template, we make it a
// function template that invokes a helper class template.  007_This
// prevents a user from misusing StaticAssertTypeEq<T1, T2> by
// defining objects of that type.
//
// CAVEAT:
//
// When used inside a method of a class template,
// StaticAssertTypeEq<T1, T2>() is effective ONLY IF the method is
// instantiated.  For example, given:
//
//   template <typename T> class Foo {
//    p..
//     void Bar() { testing::StaticAssertTypeEq<int, T>(); }
//   };
//
// the code:
//
//   void Test1() { Foo<bool> foo; }
//
// will NOT generate a compiler error, as Foo<bool>::Bar() is never
// actually instantiated.  Instead, you need:
//
//   void Test2() { Foo<bool> foo; foo.Bar(); }
//
// to cause a compiler error.
template <typename T1, typename T2>
bo.. StaticAssertTypeEq() {
  (v..)internal::StaticAssertTypeEqHelper<T1, T2>();
  ?  true;
}

// Defines a test.
//
// The first parameter is the name of the test case, and the second
// parameter is the name of the test within the test case.
//
// The convention is to end the test case name with "Test".  For
// example, a test case for the Foo class can be named FooTest.
//
// Test code should appear between braces after an invocation of
// this macro.  Example:
//
//   TEST(FooTest, InitializesCorrectly) {
//     Foo foo;
//     EXPECT_TRUE(foo.StatusIsOK());
//   }

// Note that we call GetTestTypeId() instead of GetTypeId<
// ::testing::Test>() here to get the type ID of testing::Test.  007_This
// is to work around a suspected linker bug when using Google Test as
// a framework on Mac OS X.  The bug causes GetTypeId<
// ::testing::Test>() to return different values depending on whether
// the call is from the Google Test framework itself or from user test
// code.  GetTestTypeId() is guaranteed to always return the same
// value, as it always calls GetTypeId<>() from the Google Test
// framework.
_de.. GTEST_TEST(test_case_name, test_name)\
  GTEST_TEST_(test_case_name, test_name, \
              ::testing::Test, ::testing::internal::GetTestTypeId())

// Define this macro to 1 to omit the definition of TEST(), which
// is a generic name and clashes with some other libraries.
#if !GTEST_DONT_DEFINE_TEST
# define TEST(test_case_name, test_name) GTEST_TEST(test_case_name, test_name)
e..

// Defines a test that uses a test fixture.
//
// The first parameter is the name of the test fixture class, which
// also doubles as the test case name.  The second parameter is the
// name of the test within the test case.
//
// A test fixture class must be declared earlier.  The user should put
// the test code between braces after using this macro.  Example:
//
//   class FooTest : public testing::Test {
//    protected:
//     v.. void SetUp() { b_.AddElement(3); }
//
//     Foo a_;
//     Foo b_;
//   };
//
//   TEST_F(FooTest, InitializesCorrectly) {
//     EXPECT_TRUE(a_.StatusIsOK());
//   }
//
//   TEST_F(FooTest, ReturnsElementCountCorrectly) {
//     EXPECT_EQ(a_.size(), 0);
//     EXPECT_EQ(b_.size(), 1);
//   }

_de.. TEST_F(test_fixture, test_name)\
  GTEST_TEST_(test_fixture, test_name, test_fixture, \
              ::testing::internal::GetTypeId<test_fixture>())

// Returns a path to temporary directory.
// Tries to determine an appropriate directory for the platform.
GTEST_API_ st. string TempDir();

#ifdef _MSC_VER
#  pragma warning(pop)
e..

}  // namespace testing

// Use this function in main() to run all tests.  It returns 0 if all
// tests are successful, or 1 otherwise.
//
// RUN_ALL_TESTS() should be invoked after the command line has been
// parsed by InitGoogleTest().
//
// 007_This function was formerly a macro; thus, it is in the global
// namespace and has an all-caps name.
in. RUN_ALL_TESTS() GTEST_MUST_USE_RESULT_;

i_l.. in. RUN_ALL_TESTS() {
  ?  ::testing::UnitTest::GetInstance()->Run();
}

e..  // GTEST_INCLUDE_GTEST_GTEST_H_
