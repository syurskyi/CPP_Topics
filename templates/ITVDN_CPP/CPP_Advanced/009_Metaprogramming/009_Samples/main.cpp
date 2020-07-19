? |i..

// C++98
t.. < in. N >
st.. Factorial
{
    static c.. in. result _ N * Factorial< N - 1 >::resultsy.. p..
}sy.. p..

t.. <>
st.. Factorial< 0 >
{
    static c.. in. result _ 1sy.. p..
}sy.. p..

// C++11
c_t.. u.. fact( u.. N )
{
    r_ ( N __ 0 ) ? 1 : N * fact( N - 1 )sy.. p..
}

// C++11
// value-based metaprogramming
c_t.. u.. fib( u.. N )
{
    r_ ( N < 2 ) ? 1 : fib( N - 2 ) + fib( N - 1 )sy.. p..
}

// C++11 but with templates specialization
// type-based metaprogramming
t.. < u.. N >
c_t.. u.. fib2 _ fib2< N - 2 > + fib2< N - 1 >sy.. p..

t.. <>
c_t.. u.. fib2< 0 > _ 1sy.. p..

t.. <>
c_t.. u.. fib2< 1 > _ 1sy.. p..

////////////////////////////////////////////////////////////

st.. nil
{
}sy.. p..

t.. < c_ H, c_ T _ nil >
st.. cons
{
    t_d_ T Tailsy.. p..
    t_d_ H Headsy.. p..
    t_d_ cons< in., cons< st. s.., cons< d.., cons< fl.. > > > > TypeListsy.. p..
}sy.. p..

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
    st. c__ __  t_i_( t_n_ TL::Head ).name() __  st. e..
    prin.< t_n_ TL::Tail >()sy.. p..
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

    r_ 0sy.. p..
}
