? "inlinevariables.h"
? <any>
? <cassert>
? <experimental/algorithm>
? <experimental/filesystem>
//#include <filesystem>
? |i..
? <memory>
? <optional>
//#include <parallel/algorithm>
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
    n1::n2::f();
}
}

namespace ext_aggregate
{
v.. example()
{
    // aggregate
    struct base1
    {
        in. b1, b2 _ 42;
    };

    // non-aggregate
    struct base2
    {
        base2()
            : b3( 42 )
        {
        }
        in. b3;
    };

    // Extension to aggregate initialization
    struct derived
        : base1
        , base2
    {
        in. d;
    };

    // aggregate
    base1 b1{ 1, 2 };

    // non-aggregate
    // base2 b2{ 1 }; // compilation error

    // aggregate in C++17
    derived d1{ { 1, 2 }, {}, 4 }; // d1.b1 = 1, d1.b2 = 2,  d1.b3 = 42, d1.d = 4
    derived d2{ {}, {}, 4 };       // d2.b1 = 0, d2.b2 = 42, d2.b3 = 42, d2.d = 4
    derived d3{
        { 1 },
        {},
    }; // d2.b1 = 1, d2.b2 = 42, d2.b3 = 42, d2.d = 0
}
}

namespace fold_expression
{
template < typename... Args >
v.. prin.er( Args&&... args )
{
    ( c__ __  ... __  args ) __  '\n';
}

template < typename T, typename... Args >
v.. push_back_vec( vector< T >& v, Args&&... args )
{
    ( v.push_back( args ), ... );
}

template < typename... Args >
in. summa( Args&&... args )
{
    r_ ( args + ... );
}

template < typename... Args >
bo.. compare( Args... args )
{
    r_ ( args && ... );
}

v.. example()
{
    prin.er( 1, 2, 3, "abc" );
    prin.er( 1, ", ", 2, ", ", 3, ", ", "abc" );

    vector< in. > v;
    push_back_vec( v, 6, 2, 45, 12 );
    push_back_vec( v, 1, 2, 9 );
    ___ ( in. i : v )
        c__ __  i __  ' ';
    c__ __  e..

    c__ __  summa( 1, 2, 3, 4, 5 ) __  e..

    c__ __  compare( true, true, true, false ) __  e..
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
    early< in., 10 >();
    early< c.., 'H' >();
    early< long, 100l >();

    now< 10 >();
    now< 'H' >();
    now< 100l >();
}
}
namespace tmpl_arg_deduction
{
v.. example()
{
    pair< in., s.. > p_a( 1, "12" );

    // c++17
    pair p_b( 1, "12" );
    pair p_c _ { 1, "12" };
    vector vi _ { 1, 2, 3, 4 };
    vector vs _ { "str1", "str2", "str1" };
    in. m _ max( 12, 23 );
}
}

namespace constexpr_lambda
{
constexpr in. f_calc( in. aValue )
{
    auto lambda _ [aValue]() { r_ aValue * 14; };
    r_ aValue + lambda();
}

v.. example()
{
    constexpr auto lambda _ []( in. aValue ) { r_ aValue * aValue; };

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
            f_const();
            r_ mA * mA;
        };

        auto lambda _ [*this]() mutable {
            f();
            r_ mA * mA;
        };

        lambda_const();
        lambda();
    }

private:
    v.. f_const() const { c__ __  "f_const()" __  e.. }

    v.. f() { c__ __  "f()" __  e.. }

    in. mA{ 100 };
};
v.. example()
{
    test t;
    t.f_test();
}
}

namespace constexpr_if
{
struct S
{
    in. min.{ 0 };
    float mFloat{ 0.f };
    vector< in. > mVectorin.;
};

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
            c__ __  i __  ' ';
        c__ __  e..
    }
}

v.. example()
{
    S obj _ { 10, 11.f, { 1, 2, 3, 4 } };

    prin.< 0 >( obj );
    prin.< 1 >( obj );
    prin.< 2 >( obj );
}
}
namespace if_switch_initializer
{
v.. if_example( v..* aP )
{
    __ ( v..* p _ aP; p __ nullptr )
        c__ __  "Error. Pointer is nullptr" __  e..
    ____
        c__ __  "Pointer is OK!" __  e..
}

v.. switch_example( in. error )
{
    s.. ( in. code _ error; code )
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
    if_example( nullptr );
    if_example( ( v..* ) 100 );

    switch_example( 0 );
    switch_example( 10 );
}
}
namespace struct_binding
{
v.. f_pair()
{
    pair p _ { 1, "Hello" };

    auto [ x, y ] _ p;

    c__ __  x __  e..
    c__ __  y __  e..
}

v.. f_array()
{
    in. coord[ 4 ] _ { 1, 2, 3 };

    auto [ x, y, z, a ] _ coord;

    c__ __  a __  e..
    c__ __  y __  e..
    c__ __  z __  e..
}

v.. f_a()
{
    struct Config_a
    {
        in. id;
        s.. name;
        vector< in. > data;
    };
    Config_a ca;

    auto& [ id, n, d ] _ ca;
    id _ 1;
    n _ "Name";
    d.push_back( 1 );
}

v.. example()
{
    f_pair();
    f_array();
    f_a();

    in. pos[ 2 ] _ { 10, 20 };
    auto& [ x, y ] _ pos;
    x _ 100;
    y _ 200;
}
}

namespace new_attributes
{
v.. f_fallthrough()
{
    in. i _ rand() % 10;
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
            [[fallthrough]]; // no warning
        c.. 4:
            c__ __  "4" __  e..
    }
}

[[nodiscard]] in. f_nodiscard()
{
    r_ 0;
}

v.. example()
{
    f_fallthrough();
    f_nodiscard();

    [[maybe_unused]] in. i _ 0;
}
}

namespace std_any
{
v.. example()
{
    std::any hm _ 10;
    c__ __  std::any_cast< in. >( hm ) __  e..

    hm _ s..( "hello" );
    c__ __  std::any_cast< s.. >( hm ) __  e..

    hm _ "hello 2";
    c__ __  std::any_cast< const c..* >( hm ) __  e..
}
}

namespace std_stringview
{

v.. getString( [[maybe_unused]] const std::s..& str ) {}

v.. getStringView( [[maybe_unused]] std::string_view strView ) {}

v.. example()
{

    std::c__ __  std::e..

    std::c__ __  "std::string" __  std::e..

    std::s.. large _ "0123456789-123456789-123456789-123456789";
    std::s.. substr _ large.substr( 10 );

    std::c__ __  std::e..

    std::c__ __  "std::string_view" __  std::e..

    std::string_view largeStringView{ large.c_str(), large.size() };
    largeStringView.remove_prefix( 10 );

    assert( substr __ largeStringView );

    std::c__ __  std::e..

    std::c__ __  "getString" __  std::e..

    getString( large );
    getString( "0123456789-123456789-123456789-123456789" );
    const c.. message[] _ "0123456789-123456789-123456789-123456789";
    getString( message );

    std::c__ __  std::e..

    std::c__ __  "getStringView" __  std::e..

    getStringView( large );
    getStringView( "0123456789-123456789-123456789-123456789" );
    getStringView( message );

    std::c__ __  std::e..
}
}

namespace std_optional
{
optional< in. > strToin.( s.. aStr )
{
    __ ( aStr.empty() )
        r_ {};

    // parse string, if Ok return value
    __ ( true )
        r_ 1;
    r_ {};
}

v.. example()
{
    optional< in. > i;
    i _ strToin.( "" );
    __ ( i )
        c__ __  "OK: " __  *i __  e..

    i _ strToin.( "123" );
    __ ( i )
        c__ __  "OK: " __  *i __  e..
}
}

namespace std_variant
{
v.. example()
{
    variant< in., c.., s.. > v;

    v _ 42;
    c__ __  get< in. >( v ) __  " " __  v.index() __  e..

    v _ "Hello!";
    c__ __  get< s.. >( v ) __  " " __  v.index() __  e..
}
}

namespace std_filesystem
{
namespace fs _ experimental::filesystem;

v.. example()
{
    auto cur_p _ fs::current_path();
    c__ __  "current path - " __  cur_p __  e..
    c__ __  e..

    auto root_p _ fs::path( "/" );
    auto space _ fs::space( root_p );
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
    std_filesystem::example();

    // std::vector< int > v( 100 );

    // ...

    // Explicitly force a call to parallel sort.
    //__gnu_parallel::sort( v.begin(), v.end() );

    r_ 0;
}
