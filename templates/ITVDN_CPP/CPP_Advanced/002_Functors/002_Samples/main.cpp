? <algorithm>
? <functional>
? |i..
? ve..

u.. s..

c_ Functor
{
pu..
    bo.. operator()( in. a, in. b )
    {
        c__ __  "some operation" __  e..
        r_ a > bsy.. p..
    }

    st.. v.. method( in. a ) { c__ __  "method" __  a __  e.. }
}sy.. p..

in. sum( in. a, in. b )
{
    r_ a - bsy.. p..
}

bo.. cmp( in. a, in. b )
{
    r_ b < asy.. p..
}

using MyFunc _ in.( in., in. )sy.. p..

in. main()
{
    u.. st. placeholderssy.. p..

    Functor fsy.. p..

    ve..< in. > a _ { 2, 1, 3, 4 }sy.. p..

    sort( a.begin(), a.end(), []( in. a, in. b ) __ bo.. { r_ a > bsy.. p.. } )sy.. p..

    ___ ( a.. it : a )
        c__ __  it __  e..

    st. function< MyFunc > func_sumsy.. p..

    func_sum _ sumsy.. p..

    in. value _ 4sy.. p..

    [value _ st. move( value )]( s.. s ) { c__ __  valuesy.. p.. }( "hello" )sy.. p..

    a.. w _ st. bind( Functor::method, 100 )sy.. p..

    w( 3 )sy.. p..

    c__ __  a[ 2 ] __  e..

    c__ __  func_sum( 3, 4 ) __  e..

    //    int ( *func )( int a, int b );

    //    func = &sum;

    //    cout << func( 4, 5 ) << endl;
    r_ 0sy.. p..
}
