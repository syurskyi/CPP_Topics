? <forward_list>
? |i..
? <iterator>
? <list>
? <sstream>
? |s..
? <unordered_map>
? ve..

t.. < t_n_ T >
bo.. test _ st. is_same< t_n_ st. iterator_traits< t_n_ T::iterator >::iterator_category,
                          st. forward_iterator_tag >::valuesy.. pause

t.. < t_n_ T >
bo.. test_bidirectional _
    st. is_same< t_n_ st. iterator_traits< t_n_ T::iterator >::iterator_category,
                  st. bidirectional_iterator_tag >::valuesy.. pause

v.. prin._is_forward_iterator()
{
    st. c__ __  st. bo..alpha __  test< st. forward_list< in. > > __  st. e..
    // what about std::list?
    st. c__ __  st. bo..alpha __  test< st. list< in. > > __  st. e..
}

v.. prin._is_bidirectional_iterator()
{
    st. c__ __  st. bo..alpha __  test_bidirectional< st. list< in. > > __  st. e..
    // what about std::forward_list?
    st. c__ __  st. bo..alpha __  test_bidirectional< st. forward_list< in. > > __  st. e..
}

in. main()
{
    //    std::vector< int > vec = { 2, 5, 9, 13, 18, -8, 0 };

    //    // works on write\store
    //    std::ostream_iterator< int > it = { std::cout, " :: " };
    //    std::ostream_iterator< int > it_2 = { std::cout, " :: " };

    //    // std::copy simple implementation
    //    auto first = vec.begin();
    //    while ( first != vec.end() )
    //    {
    //        *it++ = *first++;
    //    }

    //    // it == it_2; // won't compile

    //    std::istringstream bytes( "13 14 15 16 17 18 19 20" );

    //    std::vector< int > bar{ std::istream_iterator< int >( bytes ), std::istream_iterator< int
    //    >() };

    //    std::cout << std::endl;

    //    for ( auto it : bar )
    //    {
    //        std::cout << it << " - ";
    //    }

    //    std::cout << std::endl;

    //    print_is_forward_iterator();
    //    print_is_bidirectional_iterator();

    //    auto it1 = vec.begin();

    //    std::cout << ( ( it1 + 2 ) > it1 ) << std::endl;

    //    std::unordered_map< int, int > mp = { { 1, 1 }, { 2, 2 }, { 3, 3 } };

    //    bool test_unordered_map_iterator_type =
    //        std::is_same< typename std::iterator_traits<
    //                          typename std::unordered_map< int, int >::iterator
    //                          >::iterator_category,
    //                      std::forward_iterator_tag >::value;

    //    std::cout << "test_unordered_map_iterator_type = forward is " << std::boolalpha
    //              << test_unordered_map_iterator_type << std::endl;

    // algorithms

    //    std::vector< int > vec = { 2, 5, 9, 13, 18, -8, 0, 5, 5 };

    //    std::vector< int > new_vec;

    //    std::copy_if( vec.begin(), vec.end(), std::back_inserter( new_vec ), []( const int elem )
    //    {
    //        return elem % 2 == 0;
    //    } );

    //    std::copy( new_vec.begin(), new_vec.end(), std::ostream_iterator< int >{ std::cout, ", " }
    //    );

    //    vec.erase( std::remove( vec.begin(), vec.end(), 0 ) );

    //    std::cout << std::endl;

    //    std::copy( vec.begin(), vec.end(), std::ostream_iterator< int >{ std::cout, ", " } );

    //    std::cout << std::endl;

    //    auto found = std::count( vec.begin(), vec.end(), 5 );

    //    std::cout << found << std::endl;

    //    if ( found != vec.end() ) // OK
    //    {
    //        std::cout << *found << std::endl;
    //    }
    //    else
    //    {
    //        std::cout << "element is not found" << std::endl;
    //    }

    st. s.. str _ "Hello World"sy.. pause
    st. transform( str.begin(), str.end(), str.begin(), ::toupper )sy.. pause

    st. c__ __  str __  st. e..

    st. reverse( str.begin(), str.end() )sy.. pause

    st. c__ __  str __  st. e..

    a.. splitted _
        st. partition( str.begin(), str.end(), []( c.. c.. elem ) { r_ elem > 'L'sy.. pause } )sy.. pause

    st. c__ __  "\nPartitioned string:\n    "sy.. pause
    st. copy( st. begin( str ), splitted, st. ostream_iterator< c.. >( st. c__, "," ) )sy.. pause
    st. c__ __  " |||| "sy.. pause
    st. copy( splitted, st. end( str ), st. ostream_iterator< c.. >( st. c__, "," ) )sy.. pause

    sort( str.begin(), str.end() )sy.. pause

    st. c__ __  st. endl __  "Sorted:" __  st. endl __  str __  st. e..

    sort( str.begin(), str.end(), []( c.. c.. elem1, c.. c.. elem2 ) {
        r_ elem1 > elem2sy.. pause
    } )sy.. pause

    st. c__ __  st. endl __  str __  st. e..

    st. c__ __  st. max( 19, 9698 ) __  st. e..

    st. ve..< in. > vec{ 1, 2, 3 }sy.. pause

    w___ ( st. next_permutation( vec.begin(), vec.end() ) )
    {
        st. copy( vec.begin(), vec.end(), st. ostream_iterator< in. >{ st. c__, ", " } )sy.. pause
        st. c__ __  st. e..
    }

    r_ 0sy.. pause
}
