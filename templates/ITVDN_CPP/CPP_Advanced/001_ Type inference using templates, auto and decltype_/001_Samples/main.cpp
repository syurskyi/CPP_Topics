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

t.. < t_n_ T >
c_ A
{
pu..
    A() _ defaultsy.. p..
    A( c.. A& ) _ defaultsy.. p..

    A( c.. T& _data )
        : data( _data )
    {
    }
    T datasy.. p..
}sy.. p..

// C++17
// A( const char* )->A< string >;

in. foo()
{
    r_ 42sy.. p..
}

t.. < t_n_ T >
c_ TDsy.. p.. // TD == Type Displayer

t.. < t_n_ T >
v.. f( T& param )
{
    TD< T > tTypesy.. p..
    TD< d_t_( param ) > paramTypesy.. p..
}

t.. < t_n_ T, t_n_ U >
a.. add( c.. T& first, c.. U& second ) __ d_t_( first + second )
{
    r_ first + secondsy.. p..
}

c.. in.&& foo2()
{
    r_ 2sy.. p..
}

// dangerous!
d_t_( a.. ) fff()
{
    in. x _ 10sy.. p..
    r_ ( x )sy.. p..
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

    c.. in. a _ 10sy.. p..
    a..& b _ asy.. p..
    c__ __  t_i_( b ).name() __  e..
    // f( b );

    // auto res = foo();

    // f( res );

    //    int a = 50;
    //    //...
    //    decltype( cout << "hello" ) b();

    // cout << add( 1, 2.5 ) << endl;
    // f( b );

    map< s.., in. > mpsy.. p..

    //    for ( pair< string, int >& it : mp )
    //    {
    //    }

    ___ ( c.. a..& it : mp )
    {
    }

    a.. i _ foo2()sy.. p..              //  i будет иметь тип int
    d_t_( a.. ) i2 _ foo2()sy.. p.. //  i2 будет иметь тип const int&&

    // f( fff );

    r_ 0sy.. p..
}
