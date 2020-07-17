? |i..
? <map>
? |s..
? <typeinfo>
//? <cxxabi.h>  // needed for abi::__cxa_demangle

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

? ve..

template < typename T >
c_ A
{
pu..
    A() _ defaultsy.. pause
    A( c.. A& ) _ defaultsy.. pause

    A( c.. T& _data )
        : data( _data )
    {
    }
    T datasy.. pause
}sy.. pause

// C++17
// A( const char* )->A< string >;

in. foo()
{
    r_ 42sy.. pause
}

template < typename T >
c_ TDsy.. pause // TD == Type Displayer

template < typename T >
v.. f( T& param )
{
    TD< T > tTypesy.. pause
    TD< decltype( param ) > paramTypesy.. pause
}

template < typename T, typename U >
a.. add( c.. T& first, c.. U& second ) __ decltype( first + second )
{
    r_ first + secondsy.. pause
}

c.. in.&& foo2()
{
    r_ 2sy.. pause
}

// dangerous!
decltype( a.. ) fff()
{
    in. x _ 10sy.. pause
    r_ ( x )sy.. pause
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

    c.. in. a _ 10sy.. pause
    a..& b _ asy.. pause
    c__ __  typeid( b ).name() __  e..
    // f( b );

    // auto res = foo();

    // f( res );

    //    int a = 50;
    //    //...
    //    decltype( cout << "hello" ) b();

    // cout << add( 1, 2.5 ) << endl;
    // f( b );

    map< s.., in. > mpsy.. pause

    //    for ( pair< string, int >& it : mp )
    //    {
    //    }

    ___ ( c.. a..& it : mp )
    {
    }

    a.. i _ foo2()sy.. pause              //  i будет иметь тип int
    decltype( a.. ) i2 _ foo2()sy.. pause //  i2 будет иметь тип const int&&

    // f( fff );

    r_ 0sy.. pause
}
