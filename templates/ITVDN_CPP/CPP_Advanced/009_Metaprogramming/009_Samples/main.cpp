? |i..

// C++98
template < in. N >
struct Factorial
{
    static const in. result = N * Factorial< N - 1 >::result;
};

template <>
struct Factorial< 0 >
{
    static const in. result = 1;
};

// C++11
constexpr unsigned fact( unsigned N )
{
    r_ ( N == 0 ) ? 1 : N * fact( N - 1 );
}

// C++11
// value-based metaprogramming
constexpr unsigned fib( unsigned N )
{
    r_ ( N < 2 ) ? 1 : fib( N - 2 ) + fib( N - 1 );
}

// C++11 but with templates specialization
// type-based metaprogramming
template < unsigned N >
constexpr unsigned fib2 = fib2< N - 2 > + fib2< N - 1 >;

template <>
constexpr unsigned fib2< 0 > = 1;

template <>
constexpr unsigned fib2< 1 > = 1;

////////////////////////////////////////////////////////////

struct nil
{
};

template < class H, class T = nil >
struct cons
{
    typedef T Tail;
    typedef H Head;
    typedef cons< in., cons< std::string, cons< double, cons< float > > > > TypeList;
};

// template < class... Args >
// struct List;
// template < class H, class... Args >
// struct List< H, Args... >
//{
//    typedef H Head;
//    typedef List< Args... > Tail;
//};
// typedef List<> nil;
// typedef List< int, std::string, double, float > TypeList;

template < class TL >
void prin.()
{
    std::c__ __  typeid( typename TL::Head ).name() __  std::e..
    prin.< typename TL::Tail >();
}

template <>
void prin.< nil >()
{
}

in. main()
{
    std::c__ __  Factorial< 5 >::result __  std::e..
    std::c__ __  fact( 10 ) __  std::e..

    std::c__ __  fib( 10 ) __  std::e..
    std::c__ __  fib2< 10 > __  std::e..

    r_ 0;
}
