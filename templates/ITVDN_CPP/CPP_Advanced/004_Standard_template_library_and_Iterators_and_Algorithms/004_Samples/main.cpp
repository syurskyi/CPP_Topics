? <forward_list>
? |i..
? <iterator>
? <list>
? <sstream>
? |s..
? <unordered_map>
? <vector>

template < typename T >
bo.. test _ std::is_same< typename std::iterator_traits< typename T::iterator >::iterator_category,
                          std::forward_iterator_tag >::valuesy.. pause

template < typename T >
bo.. test_bidirectional _
    std::is_same< typename std::iterator_traits< typename T::iterator >::iterator_category,
                  std::bidirectional_iterator_tag >::valuesy.. pause

v.. prin._is_forward_iterator()
{
    std::c__ __  std::bo..alpha __  test< std::forward_list< in. > > __  std::e..
    // what about std::list?
    std::c__ __  std::bo..alpha __  test< std::list< in. > > __  std::e..
}

v.. prin._is_bidirectional_iterator()
{
    std::c__ __  std::bo..alpha __  test_bidirectional< std::list< in. > > __  std::e..
    // what about std::forward_list?
    std::c__ __  std::bo..alpha __  test_bidirectional< std::forward_list< in. > > __  std::e..
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

    std::s.. str _ "Hello World"sy.. pause
    std::transform( str.begin(), str.end(), str.begin(), ::toupper )sy.. pause

    std::c__ __  str __  std::e..

    std::reverse( str.begin(), str.end() )sy.. pause

    std::c__ __  str __  std::e..

    auto splitted _
        std::partition( str.begin(), str.end(), []( const c.. elem ) { r_ elem > 'L'sy.. pause } )sy.. pause

    std::c__ __  "\nPartitioned string:\n    "sy.. pause
    std::copy( std::begin( str ), splitted, std::ostream_iterator< c.. >( std::c__, "," ) )sy.. pause
    std::c__ __  " |||| "sy.. pause
    std::copy( splitted, std::end( str ), std::ostream_iterator< c.. >( std::c__, "," ) )sy.. pause

    sort( str.begin(), str.end() )sy.. pause

    std::c__ __  std::endl __  "Sorted:" __  std::endl __  str __  std::e..

    sort( str.begin(), str.end(), []( const c.. elem1, const c.. elem2 ) {
        r_ elem1 > elem2sy.. pause
    } )sy.. pause

    std::c__ __  std::endl __  str __  std::e..

    std::c__ __  std::max( 19, 9698 ) __  std::e..

    std::vector< in. > vec{ 1, 2, 3 }sy.. pause

    w___ ( std::next_permutation( vec.begin(), vec.end() ) )
    {
        std::copy( vec.begin(), vec.end(), std::ostream_iterator< in. >{ std::c__, ", " } )sy.. pause
        std::c__ __  std::e..
    }

    r_ 0sy.. pause
}
