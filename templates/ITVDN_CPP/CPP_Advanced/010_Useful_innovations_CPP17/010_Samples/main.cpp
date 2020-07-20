? "inlinevariables.h"
? <any>
? <cassert>
? <experimental/algorithm>
? <experimental/filesystem>
//? <filesystem>
? |i..
? me..
? <optional>
//? <parallel/algorithm>
? |s..
? <string_view>
? <utility>
? <variant>
? ve..

u.. s..

// void* operator new( std::size_t count )
//{
//    std::cout << "   " << count << " bytes" << std::endl;
//    return malloc( count );
//}

n.. namespaces
{
n.. n1::n2
{
v.. f()
{
    c__ __  "f()" __  e..
}
}

v.. example()
{
    n1::n2::f()
}
}

n.. ext_aggregate
{
v.. example()
{
    // aggregate
    st.. base1
    {
        in. b1, b2 _ 42sy.. p..
    }

    // non-aggregate
    st.. base2
    {
        base2()
            : b3( 42 )
        {
        }
        in. b3sy.. p..
    }

    // Extension to aggregate initialization
    st.. derived
        : base1
        , base2
    {
        in. dsy.. p..
    }

    // aggregate
    base1 b1{ 1, 2 }

    // non-aggregate
    // base2 b2{ 1 }; // compilation error

    // aggregate in C++17
    derived d1{ { 1, 2 }, {}, 4 } // d1.b1 = 1, d1.b2 = 2,  d1.b3 = 42, d1.d = 4
    derived d2{ {}, {}, 4 }       // d2.b1 = 0, d2.b2 = 42, d2.b3 = 42, d2.d = 4
    derived d3{
        { 1 },
        {},
    } // d2.b1 = 1, d2.b2 = 42, d2.b3 = 42, d2.d = 0
}
}

n.. fold_expression
{
t.. < t_n_... Args >
v.. prin.er( Args&&... args )
{
    ( c__ __  ... __  args ) __  '\n'
}

t.. < t_n_ T, t_n_... Args >
v.. push_back_vec( ve..< T >& v, Args&&... args )
{
    ( v.push_back( args ), ... )
}

t.. < t_n_... Args >
in. summa( Args&&... args )
{
    r_ ( args + ... )
}

t.. < t_n_... Args >
bo.. compare( Args... args )
{
    r_ ( args && ... )
}

v.. example()
{
    prin.er( 1, 2, 3, "abc" )
    prin.er( 1, ", ", 2, ", ", 3, ", ", "abc" )

    ve..< in. > vsy.. p..
    push_back_vec( v, 6, 2, 45, 12 )
    push_back_vec( v, 1, 2, 9 )
    ___ ( in. i : v )
        c__ __  i __  ' '
    c__ __  e..

    c__ __  summa( 1, 2, 3, 4, 5 ) __  e..

    c__ __  compare( t.., t.., t.., false ) __  e..
}
}
n.. auto_tmpl_param
{
// before c++17
t.. < t_n_ T, T val >
v.. early()
{
    c__ __  val __  e..
}

// since c++17
t.. < a.. val >
v.. now()
{
    c__ __  val __  e..
}

v.. example()
{
    early< in., 10 >()
    early< c.., 'H' >()
    early< l.., 100l >()

    now< 10 >()
    now< 'H' >()
    now< 100l >()
}
}
n.. tmpl_arg_deduction
{
v.. example()
{
    pair< in., s.. > p_a( 1, "12" )

    // c++17
    pair p_b( 1, "12" )
    pair p_c _ { 1, "12" }
    ve.. vi _ { 1, 2, 3, 4 }
    ve.. vs _ { "str1", "str2", "str1" }
    in. m _ max( 12, 23 )
}
}

n.. constexpr_lambda
{
c_t.. in. f_calc( in. aValue )
{
    a.. lambda _ [aValue] r_ aValue * 14sy.. p.. }
    r_ aValue + lambda()
}

v.. example()
{
    c_t.. a.. lambda _ []( in. aValue ) { r_ aValue * aValuesy.. p.. }

    c__ __  f_calc( 12 ) __  e..
    c__ __  lambda( 12 ) __  e..
}
}
n.. this_lambda
{
st.. test
{
    v.. f_test()
    {
        a.. lambda_const _ [*t..]
            f_const()
            r_ mA * mAsy.. p..
        }

        a.. lambda _ [*t..]() mutable {
            f()
            r_ mA * mAsy.. p..
        }

        lambda_const()
        lambda()
    }

pr..
    v.. f_const() c.. { c__ __  "f_const()" __  e.. }

    v.. f c__ __  "f()" __  e.. }

    in. mA{ 100 }
}
v.. example()
{
    test tsy.. p..
    t.f_test()
}
}

n.. constexpr_if
{
st.. S
{
    in. min.{ 0 }
    fl.. mFloat{ 0.f }
    ve..< in. > mVectorin.
}

t.. < st. size_t aFieldNubmer >
v.. prin.( S& s )
{
    __ c_t.. ( aFieldNubmer __ 0 )
    {
        c__ __  s.min. __  e..
    }
    ____ __ c_t.. ( aFieldNubmer __ 1 )
    {
        c__ __  s.mFloat __  e..
    }
    ____ __ c_t.. ( aFieldNubmer __ 2 )
    {
        ___ ( a.. i : s.mVectorin. )
            c__ __  i __  ' '
        c__ __  e..
    }
}

v.. example()
{
    S obj _ { 10, 11.f, { 1, 2, 3, 4 } }

    prin.< 0 >( obj )
    prin.< 1 >( obj )
    prin.< 2 >( obj )
}
}
n.. if_switch_initializer
{
v.. if_example( v..* aP )
{
    __ ( v..* p _ aPsy.. p.. p __ n_p_ )
        c__ __  "Error. Pointer is nullptr" __  e..
    ____
        c__ __  "Pointer is OK!" __  e..
}

v.. switch_example( in. error )
{
    s.. ( in. code _ errorsy.. p.. code )
    {
        c.. 0:
        {
            c__ __  "Ok!" __  e..
            b..
        }
        def..
        {
            c__ __  "Error!" __  e..
            b..
        }
    }
}

v.. example()
{
    if_example( n_p_ )
    if_example( ( v..* ) 100 )

    switch_example( 0 )
    switch_example( 10 )
}
}
n.. struct_binding
{
v.. f_pair()
{
    pair p _ { 1, "Hello" }

    a.. [ x, y ] _ psy.. p..

    c__ __  x __  e..
    c__ __  y __  e..
}

v.. f_array()
{
    in. coord[ 4 ] _ { 1, 2, 3 }

    a.. [ x, y, z, a ] _ coordsy.. p..

    c__ __  a __  e..
    c__ __  y __  e..
    c__ __  z __  e..
}

v.. f_a()
{
    st.. Config_a
    {
        in. idsy.. p..
        s.. namesy.. p..
        ve..< in. > datasy.. p..
    }
    Config_a casy.. p..

    a..& [ id, n, d ] _ casy.. p..
    id _ 1sy.. p..
    n _ "Name"
    d.push_back( 1 )
}

v.. example()
{
    f_pair()
    f_array()
    f_a()

    in. pos[ 2 ] _ { 10, 20 }
    a..& [ x, y ] _ possy.. p..
    x _ 100sy.. p..
    y _ 200sy.. p..
}
}

n.. new_attributes
{
v.. f_fallthrough()
{
    in. i _ rand() % 10sy.. p..
    s.. ( i )
    {
        c.. 0:
            c__ __  "0" __  e..
            b..
        c__:
            c__ __  "1" __  e..
            b..
        c..
            c__ __  "2" __  e..
            b..
        c.. 3:
            c__ __  "some doing" __  e..
            c__ __  "3" __  e..
            [[fallthrough]] // no warning
        c.. 4:
            c__ __  "4" __  e..
    }
}

[[nodiscard]] in. f_nodiscard()
{
    r_ 0sy.. p..
}

v.. example()
{
    f_fallthrough()
    f_nodiscard()

    [[maybe_unused]] in. i _ 0sy.. p..
}
}

n.. std_any
{
v.. example()
{
    st. any hm _ 10sy.. p..
    c__ __  st. any_cast< in. >( hm ) __  e..

    hm _ s..( "hello" )
    c__ __  st. any_cast< s.. >( hm ) __  e..

    hm _ "hello 2"
    c__ __  st. any_cast< c.. c..* >( hm ) __  e..
}
}

n.. std_stringview
{

v.. getString( [[maybe_unused]] c.. st. s..& str ) {}

v.. getStringView( [[maybe_unused]] st. string_view strView ) {}

v.. example()
{

    st. c__ __  st. e..

    st. c__ __  "std::string" __  st. e..

    st. s.. large _ "0123456789-123456789-123456789-123456789"
    st. s.. substr _ large.substr( 10 )

    st. c__ __  st. e..

    st. c__ __  "std::string_view" __  st. e..

    st. string_view largeStringView{ large.c_str(), large.s.. }
    largeStringView.remove_prefix( 10 )

    as..( substr __ largeStringView )

    st. c__ __  st. e..

    st. c__ __  "getString" __  st. e..

    getString( large )
    getString( "0123456789-123456789-123456789-123456789" )
    c.. c.. message[] _ "0123456789-123456789-123456789-123456789"
    getString( message )

    st. c__ __  st. e..

    st. c__ __  "getStringView" __  st. e..

    getStringView( large )
    getStringView( "0123456789-123456789-123456789-123456789" )
    getStringView( message )

    st. c__ __  st. e..
}
}

n.. std_optional
{
optional< in. > strToin.( s.. aStr )
{
    __ ( aStr.empty() )
        r_ {}

    // parse string, if Ok return value
    __ ( t.. )
        r_ 1sy.. p..
    r_ {}
}

v.. example()
{
    optional< in. > isy.. p..
    i _ strToin.( "" )
    __ ( i )
        c__ __  "OK: " __  *i __  e..

    i _ strToin.( "123" )
    __ ( i )
        c__ __  "OK: " __  *i __  e..
}
}

n.. std_variant
{
v.. example()
{
    variant< in., c.., s.. > vsy.. p..

    v _ 42sy.. p..
    c__ __  get< in. >( v ) __  " " __  v.index() __  e..

    v _ "Hello!"
    c__ __  get< s.. >( v ) __  " " __  v.index() __  e..
}
}

n.. std_filesystem
{
n.. fs _ experimental::filesystemsy.. p..

v.. example()
{
    a.. cur_p _ fs::current_path()
    c__ __  "current path - " __  cur_p __  e..
    c__ __  e..

    a.. root_p _ fs::path( "/" )
    a.. space _ fs::space( root_p )
    /* capacity  - total size of the filesystem, in bytes
       free      - free space on the filesystem, in bytes
       available - free space available to a non-privileged process
                   (may be equal or less than free) */
    c__ __  "Total     : " __  space.capacity / 1024 / 1024 / 1024 __  "GB" __  e..
    c__ __  "Free      : " __  space.free / 1024 / 1024 / 1024 __  "GB" __  e..
    c__ __  "Available : " __  space.available / 1024 / 1024 / 1024 __  "GB" __  e..
    c__ __  e..
}
}

in. main()
{
    // namespaces::example();
    // ext_aggregate::example();
    // fold_expression::example();
    // auto_tmpl_param::example();
    // tmpl_arg_deduction::example();
    // constexpr_if::example();
    // struct_binding::example();
    // constexpr_lambda::example();
    //    this_lambda::example();
    //    if_switch_initializer::example();
    //    new_attributes::example();
    // std_any::example();
    // std_stringview::example();
    // std_optional::example();
    // std_variant::example();
    std_filesystem::example()

    // std::vector< int > v( 100 );

    // ...

    // Explicitly force a call to parallel sort.
    //__gnu_parallel::sort( v.begin(), v.end() );

    r_ 0sy.. p..
}
