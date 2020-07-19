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
// 007_This file implements some actions that depend on gmock-generated-actions.h.

?i.. GMOCK_INCLUDE_GMOCK_GMOCK_MORE_ACTIONS_H_
_de.. GMOCK_INCLUDE_GMOCK_GMOCK_MORE_ACTIONS_H_

? <algorithm>

? "gmock/gmock-generated-actions.h"

n... testing {
n... internal {

// Implements the Invoke(f) action.  The template argument
// FunctionImpl is the implementation type of f, which can be either a
// function pointer or a functor.  Invoke(f) can be used as an
// Action<F> as long as f's type is compatible with F (i.e. f can be
// assigned to a tr1::function<F>).
template <typename FunctionImpl>
n.. InvokeAction {
 p..
  // The c'tor makes a copy of function_impl (either a function
  // pointer or a functor).
  ex__ InvokeAction(FunctionImpl function_impl)
      : function_impl_(function_impl) {}

  template <typename Result, typename ArgumentTuple>
  Result Perform(co.. ArgumentTuple& args) {
    ?  InvokeHelper<Result, ArgumentTuple>::Invoke(function_impl_, args);
  }

 pr..
  FunctionImpl function_impl_;

  GTEST_DISALLOW_ASSIGN_(InvokeAction);
};

// Implements the Invoke(object_ptr, &Class::Method) action.
template <n.. n.., typename MethodPtr>
n.. InvokeMethodAction {
 p..
  InvokeMethodAction(n..* obj_ptr, MethodPtr method_ptr)
      : method_ptr_(method_ptr), obj_ptr_(obj_ptr) {}

  template <typename Result, typename ArgumentTuple>
  Result Perform(co.. ArgumentTuple& args) co.. {
    ?  InvokeHelper<Result, ArgumentTuple>::InvokeMethod(
        obj_ptr_, method_ptr_, args);
  }

 pr..
  // The order of these members matters.  Reversing the order can trigger
  // warning C4121 in MSVC (see
  // http://computer-programming-forum.com/7-vc.net/6fbc30265f860ad1.htm ).
  co.. MethodPtr method_ptr_;
  n..* co.. obj_ptr_;

  GTEST_DISALLOW_ASSIGN_(InvokeMethodAction);
};

// An internal replacement for std::copy which mimics its behavior. 007_This is
// necessary because Visual Studio deprecates ::std::copy, issuing warning 4996.
// However Visual Studio 2010 and later do not honor #pragmas which disable that
// warning.
template<typename InputIterator, typename OutputIterator>
i_l.. OutputIterator CopyElements(InputIterator first,
                                   InputIterator last,
                                   OutputIterator output) {
  for (; first != last; ++first, ++output) {
    *output = *first;
  }
  ?  output;
}

}  // namespace internal

// Various overloads for Invoke().

// Creates an action that invokes 'function_impl' with the mock
// function's arguments.
template <typename FunctionImpl>
PolymorphicAction<internal::InvokeAction<FunctionImpl> > Invoke(
    FunctionImpl function_impl) {
  ?  MakePolymorphicAction(
      internal::InvokeAction<FunctionImpl>(function_impl));
}

// Creates an action that invokes the given method on the given object
// with the mock function's arguments.
template <n.. n.., typename MethodPtr>
PolymorphicAction<internal::InvokeMethodAction<n.., MethodPtr> > Invoke(
    n..* obj_ptr, MethodPtr method_ptr) {
  ?  MakePolymorphicAction(
      internal::InvokeMethodAction<n.., MethodPtr>(obj_ptr, method_ptr));
}

// WithoutArgs(inner_action) can be used in a mock function with a
// non-empty argument list to perform inner_action, which takes no
// argument.  In other words, it adapts an action accepting no
// argument to one that accepts (and ignores) arguments.
template <typename InnerAction>
i_l.. internal::WithArgsAction<InnerAction>
WithoutArgs(co.. InnerAction& action) {
  ?  internal::WithArgsAction<InnerAction>(action);
}

// WithArg<k>(an_action) creates an action that passes the k-th
// (0-based) argument of the mock function to an_action and performs
// it.  It adapts an action accepting one argument to one that accepts
// multiple arguments.  For convenience, we also provide
// WithArgs<k>(an_action) (defined below) as a synonym.
template <in. k, typename InnerAction>
i_l.. internal::WithArgsAction<InnerAction, k>
WithArg(co.. InnerAction& action) {
  ?  internal::WithArgsAction<InnerAction, k>(action);
}

// The ACTION*() macros trigger warning C4100 (unreferenced formal
// parameter) in MSVC with -W4.  Unfortunately they cannot be fixed in
// the macro definition, as the warnings are generated when the macro
// is expanded and macro expansion cannot contain #pragma.  Therefore
// we suppress them here.
#ifdef _MSC_VER
# pragma warning(push)
# pragma warning(disable:4100)
e..

// Action ReturnArg<k>() returns the k-th argument of the mock function.
ACTION_TEMPLATE(ReturnArg,
                HAS_1_TEMPLATE_PARAMS(in., k),
                AND_0_VALUE_PARAMS()) {
  ?  ::testing::get<k>(args);
}

// Action SaveArg<k>(pointer) saves the k-th (0-based) argument of the
// mock function to *pointer.
ACTION_TEMPLATE(SaveArg,
                HAS_1_TEMPLATE_PARAMS(in., k),
                AND_1_VALUE_PARAMS(pointer)) {
  *pointer = ::testing::get<k>(args);
}

// Action SaveArgPointee<k>(pointer) saves the value pointed to
// by the k-th (0-based) argument of the mock function to *pointer.
ACTION_TEMPLATE(SaveArgPointee,
                HAS_1_TEMPLATE_PARAMS(in., k),
                AND_1_VALUE_PARAMS(pointer)) {
  *pointer = *::testing::get<k>(args);
}

// Action SetArgReferee<k>(value) assigns 'value' to the variable
// referenced by the k-th (0-based) argument of the mock function.
ACTION_TEMPLATE(SetArgReferee,
                HAS_1_TEMPLATE_PARAMS(in., k),
                AND_1_VALUE_PARAMS(value)) {
  t_d_ typename ::testing::tuple_element<k, args_type>::type argk_type;
  // Ensures that argument #k is a reference.  If you get a compiler
  // error on the next line, you are using SetArgReferee<k>(value) in
  // a mock function whose k-th (0-based) argument is not a reference.
  GTEST_COMPILE_ASSERT_(internal::is_reference<argk_type>::value,
                        SetArgReferee_must_be_used_with_a_reference_argument);
  ::testing::get<k>(args) = value;
}

// Action SetArrayArgument<k>(first, last) copies the elements in
// source range [first, last) to the array pointed to by the k-th
// (0-based) argument, which can be either a pointer or an
// iterator. The action does not take ownership of the elements in the
// source range.
ACTION_TEMPLATE(SetArrayArgument,
                HAS_1_TEMPLATE_PARAMS(in., k),
                AND_2_VALUE_PARAMS(first, last)) {
  // Visual Studio deprecates ::std::copy, so we use our own copy in that case.
#ifdef _MSC_VER
  internal::CopyElements(first, last, ::testing::get<k>(args));
#else
  ::st. copy(first, last, ::testing::get<k>(args));
e..
}

// Action DeleteArg<k>() deletes the k-th (0-based) argument of the mock
// function.
ACTION_TEMPLATE(DeleteArg,
                HAS_1_TEMPLATE_PARAMS(in., k),
                AND_0_VALUE_PARAMS()) {
  de... ::testing::get<k>(args);
}

// 007_This action returns the value pointed to by 'pointer'.
ACTION_P(ReturnPointee, pointer) { ?  *pointer; }

// Action Throw(exception) can be used in a mock function of any type
// to throw the given exception.  Any copyable value can be thrown.
#if GTEST_HAS_EXCEPTIONS

// Suppresses the 'unreachable code' warning that VC generates in opt modes.
# ifdef _MSC_VER
#  pragma warning(push)          // Saves the current warning state.
#  pragma warning(disable:4702)  // Temporarily disables warning 4702.
# endif
ACTION_P(Throw, exception) { throw exception; }
# ifdef _MSC_VER
#  pragma warning(pop)           // Restores the warning state.
# endif

e..  // GTEST_HAS_EXCEPTIONS

#ifdef _MSC_VER
# pragma warning(pop)
e..

}  // namespace testing

e..  // GMOCK_INCLUDE_GMOCK_GMOCK_MORE_ACTIONS_H_
