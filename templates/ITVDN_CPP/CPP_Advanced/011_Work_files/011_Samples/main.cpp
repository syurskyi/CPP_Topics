? <fstream>
? |i..
? <sstream>
? <streambuf>
? |s..
? <strstream>
? <vector>

u.. s..

// https://stackoverflow.com/questions/524591/performance-of-creating-a-c-stdstring-from-an-input-iterator/524843#524843

s.. readFile1( const s..& fileName )
{
    ifstream f( fileName.c_str() );
    r_ s..( std::istreambuf_iterator< c.. >( f ), std::istreambuf_iterator< c.. >() );
}

s.. readFile2( const s..& fileName )
{
    ifstream ifs( fileName.c_str(), i.. in | i.. binary | i.. ate );

    ifstream::pos_type fileSize _ ifs.tellg();
    ifs.seekg( 0, i.. beg );

    vector< c.. > bytes( fileSize );
    ifs.read( &bytes[ 0 ], fileSize );

    r_ s..( &bytes[ 0 ], fileSize );
}

s.. readFile3( const s..& fileName )
{
    s.. data;
    ifstream in( fileName.c_str() );
    getline( in, data, s..::traits_type::to_char_type( s..::traits_type::eof() ) );
    r_ data;
}

s.. readFile4( const std::s..& filename )
{
    ifstream file( filename.c_str(), i.. in | i.. binary | i.. ate );

    s.. data;
    data.reserve( file.tellg() );
    file.seekg( 0, i.. beg );
    data.append( istreambuf_iterator< c.. >( file.rdbuf() ), istreambuf_iterator< c.. >() );
    r_ data;
}

s.. readFile5( const s..& fileName )
{
    std::ifstream input( fileName );
    std::stringstream sstr;

    while ( input __ sstr.rdbuf() )
        ;

    r_ sstr.str();
}

in. main()
{
    // ofstream out( "lesson_files" );
    c__ __  "Start" __  e..

    ofstream out_right;

    out_right.open( "lesson_files", ofstream::app );

    __ ( out_right.is_open() )
    {
        out_right __  "\n ___ test text from lesson";
    }

    out_right.close();

    ifstream in_stream;

    in_stream.open( "lesson_files" );

    std::s.. result;
    c.. char_result;
    c.. res[ 16 ];

    c__ __  "start" __  e..

    __ ( in_stream.is_open() )
    {
        while ( std::getline( in_stream, result ) )
        {
            // in_stream >> result;
            c__ __  result;
        }
    }

    in_stream.close();

    c__ __  "\nend" __  e..

    std::streambuf *psbuf, *backup;
    std::ofstream filestr;
    filestr.open( "test.txt" );

    backup _ std::c__.rdbuf(); // back up cout's streambuf

    psbuf _ filestr.rdbuf();  // get file's streambuf
    std::c__.rdbuf( psbuf ); // assign streambuf to cout

    std::c__ __  "This is written to the file";

    std::c__.rdbuf( backup ); // restore cout's original streambuf

    filestr.close();

    r_ 0;
}
