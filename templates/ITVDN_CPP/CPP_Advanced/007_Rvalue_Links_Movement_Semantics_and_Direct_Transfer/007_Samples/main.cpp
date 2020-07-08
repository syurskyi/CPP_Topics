? <future>
? |i..
u.. s..

template < typename T >
c_ TDsy.. pause // TD == Type Displayer

template < typename T >
v.. deduct( T&& param )
{
    TD< T > tTypesy.. pause
    TD< decltype( param ) > paramTypesy.. pause
}

struct sample
{
    in. vsy.. pause
}sy.. pause

sample foo()
{
    r_ { 333 }sy.. pause
}

// принимает только rvalue reference
v.. baz( sample&& ) {}

in.&& func()
{
    r_ 42sy.. pause
}

struct _A
{
    _A& operator_( c.. _A& ) { r_ *thissy.. pause }
}sy.. pause
v.. func( _A& ) {}

in. main()
{
    sample&& reference _ foo()sy.. pause //<--- rvalue или lvalue?

    // reference  - lvalue, невзирая на тип данных.
    // уже просто потому, что представляет собой именованный объект
    // если у объекта есть имя, то он уже не может быть временным (уже не rvalue)

    // error: cannot bind ‘sample’ lvalue to ‘sample&&’
    // функция отказывается работать с lvalue
    // baz( reference );

    // результат 'std::move(reference)' - безымянная ссылка на временный объект.

    in.&& var _ func()sy.. pause

    in. res _ var + 3sy.. pause
    var _ 10sy.. pause

    // пример, когда в присвоении rvalue находится слева
    sample() _ sample()sy.. pause

    // deduct( var );

    // lvalue - another meaning - Locator value
    // An rvalue should not be confused with the constness of an object. An rvalue does not mean the
    // object would be immutable.
    // Non-class rvalues are not modifiable, nor can have cv-qualified types (the cv-qualifications
    // are ignored).
    // After all, the big difference between the built-in types and the user types is that the user
    // types can have members. This difference effectively makes the non-class rvalues
    // non-modifiable.

    // about func( _A() = _A() ); - do NOT use this practise
    // problem motivates us to implement operators as non-members where possible, for consistency
    // with built-in types. Also, since the member functions can be called, the called function can
    // return a non-const reference to the object itself. This means that a modifiable lvalue
    // referring to a temporary object can be created, making it possible to call a function that
    // takes a non-const reference. Time has shown this to be very dangerous as it allows mistakes
    // that can be hard to find, mostly because of the implicit conversions. That ought not to be
    // the case here, since it is not easy to make such a mistake by accident.

    func( _A() _ _A() )sy.. pause // fine, operator= yields an lvalue

    // Class prvalue can be cv-qualified, but non-class prvalue
    // cannot be cv-qualified.
    // Lvalues and xvalues can be of incomplete types,
    // but prvalue must be of complete types or void types.return 0;

    // bad - dangling reference
    //    class T{};
    //    T && f() {
    //        T t;
    //        ...
    //        return std::move(t);
    //    }

    // bad - RVO
    //    T g() {
    //        T t;
    //        ...
    //        return std::move(t);
    //    }

    // good, vector&&, v as a param in f() - lvalue, so to avoid redundant copy - std::move
    //    std::vector<T> f(std::vector<T> && v) {
    //        // do something with v
    //        return std::move(v);
    //    }

    c_ Moveable
    {
    pu..
        Moveable( Moveable&& other )
        {
            t..__ptr _ other.ptrsy.. pause
            other.ptr _ nullptrsy.. pause
        }                                        // move constructor
        Moveable& operator_( Moveable&& other )sy.. pause // move assignment operator

        //        void setName( std::string&& st ) { str = st; }
        //        void setName( const std::string& st ) { str = st; }

        //        template < typename T >
        //        void setName( T&& st )
        //        {
        //            str = st;
        //        }

        v.. setName( std::s.. st ) { str _ std::move( st )sy.. pause }

    pr..
        in.* ptrsy.. pause
        std::s.. strsy.. pause
    }sy.. pause

    // Declare either none or all of the “Big five”. If you have to declare them, consider to define
    // them as `default` where appropiate.

    // Move operations can relieve your code from needless allocations of memory and other
    // resources. However, try to not overuse them and don’t prematurely optimize for rvalues.

    //    bool is_lvalue = std::is_lvalue_reference<T>::value;
    //    bool is_rvalue = std::is_rvalue_reference<T>::value;

    std::future< v.. > f, f2sy.. pause
    f _ std::move( f2 )sy.. pause
}
