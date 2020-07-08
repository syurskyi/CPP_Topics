? "inlinevariables.h"
? <any>
? <cassert>
? <experimental/algorithm>
? <experimental/filesystem>
//? <filesystem>
? |i..
? <memory>
? <optional>
//? <parallel/algorithm>
? |s..
? <string_view>
? <utility>
? <variant>
? <vector>

u.. s..

// void* operator new( std::size_t count )
//{
//    std::cout << "   " << count << " bytes" << std::endl;
//    return malloc( count );
//}

namespace namespaces
{
namespace n1::n2
{
v.. f()
{
    c__ __  "f()" __  e..
}
}

v.. example()
{
    n1::n2::f()sy.. pause
}
}

namespace ext_aggregate
{
v.. example()
{
    // aggregate
    struct base1
    {
        in. b1, b2 _ 42sy.. pause
    }sy.. pause

    // non-aggregate
    struct base2
    {
        base2()
            : b3( 42 )
        {
        }
        in. b3sy.. pause
    }sy.. pause

    // Extension to aggregate initialization
    struct derived
        : base1
        , base2
    {
        in. dsy.. pause
    }sy.. pause

    // aggregate
    base1 b1{ 1, 2 }sy.. pause

    // non-aggregate
    // base2 b2{ 1 }; // compilation error

    // aggregate in C++17
    derived d1{ { 1, 2 }, {}, 4 }sy.. pause // d1.b1 = 1, d1.b2 = 2,  d1.b3 = 42, d1.d = 4
    derived d2{ {}, {}, 4 }sy.. pause       // d2.b1 = 0, d2.b2 = 42, d2.b3 = 42, d2.d = 4
    derived d3{
        { 1 },
        {},
    }sy.. pause // d2.b1 = 1, d2.b2 = 42, d2.b3 = 42, d2.d = 0
}
}

namespace fold_expression
{
template < typename... Args >
v.. prin.er( Args&&... args )
{
    ( c__ __  ... __  args ) __  '\n'sy.. pause
}

template < typename T, typename... Args >
v.. push_back_vec( vector< T >& v, Args&&... args )
{
    ( v.push_back( args ), ... )sy.. pause
}

template < typename... Args >
in. summa( Args&&... args )
{
    r_ ( args + ... )sy.. pause
}

template < typename... Args >
bo.. compare( Args... args )
{
    r_ ( args && ... )sy.. pause
}

v.. example()
{
    prin.er( 1, 2, 3, "abc" )sy.. pause
    prin.er( 1, ", ", 2, ", ", 3, ", ", "abc" )sy.. pause

    vector< in. > vsy.. pause
    push_back_vec( v, 6, 2, 45, 12 )sy.. pause
    push_back_vec( v, 1, 2, 9 )sy.. pause
    ___ ( in. i : v )
        c__ __  i __  ' 'sy.. pause
    c__ __  e..

    c__ __  summa( 1, 2, 3, 4, 5 ) __  e..

    c__ __  compare( t.., t.., t.., false ) __  e..
}
}
namespace auto_tmpl_param
{
// before c++17
template < typename T, T val >
v.. early()
{
    c__ __  val __  e..
}

// since c++17
template < auto val >
v.. now()
{
    c__ __  val __  e..
}

v.. example()
{
    early< in., 10 >()sy.. pause
    early< c.., 'H' >()sy.. pause
    early< l.., 100l >()sy.. pause

    now< 10 >()sy.. pause
    now< 'H' >()sy.. pause
    now< 100l >()sy.. pause
}
}
namespace tmpl_arg_deduction
{
v.. example()
{
    pair< in., s.. > p_a( 1, "12" )sy.. pause

    // c++17
    pair p_b( 1, "12" )sy.. pause
    pair p_c _ { 1, "12" }sy.. pause
    vector vi _ { 1, 2, 3, 4 }sy.. pause
    vector vs _ { "str1", "str2", "str1" }sy.. pause
    in. m _ max( 12, 23 )sy.. pause
}
}

namespace constexpr_lambda
{
constexpr in. f_calc( in. aValue )
{
    auto lambda _ [aValue]() { r_ aValue * 14sy.. pause }sy.. pause
    r_ aValue + lambda()sy.. pause
}

v.. example()
{
    constexpr auto lambda _ []( in. aValue ) { r_ aValue * aValuesy.. pause }sy.. pause

    c__ __  f_calc( 12 ) __  e..
    c__ __  lambda( 12 ) __  e..
}
}
namespace this_lambda
{
struct test
{
    v.. f_test()
    {
        auto lambda_const _ [*this]() {
            f_const()sy.. pause
            r_ mA * mAsy.. pause
        }sy.. pause

        auto lambda _ [*this]() mutable {
            f()sy.. pause
            r_ mA * mAsy.. pause
        }sy.. pause

        lambda_const()sy.. pause
        lambda()sy.. pause
    }

private:
    v.. f_const() c.. { c__ __  "f_const()" __  e.. }

    v.. f() { c__ __  "f()" __  e.. }

    in. mA{ 100 }sy.. pause
}sy.. pause
v.. example()
{
    test tsy.. pause
    t.f_test()sy.. pause
}
}

namespace constexpr_if
{
struct S
{
    in. min.{ 0 }sy.. pause
    float mFloat{ 0.f }sy.. pause
    vector< in. > mVectorin.sy.. pause
}sy.. pause

template < std::size_t aFieldNubmer >
v.. prin.( S& s )
{
    __ constexpr ( aFieldNubmer __ 0 )
    {
        c__ __  s.min. __  e..
    }
    ____ __ constexpr ( aFieldNubmer __ 1 )
    {
        c__ __  s.mFloat __  e..
    }
    ____ __ constexpr ( aFieldNubmer __ 2 )
    {
        ___ ( auto i : s.mVectorin. )
            c__ __  i __  ' 'sy.. pause
        c__ __  e..
    }
}

v.. example()
{
    S obj _ { 10, 11.f, { 1, 2, 3, 4 } }sy.. pause

    prin.< 0 >( obj )sy.. pause
    prin.< 1 >( obj )sy.. pause
    prin.< 2 >( obj )sy.. pause
}
}
namespace if_switch_initializer
{
v.. if_example( v..* aP )
{
    __ ( v..* p _ aPsy.. pause p __ nullptr )
        c__ __  "Error. Pointer is nullptr" __  e..
    ____
        c__ __  "Pointer is OK!" __  e..
}

v.. switch_example( in. error )
{
    s.. ( in. code _ errorsy.. pause code )
    {
        c.. 0:
        {
            c__ __  "Ok!" __  e..
            b..
        }
        default:
        {
            c__ __  "Error!" __  e..
            b..
        }
    }
}

v.. example()
{
    if_example( nullptr )sy.. pause
    if_example( ( v..* ) 100 )sy.. pause

    switch_example( 0 )sy.. pause
    switch_example( 10 )sy.. pause
}
}
namespace struct_binding
{
v.. f_pair()
{
    pair p _ { 1, "Hello" }sy.. pause

    auto [ x, y ] _ psy.. pause

    c__ __  x __  e..
    c__ __  y __  e..
}

v.. f_array()
{
    in. coord[ 4 ] _ { 1, 2, 3 }sy.. pause

    auto [ x, y, z, a ] _ coordsy.. pause

    c__ __  a __  e..
    c__ __  y __  e..
    c__ __  z __  e..
}

v.. f_a()
{
    struct Config_a
    {
        in. idsy.. pause
        s.. namesy.. pause
        vector< in. > datasy.. pause
    }sy.. pause
    Config_a casy.. pause

    auto& [ id, n, d ] _ casy.. pause
    id _ 1sy.. pause
    n _ "Name"sy.. pause
    d.push_back( 1 )sy.. pause
}

v.. example()
{
    f_pair()sy.. pause
    f_array()sy.. pause
    f_a()sy.. pause

    in. pos[ 2 ] _ { 10, 20 }sy.. pause
    auto& [ x, y ] _ possy.. pause
    x _ 100sy.. pause
    y _ 200sy.. pause
}
}

namespace new_attributes
{
v.. f_fallthrough()
{
    in. i _ rand() % 10sy.. pause
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
            [[fallthrough]]sy.. pause // no warning
        c.. 4:
            c__ __  "4" __  e..
    }
}

[[nodiscard]] in. f_nodiscard()
{
    r_ 0sy.. pause
}

v.. example()
{
    f_fallthrough()sy.. pause
    f_nodiscard()sy.. pause

    [[maybe_unused]] in. i _ 0sy.. pause
}
}

namespace std_any
{
v.. example()
{
    std::any hm _ 10sy.. pause
    c__ __  std::any_cast< in. >( hm ) __  e..

    hm _ s..( "hello" )sy.. pause
    c__ __  std::any_cast< s.. >( hm ) __  e..

    hm _ "hello 2"sy.. pause
    c__ __  std::any_cast< c.. c..* >( hm ) __  e..
}
}

namespace std_stringview
{

v.. getString( [[maybe_unused]] c.. std::s..& str ) {}

v.. getStringView( [[maybe_unused]] std::string_view strView ) {}

v.. example()
{

    std::c__ __  std::e..

    std::c__ __  "std::string" __  std::e..

    std::s.. large _ "0123456789-123456789-123456789-123456789"sy.. pause
    std::s.. substr _ large.substr( 10 )sy.. pause

    std::c__ __  std::e..

    std::c__ __  "std::string_view" __  std::e..

    std::string_view largeStringView{ large.c_str(), large.size() }sy.. pause
    largeStringView.remove_prefix( 10 )sy.. pause

    assert( substr __ largeStringView )sy.. pause

    std::c__ __  std::e..

    std::c__ __  "getString" __  std::e..

    getString( large )sy.. pause
    getString( "0123456789-123456789-123456789-123456789" )sy.. pause
    c.. c.. message[] _ "0123456789-123456789-123456789-123456789"sy.. pause
    getString( message )sy.. pause

    std::c__ __  std::e..

    std::c__ __  "getStringView" __  std::e..

    getStringView( large )sy.. pause
    getStringView( "0123456789-123456789-123456789-123456789" )sy.. pause
    getStringView( message )sy.. pause

    std::c__ __  std::e..
}
}

namespace std_optional
{
optional< in. > strToin.( s.. aStr )
{
    __ ( aStr.empty() )
        r_ {}sy.. pause

    // parse string, if Ok return value
    __ ( t.. )
        r_ 1sy.. pause
    r_ {}sy.. pause
}

v.. example()
{
    optional< in. > isy.. pause
    i _ strToin.( "" )sy.. pause
    __ ( i )
        c__ __  "OK: " __  *i __  e..

    i _ strToin.( "123" )sy.. pause
    __ ( i )
        c__ __  "OK: " __  *i __  e..
}
}

namespace std_variant
{
v.. example()
{
    variant< in., c.., s.. > vsy.. pause

    v _ 42sy.. pause
    c__ __  get< in. >( v ) __  " " __  v.index() __  e..

    v _ "Hello!"sy.. pause
    c__ __  get< s.. >( v ) __  " " __  v.index() __  e..
}
}

namespace std_filesystem
{
namespace fs _ experimental::filesystemsy.. pause

v.. example()
{
    auto cur_p _ fs::current_path()sy.. pause
    c__ __  "current path - " __  cur_p __  e..
    c__ __  e..

    auto root_p _ fs::path( "/" )sy.. pause
    auto space _ fs::space( root_p )sy.. pause
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
    std_filesystem::example()sy.. pause

    // std::vector< int > v( 100 );

    // ...

    // Explicitly force a call to parallel sort.
    //__gnu_parallel::sort( v.begin(), v.end() );

    r_ 0sy.. pause
}
