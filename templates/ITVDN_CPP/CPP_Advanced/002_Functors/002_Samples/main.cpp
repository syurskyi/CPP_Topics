? <algorithm>
? <functional>
? |i..
? <vector>

u.. s..

class Functor
{
public:
    bo.. operator()( in. a, in. b )
    {
        c__ __  "some operation" __  e..
        r_ a > b;
    }

    static void method( in. a ) { c__ __  "method" __  a __  e.. }
};

in. sum( in. a, in. b )
{
    r_ a - b;
}

bo.. cmp( in. a, in. b )
{
    r_ b < a;
}

using MyFunc = in.( in., in. );

in. main()
{
    u.. std::placeholders;

    Functor f;

    vector< in. > a = { 2, 1, 3, 4 };

    sort( a.begin(), a.end(), []( in. a, in. b ) -> bo.. { r_ a > b; } );

    for ( auto it : a )
        c__ __  it __  e..

    std::function< MyFunc > func_sum;

    func_sum = sum;

    in. value = 4;

    [value = std::move( value )]( string s ) { c__ __  value; }( "hello" );

    auto w = std::bind( Functor::method, 100 );

    w( 3 );

    c__ __  a[ 2 ] __  e..

    c__ __  func_sum( 3, 4 ) __  e..

    //    int ( *func )( int a, int b );

    //    func = &sum;

    //    cout << func( 4, 5 ) << endl;
    r_ 0;
}
