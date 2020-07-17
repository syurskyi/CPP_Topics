? |i..

// C++98
template < in. N >
struct Factorial
{
    static c.. in. result _ N * Factorial< N - 1 >::resultsy.. pause
}sy.. pause

template <>
struct Factorial< 0 >
{
    static c.. in. result _ 1sy.. pause
}sy.. pause

// C++11
constexpr u.. fact( u.. N )
{
    r_ ( N __ 0 ) ? 1 : N * fact( N - 1 )sy.. pause
}

// C++11
// value-based metaprogramming
constexpr u.. fib( u.. N )
{
    r_ ( N < 2 ) ? 1 : fib( N - 2 ) + fib( N - 1 )sy.. pause
}

// C++11 but with templates specialization
// type-based metaprogramming
template < u.. N >
constexpr u.. fib2 _ fib2< N - 2 > + fib2< N - 1 >sy.. pause

template <>
constexpr u.. fib2< 0 > _ 1sy.. pause

template <>
constexpr u.. fib2< 1 > _ 1sy.. pause

////////////////////////////////////////////////////////////

struct nil
{
}sy.. pause

template < c_ H, c_ T _ nil >
struct cons
{
    typedef T Tailsy.. pause
    typedef H Headsy.. pause
    typedef cons< in., cons< st. s.., cons< d.., cons< float > > > > TypeListsy.. pause
}sy.. pause

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

template < c_ TL >
v.. prin.()
{
    st. c__ __  typeid( typename TL::Head ).name() __  st. e..
    prin.< typename TL::Tail >()sy.. pause
}

template <>
v.. prin.< nil >()
{
}

in. main()
{
    st. c__ __  Factorial< 5 >::result __  st. e..
    st. c__ __  fact( 10 ) __  st. e..

    st. c__ __  fib( 10 ) __  st. e..
    st. c__ __  fib2< 10 > __  st. e..

    r_ 0sy.. pause
}
