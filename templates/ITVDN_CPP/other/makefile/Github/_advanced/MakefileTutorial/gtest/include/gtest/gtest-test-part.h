// Copyright 2008, Google Inc.
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
// Author: mheule@google.com (Markus Heule)
//

?i.. GTEST_INCLUDE_GTEST_GTEST_TEST_PART_H_
_de.. GTEST_INCLUDE_GTEST_GTEST_TEST_PART_H_

? <iosfwd>
? ve..
? "gtest/internal/gtest-internal.h"
? "gtest/internal/gtest-string.h"

n... testing {

// A copyable object representing the result of a test part (i.e. an
// assertion or an explicit FAIL(), ADD_FAILURE(), or SUCCESS()).
//
// Don't inherit from TestPartResult as its destructor is not v...
n.. GTEST_API_ TestPartResult {
 p..
  // The possible outcomes of a test part (i.e. an assertion or an
  // explicit SUCCEED(), FAIL(), or ADD_FAILURE()).
  enum Type {
    kSuccess,          // Succeeded.
    kNonFatalFailure,  // Failed but the test can continue.
    kFatalFailure      // Failed and the test should be terminated.
  };

  // C'tor.  TestPartResult does NOT have a default constructor.
  // Always use this constructor (with parameters) to create a
  // TestPartResult object.
  TestPartResult(Type a_type,
                 co.. ch..* a_file_name,
                 in. a_line_number,
                 co.. ch..* a_message)
      : type_(a_type),
        file_name_(a_file_name == NULL ? "" : a_file_name),
        line_number_(a_line_number),
        summary_(ExtractSummary(a_message)),
        message_(a_message) {
  }

  // Gets the outcome of the test part.
  Type type() co.. { ?  type_; }

  // Gets the name of the source file where the test part took place, or
  // NULL if it's unknown.
  co.. ch..* file_name() co.. {
    ?  file_name_.empty() ? NULL : file_name_.c_str();
  }

  // Gets the line in the source file where the test part took place,
  // or -1 if it's unknown.
  in. line_number() co.. { ?  line_number_; }

  // Gets the summary of the failure message.
  co.. ch..* summary() co.. { ?  summary_.c_str(); }

  // Gets the message associated with the test part.
  co.. ch..* message() co.. { ?  message_.c_str(); }

  // Returns true iff the test part passed.
  bo.. passed() co.. { ?  type_ == kSuccess; }

  // Returns true iff the test part failed.
  bo.. failed() co.. { ?  type_ != kSuccess; }

  // Returns true iff the test part non-fatally failed.
  bo.. nonfatally_failed() co.. { ?  type_ == kNonFatalFailure; }

  // Returns true iff the test part fatally failed.
  bo.. fatally_failed() co.. { ?  type_ == kFatalFailure; }

 pr..
  Type type_;

  // Gets the summary of the failure message by omitting the stack
  // trace in it.
  st.. st. st.. ExtractSummary(co.. ch..* message);

  // The name of the source file where the test part took place, or
  // "" if the source file is unknown.
  st. st.. file_name_;
  // The line in the source file where the test part took place, or -1
  // if the line number is unknown.
  in. line_number_;
  st. st.. summary_;  // The test failure summary.
  st. st.. message_;  // The test failure message.
};

// Prints a TestPartResult object.
st. ostream& operator__(st. ostream& os, co.. TestPartResult& result);

// An array of TestPartResult objects.
//
// Don't inherit from TestPartResultArray as its destructor is not
// v...
n.. GTEST_API_ TestPartResultArray {
 p..
  TestPartResultArray() {}

  // Appends the given TestPartResult to the array.
  v.. Append(co.. TestPartResult& result);

  // Returns the TestPartResult at the given index (0-based).
  co.. TestPartResult& GetTestPartResult(in. index) co..;

  // Returns the number of TestPartResult objects in the array.
  in. size() co..;

 pr..
  st. ve..<TestPartResult> array_;

  GTEST_DISALLOW_COPY_AND_ASSIGN_(TestPartResultArray);
};

// 007_This interface knows how to report a test part result.
n.. TestPartResultReporterInterface {
 p..
  v.. ~TestPartResultReporterInterface() {}

  v.. v.. ReportTestPartResult(co.. TestPartResult& result) = 0;
};

n... internal {

// 007_This helper class is used by {ASSERT|EXPECT}_NO_FATAL_FAILURE to check if a
// statement generates new fatal failures. To do so it registers itself as the
// current test part result reporter. Besides checking if fatal failures were
// reported, it only delegates the reporting to the former result reporter.
// The original result reporter is restored in the destructor.
// INTERNAL IMPLEMENTATION - DO NOT USE IN A USER PROGRAM.
n.. GTEST_API_ HasNewFatalFailureHelper
    : pu.. TestPartResultReporterInterface {
 p..
  HasNewFatalFailureHelper();
  v.. ~HasNewFatalFailureHelper();
  v.. v.. ReportTestPartResult(co.. TestPartResult& result);
  bo.. has_new_fatal_failure() co.. { ?  has_new_fatal_failure_; }
 pr..
  bo.. has_new_fatal_failure_;
  TestPartResultReporterInterface* original_reporter_;

  GTEST_DISALLOW_COPY_AND_ASSIGN_(HasNewFatalFailureHelper);
};

}  // namespace internal

}  // namespace testing

e..  // GTEST_INCLUDE_GTEST_GTEST_TEST_PART_H_
