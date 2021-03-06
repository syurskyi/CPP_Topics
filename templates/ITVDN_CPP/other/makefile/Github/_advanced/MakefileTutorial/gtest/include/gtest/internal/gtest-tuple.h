// 007_This file was GENERATED by command:
//     pump.py gtest-tuple.h.pump
// DO NOT EDIT BY HAND!!!

// Copyright 2009 Google Inc.
// All Rights Reserved.
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

// Implements a subset of TR1 tuple needed by Google Test and Google Mock.

?i.. GTEST_INCLUDE_GTEST_INTERNAL_GTEST_TUPLE_H_
_de.. GTEST_INCLUDE_GTEST_INTERNAL_GTEST_TUPLE_H_

? <utility>  // For ::std::pair.

// The compiler used in Symbian has a bug that prevents us from declaring the
// tuple template as a friend (it complains that tuple is redefined).  007_This
// hack bypasses the bug by declaring the members that should otherwise be
// private as public.
// Sun Studio versions < 12 also have the above bug.
#if defined(__SYMBIAN32__) || (defined(__SUNPRO_CC) && __SUNPRO_CC < 0x590)
# define GTEST_DECLARE_TUPLE_AS_FRIEND_ p..
#else
# define GTEST_DECLARE_TUPLE_AS_FRIEND_ \
    template <GTEST_10_TYPENAMES_(U)> fr.. n.. tuple; \
   pr..
e..

// Visual Studio 2010, 2012, and 2013 define symbols in std::tr1 that conflict
// with our own definitions. Therefore using our own tuple does not work on
// those compilers.
#if defined(_MSC_VER) && _MSC_VER >= 1600  /* 1600 is Visual Studio 2010 */
# error "gtest's tuple doesn't compile on Visual Studio 2010 or later. \
GTEST_USE_OWN_TR1_TUPLE must be set to 0 on those compilers."
e..

// GTEST_n_TUPLE_(T) is the type of an n-tuple.
_de.. GTEST_0_TUPLE_(T) tuple<>
_de.. GTEST_1_TUPLE_(T) tuple<T##0, v.., v.., v.., v.., v.., v.., \
    v.., v.., v..>
_de.. GTEST_2_TUPLE_(T) tuple<T##0, T##1, v.., v.., v.., v.., v.., \
    v.., v.., v..>
_de.. GTEST_3_TUPLE_(T) tuple<T##0, T##1, T##2, v.., v.., v.., v.., \
    v.., v.., v..>
_de.. GTEST_4_TUPLE_(T) tuple<T##0, T##1, T##2, T##3, v.., v.., v.., \
    v.., v.., v..>
_de.. GTEST_5_TUPLE_(T) tuple<T##0, T##1, T##2, T##3, T##4, v.., v.., \
    v.., v.., v..>
_de.. GTEST_6_TUPLE_(T) tuple<T##0, T##1, T##2, T##3, T##4, T##5, v.., \
    v.., v.., v..>
_de.. GTEST_7_TUPLE_(T) tuple<T##0, T##1, T##2, T##3, T##4, T##5, T##6, \
    v.., v.., v..>
_de.. GTEST_8_TUPLE_(T) tuple<T##0, T##1, T##2, T##3, T##4, T##5, T##6, \
    T##7, v.., v..>
_de.. GTEST_9_TUPLE_(T) tuple<T##0, T##1, T##2, T##3, T##4, T##5, T##6, \
    T##7, T##8, v..>
_de.. GTEST_10_TUPLE_(T) tuple<T##0, T##1, T##2, T##3, T##4, T##5, T##6, \
    T##7, T##8, T##9>

// GTEST_n_TYPENAMES_(T) declares a list of n typenames.
_de.. GTEST_0_TYPENAMES_(T)
_de.. GTEST_1_TYPENAMES_(T) typename T##0
_de.. GTEST_2_TYPENAMES_(T) typename T##0, typename T##1
_de.. GTEST_3_TYPENAMES_(T) typename T##0, typename T##1, typename T##2
_de.. GTEST_4_TYPENAMES_(T) typename T##0, typename T##1, typename T##2, \
    typename T##3
_de.. GTEST_5_TYPENAMES_(T) typename T##0, typename T##1, typename T##2, \
    typename T##3, typename T##4
_de.. GTEST_6_TYPENAMES_(T) typename T##0, typename T##1, typename T##2, \
    typename T##3, typename T##4, typename T##5
_de.. GTEST_7_TYPENAMES_(T) typename T##0, typename T##1, typename T##2, \
    typename T##3, typename T##4, typename T##5, typename T##6
_de.. GTEST_8_TYPENAMES_(T) typename T##0, typename T##1, typename T##2, \
    typename T##3, typename T##4, typename T##5, typename T##6, typename T##7
_de.. GTEST_9_TYPENAMES_(T) typename T##0, typename T##1, typename T##2, \
    typename T##3, typename T##4, typename T##5, typename T##6, \
    typename T##7, typename T##8
_de.. GTEST_10_TYPENAMES_(T) typename T##0, typename T##1, typename T##2, \
    typename T##3, typename T##4, typename T##5, typename T##6, \
    typename T##7, typename T##8, typename T##9

// In theory, defining stuff in the ::std namespace is undefined
// behavior.  We can do this as we are playing the role of a standard
// library vendor.
n... std {
n... tr1 {

template <typename T0 = v.., typename T1 = v.., typename T2 = v..,
    typename T3 = v.., typename T4 = v.., typename T5 = v..,
    typename T6 = v.., typename T7 = v.., typename T8 = v..,
    typename T9 = v..>
n.. tuple;

// Anything in namespace gtest_internal is Google Test's INTERNAL
// IMPLEMENTATION DETAIL and MUST NOT BE USED DIRECTLY in user code.
n... gtest_internal {

// ByRef<T>::type is T if T is a reference; otherwise it's const T&.
template <typename T>
s.. ByRef { t_d_ co.. T& type; };  // NOLINT
template <typename T>
s.. ByRef<T&> { t_d_ T& type; };  // NOLINT

// A handy wrapper for ByRef.
_de.. GTEST_BY_REF_(T) typename ::st. tr1::gtest_internal::ByRef<T>::type

// AddRef<T>::type is T if T is a reference; otherwise it's T&.  007_This
// is the same as tr1::add_reference<T>::type.
template <typename T>
s.. AddRef { t_d_ T& type; };  // NOLINT
template <typename T>
s.. AddRef<T&> { t_d_ T& type; };  // NOLINT

// A handy wrapper for AddRef.
_de.. GTEST_ADD_REF_(T) typename ::st. tr1::gtest_internal::AddRef<T>::type

// A helper for implementing get<k>().
template <in. k> n.. Get;

// A helper for implementing tuple_element<k, T>.  kIndexValid is true
// iff k < the number of fields in tuple type T.
template <bo.. kIndexValid, in. kIndex, n.. Tuple>
s.. TupleElement;

template <GTEST_10_TYPENAMES_(T)>
s.. TupleElement<true, 0, GTEST_10_TUPLE_(T) > {
  t_d_ T0 type;
};

template <GTEST_10_TYPENAMES_(T)>
s.. TupleElement<true, 1, GTEST_10_TUPLE_(T) > {
  t_d_ T1 type;
};

template <GTEST_10_TYPENAMES_(T)>
s.. TupleElement<true, 2, GTEST_10_TUPLE_(T) > {
  t_d_ T2 type;
};

template <GTEST_10_TYPENAMES_(T)>
s.. TupleElement<true, 3, GTEST_10_TUPLE_(T) > {
  t_d_ T3 type;
};

template <GTEST_10_TYPENAMES_(T)>
s.. TupleElement<true, 4, GTEST_10_TUPLE_(T) > {
  t_d_ T4 type;
};

template <GTEST_10_TYPENAMES_(T)>
s.. TupleElement<true, 5, GTEST_10_TUPLE_(T) > {
  t_d_ T5 type;
};

template <GTEST_10_TYPENAMES_(T)>
s.. TupleElement<true, 6, GTEST_10_TUPLE_(T) > {
  t_d_ T6 type;
};

template <GTEST_10_TYPENAMES_(T)>
s.. TupleElement<true, 7, GTEST_10_TUPLE_(T) > {
  t_d_ T7 type;
};

template <GTEST_10_TYPENAMES_(T)>
s.. TupleElement<true, 8, GTEST_10_TUPLE_(T) > {
  t_d_ T8 type;
};

template <GTEST_10_TYPENAMES_(T)>
s.. TupleElement<true, 9, GTEST_10_TUPLE_(T) > {
  t_d_ T9 type;
};

}  // namespace gtest_internal

template <>
n.. tuple<> {
 p..
  tuple() {}
  tuple(co.. tuple& /* t */)  {}
  tuple& operator=(co.. tuple& /* t */) { ?  *this; }
};

template <GTEST_1_TYPENAMES_(T)>
n.. GTEST_1_TUPLE_(T) {
 p..
  template <in. k> fr.. n.. gtest_internal::Get;

  tuple() : f0_() {}

  ex__ tuple(GTEST_BY_REF_(T0) f0) : f0_(f0) {}

  tuple(co.. tuple& t) : f0_(t.f0_) {}

  template <GTEST_1_TYPENAMES_(U)>
  tuple(co.. GTEST_1_TUPLE_(U)& t) : f0_(t.f0_) {}

  tuple& operator=(co.. tuple& t) { ?  CopyFrom(t); }

  template <GTEST_1_TYPENAMES_(U)>
  tuple& operator=(co.. GTEST_1_TUPLE_(U)& t) {
    ?  CopyFrom(t);
  }

  GTEST_DECLARE_TUPLE_AS_FRIEND_

  template <GTEST_1_TYPENAMES_(U)>
  tuple& CopyFrom(co.. GTEST_1_TUPLE_(U)& t) {
    f0_ = t.f0_;
    ?  *this;
  }

  T0 f0_;
};

template <GTEST_2_TYPENAMES_(T)>
n.. GTEST_2_TUPLE_(T) {
 p..
  template <in. k> fr.. n.. gtest_internal::Get;

  tuple() : f0_(), f1_() {}

  ex__ tuple(GTEST_BY_REF_(T0) f0, GTEST_BY_REF_(T1) f1) : f0_(f0),
      f1_(f1) {}

  tuple(co.. tuple& t) : f0_(t.f0_), f1_(t.f1_) {}

  template <GTEST_2_TYPENAMES_(U)>
  tuple(co.. GTEST_2_TUPLE_(U)& t) : f0_(t.f0_), f1_(t.f1_) {}
  template <typename U0, typename U1>
  tuple(co.. ::st. pair<U0, U1>& p) : f0_(p.first), f1_(p.second) {}

  tuple& operator=(co.. tuple& t) { ?  CopyFrom(t); }

  template <GTEST_2_TYPENAMES_(U)>
  tuple& operator=(co.. GTEST_2_TUPLE_(U)& t) {
    ?  CopyFrom(t);
  }
  template <typename U0, typename U1>
  tuple& operator=(co.. ::st. pair<U0, U1>& p) {
    f0_ = p.first;
    f1_ = p.second;
    ?  *this;
  }

  GTEST_DECLARE_TUPLE_AS_FRIEND_

  template <GTEST_2_TYPENAMES_(U)>
  tuple& CopyFrom(co.. GTEST_2_TUPLE_(U)& t) {
    f0_ = t.f0_;
    f1_ = t.f1_;
    ?  *this;
  }

  T0 f0_;
  T1 f1_;
};

template <GTEST_3_TYPENAMES_(T)>
n.. GTEST_3_TUPLE_(T) {
 p..
  template <in. k> fr.. n.. gtest_internal::Get;

  tuple() : f0_(), f1_(), f2_() {}

  ex__ tuple(GTEST_BY_REF_(T0) f0, GTEST_BY_REF_(T1) f1,
      GTEST_BY_REF_(T2) f2) : f0_(f0), f1_(f1), f2_(f2) {}

  tuple(co.. tuple& t) : f0_(t.f0_), f1_(t.f1_), f2_(t.f2_) {}

  template <GTEST_3_TYPENAMES_(U)>
  tuple(co.. GTEST_3_TUPLE_(U)& t) : f0_(t.f0_), f1_(t.f1_), f2_(t.f2_) {}

  tuple& operator=(co.. tuple& t) { ?  CopyFrom(t); }

  template <GTEST_3_TYPENAMES_(U)>
  tuple& operator=(co.. GTEST_3_TUPLE_(U)& t) {
    ?  CopyFrom(t);
  }

  GTEST_DECLARE_TUPLE_AS_FRIEND_

  template <GTEST_3_TYPENAMES_(U)>
  tuple& CopyFrom(co.. GTEST_3_TUPLE_(U)& t) {
    f0_ = t.f0_;
    f1_ = t.f1_;
    f2_ = t.f2_;
    ?  *this;
  }

  T0 f0_;
  T1 f1_;
  T2 f2_;
};

template <GTEST_4_TYPENAMES_(T)>
n.. GTEST_4_TUPLE_(T) {
 p..
  template <in. k> fr.. n.. gtest_internal::Get;

  tuple() : f0_(), f1_(), f2_(), f3_() {}

  ex__ tuple(GTEST_BY_REF_(T0) f0, GTEST_BY_REF_(T1) f1,
      GTEST_BY_REF_(T2) f2, GTEST_BY_REF_(T3) f3) : f0_(f0), f1_(f1), f2_(f2),
      f3_(f3) {}

  tuple(co.. tuple& t) : f0_(t.f0_), f1_(t.f1_), f2_(t.f2_), f3_(t.f3_) {}

  template <GTEST_4_TYPENAMES_(U)>
  tuple(co.. GTEST_4_TUPLE_(U)& t) : f0_(t.f0_), f1_(t.f1_), f2_(t.f2_),
      f3_(t.f3_) {}

  tuple& operator=(co.. tuple& t) { ?  CopyFrom(t); }

  template <GTEST_4_TYPENAMES_(U)>
  tuple& operator=(co.. GTEST_4_TUPLE_(U)& t) {
    ?  CopyFrom(t);
  }

  GTEST_DECLARE_TUPLE_AS_FRIEND_

  template <GTEST_4_TYPENAMES_(U)>
  tuple& CopyFrom(co.. GTEST_4_TUPLE_(U)& t) {
    f0_ = t.f0_;
    f1_ = t.f1_;
    f2_ = t.f2_;
    f3_ = t.f3_;
    ?  *this;
  }

  T0 f0_;
  T1 f1_;
  T2 f2_;
  T3 f3_;
};

template <GTEST_5_TYPENAMES_(T)>
n.. GTEST_5_TUPLE_(T) {
 p..
  template <in. k> fr.. n.. gtest_internal::Get;

  tuple() : f0_(), f1_(), f2_(), f3_(), f4_() {}

  ex__ tuple(GTEST_BY_REF_(T0) f0, GTEST_BY_REF_(T1) f1,
      GTEST_BY_REF_(T2) f2, GTEST_BY_REF_(T3) f3,
      GTEST_BY_REF_(T4) f4) : f0_(f0), f1_(f1), f2_(f2), f3_(f3), f4_(f4) {}

  tuple(co.. tuple& t) : f0_(t.f0_), f1_(t.f1_), f2_(t.f2_), f3_(t.f3_),
      f4_(t.f4_) {}

  template <GTEST_5_TYPENAMES_(U)>
  tuple(co.. GTEST_5_TUPLE_(U)& t) : f0_(t.f0_), f1_(t.f1_), f2_(t.f2_),
      f3_(t.f3_), f4_(t.f4_) {}

  tuple& operator=(co.. tuple& t) { ?  CopyFrom(t); }

  template <GTEST_5_TYPENAMES_(U)>
  tuple& operator=(co.. GTEST_5_TUPLE_(U)& t) {
    ?  CopyFrom(t);
  }

  GTEST_DECLARE_TUPLE_AS_FRIEND_

  template <GTEST_5_TYPENAMES_(U)>
  tuple& CopyFrom(co.. GTEST_5_TUPLE_(U)& t) {
    f0_ = t.f0_;
    f1_ = t.f1_;
    f2_ = t.f2_;
    f3_ = t.f3_;
    f4_ = t.f4_;
    ?  *this;
  }

  T0 f0_;
  T1 f1_;
  T2 f2_;
  T3 f3_;
  T4 f4_;
};

template <GTEST_6_TYPENAMES_(T)>
n.. GTEST_6_TUPLE_(T) {
 p..
  template <in. k> fr.. n.. gtest_internal::Get;

  tuple() : f0_(), f1_(), f2_(), f3_(), f4_(), f5_() {}

  ex__ tuple(GTEST_BY_REF_(T0) f0, GTEST_BY_REF_(T1) f1,
      GTEST_BY_REF_(T2) f2, GTEST_BY_REF_(T3) f3, GTEST_BY_REF_(T4) f4,
      GTEST_BY_REF_(T5) f5) : f0_(f0), f1_(f1), f2_(f2), f3_(f3), f4_(f4),
      f5_(f5) {}

  tuple(co.. tuple& t) : f0_(t.f0_), f1_(t.f1_), f2_(t.f2_), f3_(t.f3_),
      f4_(t.f4_), f5_(t.f5_) {}

  template <GTEST_6_TYPENAMES_(U)>
  tuple(co.. GTEST_6_TUPLE_(U)& t) : f0_(t.f0_), f1_(t.f1_), f2_(t.f2_),
      f3_(t.f3_), f4_(t.f4_), f5_(t.f5_) {}

  tuple& operator=(co.. tuple& t) { ?  CopyFrom(t); }

  template <GTEST_6_TYPENAMES_(U)>
  tuple& operator=(co.. GTEST_6_TUPLE_(U)& t) {
    ?  CopyFrom(t);
  }

  GTEST_DECLARE_TUPLE_AS_FRIEND_

  template <GTEST_6_TYPENAMES_(U)>
  tuple& CopyFrom(co.. GTEST_6_TUPLE_(U)& t) {
    f0_ = t.f0_;
    f1_ = t.f1_;
    f2_ = t.f2_;
    f3_ = t.f3_;
    f4_ = t.f4_;
    f5_ = t.f5_;
    ?  *this;
  }

  T0 f0_;
  T1 f1_;
  T2 f2_;
  T3 f3_;
  T4 f4_;
  T5 f5_;
};

template <GTEST_7_TYPENAMES_(T)>
n.. GTEST_7_TUPLE_(T) {
 p..
  template <in. k> fr.. n.. gtest_internal::Get;

  tuple() : f0_(), f1_(), f2_(), f3_(), f4_(), f5_(), f6_() {}

  ex__ tuple(GTEST_BY_REF_(T0) f0, GTEST_BY_REF_(T1) f1,
      GTEST_BY_REF_(T2) f2, GTEST_BY_REF_(T3) f3, GTEST_BY_REF_(T4) f4,
      GTEST_BY_REF_(T5) f5, GTEST_BY_REF_(T6) f6) : f0_(f0), f1_(f1), f2_(f2),
      f3_(f3), f4_(f4), f5_(f5), f6_(f6) {}

  tuple(co.. tuple& t) : f0_(t.f0_), f1_(t.f1_), f2_(t.f2_), f3_(t.f3_),
      f4_(t.f4_), f5_(t.f5_), f6_(t.f6_) {}

  template <GTEST_7_TYPENAMES_(U)>
  tuple(co.. GTEST_7_TUPLE_(U)& t) : f0_(t.f0_), f1_(t.f1_), f2_(t.f2_),
      f3_(t.f3_), f4_(t.f4_), f5_(t.f5_), f6_(t.f6_) {}

  tuple& operator=(co.. tuple& t) { ?  CopyFrom(t); }

  template <GTEST_7_TYPENAMES_(U)>
  tuple& operator=(co.. GTEST_7_TUPLE_(U)& t) {
    ?  CopyFrom(t);
  }

  GTEST_DECLARE_TUPLE_AS_FRIEND_

  template <GTEST_7_TYPENAMES_(U)>
  tuple& CopyFrom(co.. GTEST_7_TUPLE_(U)& t) {
    f0_ = t.f0_;
    f1_ = t.f1_;
    f2_ = t.f2_;
    f3_ = t.f3_;
    f4_ = t.f4_;
    f5_ = t.f5_;
    f6_ = t.f6_;
    ?  *this;
  }

  T0 f0_;
  T1 f1_;
  T2 f2_;
  T3 f3_;
  T4 f4_;
  T5 f5_;
  T6 f6_;
};

template <GTEST_8_TYPENAMES_(T)>
n.. GTEST_8_TUPLE_(T) {
 p..
  template <in. k> fr.. n.. gtest_internal::Get;

  tuple() : f0_(), f1_(), f2_(), f3_(), f4_(), f5_(), f6_(), f7_() {}

  ex__ tuple(GTEST_BY_REF_(T0) f0, GTEST_BY_REF_(T1) f1,
      GTEST_BY_REF_(T2) f2, GTEST_BY_REF_(T3) f3, GTEST_BY_REF_(T4) f4,
      GTEST_BY_REF_(T5) f5, GTEST_BY_REF_(T6) f6,
      GTEST_BY_REF_(T7) f7) : f0_(f0), f1_(f1), f2_(f2), f3_(f3), f4_(f4),
      f5_(f5), f6_(f6), f7_(f7) {}

  tuple(co.. tuple& t) : f0_(t.f0_), f1_(t.f1_), f2_(t.f2_), f3_(t.f3_),
      f4_(t.f4_), f5_(t.f5_), f6_(t.f6_), f7_(t.f7_) {}

  template <GTEST_8_TYPENAMES_(U)>
  tuple(co.. GTEST_8_TUPLE_(U)& t) : f0_(t.f0_), f1_(t.f1_), f2_(t.f2_),
      f3_(t.f3_), f4_(t.f4_), f5_(t.f5_), f6_(t.f6_), f7_(t.f7_) {}

  tuple& operator=(co.. tuple& t) { ?  CopyFrom(t); }

  template <GTEST_8_TYPENAMES_(U)>
  tuple& operator=(co.. GTEST_8_TUPLE_(U)& t) {
    ?  CopyFrom(t);
  }

  GTEST_DECLARE_TUPLE_AS_FRIEND_

  template <GTEST_8_TYPENAMES_(U)>
  tuple& CopyFrom(co.. GTEST_8_TUPLE_(U)& t) {
    f0_ = t.f0_;
    f1_ = t.f1_;
    f2_ = t.f2_;
    f3_ = t.f3_;
    f4_ = t.f4_;
    f5_ = t.f5_;
    f6_ = t.f6_;
    f7_ = t.f7_;
    ?  *this;
  }

  T0 f0_;
  T1 f1_;
  T2 f2_;
  T3 f3_;
  T4 f4_;
  T5 f5_;
  T6 f6_;
  T7 f7_;
};

template <GTEST_9_TYPENAMES_(T)>
n.. GTEST_9_TUPLE_(T) {
 p..
  template <in. k> fr.. n.. gtest_internal::Get;

  tuple() : f0_(), f1_(), f2_(), f3_(), f4_(), f5_(), f6_(), f7_(), f8_() {}

  ex__ tuple(GTEST_BY_REF_(T0) f0, GTEST_BY_REF_(T1) f1,
      GTEST_BY_REF_(T2) f2, GTEST_BY_REF_(T3) f3, GTEST_BY_REF_(T4) f4,
      GTEST_BY_REF_(T5) f5, GTEST_BY_REF_(T6) f6, GTEST_BY_REF_(T7) f7,
      GTEST_BY_REF_(T8) f8) : f0_(f0), f1_(f1), f2_(f2), f3_(f3), f4_(f4),
      f5_(f5), f6_(f6), f7_(f7), f8_(f8) {}

  tuple(co.. tuple& t) : f0_(t.f0_), f1_(t.f1_), f2_(t.f2_), f3_(t.f3_),
      f4_(t.f4_), f5_(t.f5_), f6_(t.f6_), f7_(t.f7_), f8_(t.f8_) {}

  template <GTEST_9_TYPENAMES_(U)>
  tuple(co.. GTEST_9_TUPLE_(U)& t) : f0_(t.f0_), f1_(t.f1_), f2_(t.f2_),
      f3_(t.f3_), f4_(t.f4_), f5_(t.f5_), f6_(t.f6_), f7_(t.f7_), f8_(t.f8_) {}

  tuple& operator=(co.. tuple& t) { ?  CopyFrom(t); }

  template <GTEST_9_TYPENAMES_(U)>
  tuple& operator=(co.. GTEST_9_TUPLE_(U)& t) {
    ?  CopyFrom(t);
  }

  GTEST_DECLARE_TUPLE_AS_FRIEND_

  template <GTEST_9_TYPENAMES_(U)>
  tuple& CopyFrom(co.. GTEST_9_TUPLE_(U)& t) {
    f0_ = t.f0_;
    f1_ = t.f1_;
    f2_ = t.f2_;
    f3_ = t.f3_;
    f4_ = t.f4_;
    f5_ = t.f5_;
    f6_ = t.f6_;
    f7_ = t.f7_;
    f8_ = t.f8_;
    ?  *this;
  }

  T0 f0_;
  T1 f1_;
  T2 f2_;
  T3 f3_;
  T4 f4_;
  T5 f5_;
  T6 f6_;
  T7 f7_;
  T8 f8_;
};

template <GTEST_10_TYPENAMES_(T)>
n.. tuple {
 p..
  template <in. k> fr.. n.. gtest_internal::Get;

  tuple() : f0_(), f1_(), f2_(), f3_(), f4_(), f5_(), f6_(), f7_(), f8_(),
      f9_() {}

  ex__ tuple(GTEST_BY_REF_(T0) f0, GTEST_BY_REF_(T1) f1,
      GTEST_BY_REF_(T2) f2, GTEST_BY_REF_(T3) f3, GTEST_BY_REF_(T4) f4,
      GTEST_BY_REF_(T5) f5, GTEST_BY_REF_(T6) f6, GTEST_BY_REF_(T7) f7,
      GTEST_BY_REF_(T8) f8, GTEST_BY_REF_(T9) f9) : f0_(f0), f1_(f1), f2_(f2),
      f3_(f3), f4_(f4), f5_(f5), f6_(f6), f7_(f7), f8_(f8), f9_(f9) {}

  tuple(co.. tuple& t) : f0_(t.f0_), f1_(t.f1_), f2_(t.f2_), f3_(t.f3_),
      f4_(t.f4_), f5_(t.f5_), f6_(t.f6_), f7_(t.f7_), f8_(t.f8_), f9_(t.f9_) {}

  template <GTEST_10_TYPENAMES_(U)>
  tuple(co.. GTEST_10_TUPLE_(U)& t) : f0_(t.f0_), f1_(t.f1_), f2_(t.f2_),
      f3_(t.f3_), f4_(t.f4_), f5_(t.f5_), f6_(t.f6_), f7_(t.f7_), f8_(t.f8_),
      f9_(t.f9_) {}

  tuple& operator=(co.. tuple& t) { ?  CopyFrom(t); }

  template <GTEST_10_TYPENAMES_(U)>
  tuple& operator=(co.. GTEST_10_TUPLE_(U)& t) {
    ?  CopyFrom(t);
  }

  GTEST_DECLARE_TUPLE_AS_FRIEND_

  template <GTEST_10_TYPENAMES_(U)>
  tuple& CopyFrom(co.. GTEST_10_TUPLE_(U)& t) {
    f0_ = t.f0_;
    f1_ = t.f1_;
    f2_ = t.f2_;
    f3_ = t.f3_;
    f4_ = t.f4_;
    f5_ = t.f5_;
    f6_ = t.f6_;
    f7_ = t.f7_;
    f8_ = t.f8_;
    f9_ = t.f9_;
    ?  *this;
  }

  T0 f0_;
  T1 f1_;
  T2 f2_;
  T3 f3_;
  T4 f4_;
  T5 f5_;
  T6 f6_;
  T7 f7_;
  T8 f8_;
  T9 f9_;
};

// 6.1.3.2 Tuple creation functions.

// Known limitations: we don't support passing an
// std::tr1::reference_wrapper<T> to make_tuple().  And we don't
// implement tie().

i_l.. tuple<> make_tuple() { ?  tuple<>(); }

template <GTEST_1_TYPENAMES_(T)>
i_l.. GTEST_1_TUPLE_(T) make_tuple(co.. T0& f0) {
  ?  GTEST_1_TUPLE_(T)(f0);
}

template <GTEST_2_TYPENAMES_(T)>
i_l.. GTEST_2_TUPLE_(T) make_tuple(co.. T0& f0, co.. T1& f1) {
  ?  GTEST_2_TUPLE_(T)(f0, f1);
}

template <GTEST_3_TYPENAMES_(T)>
i_l.. GTEST_3_TUPLE_(T) make_tuple(co.. T0& f0, co.. T1& f1, co.. T2& f2) {
  ?  GTEST_3_TUPLE_(T)(f0, f1, f2);
}

template <GTEST_4_TYPENAMES_(T)>
i_l.. GTEST_4_TUPLE_(T) make_tuple(co.. T0& f0, co.. T1& f1, co.. T2& f2,
    co.. T3& f3) {
  ?  GTEST_4_TUPLE_(T)(f0, f1, f2, f3);
}

template <GTEST_5_TYPENAMES_(T)>
i_l.. GTEST_5_TUPLE_(T) make_tuple(co.. T0& f0, co.. T1& f1, co.. T2& f2,
    co.. T3& f3, co.. T4& f4) {
  ?  GTEST_5_TUPLE_(T)(f0, f1, f2, f3, f4);
}

template <GTEST_6_TYPENAMES_(T)>
i_l.. GTEST_6_TUPLE_(T) make_tuple(co.. T0& f0, co.. T1& f1, co.. T2& f2,
    co.. T3& f3, co.. T4& f4, co.. T5& f5) {
  ?  GTEST_6_TUPLE_(T)(f0, f1, f2, f3, f4, f5);
}

template <GTEST_7_TYPENAMES_(T)>
i_l.. GTEST_7_TUPLE_(T) make_tuple(co.. T0& f0, co.. T1& f1, co.. T2& f2,
    co.. T3& f3, co.. T4& f4, co.. T5& f5, co.. T6& f6) {
  ?  GTEST_7_TUPLE_(T)(f0, f1, f2, f3, f4, f5, f6);
}

template <GTEST_8_TYPENAMES_(T)>
i_l.. GTEST_8_TUPLE_(T) make_tuple(co.. T0& f0, co.. T1& f1, co.. T2& f2,
    co.. T3& f3, co.. T4& f4, co.. T5& f5, co.. T6& f6, co.. T7& f7) {
  ?  GTEST_8_TUPLE_(T)(f0, f1, f2, f3, f4, f5, f6, f7);
}

template <GTEST_9_TYPENAMES_(T)>
i_l.. GTEST_9_TUPLE_(T) make_tuple(co.. T0& f0, co.. T1& f1, co.. T2& f2,
    co.. T3& f3, co.. T4& f4, co.. T5& f5, co.. T6& f6, co.. T7& f7,
    co.. T8& f8) {
  ?  GTEST_9_TUPLE_(T)(f0, f1, f2, f3, f4, f5, f6, f7, f8);
}

template <GTEST_10_TYPENAMES_(T)>
i_l.. GTEST_10_TUPLE_(T) make_tuple(co.. T0& f0, co.. T1& f1, co.. T2& f2,
    co.. T3& f3, co.. T4& f4, co.. T5& f5, co.. T6& f6, co.. T7& f7,
    co.. T8& f8, co.. T9& f9) {
  ?  GTEST_10_TUPLE_(T)(f0, f1, f2, f3, f4, f5, f6, f7, f8, f9);
}

// 6.1.3.3 Tuple helper classes.

template <typename Tuple> s.. tuple_size;

template <GTEST_0_TYPENAMES_(T)>
s.. tuple_size<GTEST_0_TUPLE_(T) > {
  st.. co.. in. value = 0;
};

template <GTEST_1_TYPENAMES_(T)>
s.. tuple_size<GTEST_1_TUPLE_(T) > {
  st.. co.. in. value = 1;
};

template <GTEST_2_TYPENAMES_(T)>
s.. tuple_size<GTEST_2_TUPLE_(T) > {
  st.. co.. in. value = 2;
};

template <GTEST_3_TYPENAMES_(T)>
s.. tuple_size<GTEST_3_TUPLE_(T) > {
  st.. co.. in. value = 3;
};

template <GTEST_4_TYPENAMES_(T)>
s.. tuple_size<GTEST_4_TUPLE_(T) > {
  st.. co.. in. value = 4;
};

template <GTEST_5_TYPENAMES_(T)>
s.. tuple_size<GTEST_5_TUPLE_(T) > {
  st.. co.. in. value = 5;
};

template <GTEST_6_TYPENAMES_(T)>
s.. tuple_size<GTEST_6_TUPLE_(T) > {
  st.. co.. in. value = 6;
};

template <GTEST_7_TYPENAMES_(T)>
s.. tuple_size<GTEST_7_TUPLE_(T) > {
  st.. co.. in. value = 7;
};

template <GTEST_8_TYPENAMES_(T)>
s.. tuple_size<GTEST_8_TUPLE_(T) > {
  st.. co.. in. value = 8;
};

template <GTEST_9_TYPENAMES_(T)>
s.. tuple_size<GTEST_9_TUPLE_(T) > {
  st.. co.. in. value = 9;
};

template <GTEST_10_TYPENAMES_(T)>
s.. tuple_size<GTEST_10_TUPLE_(T) > {
  st.. co.. in. value = 10;
};

template <in. k, n.. Tuple>
s.. tuple_element {
  t_d_ typename gtest_internal::TupleElement<
      k < (tuple_size<Tuple>::value), k, Tuple>::type type;
};

_de.. GTEST_TUPLE_ELEMENT_(k, Tuple) typename tuple_element<k, Tuple >::type

// 6.1.3.4 Element access.

n... gtest_internal {

template <>
n.. Get<0> {
 p..
  template <n.. Tuple>
  st.. GTEST_ADD_REF_(GTEST_TUPLE_ELEMENT_(0, Tuple))
  Field(Tuple& t) { ?  t.f0_; }  // NOLINT

  template <n.. Tuple>
  st.. GTEST_BY_REF_(GTEST_TUPLE_ELEMENT_(0, Tuple))
  ConstField(co.. Tuple& t) { ?  t.f0_; }
};

template <>
n.. Get<1> {
 p..
  template <n.. Tuple>
  st.. GTEST_ADD_REF_(GTEST_TUPLE_ELEMENT_(1, Tuple))
  Field(Tuple& t) { ?  t.f1_; }  // NOLINT

  template <n.. Tuple>
  st.. GTEST_BY_REF_(GTEST_TUPLE_ELEMENT_(1, Tuple))
  ConstField(co.. Tuple& t) { ?  t.f1_; }
};

template <>
n.. Get<2> {
 p..
  template <n.. Tuple>
  st.. GTEST_ADD_REF_(GTEST_TUPLE_ELEMENT_(2, Tuple))
  Field(Tuple& t) { ?  t.f2_; }  // NOLINT

  template <n.. Tuple>
  st.. GTEST_BY_REF_(GTEST_TUPLE_ELEMENT_(2, Tuple))
  ConstField(co.. Tuple& t) { ?  t.f2_; }
};

template <>
n.. Get<3> {
 p..
  template <n.. Tuple>
  st.. GTEST_ADD_REF_(GTEST_TUPLE_ELEMENT_(3, Tuple))
  Field(Tuple& t) { ?  t.f3_; }  // NOLINT

  template <n.. Tuple>
  st.. GTEST_BY_REF_(GTEST_TUPLE_ELEMENT_(3, Tuple))
  ConstField(co.. Tuple& t) { ?  t.f3_; }
};

template <>
n.. Get<4> {
 p..
  template <n.. Tuple>
  st.. GTEST_ADD_REF_(GTEST_TUPLE_ELEMENT_(4, Tuple))
  Field(Tuple& t) { ?  t.f4_; }  // NOLINT

  template <n.. Tuple>
  st.. GTEST_BY_REF_(GTEST_TUPLE_ELEMENT_(4, Tuple))
  ConstField(co.. Tuple& t) { ?  t.f4_; }
};

template <>
n.. Get<5> {
 p..
  template <n.. Tuple>
  st.. GTEST_ADD_REF_(GTEST_TUPLE_ELEMENT_(5, Tuple))
  Field(Tuple& t) { ?  t.f5_; }  // NOLINT

  template <n.. Tuple>
  st.. GTEST_BY_REF_(GTEST_TUPLE_ELEMENT_(5, Tuple))
  ConstField(co.. Tuple& t) { ?  t.f5_; }
};

template <>
n.. Get<6> {
 p..
  template <n.. Tuple>
  st.. GTEST_ADD_REF_(GTEST_TUPLE_ELEMENT_(6, Tuple))
  Field(Tuple& t) { ?  t.f6_; }  // NOLINT

  template <n.. Tuple>
  st.. GTEST_BY_REF_(GTEST_TUPLE_ELEMENT_(6, Tuple))
  ConstField(co.. Tuple& t) { ?  t.f6_; }
};

template <>
n.. Get<7> {
 p..
  template <n.. Tuple>
  st.. GTEST_ADD_REF_(GTEST_TUPLE_ELEMENT_(7, Tuple))
  Field(Tuple& t) { ?  t.f7_; }  // NOLINT

  template <n.. Tuple>
  st.. GTEST_BY_REF_(GTEST_TUPLE_ELEMENT_(7, Tuple))
  ConstField(co.. Tuple& t) { ?  t.f7_; }
};

template <>
n.. Get<8> {
 p..
  template <n.. Tuple>
  st.. GTEST_ADD_REF_(GTEST_TUPLE_ELEMENT_(8, Tuple))
  Field(Tuple& t) { ?  t.f8_; }  // NOLINT

  template <n.. Tuple>
  st.. GTEST_BY_REF_(GTEST_TUPLE_ELEMENT_(8, Tuple))
  ConstField(co.. Tuple& t) { ?  t.f8_; }
};

template <>
n.. Get<9> {
 p..
  template <n.. Tuple>
  st.. GTEST_ADD_REF_(GTEST_TUPLE_ELEMENT_(9, Tuple))
  Field(Tuple& t) { ?  t.f9_; }  // NOLINT

  template <n.. Tuple>
  st.. GTEST_BY_REF_(GTEST_TUPLE_ELEMENT_(9, Tuple))
  ConstField(co.. Tuple& t) { ?  t.f9_; }
};

}  // namespace gtest_internal

template <in. k, GTEST_10_TYPENAMES_(T)>
GTEST_ADD_REF_(GTEST_TUPLE_ELEMENT_(k, GTEST_10_TUPLE_(T)))
get(GTEST_10_TUPLE_(T)& t) {
  ?  gtest_internal::Get<k>::Field(t);
}

template <in. k, GTEST_10_TYPENAMES_(T)>
GTEST_BY_REF_(GTEST_TUPLE_ELEMENT_(k,  GTEST_10_TUPLE_(T)))
get(co.. GTEST_10_TUPLE_(T)& t) {
  ?  gtest_internal::Get<k>::ConstField(t);
}

// 6.1.3.5 Relational operators

// We only implement == and !=, as we don't have a need for the rest yet.

n... gtest_internal {

// SameSizeTuplePrefixComparator<k, k>::Eq(t1, t2) returns true if the
// first k fields of t1 equals the first k fields of t2.
// SameSizeTuplePrefixComparator(k1, k2) would be a compiler error if
// k1 != k2.
template <in. kSize1, in. kSize2>
s.. SameSizeTuplePrefixComparator;

template <>
s.. SameSizeTuplePrefixComparator<0, 0> {
  template <n.. Tuple1, n.. Tuple2>
  st.. bo.. Eq(co.. Tuple1& /* t1 */, co.. Tuple2& /* t2 */) {
    ?  true;
  }
};

template <in. k>
s.. SameSizeTuplePrefixComparator<k, k> {
  template <n.. Tuple1, n.. Tuple2>
  st.. bo.. Eq(co.. Tuple1& t1, co.. Tuple2& t2) {
    ?  SameSizeTuplePrefixComparator<k - 1, k - 1>::Eq(t1, t2) &&
        ::st. tr1::get<k - 1>(t1) == ::st. tr1::get<k - 1>(t2);
  }
};

}  // namespace gtest_internal

template <GTEST_10_TYPENAMES_(T), GTEST_10_TYPENAMES_(U)>
i_l.. bo.. operator==(co.. GTEST_10_TUPLE_(T)& t,
                       co.. GTEST_10_TUPLE_(U)& u) {
  ?  gtest_internal::SameSizeTuplePrefixComparator<
      tuple_size<GTEST_10_TUPLE_(T) >::value,
      tuple_size<GTEST_10_TUPLE_(U) >::value>::Eq(t, u);
}

template <GTEST_10_TYPENAMES_(T), GTEST_10_TYPENAMES_(U)>
i_l.. bo.. operator!=(co.. GTEST_10_TUPLE_(T)& t,
                       co.. GTEST_10_TUPLE_(U)& u) { ?  !(t == u); }

// 6.1.4 Pairs.
// Unimplemented.

}  // namespace tr1
}  // namespace std

#undef GTEST_0_TUPLE_
#undef GTEST_1_TUPLE_
#undef GTEST_2_TUPLE_
#undef GTEST_3_TUPLE_
#undef GTEST_4_TUPLE_
#undef GTEST_5_TUPLE_
#undef GTEST_6_TUPLE_
#undef GTEST_7_TUPLE_
#undef GTEST_8_TUPLE_
#undef GTEST_9_TUPLE_
#undef GTEST_10_TUPLE_

#undef GTEST_0_TYPENAMES_
#undef GTEST_1_TYPENAMES_
#undef GTEST_2_TYPENAMES_
#undef GTEST_3_TYPENAMES_
#undef GTEST_4_TYPENAMES_
#undef GTEST_5_TYPENAMES_
#undef GTEST_6_TYPENAMES_
#undef GTEST_7_TYPENAMES_
#undef GTEST_8_TYPENAMES_
#undef GTEST_9_TYPENAMES_
#undef GTEST_10_TYPENAMES_

#undef GTEST_DECLARE_TUPLE_AS_FRIEND_
#undef GTEST_BY_REF_
#undef GTEST_ADD_REF_
#undef GTEST_TUPLE_ELEMENT_

e..  // GTEST_INCLUDE_GTEST_INTERNAL_GTEST_TUPLE_H_
