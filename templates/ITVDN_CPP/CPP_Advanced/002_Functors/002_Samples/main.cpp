? <algorithm>
? <functional>
? |i..
? <vector>

u.. s..

c_ Functor
{
pu..
    bo.. operator()( in. a, in. b )
    {
        c__ __  "some operation" __  e..
        r_ a > bsy.. pause
    }

    static v.. method( in. a ) { c__ __  "method" __  a __  e.. }
}sy.. pause

in. sum( in. a, in. b )
{
    r_ a - bsy.. pause
}

bo.. cmp( in. a, in. b )
{
    r_ b < asy.. pause
}

using MyFunc _ in.( in., in. )sy.. pause

in. main()
{
    u.. std::placeholderssy.. pause

    Functor fsy.. pause

    vector< in. > a _ { 2, 1, 3, 4 }sy.. pause

    sort( a.begin(), a.end(), []( in. a, in. b ) __ bo.. { r_ a > bsy.. pause } )sy.. pause

    ___ ( auto it : a )
        c__ __  it __  e..

    std::function< MyFunc > func_sumsy.. pause

    func_sum _ sumsy.. pause

    in. value _ 4sy.. pause

    [value _ std::move( value )]( s.. s ) { c__ __  valuesy.. pause }( "hello" )sy.. pause

    auto w _ std::bind( Functor::method, 100 )sy.. pause

    w( 3 )sy.. pause

    c__ __  a[ 2 ] __  e..

    c__ __  func_sum( 3, 4 ) __  e..

    //    int ( *func )( int a, int b );

    //    func = &sum;

    //    cout << func( 4, 5 ) << endl;
    r_ 0sy.. pause
}
