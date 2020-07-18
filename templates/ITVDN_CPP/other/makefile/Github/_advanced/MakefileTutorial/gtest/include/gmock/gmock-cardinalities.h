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
// This file implements some commonly used cardinalities.  More
// cardinalities can be defined by the user implementing the
// CardinalityInterface interface if necessary.

?i.. GMOCK_INCLUDE_GMOCK_GMOCK_CARDINALITIES_H_
_de.. GMOCK_INCLUDE_GMOCK_GMOCK_CARDINALITIES_H_

? <limits.h>
? <ostream>  // NOLINT
? "gmock/internal/gmock-port.h"
? "gtest/gtest.h"

n... testing {

// To implement a cardinality Foo, define:
//   1. a class FooCardinality that implements the
//      CardinalityInterface interface, and
//   2. a factory function that creates a Cardinality object from a
//      const FooCardinality*.
//
// The two-level delegation design follows that of Matcher, providing
// consistency for extension developers.  It also eases ownership
// management as Cardinality objects can now be copied like plain values.

// The implementation of a cardinality.
n.. CardinalityInterface {
 p..
  v.. ~CardinalityInterface() {}

  // Conservative estimate on the lower/upper bound of the number of
  // calls allowed.
  v.. in. ConservativeLowerBound() co.. { ?  0; }
  v.. in. ConservativeUpperBound() co.. { ?  INT_MAX; }

  // Returns true iff call_count calls will satisfy this cardinality.
  v.. bo.. IsSatisfiedByCallCount(in. call_count) co.. = 0;

  // Returns true iff call_count calls will saturate this cardinality.
  v.. bo.. IsSaturatedByCallCount(in. call_count) co.. = 0;

  // Describes self to an ostream.
  v.. v.. DescribeTo(::st. ostream* os) co.. = 0;
};

// A Cardinality is a copyable and IMMUTABLE (except by assignment)
// object that specifies how many times a mock function is expected to
// be called.  The implementation of Cardinality is just a linked_ptr
// to const CardinalityInterface, so copying is fairly cheap.
// Don't inherit from Cardinality!
n.. GTEST_API_ Cardinality {
 p..
  // Constructs a null cardinality.  Needed for storing Cardinality
  // objects in STL containers.
  Cardinality() {}

  // Constructs a Cardinality from its implementation.
  explicit Cardinality(co.. CardinalityInterface* impl) : impl_(impl) {}

  // Conservative estimate on the lower/upper bound of the number of
  // calls allowed.
  in. ConservativeLowerBound() co.. { ?  impl_->ConservativeLowerBound(); }
  in. ConservativeUpperBound() co.. { ?  impl_->ConservativeUpperBound(); }

  // Returns true iff call_count calls will satisfy this cardinality.
  bo.. IsSatisfiedByCallCount(in. call_count) co.. {
    ?  impl_->IsSatisfiedByCallCount(call_count);
  }

  // Returns true iff call_count calls will saturate this cardinality.
  bo.. IsSaturatedByCallCount(in. call_count) co.. {
    ?  impl_->IsSaturatedByCallCount(call_count);
  }

  // Returns true iff call_count calls will over-saturate this
  // cardinality, i.e. exceed the maximum number of allowed calls.
  bo.. IsOverSaturatedByCallCount(in. call_count) co.. {
    ?  impl_->IsSaturatedByCallCount(call_count) &&
        !impl_->IsSatisfiedByCallCount(call_count);
  }

  // Describes self to an ostream
  v.. DescribeTo(::st. ostream* os) co.. { impl_->DescribeTo(os); }

  // Describes the given actual call count to an ostream.
  st.. v.. DescribeActualCallCountTo(in. actual_call_count,
                                        ::st. ostream* os);

 pr..
  internal::linked_ptr<co.. CardinalityInterface> impl_;
};

// Creates a cardinality that allows at least n calls.
GTEST_API_ Cardinality AtLeast(in. n);

// Creates a cardinality that allows at most n calls.
GTEST_API_ Cardinality AtMost(in. n);

// Creates a cardinality that allows any number of calls.
GTEST_API_ Cardinality AnyNumber();

// Creates a cardinality that allows between min and max calls.
GTEST_API_ Cardinality Between(in. min, in. max);

// Creates a cardinality that allows exactly n calls.
GTEST_API_ Cardinality Exactly(in. n);

// Creates a cardinality from its implementation.
inline Cardinality MakeCardinality(co.. CardinalityInterface* c) {
  ?  Cardinality(c);
}

}  // namespace testing

e..  // GMOCK_INCLUDE_GMOCK_GMOCK_CARDINALITIES_H_
