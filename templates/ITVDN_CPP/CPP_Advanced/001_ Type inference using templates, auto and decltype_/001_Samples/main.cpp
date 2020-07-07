? |i..
? <map>
? |s..
? <typeinfo>
//#include <cxxabi.h>  // needed for abi::__cxa_demangle

// std::shared_ptr<char> cppDemangle(const char *abiName)
//{
//  int status;
//  char *ret = abi::__cxa_demangle(abiName, 0, 0, &status);

//  /* NOTE: must free() the returned char when done with it! */
//  std::shared_ptr<char> retval;
//  retval.reset( (char *)ret, [](char *mem) { if (mem) free((void*)mem); } );
//  return retval;
//}

//#define CLASS_NAME(somePointer) ((const char *) cppDemangle(typeid(*somePointer).name()).get() )

u.. s..

? <vector>

template < typename T >
class A
{
public:
    A() _ default;
    A( const A& ) _ default;

    A( const T& _data )
        : data( _data )
    {
    }
    T data;
};

// C++17
// A( const char* )->A< string >;

in. foo()
{
    r_ 42;
}

template < typename T >
class TD; // TD == Type Displayer

template < typename T >
void f( T& param )
{
    TD< T > tType;
    TD< decltype( param ) > paramType;
}

template < typename T, typename U >
auto add( const T& first, const U& second ) -> decltype( first + second )
{
    r_ first + second;
}

const in.&& foo2()
{
    r_ 2;
}

// dangerous!
decltype( auto ) fff()
{
    in. x _ 10;
    r_ ( x );
}

in. main()
{

    // int a = 5;
    //    double b = 4.5;

    //    auto c = b;
    //    auto d = 4.f;

    // C++17
    //    vector a = { 1, 2, 3, 4 };

    //    pair p( 3ul, 5ul );

    //    A temp( "hello" );

    //    cout << a[ 2 ] << endl;

    ///////////////////

    const in. a _ 10;
    auto& b _ a;
    c__ __  typeid( b ).name() __  e..
    // f( b );

    // auto res = foo();

    // f( res );

    //    int a = 50;
    //    //...
    //    decltype( cout << "hello" ) b();

    // cout << add( 1, 2.5 ) << endl;
    // f( b );

    map< s.., in. > mp;

    //    for ( pair< string, int >& it : mp )
    //    {
    //    }

    ___ ( const auto& it : mp )
    {
    }

    auto i _ foo2();              //  i будет иметь тип int
    decltype( auto ) i2 _ foo2(); //  i2 будет иметь тип const int&&

    // f( fff );

    r_ 0;
}
