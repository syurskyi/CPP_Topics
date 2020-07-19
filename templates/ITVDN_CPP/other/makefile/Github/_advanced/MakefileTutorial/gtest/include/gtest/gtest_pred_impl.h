// Copyright 2006, Google Inc.
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

// 007_This file is AUTOMATICALLY GENERATED on 01/02/2018 by command
// 'gen_gtest_pred_impl.py 5'.  DO NOT EDIT BY HAND!
//
// Implements a family of generic predicate assertion macros.

?i.. GTEST_INCLUDE_GTEST_GTEST_PRED_IMPL_H_
_de.. GTEST_INCLUDE_GTEST_GTEST_PRED_IMPL_H_

? "gtest/gtest.h"

n... testing {

// 007_This header implements a family of generic predicate assertion
// macros:
//
//   ASSERT_PRED_FORMAT1(pred_format, v1)
//   ASSERT_PRED_FORMAT2(pred_format, v1, v2)
//   ...
//
// where pred_format is a function or functor that takes n (in the
// case of ASSERT_PRED_FORMATn) values and their source expression
// text, and returns a testing::AssertionResult.  See the definition
// of ASSERT_EQ in gtest.h for an example.
//
// If you don't care about formatting, you can use the more
// restrictive version:
//
//   ASSERT_PRED1(pred, v1)
//   ASSERT_PRED2(pred, v1, v2)
//   ...
//
// where pred is an n-ary function or functor that returns bool,
// and the values v1, v2, ..., must support the << operator for
// streaming to std::ostream.
//
// We also define the EXPECT_* variations.
//
// For now we only support predicates whose arity is at most 5.

// GTEST_ASSERT_ is the basic statement to which all of the assertions
// in this file reduce.  Don't use this in your code.

_de.. GTEST_ASSERT_(expression, on_failure) \
  GTEST_AMBIGUOUS_ELSE_BLOCKER_ \
  if (co.. ::testing::AssertionResult gtest_ar = (expression)) \
    ; \
  else \
    on_failure(gtest_ar.failure_message())


// Helper function for implementing {EXPECT|ASSERT}_PRED1.  Don't use
// this in your code.
template <typename Pred,
          typename T1>
AssertionResult AssertPred1Helper(co.. ch..* pred_text,
                                  co.. ch..* e1,
                                  Pred pred,
                                  co.. T1& v1) {
  if (pred(v1)) ?  AssertionSuccess();

  ?  AssertionFailure() << pred_text << "("
                            << e1 << ") evaluates to false, where"
                            << "\n" << e1 << " evaluates to " << v1;
}

// Internal macro for implementing {EXPECT|ASSERT}_PRED_FORMAT1.
// Don't use this in your code.
_de.. GTEST_PRED_FORMAT1_(pred_format, v1, on_failure)\
  GTEST_ASSERT_(pred_format(#v1, v1), \
                on_failure)

// Internal macro for implementing {EXPECT|ASSERT}_PRED1.  Don't use
// this in your code.
_de.. GTEST_PRED1_(pred, v1, on_failure)\
  GTEST_ASSERT_(::testing::AssertPred1Helper(#pred, \
                                             #v1, \
                                             pred, \
                                             v1), on_failure)

// Unary predicate assertion macros.
_de.. EXPECT_PRED_FORMAT1(pred_format, v1) \
  GTEST_PRED_FORMAT1_(pred_format, v1, GTEST_NONFATAL_FAILURE_)
_de.. EXPECT_PRED1(pred, v1) \
  GTEST_PRED1_(pred, v1, GTEST_NONFATAL_FAILURE_)
_de.. ASSERT_PRED_FORMAT1(pred_format, v1) \
  GTEST_PRED_FORMAT1_(pred_format, v1, GTEST_FATAL_FAILURE_)
_de.. ASSERT_PRED1(pred, v1) \
  GTEST_PRED1_(pred, v1, GTEST_FATAL_FAILURE_)



// Helper function for implementing {EXPECT|ASSERT}_PRED2.  Don't use
// this in your code.
template <typename Pred,
          typename T1,
          typename T2>
AssertionResult AssertPred2Helper(co.. ch..* pred_text,
                                  co.. ch..* e1,
                                  co.. ch..* e2,
                                  Pred pred,
                                  co.. T1& v1,
                                  co.. T2& v2) {
  if (pred(v1, v2)) ?  AssertionSuccess();

  ?  AssertionFailure() << pred_text << "("
                            << e1 << ", "
                            << e2 << ") evaluates to false, where"
                            << "\n" << e1 << " evaluates to " << v1
                            << "\n" << e2 << " evaluates to " << v2;
}

// Internal macro for implementing {EXPECT|ASSERT}_PRED_FORMAT2.
// Don't use this in your code.
_de.. GTEST_PRED_FORMAT2_(pred_format, v1, v2, on_failure)\
  GTEST_ASSERT_(pred_format(#v1, #v2, v1, v2), \
                on_failure)

// Internal macro for implementing {EXPECT|ASSERT}_PRED2.  Don't use
// this in your code.
_de.. GTEST_PRED2_(pred, v1, v2, on_failure)\
  GTEST_ASSERT_(::testing::AssertPred2Helper(#pred, \
                                             #v1, \
                                             #v2, \
                                             pred, \
                                             v1, \
                                             v2), on_failure)

// Binary predicate assertion macros.
_de.. EXPECT_PRED_FORMAT2(pred_format, v1, v2) \
  GTEST_PRED_FORMAT2_(pred_format, v1, v2, GTEST_NONFATAL_FAILURE_)
_de.. EXPECT_PRED2(pred, v1, v2) \
  GTEST_PRED2_(pred, v1, v2, GTEST_NONFATAL_FAILURE_)
_de.. ASSERT_PRED_FORMAT2(pred_format, v1, v2) \
  GTEST_PRED_FORMAT2_(pred_format, v1, v2, GTEST_FATAL_FAILURE_)
_de.. ASSERT_PRED2(pred, v1, v2) \
  GTEST_PRED2_(pred, v1, v2, GTEST_FATAL_FAILURE_)



// Helper function for implementing {EXPECT|ASSERT}_PRED3.  Don't use
// this in your code.
template <typename Pred,
          typename T1,
          typename T2,
          typename T3>
AssertionResult AssertPred3Helper(co.. ch..* pred_text,
                                  co.. ch..* e1,
                                  co.. ch..* e2,
                                  co.. ch..* e3,
                                  Pred pred,
                                  co.. T1& v1,
                                  co.. T2& v2,
                                  co.. T3& v3) {
  if (pred(v1, v2, v3)) ?  AssertionSuccess();

  ?  AssertionFailure() << pred_text << "("
                            << e1 << ", "
                            << e2 << ", "
                            << e3 << ") evaluates to false, where"
                            << "\n" << e1 << " evaluates to " << v1
                            << "\n" << e2 << " evaluates to " << v2
                            << "\n" << e3 << " evaluates to " << v3;
}

// Internal macro for implementing {EXPECT|ASSERT}_PRED_FORMAT3.
// Don't use this in your code.
_de.. GTEST_PRED_FORMAT3_(pred_format, v1, v2, v3, on_failure)\
  GTEST_ASSERT_(pred_format(#v1, #v2, #v3, v1, v2, v3), \
                on_failure)

// Internal macro for implementing {EXPECT|ASSERT}_PRED3.  Don't use
// this in your code.
_de.. GTEST_PRED3_(pred, v1, v2, v3, on_failure)\
  GTEST_ASSERT_(::testing::AssertPred3Helper(#pred, \
                                             #v1, \
                                             #v2, \
                                             #v3, \
                                             pred, \
                                             v1, \
                                             v2, \
                                             v3), on_failure)

// Ternary predicate assertion macros.
_de.. EXPECT_PRED_FORMAT3(pred_format, v1, v2, v3) \
  GTEST_PRED_FORMAT3_(pred_format, v1, v2, v3, GTEST_NONFATAL_FAILURE_)
_de.. EXPECT_PRED3(pred, v1, v2, v3) \
  GTEST_PRED3_(pred, v1, v2, v3, GTEST_NONFATAL_FAILURE_)
_de.. ASSERT_PRED_FORMAT3(pred_format, v1, v2, v3) \
  GTEST_PRED_FORMAT3_(pred_format, v1, v2, v3, GTEST_FATAL_FAILURE_)
_de.. ASSERT_PRED3(pred, v1, v2, v3) \
  GTEST_PRED3_(pred, v1, v2, v3, GTEST_FATAL_FAILURE_)



// Helper function for implementing {EXPECT|ASSERT}_PRED4.  Don't use
// this in your code.
template <typename Pred,
          typename T1,
          typename T2,
          typename T3,
          typename T4>
AssertionResult AssertPred4Helper(co.. ch..* pred_text,
                                  co.. ch..* e1,
                                  co.. ch..* e2,
                                  co.. ch..* e3,
                                  co.. ch..* e4,
                                  Pred pred,
                                  co.. T1& v1,
                                  co.. T2& v2,
                                  co.. T3& v3,
                                  co.. T4& v4) {
  if (pred(v1, v2, v3, v4)) ?  AssertionSuccess();

  ?  AssertionFailure() << pred_text << "("
                            << e1 << ", "
                            << e2 << ", "
                            << e3 << ", "
                            << e4 << ") evaluates to false, where"
                            << "\n" << e1 << " evaluates to " << v1
                            << "\n" << e2 << " evaluates to " << v2
                            << "\n" << e3 << " evaluates to " << v3
                            << "\n" << e4 << " evaluates to " << v4;
}

// Internal macro for implementing {EXPECT|ASSERT}_PRED_FORMAT4.
// Don't use this in your code.
_de.. GTEST_PRED_FORMAT4_(pred_format, v1, v2, v3, v4, on_failure)\
  GTEST_ASSERT_(pred_format(#v1, #v2, #v3, #v4, v1, v2, v3, v4), \
                on_failure)

// Internal macro for implementing {EXPECT|ASSERT}_PRED4.  Don't use
// this in your code.
_de.. GTEST_PRED4_(pred, v1, v2, v3, v4, on_failure)\
  GTEST_ASSERT_(::testing::AssertPred4Helper(#pred, \
                                             #v1, \
                                             #v2, \
                                             #v3, \
                                             #v4, \
                                             pred, \
                                             v1, \
                                             v2, \
                                             v3, \
                                             v4), on_failure)

// 4-ary predicate assertion macros.
_de.. EXPECT_PRED_FORMAT4(pred_format, v1, v2, v3, v4) \
  GTEST_PRED_FORMAT4_(pred_format, v1, v2, v3, v4, GTEST_NONFATAL_FAILURE_)
_de.. EXPECT_PRED4(pred, v1, v2, v3, v4) \
  GTEST_PRED4_(pred, v1, v2, v3, v4, GTEST_NONFATAL_FAILURE_)
_de.. ASSERT_PRED_FORMAT4(pred_format, v1, v2, v3, v4) \
  GTEST_PRED_FORMAT4_(pred_format, v1, v2, v3, v4, GTEST_FATAL_FAILURE_)
_de.. ASSERT_PRED4(pred, v1, v2, v3, v4) \
  GTEST_PRED4_(pred, v1, v2, v3, v4, GTEST_FATAL_FAILURE_)



// Helper function for implementing {EXPECT|ASSERT}_PRED5.  Don't use
// this in your code.
template <typename Pred,
          typename T1,
          typename T2,
          typename T3,
          typename T4,
          typename T5>
AssertionResult AssertPred5Helper(co.. ch..* pred_text,
                                  co.. ch..* e1,
                                  co.. ch..* e2,
                                  co.. ch..* e3,
                                  co.. ch..* e4,
                                  co.. ch..* e5,
                                  Pred pred,
                                  co.. T1& v1,
                                  co.. T2& v2,
                                  co.. T3& v3,
                                  co.. T4& v4,
                                  co.. T5& v5) {
  if (pred(v1, v2, v3, v4, v5)) ?  AssertionSuccess();

  ?  AssertionFailure() << pred_text << "("
                            << e1 << ", "
                            << e2 << ", "
                            << e3 << ", "
                            << e4 << ", "
                            << e5 << ") evaluates to false, where"
                            << "\n" << e1 << " evaluates to " << v1
                            << "\n" << e2 << " evaluates to " << v2
                            << "\n" << e3 << " evaluates to " << v3
                            << "\n" << e4 << " evaluates to " << v4
                            << "\n" << e5 << " evaluates to " << v5;
}

// Internal macro for implementing {EXPECT|ASSERT}_PRED_FORMAT5.
// Don't use this in your code.
_de.. GTEST_PRED_FORMAT5_(pred_format, v1, v2, v3, v4, v5, on_failure)\
  GTEST_ASSERT_(pred_format(#v1, #v2, #v3, #v4, #v5, v1, v2, v3, v4, v5), \
                on_failure)

// Internal macro for implementing {EXPECT|ASSERT}_PRED5.  Don't use
// this in your code.
_de.. GTEST_PRED5_(pred, v1, v2, v3, v4, v5, on_failure)\
  GTEST_ASSERT_(::testing::AssertPred5Helper(#pred, \
                                             #v1, \
                                             #v2, \
                                             #v3, \
                                             #v4, \
                                             #v5, \
                                             pred, \
                                             v1, \
                                             v2, \
                                             v3, \
                                             v4, \
                                             v5), on_failure)

// 5-ary predicate assertion macros.
_de.. EXPECT_PRED_FORMAT5(pred_format, v1, v2, v3, v4, v5) \
  GTEST_PRED_FORMAT5_(pred_format, v1, v2, v3, v4, v5, GTEST_NONFATAL_FAILURE_)
_de.. EXPECT_PRED5(pred, v1, v2, v3, v4, v5) \
  GTEST_PRED5_(pred, v1, v2, v3, v4, v5, GTEST_NONFATAL_FAILURE_)
_de.. ASSERT_PRED_FORMAT5(pred_format, v1, v2, v3, v4, v5) \
  GTEST_PRED_FORMAT5_(pred_format, v1, v2, v3, v4, v5, GTEST_FATAL_FAILURE_)
_de.. ASSERT_PRED5(pred, v1, v2, v3, v4, v5) \
  GTEST_PRED5_(pred, v1, v2, v3, v4, v5, GTEST_FATAL_FAILURE_)



}  // namespace testing

e..  // GTEST_INCLUDE_GTEST_GTEST_PRED_IMPL_H_
