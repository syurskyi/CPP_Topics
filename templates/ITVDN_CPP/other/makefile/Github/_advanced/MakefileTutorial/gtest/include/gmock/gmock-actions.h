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
// This file implements some commonly used actions.

?i.. GMOCK_INCLUDE_GMOCK_GMOCK_ACTIONS_H_
_de.. GMOCK_INCLUDE_GMOCK_GMOCK_ACTIONS_H_

?i.. _WIN32_WCE
# include <errno.h>
e..

? <algorithm>
? str..

? "gmock/internal/gmock-internal-utils.h"
? "gmock/internal/gmock-port.h"

#if GTEST_LANG_CXX11  // Defined by gtest-port.h via gmock-port.h.
? <functional>
? <type_traits>
e..  // GTEST_LANG_CXX11

n... testing {

// To implement an action Foo, define:
//   1. a class FooAction that implements the ActionInterface interface, and
//   2. a factory function that creates an Action object from a
//      const FooAction*.
//
// The two-level delegation design follows that of Matcher, providing
// consistency for extension developers.  It also eases ownership
// management as Action objects can now be copied like plain values.

n... internal {

template <typename F1, typename F2>
n.. ActionAdaptor;

// BuiltInDefaultValueGetter<T, true>::Get() returns a
// default-constructed T value.  BuiltInDefaultValueGetter<T,
// false>::Get() crashes with an error.
//
// This primary template is used when kDefaultConstructible is true.
template <typename T, bo.. kDefaultConstructible>
struct BuiltInDefaultValueGetter {
  st.. T Get() { ?  T(); }
};
template <typename T>
struct BuiltInDefaultValueGetter<T, false> {
  st.. T Get() {
    Assert(false, __FILE__, __LINE__,
           "Default action undefined for the function return type.");
    ?  internal::Invalid<T>();
    // The above statement will never be reached, but is required in
    // order for this function to compile.
  }
};

// BuiltInDefaultValue<T>::Get() returns the "built-in" default value
// for type T, which is NULL when T is a raw pointer type, 0 when T is
// a numeric type, false when T is bool, or "" when T is string or
// std::string.  In addition, in C++11 and above, it turns a
// default-constructed T value if T is default constructible.  For any
// other type T, the built-in default T value is undefined, and the
// function will abort the process.
template <typename T>
n.. BuiltInDefaultValue {
 p..
#if GTEST_LANG_CXX11
  // This function returns true iff type T has a built-in default value.
  st.. bo.. Exists() {
    ?  ::st. is_default_constructible<T>::value;
  }

  st.. T Get() {
    ?  BuiltInDefaultValueGetter<
        T, ::st. is_default_constructible<T>::value>::Get();
  }

#else  // GTEST_LANG_CXX11
  // This function returns true iff type T has a built-in default value.
  st.. bo.. Exists() {
    ?  false;
  }

  st.. T Get() {
    ?  BuiltInDefaultValueGetter<T, false>::Get();
  }

e..  // GTEST_LANG_CXX11
};

// This partial specialization says that we use the same built-in
// default value for T and const T.
template <typename T>
n.. BuiltInDefaultValue<co.. T> {
 p..
  st.. bo.. Exists() { ?  BuiltInDefaultValue<T>::Exists(); }
  st.. T Get() { ?  BuiltInDefaultValue<T>::Get(); }
};

// This partial specialization defines the default values for pointer
// types.
template <typename T>
n.. BuiltInDefaultValue<T*> {
 p..
  st.. bo.. Exists() { ?  true; }
  st.. T* Get() { ?  NULL; }
};

// The following specializations define the default values for
// specific types we care about.
_de.. GMOCK_DEFINE_DEFAULT_ACTION_FOR_RETURN_TYPE_(type, value) \
  template <> \
  n.. BuiltInDefaultValue<type> { \
   p.. \
    st.. bo.. Exists() { ?  true; } \
    st.. type Get() { ?  value; } \
  }

GMOCK_DEFINE_DEFAULT_ACTION_FOR_RETURN_TYPE_(v.., );  // NOLINT
#if GTEST_HAS_GLOBAL_STRING
GMOCK_DEFINE_DEFAULT_ACTION_FOR_RETURN_TYPE_(::string, "");
e..  // GTEST_HAS_GLOBAL_STRING
GMOCK_DEFINE_DEFAULT_ACTION_FOR_RETURN_TYPE_(::st. string, "");
GMOCK_DEFINE_DEFAULT_ACTION_FOR_RETURN_TYPE_(bo.., false);
GMOCK_DEFINE_DEFAULT_ACTION_FOR_RETURN_TYPE_(unsigned ch.., '\0');
GMOCK_DEFINE_DEFAULT_ACTION_FOR_RETURN_TYPE_(signed ch.., '\0');
GMOCK_DEFINE_DEFAULT_ACTION_FOR_RETURN_TYPE_(ch.., '\0');

// There's no need for a default action for signed wchar_t, as that
// type is the same as wchar_t for gcc, and invalid for MSVC.
//
// There's also no need for a default action for unsigned wchar_t, as
// that type is the same as unsigned int for gcc, and invalid for
// MSVC.
#if GMOCK_WCHAR_T_IS_NATIVE_
GMOCK_DEFINE_DEFAULT_ACTION_FOR_RETURN_TYPE_(wchar_t, 0U);  // NOLINT
e..

GMOCK_DEFINE_DEFAULT_ACTION_FOR_RETURN_TYPE_(unsigned short, 0U);  // NOLINT
GMOCK_DEFINE_DEFAULT_ACTION_FOR_RETURN_TYPE_(signed short, 0);     // NOLINT
GMOCK_DEFINE_DEFAULT_ACTION_FOR_RETURN_TYPE_(unsigned in., 0U);
GMOCK_DEFINE_DEFAULT_ACTION_FOR_RETURN_TYPE_(signed in., 0);
GMOCK_DEFINE_DEFAULT_ACTION_FOR_RETURN_TYPE_(unsigned long, 0UL);  // NOLINT
GMOCK_DEFINE_DEFAULT_ACTION_FOR_RETURN_TYPE_(signed long, 0L);     // NOLINT
GMOCK_DEFINE_DEFAULT_ACTION_FOR_RETURN_TYPE_(UInt64, 0);
GMOCK_DEFINE_DEFAULT_ACTION_FOR_RETURN_TYPE_(Int64, 0);
GMOCK_DEFINE_DEFAULT_ACTION_FOR_RETURN_TYPE_(float, 0);
GMOCK_DEFINE_DEFAULT_ACTION_FOR_RETURN_TYPE_(do.., 0);

#undef GMOCK_DEFINE_DEFAULT_ACTION_FOR_RETURN_TYPE_

}  // namespace internal

// When an unexpected function call is encountered, Google Mock will
// let it return a default value if the user has specified one for its
// return type, or if the return type has a built-in default value;
// otherwise Google Mock won't know what value to return and will have
// to abort the process.
//
// The DefaultValue<T> class allows a user to specify the
// default value for a type T that is both copyable and publicly
// destructible (i.e. anything that can be used as a function return
// type).  The usage is:
//
//   // Sets the default value for type T to be foo.
//   DefaultValue<T>::Set(foo);
template <typename T>
n.. DefaultValue {
 p..
  // Sets the default value for type T; requires T to be
  // copy-constructable and have a public destructor.
  st.. v.. Set(T x) {
    de... producer_;
    producer_ = ne. FixedValueProducer(x);
  }

  // Provides a factory function to be called to generate the default value.
  // This method can be used even if T is only move-constructible, but it is not
  // limited to that case.
  typedef T (*FactoryFunction)();
  st.. v.. SetFactory(FactoryFunction factory) {
    de... producer_;
    producer_ = ne. FactoryValueProducer(factory);
  }

  // Unsets the default value for type T.
  st.. v.. Clear() {
    de... producer_;
    producer_ = NULL;
  }

  // Returns true iff the user has set the default value for type T.
  st.. bo.. IsSet() { ?  producer_ != NULL; }

  // Returns true if T has a default return value set by the user or there
  // exists a built-in default value.
  st.. bo.. Exists() {
    ?  IsSet() || internal::BuiltInDefaultValue<T>::Exists();
  }

  // Returns the default value for type T if the user has set one;
  // otherwise returns the built-in default value. Requires that Exists()
  // is true, which ensures that the return value is well-defined.
  st.. T Get() {
    ?  producer_ == NULL ?
        internal::BuiltInDefaultValue<T>::Get() : producer_->Produce();
  }

 pr..
  n.. ValueProducer {
   p..
    v.. ~ValueProducer() {}
    v.. T Produce() = 0;
  };

  n.. FixedValueProducer : pu.. ValueProducer {
   p..
    explicit FixedValueProducer(T value) : value_(value) {}
    v.. T Produce() { ?  value_; }

   pr..
    co.. T value_;
    GTEST_DISALLOW_COPY_AND_ASSIGN_(FixedValueProducer);
  };

  n.. FactoryValueProducer : pu.. ValueProducer {
   p..
    explicit FactoryValueProducer(FactoryFunction factory)
        : factory_(factory) {}
    v.. T Produce() { ?  factory_(); }

   pr..
    co.. FactoryFunction factory_;
    GTEST_DISALLOW_COPY_AND_ASSIGN_(FactoryValueProducer);
  };

  st.. ValueProducer* producer_;
};

// This partial specialization allows a user to set default values for
// reference types.
template <typename T>
n.. DefaultValue<T&> {
 p..
  // Sets the default value for type T&.
  st.. v.. Set(T& x) {  // NOLINT
    address_ = &x;
  }

  // Unsets the default value for type T&.
  st.. v.. Clear() {
    address_ = NULL;
  }

  // Returns true iff the user has set the default value for type T&.
  st.. bo.. IsSet() { ?  address_ != NULL; }

  // Returns true if T has a default return value set by the user or there
  // exists a built-in default value.
  st.. bo.. Exists() {
    ?  IsSet() || internal::BuiltInDefaultValue<T&>::Exists();
  }

  // Returns the default value for type T& if the user has set one;
  // otherwise returns the built-in default value if there is one;
  // otherwise aborts the process.
  st.. T& Get() {
    ?  address_ == NULL ?
        internal::BuiltInDefaultValue<T&>::Get() : *address_;
  }

 pr..
  st.. T* address_;
};

// This specialization allows DefaultValue<void>::Get() to
// compile.
template <>
n.. DefaultValue<v..> {
 p..
  st.. bo.. Exists() { ?  true; }
  st.. v.. Get() {}
};

// Points to the user-set default value for type T.
template <typename T>
typename DefaultValue<T>::ValueProducer* DefaultValue<T>::producer_ = NULL;

// Points to the user-set default value for type T&.
template <typename T>
T* DefaultValue<T&>::address_ = NULL;

// Implement this interface to define an action for function type F.
template <typename F>
n.. ActionInterface {
 p..
  typedef typename internal::Function<F>::Result Result;
  typedef typename internal::Function<F>::ArgumentTuple ArgumentTuple;

  ActionInterface() {}
  v.. ~ActionInterface() {}

  // Performs the action.  This method is not const, as in general an
  // action can have side effects and be stateful.  For example, a
  // get-the-next-element-from-the-collection action will need to
  // remember the current element.
  v.. Result Perform(co.. ArgumentTuple& args) = 0;

 pr..
  GTEST_DISALLOW_COPY_AND_ASSIGN_(ActionInterface);
};

// An Action<F> is a copyable and IMMUTABLE (except by assignment)
// object that represents an action to be taken when a mock function
// of type F is called.  The implementation of Action<T> is just a
// linked_ptr to const ActionInterface<T>, so copying is fairly cheap.
// Don't inherit from Action!
//
// You can view an object implementing ActionInterface<F> as a
// concrete action (including its current state), and an Action<F>
// object as a handle to it.
template <typename F>
n.. Action {
 p..
  typedef typename internal::Function<F>::Result Result;
  typedef typename internal::Function<F>::ArgumentTuple ArgumentTuple;

  // Constructs a null Action.  Needed for storing Action objects in
  // STL containers.
  Action() {}

#if GTEST_LANG_CXX11
  // Construct an Action from a specified callable.
  // This cannot take std::function directly, because then Action would not be
  // directly constructible from lambda (it would require two conversions).
  template <typename G,
            typename = typename ::st. enable_if<
                ::st. is_constructible<::st. function<F>, G>::value>::type>
  Action(G&& fun) : fun_(::st. forward<G>(fun)) {}  // NOLINT
e..

  // Constructs an Action from its implementation.
  explicit Action(ActionInterface<F>* impl) : impl_(impl) {}

  // This constructor allows us to turn an Action<Func> object into an
  // Action<F>, as long as F's arguments can be implicitly converted
  // to Func's and Func's return type can be implicitly converted to
  // F's.
  template <typename Func>
  explicit Action(co.. Action<Func>& action);

  // Returns true iff this is the DoDefault() action.
  bo.. IsDoDefault() co.. {
#if GTEST_LANG_CXX11
    ?  impl_ == nullptr && fun_ == nullptr;
#else
    ?  impl_ == NULL;
e..
  }

  // Performs the action.  Note that this method is const even though
  // the corresponding method in ActionInterface is not.  The reason
  // is that a const Action<F> means that it cannot be re-bound to
  // another concrete action, not that the concrete action it binds to
  // cannot change state.  (Think of the difference between a const
  // pointer and a pointer to const.)
  Result Perform(ArgumentTuple args) co.. {
    if (IsDoDefault()) {
      internal::IllegalDoDefault(__FILE__, __LINE__);
    }
#if GTEST_LANG_CXX11
    if (fun_ != nullptr) {
      ?  internal::Apply(fun_, ::st. move(args));
    }
e..
    ?  impl_->Perform(args);
  }

 pr..
  template <typename F1, typename F2>
  friend n.. internal::ActionAdaptor;

  template <typename G>
  friend n.. Action;

  // In C++11, Action can be implemented either as a generic functor (through
  // std::function), or legacy ActionInterface. In C++98, only ActionInterface
  // is available. The invariants are as follows:
  // * in C++98, impl_ is null iff this is the default action
  // * in C++11, at most one of fun_ & impl_ may be nonnull; both are null iff
  //   this is the default action
#if GTEST_LANG_CXX11
  ::st. function<F> fun_;
e..
  internal::linked_ptr<ActionInterface<F> > impl_;
};

// The PolymorphicAction class template makes it easy to implement a
// polymorphic action (i.e. an action that can be used in mock
// functions of than one type, e.g. Return()).
//
// To define a polymorphic action, a user first provides a COPYABLE
// implementation class that has a Perform() method template:
//
//   class FooAction {
//    p..
//     template <typename Result, typename ArgumentTuple>
//     Result Perform(const ArgumentTuple& args) const {
//       // Processes the arguments and returns a result, using
//       // tr1::get<N>(args) to get the N-th (0-based) argument in the tuple.
//     }
//     ...
//   };
//
// Then the user creates the polymorphic action using
// MakePolymorphicAction(object) where object has type FooAction.  See
// the definition of Return(void) and SetArgumentPointee<N>(value) for
// complete examples.
template <typename Impl>
n.. PolymorphicAction {
 p..
  explicit PolymorphicAction(co.. Impl& impl) : impl_(impl) {}

  template <typename F>
  operator Action<F>() co.. {
    ?  Action<F>(ne. MonomorphicImpl<F>(impl_));
  }

 pr..
  template <typename F>
  n.. MonomorphicImpl : pu.. ActionInterface<F> {
   p..
    typedef typename internal::Function<F>::Result Result;
    typedef typename internal::Function<F>::ArgumentTuple ArgumentTuple;

    explicit MonomorphicImpl(co.. Impl& impl) : impl_(impl) {}

    v.. Result Perform(co.. ArgumentTuple& args) {
      ?  impl_.template Perform<Result>(args);
    }

   pr..
    Impl impl_;

    GTEST_DISALLOW_ASSIGN_(MonomorphicImpl);
  };

  Impl impl_;

  GTEST_DISALLOW_ASSIGN_(PolymorphicAction);
};

// Creates an Action from its implementation and returns it.  The
// created Action object owns the implementation.
template <typename F>
Action<F> MakeAction(ActionInterface<F>* impl) {
  ?  Action<F>(impl);
}

// Creates a polymorphic action from its implementation.  This is
// easier to use than the PolymorphicAction<Impl> constructor as it
// doesn't require you to explicitly write the template argument, e.g.
//
//   MakePolymorphicAction(foo);
// vs
//   PolymorphicAction<TypeOfFoo>(foo);
template <typename Impl>
inline PolymorphicAction<Impl> MakePolymorphicAction(co.. Impl& impl) {
  ?  PolymorphicAction<Impl>(impl);
}

n... internal {

// Allows an Action<F2> object to pose as an Action<F1>, as long as F2
// and F1 are compatible.
template <typename F1, typename F2>
n.. ActionAdaptor : pu.. ActionInterface<F1> {
 p..
  typedef typename internal::Function<F1>::Result Result;
  typedef typename internal::Function<F1>::ArgumentTuple ArgumentTuple;

  explicit ActionAdaptor(co.. Action<F2>& from) : impl_(from.impl_) {}

  v.. Result Perform(co.. ArgumentTuple& args) {
    ?  impl_->Perform(args);
  }

 pr..
  co.. internal::linked_ptr<ActionInterface<F2> > impl_;

  GTEST_DISALLOW_ASSIGN_(ActionAdaptor);
};

// Helper struct to specialize ReturnAction to execute a move instead of a copy
// on return. Useful for move-only types, but could be used on any type.
template <typename T>
struct ByMoveWrapper {
  explicit ByMoveWrapper(T value) : payload(internal::move(value)) {}
  T payload;
};

// Implements the polymorphic Return(x) action, which can be used in
// any function that returns the type of x, regardless of the argument
// types.
//
// Note: The value passed into Return must be converted into
// Function<F>::Result when this action is cast to Action<F> rather than
// when that action is performed. This is important in scenarios like
//
// MOCK_METHOD1(Method, T(U));
// ...
// {
//   Foo foo;
//   X x(&foo);
//   EXPECT_CALL(mock, Method(_)).WillOnce(Return(x));
// }
//
// In the example above the variable x holds reference to foo which leaves
// scope and gets destroyed.  If copying X just copies a reference to foo,
// that copy will be left with a hanging reference.  If conversion to T
// makes a copy of foo, the above code is safe. To support that scenario, we
// need to make sure that the type conversion happens inside the EXPECT_CALL
// statement, and conversion of the result of Return to Action<T(U)> is a
// good place for that.
//
// The real life example of the above scenario happens when an invocation
// of gtl::Container() is passed into Return.
//
template <typename R>
n.. ReturnAction {
 p..
  // Constructs a ReturnAction object from the value to be returned.
  // 'value' is passed by value instead of by const reference in order
  // to allow Return("string literal") to compile.
  explicit ReturnAction(R value) : value_(ne. R(internal::move(value))) {}

  // This template type conversion operator allows Return(x) to be
  // used in ANY function that returns x's type.
  template <typename F>
  operator Action<F>() co.. {
    // Assert statement belongs here because this is the best place to verify
    // conditions on F. It produces the clearest error messages
    // in most compilers.
    // Impl really belongs in this scope as a local class but can't
    // because MSVC produces duplicate symbols in different translation units
    // in this case. Until MS fixes that bug we put Impl into the class scope
    // and put the typedef both here (for use in assert statement) and
    // in the Impl class. But both definitions must be the same.
    typedef typename Function<F>::Result Result;
    GTEST_COMPILE_ASSERT_(
        !is_reference<Result>::value,
        use_ReturnRef_instead_of_Return_to_return_a_reference);
    ?  Action<F>(ne. Impl<R, F>(value_));
  }

 pr..
  // Implements the Return(x) action for a particular function type F.
  template <typename R_, typename F>
  n.. Impl : pu.. ActionInterface<F> {
   p..
    typedef typename Function<F>::Result Result;
    typedef typename Function<F>::ArgumentTuple ArgumentTuple;

    // The implicit cast is necessary when Result has more than one
    // single-argument constructor (e.g. Result is std::vector<int>) and R
    // has a type conversion operator template.  In that case, value_(value)
    // won't compile as the compiler doesn't known which constructor of
    // Result to call.  ImplicitCast_ forces the compiler to convert R to
    // Result without considering explicit constructors, thus resolving the
    // ambiguity. value_ is then initialized using its copy constructor.
    explicit Impl(co.. linked_ptr<R>& value)
        : value_before_cast_(*value),
          value_(ImplicitCast_<Result>(value_before_cast_)) {}

    v.. Result Perform(co.. ArgumentTuple&) { ?  value_; }

   pr..
    GTEST_COMPILE_ASSERT_(!is_reference<Result>::value,
                          Result_cannot_be_a_reference_type);
    // We save the value before casting just in case it is being cast to a
    // wrapper type.
    R value_before_cast_;
    Result value_;

    GTEST_DISALLOW_COPY_AND_ASSIGN_(Impl);
  };

  // Partially specialize for ByMoveWrapper. This version of ReturnAction will
  // move its contents instead.
  template <typename R_, typename F>
  n.. Impl<ByMoveWrapper<R_>, F> : pu.. ActionInterface<F> {
   p..
    typedef typename Function<F>::Result Result;
    typedef typename Function<F>::ArgumentTuple ArgumentTuple;

    explicit Impl(co.. linked_ptr<R>& wrapper)
        : performed_(false), wrapper_(wrapper) {}

    v.. Result Perform(co.. ArgumentTuple&) {
      GTEST_CHECK_(!performed_)
          << "A ByMove() action should only be performed once.";
      performed_ = true;
      ?  internal::move(wrapper_->payload);
    }

   pr..
    bo.. performed_;
    co.. linked_ptr<R> wrapper_;

    GTEST_DISALLOW_ASSIGN_(Impl);
  };

  co.. linked_ptr<R> value_;

  GTEST_DISALLOW_ASSIGN_(ReturnAction);
};

// Implements the ReturnNull() action.
n.. ReturnNullAction {
 p..
  // Allows ReturnNull() to be used in any pointer-returning function. In C++11
  // this is enforced by returning nullptr, and in non-C++11 by asserting a
  // pointer type on compile time.
  template <typename Result, typename ArgumentTuple>
  st.. Result Perform(co.. ArgumentTuple&) {
#if GTEST_LANG_CXX11
    ?  nullptr;
#else
    GTEST_COMPILE_ASSERT_(internal::is_pointer<Result>::value,
                          ReturnNull_can_be_used_to_return_a_pointer_only);
    ?  NULL;
e..  // GTEST_LANG_CXX11
  }
};

// Implements the Return() action.
n.. ReturnVoidAction {
 p..
  // Allows Return() to be used in any void-returning function.
  template <typename Result, typename ArgumentTuple>
  st.. v.. Perform(co.. ArgumentTuple&) {
    CompileAssertTypesEqual<v.., Result>();
  }
};

// Implements the polymorphic ReturnRef(x) action, which can be used
// in any function that returns a reference to the type of x,
// regardless of the argument types.
template <typename T>
n.. ReturnRefAction {
 p..
  // Constructs a ReturnRefAction object from the reference to be returned.
  explicit ReturnRefAction(T& ref) : ref_(ref) {}  // NOLINT

  // This template type conversion operator allows ReturnRef(x) to be
  // used in ANY function that returns a reference to x's type.
  template <typename F>
  operator Action<F>() co.. {
    typedef typename Function<F>::Result Result;
    // Asserts that the function return type is a reference.  This
    // catches the user error of using ReturnRef(x) when Return(x)
    // should be used, and generates some helpful error message.
    GTEST_COMPILE_ASSERT_(internal::is_reference<Result>::value,
                          use_Return_instead_of_ReturnRef_to_return_a_value);
    ?  Action<F>(ne. Impl<F>(ref_));
  }

 pr..
  // Implements the ReturnRef(x) action for a particular function type F.
  template <typename F>
  n.. Impl : pu.. ActionInterface<F> {
   p..
    typedef typename Function<F>::Result Result;
    typedef typename Function<F>::ArgumentTuple ArgumentTuple;

    explicit Impl(T& ref) : ref_(ref) {}  // NOLINT

    v.. Result Perform(co.. ArgumentTuple&) {
      ?  ref_;
    }

   pr..
    T& ref_;

    GTEST_DISALLOW_ASSIGN_(Impl);
  };

  T& ref_;

  GTEST_DISALLOW_ASSIGN_(ReturnRefAction);
};

// Implements the polymorphic ReturnRefOfCopy(x) action, which can be
// used in any function that returns a reference to the type of x,
// regardless of the argument types.
template <typename T>
n.. ReturnRefOfCopyAction {
 p..
  // Constructs a ReturnRefOfCopyAction object from the reference to
  // be returned.
  explicit ReturnRefOfCopyAction(co.. T& value) : value_(value) {}  // NOLINT

  // This template type conversion operator allows ReturnRefOfCopy(x) to be
  // used in ANY function that returns a reference to x's type.
  template <typename F>
  operator Action<F>() co.. {
    typedef typename Function<F>::Result Result;
    // Asserts that the function return type is a reference.  This
    // catches the user error of using ReturnRefOfCopy(x) when Return(x)
    // should be used, and generates some helpful error message.
    GTEST_COMPILE_ASSERT_(
        internal::is_reference<Result>::value,
        use_Return_instead_of_ReturnRefOfCopy_to_return_a_value);
    ?  Action<F>(ne. Impl<F>(value_));
  }

 pr..
  // Implements the ReturnRefOfCopy(x) action for a particular function type F.
  template <typename F>
  n.. Impl : pu.. ActionInterface<F> {
   p..
    typedef typename Function<F>::Result Result;
    typedef typename Function<F>::ArgumentTuple ArgumentTuple;

    explicit Impl(co.. T& value) : value_(value) {}  // NOLINT

    v.. Result Perform(co.. ArgumentTuple&) {
      ?  value_;
    }

   pr..
    T value_;

    GTEST_DISALLOW_ASSIGN_(Impl);
  };

  co.. T value_;

  GTEST_DISALLOW_ASSIGN_(ReturnRefOfCopyAction);
};

// Implements the polymorphic DoDefault() action.
n.. DoDefaultAction {
 p..
  // This template type conversion operator allows DoDefault() to be
  // used in any function.
  template <typename F>
  operator Action<F>() co.. { ?  Action<F>(); }  // NOLINT
};

// Implements the Assign action to set a given pointer referent to a
// particular value.
template <typename T1, typename T2>
n.. AssignAction {
 p..
  AssignAction(T1* ptr, T2 value) : ptr_(ptr), value_(value) {}

  template <typename Result, typename ArgumentTuple>
  v.. Perform(co.. ArgumentTuple& /* args */) co.. {
    *ptr_ = value_;
  }

 pr..
  T1* co.. ptr_;
  co.. T2 value_;

  GTEST_DISALLOW_ASSIGN_(AssignAction);
};

#if !GTEST_OS_WINDOWS_MOBILE

// Implements the SetErrnoAndReturn action to simulate return from
// various system calls and libc functions.
template <typename T>
n.. SetErrnoAndReturnAction {
 p..
  SetErrnoAndReturnAction(in. errno_value, T result)
      : errno_(errno_value),
        result_(result) {}
  template <typename Result, typename ArgumentTuple>
  Result Perform(co.. ArgumentTuple& /* args */) co.. {
    errno = errno_;
    ?  result_;
  }

 pr..
  co.. in. errno_;
  co.. T result_;

  GTEST_DISALLOW_ASSIGN_(SetErrnoAndReturnAction);
};

e..  // !GTEST_OS_WINDOWS_MOBILE

// Implements the SetArgumentPointee<N>(x) action for any function
// whose N-th argument (0-based) is a pointer to x's type.  The
// template parameter kIsProto is true iff type A is ProtocolMessage,
// proto2::Message, or a sub-class of those.
template <size_t N, typename A, bo.. kIsProto>
n.. SetArgumentPointeeAction {
 p..
  // Constructs an action that sets the variable pointed to by the
  // N-th function argument to 'value'.
  explicit SetArgumentPointeeAction(co.. A& value) : value_(value) {}

  template <typename Result, typename ArgumentTuple>
  v.. Perform(co.. ArgumentTuple& args) co.. {
    CompileAssertTypesEqual<v.., Result>();
    *::testing::get<N>(args) = value_;
  }

 pr..
  co.. A value_;

  GTEST_DISALLOW_ASSIGN_(SetArgumentPointeeAction);
};

template <size_t N, typename Proto>
n.. SetArgumentPointeeAction<N, Proto, true> {
 p..
  // Constructs an action that sets the variable pointed to by the
  // N-th function argument to 'proto'.  Both ProtocolMessage and
  // proto2::Message have the CopyFrom() method, so the same
  // implementation works for both.
  explicit SetArgumentPointeeAction(co.. Proto& proto) : proto_(ne. Proto) {
    proto_->CopyFrom(proto);
  }

  template <typename Result, typename ArgumentTuple>
  v.. Perform(co.. ArgumentTuple& args) co.. {
    CompileAssertTypesEqual<v.., Result>();
    ::testing::get<N>(args)->CopyFrom(*proto_);
  }

 pr..
  co.. internal::linked_ptr<Proto> proto_;

  GTEST_DISALLOW_ASSIGN_(SetArgumentPointeeAction);
};

// Implements the InvokeWithoutArgs(f) action.  The template argument
// FunctionImpl is the implementation type of f, which can be either a
// function pointer or a functor.  InvokeWithoutArgs(f) can be used as an
// Action<F> as long as f's type is compatible with F (i.e. f can be
// assigned to a tr1::function<F>).
template <typename FunctionImpl>
n.. InvokeWithoutArgsAction {
 p..
  // The c'tor makes a copy of function_impl (either a function
  // pointer or a functor).
  explicit InvokeWithoutArgsAction(FunctionImpl function_impl)
      : function_impl_(function_impl) {}

  // Allows InvokeWithoutArgs(f) to be used as any action whose type is
  // compatible with f.
  template <typename Result, typename ArgumentTuple>
  Result Perform(co.. ArgumentTuple&) { ?  function_impl_(); }

 pr..
  FunctionImpl function_impl_;

  GTEST_DISALLOW_ASSIGN_(InvokeWithoutArgsAction);
};

// Implements the InvokeWithoutArgs(object_ptr, &Class::Method) action.
template <n.. n.., typename MethodPtr>
n.. InvokeMethodWithoutArgsAction {
 p..
  InvokeMethodWithoutArgsAction(n..* obj_ptr, MethodPtr method_ptr)
      : obj_ptr_(obj_ptr), method_ptr_(method_ptr) {}

  template <typename Result, typename ArgumentTuple>
  Result Perform(co.. ArgumentTuple&) co.. {
    ?  (obj_ptr_->*method_ptr_)();
  }

 pr..
  n..* co.. obj_ptr_;
  co.. MethodPtr method_ptr_;

  GTEST_DISALLOW_ASSIGN_(InvokeMethodWithoutArgsAction);
};

// Implements the InvokeWithoutArgs(callback) action.
template <typename CallbackType>
n.. InvokeCallbackWithoutArgsAction {
 p..
  // The c'tor takes ownership of the callback.
  explicit InvokeCallbackWithoutArgsAction(CallbackType* callback)
      : callback_(callback) {
    callback->CheckIsRepeatable();  // Makes sure the callback is permanent.
  }

  // This type conversion operator template allows Invoke(callback) to
  // be used wherever the callback's return type can be implicitly
  // converted to that of the mock function.
  template <typename Result, typename ArgumentTuple>
  Result Perform(co.. ArgumentTuple&) co.. { ?  callback_->Run(); }

 pr..
  co.. internal::linked_ptr<CallbackType> callback_;

  GTEST_DISALLOW_ASSIGN_(InvokeCallbackWithoutArgsAction);
};

// Implements the IgnoreResult(action) action.
template <typename A>
n.. IgnoreResultAction {
 p..
  explicit IgnoreResultAction(co.. A& action) : action_(action) {}

  template <typename F>
  operator Action<F>() co.. {
    // Assert statement belongs here because this is the best place to verify
    // conditions on F. It produces the clearest error messages
    // in most compilers.
    // Impl really belongs in this scope as a local class but can't
    // because MSVC produces duplicate symbols in different translation units
    // in this case. Until MS fixes that bug we put Impl into the class scope
    // and put the typedef both here (for use in assert statement) and
    // in the Impl class. But both definitions must be the same.
    typedef typename internal::Function<F>::Result Result;

    // Asserts at compile time that F returns void.
    CompileAssertTypesEqual<v.., Result>();

    ?  Action<F>(ne. Impl<F>(action_));
  }

 pr..
  template <typename F>
  n.. Impl : pu.. ActionInterface<F> {
   p..
    typedef typename internal::Function<F>::Result Result;
    typedef typename internal::Function<F>::ArgumentTuple ArgumentTuple;

    explicit Impl(co.. A& action) : action_(action) {}

    v.. v.. Perform(co.. ArgumentTuple& args) {
      // Performs the action and ignores its result.
      action_.Perform(args);
    }

   pr..
    // Type OriginalFunction is the same as F except that its return
    // type is IgnoredValue.
    typedef typename internal::Function<F>::MakeResultIgnoredValue
        OriginalFunction;

    co.. Action<OriginalFunction> action_;

    GTEST_DISALLOW_ASSIGN_(Impl);
  };

  co.. A action_;

  GTEST_DISALLOW_ASSIGN_(IgnoreResultAction);
};

// A ReferenceWrapper<T> object represents a reference to type T,
// which can be either const or not.  It can be explicitly converted
// from, and implicitly converted to, a T&.  Unlike a reference,
// ReferenceWrapper<T> can be copied and can survive template type
// inference.  This is used to support by-reference arguments in the
// InvokeArgument<N>(...) action.  The idea was from "reference
// wrappers" in tr1, which we don't have in our source tree yet.
template <typename T>
n.. ReferenceWrapper {
 p..
  // Constructs a ReferenceWrapper<T> object from a T&.
  explicit ReferenceWrapper(T& l_value) : pointer_(&l_value) {}  // NOLINT

  // Allows a ReferenceWrapper<T> object to be implicitly converted to
  // a T&.
  operator T&() co.. { ?  *pointer_; }
 pr..
  T* pointer_;
};

// Allows the expression ByRef(x) to be printed as a reference to x.
template <typename T>
v.. PrintTo(co.. ReferenceWrapper<T>& ref, ::st. ostream* os) {
  T& value = ref;
  UniversalPrinter<T&>::Print(value, os);
}

// Does two actions sequentially.  Used for implementing the DoAll(a1,
// a2, ...) action.
template <typename Action1, typename Action2>
n.. DoBothAction {
 p..
  DoBothAction(Action1 action1, Action2 action2)
      : action1_(action1), action2_(action2) {}

  // This template type conversion operator allows DoAll(a1, ..., a_n)
  // to be used in ANY function of compatible type.
  template <typename F>
  operator Action<F>() co.. {
    ?  Action<F>(ne. Impl<F>(action1_, action2_));
  }

 pr..
  // Implements the DoAll(...) action for a particular function type F.
  template <typename F>
  n.. Impl : pu.. ActionInterface<F> {
   p..
    typedef typename Function<F>::Result Result;
    typedef typename Function<F>::ArgumentTuple ArgumentTuple;
    typedef typename Function<F>::MakeResultVoid VoidResult;

    Impl(co.. Action<VoidResult>& action1, co.. Action<F>& action2)
        : action1_(action1), action2_(action2) {}

    v.. Result Perform(co.. ArgumentTuple& args) {
      action1_.Perform(args);
      ?  action2_.Perform(args);
    }

   pr..
    co.. Action<VoidResult> action1_;
    co.. Action<F> action2_;

    GTEST_DISALLOW_ASSIGN_(Impl);
  };

  Action1 action1_;
  Action2 action2_;

  GTEST_DISALLOW_ASSIGN_(DoBothAction);
};

}  // namespace internal

// An Unused object can be implicitly constructed from ANY value.
// This is handy when defining actions that ignore some or all of the
// mock function arguments.  For example, given
//
//   MOCK_METHOD3(Foo, double(const string& label, double x, double y));
//   MOCK_METHOD3(Bar, double(int index, double x, double y));
//
// instead of
//
//   double DistanceToOriginWithLabel(const string& label, double x, double y) {
//     return sqrt(x*x + y*y);
//   }
//   double DistanceToOriginWithIndex(int index, double x, double y) {
//     return sqrt(x*x + y*y);
//   }
//   ...
//   EXPECT_CALL(mock, Foo("abc", _, _))
//       .WillOnce(Invoke(DistanceToOriginWithLabel));
//   EXPECT_CALL(mock, Bar(5, _, _))
//       .WillOnce(Invoke(DistanceToOriginWithIndex));
//
// you could write
//
//   // We can declare any uninteresting argument as Unused.
//   double DistanceToOrigin(Unused, double x, double y) {
//     return sqrt(x*x + y*y);
//   }
//   ...
//   EXPECT_CALL(mock, Foo("abc", _, _)).WillOnce(Invoke(DistanceToOrigin));
//   EXPECT_CALL(mock, Bar(5, _, _)).WillOnce(Invoke(DistanceToOrigin));
typedef internal::IgnoredValue Unused;

// This constructor allows us to turn an Action<From> object into an
// Action<To>, as long as To's arguments can be implicitly converted
// to From's and From's return type cann be implicitly converted to
// To's.
template <typename To>
template <typename From>
Action<To>::Action(co.. Action<From>& from)
    :
#if GTEST_LANG_CXX11
      fun_(from.fun_),
e..
      impl_(from.impl_ == NULL ? NULL
                               : ne. internal::ActionAdaptor<To, From>(from)) {
}

// Creates an action that returns 'value'.  'value' is passed by value
// instead of const reference - otherwise Return("string literal")
// will trigger a compiler error about using array as initializer.
template <typename R>
internal::ReturnAction<R> ? (R value) {
  ?  internal::ReturnAction<R>(internal::move(value));
}

// Creates an action that returns NULL.
inline PolymorphicAction<internal::ReturnNullAction> ReturnNull() {
  ?  MakePolymorphicAction(internal::ReturnNullAction());
}

// Creates an action that returns from a void function.
inline PolymorphicAction<internal::ReturnVoidAction> ? () {
  ?  MakePolymorphicAction(internal::ReturnVoidAction());
}

// Creates an action that returns the reference to a variable.
template <typename R>
inline internal::ReturnRefAction<R> ReturnRef(R& x) {  // NOLINT
  ?  internal::ReturnRefAction<R>(x);
}

// Creates an action that returns the reference to a copy of the
// argument.  The copy is created when the action is constructed and
// lives as long as the action.
template <typename R>
inline internal::ReturnRefOfCopyAction<R> ReturnRefOfCopy(co.. R& x) {
  ?  internal::ReturnRefOfCopyAction<R>(x);
}

// Modifies the parent action (a Return() action) to perform a move of the
// argument instead of a copy.
// Return(ByMove()) actions can only be executed once and will assert this
// invariant.
template <typename R>
internal::ByMoveWrapper<R> ByMove(R x) {
  ?  internal::ByMoveWrapper<R>(internal::move(x));
}

// Creates an action that does the default action for the give mock function.
inline internal::DoDefaultAction DoDefault() {
  ?  internal::DoDefaultAction();
}

// Creates an action that sets the variable pointed by the N-th
// (0-based) function argument to 'value'.
template <size_t N, typename T>
PolymorphicAction<
  internal::SetArgumentPointeeAction<
    N, T, internal::IsAProtocolMessage<T>::value> >
SetArgPointee(co.. T& x) {
  ?  MakePolymorphicAction(internal::SetArgumentPointeeAction<
      N, T, internal::IsAProtocolMessage<T>::value>(x));
}

#if !((GTEST_GCC_VER_ && GTEST_GCC_VER_ < 40000) || GTEST_OS_SYMBIAN)
// This overload allows SetArgPointee() to accept a string literal.
// GCC prior to the version 4.0 and Symbian C++ compiler cannot distinguish
// this overload from the templated version and emit a compile error.
template <size_t N>
PolymorphicAction<
  internal::SetArgumentPointeeAction<N, co.. ch..*, false> >
SetArgPointee(co.. ch..* p) {
  ?  MakePolymorphicAction(internal::SetArgumentPointeeAction<
      N, co.. ch..*, false>(p));
}

template <size_t N>
PolymorphicAction<
  internal::SetArgumentPointeeAction<N, co.. wchar_t*, false> >
SetArgPointee(co.. wchar_t* p) {
  ?  MakePolymorphicAction(internal::SetArgumentPointeeAction<
      N, co.. wchar_t*, false>(p));
}
e..

// The following version is DEPRECATED.
template <size_t N, typename T>
PolymorphicAction<
  internal::SetArgumentPointeeAction<
    N, T, internal::IsAProtocolMessage<T>::value> >
SetArgumentPointee(co.. T& x) {
  ?  MakePolymorphicAction(internal::SetArgumentPointeeAction<
      N, T, internal::IsAProtocolMessage<T>::value>(x));
}

// Creates an action that sets a pointer referent to a given value.
template <typename T1, typename T2>
PolymorphicAction<internal::AssignAction<T1, T2> > Assign(T1* ptr, T2 val) {
  ?  MakePolymorphicAction(internal::AssignAction<T1, T2>(ptr, val));
}

#if !GTEST_OS_WINDOWS_MOBILE

// Creates an action that sets errno and returns the appropriate error.
template <typename T>
PolymorphicAction<internal::SetErrnoAndReturnAction<T> >
SetErrnoAndReturn(in. errval, T result) {
  ?  MakePolymorphicAction(
      internal::SetErrnoAndReturnAction<T>(errval, result));
}

e..  // !GTEST_OS_WINDOWS_MOBILE

// Various overloads for InvokeWithoutArgs().

// Creates an action that invokes 'function_impl' with no argument.
template <typename FunctionImpl>
PolymorphicAction<internal::InvokeWithoutArgsAction<FunctionImpl> >
InvokeWithoutArgs(FunctionImpl function_impl) {
  ?  MakePolymorphicAction(
      internal::InvokeWithoutArgsAction<FunctionImpl>(function_impl));
}

// Creates an action that invokes the given method on the given object
// with no argument.
template <n.. n.., typename MethodPtr>
PolymorphicAction<internal::InvokeMethodWithoutArgsAction<n.., MethodPtr> >
InvokeWithoutArgs(n..* obj_ptr, MethodPtr method_ptr) {
  ?  MakePolymorphicAction(
      internal::InvokeMethodWithoutArgsAction<n.., MethodPtr>(
          obj_ptr, method_ptr));
}

// Creates an action that performs an_action and throws away its
// result.  In other words, it changes the return type of an_action to
// void.  an_action MUST NOT return void, or the code won't compile.
template <typename A>
inline internal::IgnoreResultAction<A> IgnoreResult(co.. A& an_action) {
  ?  internal::IgnoreResultAction<A>(an_action);
}

// Creates a reference wrapper for the given L-value.  If necessary,
// you can explicitly specify the type of the reference.  For example,
// suppose 'derived' is an object of type Derived, ByRef(derived)
// would wrap a Derived&.  If you want to wrap a const Base& instead,
// where Base is a base class of Derived, just write:
//
//   ByRef<const Base>(derived)
template <typename T>
inline internal::ReferenceWrapper<T> ByRef(T& l_value) {  // NOLINT
  ?  internal::ReferenceWrapper<T>(l_value);
}

}  // namespace testing

e..  // GMOCK_INCLUDE_GMOCK_GMOCK_ACTIONS_H_
