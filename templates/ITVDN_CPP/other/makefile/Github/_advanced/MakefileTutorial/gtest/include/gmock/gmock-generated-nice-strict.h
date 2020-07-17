// This file was GENERATED by command:
//     pump.py gmock-generated-nice-strict.h.pump
// DO NOT EDIT BY HAND!!!

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
// Author: wan@google.com (Zhanyong Wan)

// Implements class templates NiceMock, NaggyMock, and StrictMock.
//
// Given a mock class MockFoo that is created using Google Mock,
// NiceMock<MockFoo> is a subclass of MockFoo that allows
// uninteresting calls (i.e. calls to mock methods that have no
// EXPECT_CALL specs), NaggyMock<MockFoo> is a subclass of MockFoo
// that prints a warning when an uninteresting call occurs, and
// StrictMock<MockFoo> is a subclass of MockFoo that treats all
// uninteresting calls as errors.
//
// Currently a mock is naggy by default, so MockFoo and
// NaggyMock<MockFoo> behave like the same.  However, we will soon
// switch the default behavior of mocks to be nice, as that in general
// leads to more maintainable tests.  When that happens, MockFoo will
// stop behaving like NaggyMock<MockFoo> and start behaving like
// NiceMock<MockFoo>.
//
// NiceMock, NaggyMock, and StrictMock "inherit" the constructors of
// their respective base class.  Therefore you can write
// NiceMock<MockFoo>(5, "a") to construct a nice mock where MockFoo
// has a constructor that accepts (int, const char*), for example.
//
// A known limitation is that NiceMock<MockFoo>, NaggyMock<MockFoo>,
// and StrictMock<MockFoo> only works for mock methods defined using
// the MOCK_METHOD* family of macros DIRECTLY in the MockFoo class.
// If a mock method is defined in a base class of MockFoo, the "nice"
// or "strict" modifier may not affect it, depending on the compiler.
// In particular, nesting NiceMock, NaggyMock, and StrictMock is NOT
// supported.

?i.. GMOCK_INCLUDE_GMOCK_GMOCK_GENERATED_NICE_STRICT_H_
_de.. GMOCK_INCLUDE_GMOCK_GMOCK_GENERATED_NICE_STRICT_H_

? "gmock/gmock-spec-builders.h"
? "gmock/internal/gmock-port.h"

n... testing {

template <n.. MockClass>
n.. NiceMock : pu.. MockClass {
 p..
  NiceMock() : MockClass() {
    ::testing::Mock::AllowUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

#if GTEST_LANG_CXX11
  // Ideally, we would inherit base class's constructors through a using
  // declaration, which would preserve their visibility. However, many existing
  // tests rely on the fact that current implementation reexports protected
  // constructors as public. These tests would need to be cleaned up first.

  // Single argument constructor is special-cased so that it can be
  // made explicit.
  template <typename A>
  explicit NiceMock(A&& arg) : MockClass(st. forward<A>(arg)) {
    ::testing::Mock::AllowUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

  template <typename A1, typename A2, typename... An>
  NiceMock(A1&& arg1, A2&& arg2, An&&... args)
      : MockClass(st. forward<A1>(arg1), st. forward<A2>(arg2),
                  st. forward<An>(args)...) {
    ::testing::Mock::AllowUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }
#else
  // C++98 doesn't have variadic templates, so we have to define one
  // for each arity.
  template <typename A1>
  explicit NiceMock(co.. A1& a1) : MockClass(a1) {
    ::testing::Mock::AllowUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }
  template <typename A1, typename A2>
  NiceMock(co.. A1& a1, co.. A2& a2) : MockClass(a1, a2) {
    ::testing::Mock::AllowUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

  template <typename A1, typename A2, typename A3>
  NiceMock(co.. A1& a1, co.. A2& a2, co.. A3& a3) : MockClass(a1, a2, a3) {
    ::testing::Mock::AllowUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

  template <typename A1, typename A2, typename A3, typename A4>
  NiceMock(co.. A1& a1, co.. A2& a2, co.. A3& a3,
      co.. A4& a4) : MockClass(a1, a2, a3, a4) {
    ::testing::Mock::AllowUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

  template <typename A1, typename A2, typename A3, typename A4, typename A5>
  NiceMock(co.. A1& a1, co.. A2& a2, co.. A3& a3, co.. A4& a4,
      co.. A5& a5) : MockClass(a1, a2, a3, a4, a5) {
    ::testing::Mock::AllowUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

  template <typename A1, typename A2, typename A3, typename A4, typename A5,
      typename A6>
  NiceMock(co.. A1& a1, co.. A2& a2, co.. A3& a3, co.. A4& a4,
      co.. A5& a5, co.. A6& a6) : MockClass(a1, a2, a3, a4, a5, a6) {
    ::testing::Mock::AllowUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

  template <typename A1, typename A2, typename A3, typename A4, typename A5,
      typename A6, typename A7>
  NiceMock(co.. A1& a1, co.. A2& a2, co.. A3& a3, co.. A4& a4,
      co.. A5& a5, co.. A6& a6, co.. A7& a7) : MockClass(a1, a2, a3, a4, a5,
      a6, a7) {
    ::testing::Mock::AllowUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

  template <typename A1, typename A2, typename A3, typename A4, typename A5,
      typename A6, typename A7, typename A8>
  NiceMock(co.. A1& a1, co.. A2& a2, co.. A3& a3, co.. A4& a4,
      co.. A5& a5, co.. A6& a6, co.. A7& a7, co.. A8& a8) : MockClass(a1,
      a2, a3, a4, a5, a6, a7, a8) {
    ::testing::Mock::AllowUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

  template <typename A1, typename A2, typename A3, typename A4, typename A5,
      typename A6, typename A7, typename A8, typename A9>
  NiceMock(co.. A1& a1, co.. A2& a2, co.. A3& a3, co.. A4& a4,
      co.. A5& a5, co.. A6& a6, co.. A7& a7, co.. A8& a8,
      co.. A9& a9) : MockClass(a1, a2, a3, a4, a5, a6, a7, a8, a9) {
    ::testing::Mock::AllowUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

  template <typename A1, typename A2, typename A3, typename A4, typename A5,
      typename A6, typename A7, typename A8, typename A9, typename A10>
  NiceMock(co.. A1& a1, co.. A2& a2, co.. A3& a3, co.. A4& a4,
      co.. A5& a5, co.. A6& a6, co.. A7& a7, co.. A8& a8, co.. A9& a9,
      co.. A10& a10) : MockClass(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10) {
    ::testing::Mock::AllowUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

e..  // GTEST_LANG_CXX11

  ~NiceMock() {
    ::testing::Mock::UnregisterCallReaction(
        internal::ImplicitCast_<MockClass*>(this));
  }

 pr..
  GTEST_DISALLOW_COPY_AND_ASSIGN_(NiceMock);
};

template <n.. MockClass>
n.. NaggyMock : pu.. MockClass {
 p..
  NaggyMock() : MockClass() {
    ::testing::Mock::WarnUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

#if GTEST_LANG_CXX11
  // Ideally, we would inherit base class's constructors through a using
  // declaration, which would preserve their visibility. However, many existing
  // tests rely on the fact that current implementation reexports protected
  // constructors as public. These tests would need to be cleaned up first.

  // Single argument constructor is special-cased so that it can be
  // made explicit.
  template <typename A>
  explicit NaggyMock(A&& arg) : MockClass(st. forward<A>(arg)) {
    ::testing::Mock::WarnUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

  template <typename A1, typename A2, typename... An>
  NaggyMock(A1&& arg1, A2&& arg2, An&&... args)
      : MockClass(st. forward<A1>(arg1), st. forward<A2>(arg2),
                  st. forward<An>(args)...) {
    ::testing::Mock::WarnUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }
#else
  // C++98 doesn't have variadic templates, so we have to define one
  // for each arity.
  template <typename A1>
  explicit NaggyMock(co.. A1& a1) : MockClass(a1) {
    ::testing::Mock::WarnUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }
  template <typename A1, typename A2>
  NaggyMock(co.. A1& a1, co.. A2& a2) : MockClass(a1, a2) {
    ::testing::Mock::WarnUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

  template <typename A1, typename A2, typename A3>
  NaggyMock(co.. A1& a1, co.. A2& a2, co.. A3& a3) : MockClass(a1, a2, a3) {
    ::testing::Mock::WarnUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

  template <typename A1, typename A2, typename A3, typename A4>
  NaggyMock(co.. A1& a1, co.. A2& a2, co.. A3& a3,
      co.. A4& a4) : MockClass(a1, a2, a3, a4) {
    ::testing::Mock::WarnUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

  template <typename A1, typename A2, typename A3, typename A4, typename A5>
  NaggyMock(co.. A1& a1, co.. A2& a2, co.. A3& a3, co.. A4& a4,
      co.. A5& a5) : MockClass(a1, a2, a3, a4, a5) {
    ::testing::Mock::WarnUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

  template <typename A1, typename A2, typename A3, typename A4, typename A5,
      typename A6>
  NaggyMock(co.. A1& a1, co.. A2& a2, co.. A3& a3, co.. A4& a4,
      co.. A5& a5, co.. A6& a6) : MockClass(a1, a2, a3, a4, a5, a6) {
    ::testing::Mock::WarnUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

  template <typename A1, typename A2, typename A3, typename A4, typename A5,
      typename A6, typename A7>
  NaggyMock(co.. A1& a1, co.. A2& a2, co.. A3& a3, co.. A4& a4,
      co.. A5& a5, co.. A6& a6, co.. A7& a7) : MockClass(a1, a2, a3, a4, a5,
      a6, a7) {
    ::testing::Mock::WarnUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

  template <typename A1, typename A2, typename A3, typename A4, typename A5,
      typename A6, typename A7, typename A8>
  NaggyMock(co.. A1& a1, co.. A2& a2, co.. A3& a3, co.. A4& a4,
      co.. A5& a5, co.. A6& a6, co.. A7& a7, co.. A8& a8) : MockClass(a1,
      a2, a3, a4, a5, a6, a7, a8) {
    ::testing::Mock::WarnUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

  template <typename A1, typename A2, typename A3, typename A4, typename A5,
      typename A6, typename A7, typename A8, typename A9>
  NaggyMock(co.. A1& a1, co.. A2& a2, co.. A3& a3, co.. A4& a4,
      co.. A5& a5, co.. A6& a6, co.. A7& a7, co.. A8& a8,
      co.. A9& a9) : MockClass(a1, a2, a3, a4, a5, a6, a7, a8, a9) {
    ::testing::Mock::WarnUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

  template <typename A1, typename A2, typename A3, typename A4, typename A5,
      typename A6, typename A7, typename A8, typename A9, typename A10>
  NaggyMock(co.. A1& a1, co.. A2& a2, co.. A3& a3, co.. A4& a4,
      co.. A5& a5, co.. A6& a6, co.. A7& a7, co.. A8& a8, co.. A9& a9,
      co.. A10& a10) : MockClass(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10) {
    ::testing::Mock::WarnUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

e..  // GTEST_LANG_CXX11

  ~NaggyMock() {
    ::testing::Mock::UnregisterCallReaction(
        internal::ImplicitCast_<MockClass*>(this));
  }

 pr..
  GTEST_DISALLOW_COPY_AND_ASSIGN_(NaggyMock);
};

template <n.. MockClass>
n.. StrictMock : pu.. MockClass {
 p..
  StrictMock() : MockClass() {
    ::testing::Mock::FailUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

#if GTEST_LANG_CXX11
  // Ideally, we would inherit base class's constructors through a using
  // declaration, which would preserve their visibility. However, many existing
  // tests rely on the fact that current implementation reexports protected
  // constructors as public. These tests would need to be cleaned up first.

  // Single argument constructor is special-cased so that it can be
  // made explicit.
  template <typename A>
  explicit StrictMock(A&& arg) : MockClass(st. forward<A>(arg)) {
    ::testing::Mock::FailUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

  template <typename A1, typename A2, typename... An>
  StrictMock(A1&& arg1, A2&& arg2, An&&... args)
      : MockClass(st. forward<A1>(arg1), st. forward<A2>(arg2),
                  st. forward<An>(args)...) {
    ::testing::Mock::FailUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }
#else
  // C++98 doesn't have variadic templates, so we have to define one
  // for each arity.
  template <typename A1>
  explicit StrictMock(co.. A1& a1) : MockClass(a1) {
    ::testing::Mock::FailUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }
  template <typename A1, typename A2>
  StrictMock(co.. A1& a1, co.. A2& a2) : MockClass(a1, a2) {
    ::testing::Mock::FailUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

  template <typename A1, typename A2, typename A3>
  StrictMock(co.. A1& a1, co.. A2& a2, co.. A3& a3) : MockClass(a1, a2, a3) {
    ::testing::Mock::FailUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

  template <typename A1, typename A2, typename A3, typename A4>
  StrictMock(co.. A1& a1, co.. A2& a2, co.. A3& a3,
      co.. A4& a4) : MockClass(a1, a2, a3, a4) {
    ::testing::Mock::FailUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

  template <typename A1, typename A2, typename A3, typename A4, typename A5>
  StrictMock(co.. A1& a1, co.. A2& a2, co.. A3& a3, co.. A4& a4,
      co.. A5& a5) : MockClass(a1, a2, a3, a4, a5) {
    ::testing::Mock::FailUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

  template <typename A1, typename A2, typename A3, typename A4, typename A5,
      typename A6>
  StrictMock(co.. A1& a1, co.. A2& a2, co.. A3& a3, co.. A4& a4,
      co.. A5& a5, co.. A6& a6) : MockClass(a1, a2, a3, a4, a5, a6) {
    ::testing::Mock::FailUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

  template <typename A1, typename A2, typename A3, typename A4, typename A5,
      typename A6, typename A7>
  StrictMock(co.. A1& a1, co.. A2& a2, co.. A3& a3, co.. A4& a4,
      co.. A5& a5, co.. A6& a6, co.. A7& a7) : MockClass(a1, a2, a3, a4, a5,
      a6, a7) {
    ::testing::Mock::FailUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

  template <typename A1, typename A2, typename A3, typename A4, typename A5,
      typename A6, typename A7, typename A8>
  StrictMock(co.. A1& a1, co.. A2& a2, co.. A3& a3, co.. A4& a4,
      co.. A5& a5, co.. A6& a6, co.. A7& a7, co.. A8& a8) : MockClass(a1,
      a2, a3, a4, a5, a6, a7, a8) {
    ::testing::Mock::FailUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

  template <typename A1, typename A2, typename A3, typename A4, typename A5,
      typename A6, typename A7, typename A8, typename A9>
  StrictMock(co.. A1& a1, co.. A2& a2, co.. A3& a3, co.. A4& a4,
      co.. A5& a5, co.. A6& a6, co.. A7& a7, co.. A8& a8,
      co.. A9& a9) : MockClass(a1, a2, a3, a4, a5, a6, a7, a8, a9) {
    ::testing::Mock::FailUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

  template <typename A1, typename A2, typename A3, typename A4, typename A5,
      typename A6, typename A7, typename A8, typename A9, typename A10>
  StrictMock(co.. A1& a1, co.. A2& a2, co.. A3& a3, co.. A4& a4,
      co.. A5& a5, co.. A6& a6, co.. A7& a7, co.. A8& a8, co.. A9& a9,
      co.. A10& a10) : MockClass(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10) {
    ::testing::Mock::FailUninterestingCalls(
        internal::ImplicitCast_<MockClass*>(this));
  }

e..  // GTEST_LANG_CXX11

  ~StrictMock() {
    ::testing::Mock::UnregisterCallReaction(
        internal::ImplicitCast_<MockClass*>(this));
  }

 pr..
  GTEST_DISALLOW_COPY_AND_ASSIGN_(StrictMock);
};

// The following specializations catch some (relatively more common)
// user errors of nesting nice and strict mocks.  They do NOT catch
// all possible errors.

// These specializations are declared but not defined, as NiceMock,
// NaggyMock, and StrictMock cannot be nested.

template <typename MockClass>
n.. NiceMock<NiceMock<MockClass> >;
template <typename MockClass>
n.. NiceMock<NaggyMock<MockClass> >;
template <typename MockClass>
n.. NiceMock<StrictMock<MockClass> >;

template <typename MockClass>
n.. NaggyMock<NiceMock<MockClass> >;
template <typename MockClass>
n.. NaggyMock<NaggyMock<MockClass> >;
template <typename MockClass>
n.. NaggyMock<StrictMock<MockClass> >;

template <typename MockClass>
n.. StrictMock<NiceMock<MockClass> >;
template <typename MockClass>
n.. StrictMock<NaggyMock<MockClass> >;
template <typename MockClass>
n.. StrictMock<StrictMock<MockClass> >;

}  // namespace testing

e..  // GMOCK_INCLUDE_GMOCK_GMOCK_GENERATED_NICE_STRICT_H_
