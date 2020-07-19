? |i..

// C++98
t.. < in. N >
st.. Factorial
{
    static c.. in. result _ N * Factorial< N - 1 >::resultsy.. pause
}sy.. pause

t.. <>
st.. Factorial< 0 >
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
t.. < u.. N >
constexpr u.. fib2 _ fib2< N - 2 > + fib2< N - 1 >sy.. pause

t.. <>
constexpr u.. fib2< 0 > _ 1sy.. pause

t.. <>
constexpr u.. fib2< 1 > _ 1sy.. pause

////////////////////////////////////////////////////////////

st.. nil
{
}sy.. pause

t.. < c_ H, c_ T _ nil >
st.. cons
{
    t_d_ T Tailsy.. pause
    t_d_ H Headsy.. pause
    t_d_ cons< in., cons< st. s.., cons< d.., cons< float > > > > TypeListsy.. pause
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

t.. < c_ TL >
v.. prin.()
{
    st. c__ __  typeid( t_n_ TL::Head ).name() __  st. e..
    prin.< t_n_ TL::Tail >()sy.. pause
}

t.. <>
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
