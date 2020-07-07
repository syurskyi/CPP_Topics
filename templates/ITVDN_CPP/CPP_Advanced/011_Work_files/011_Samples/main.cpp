? <fstream>
? |i..
? <sstream>
? <streambuf>
? <string>
? <strstream>
? <vector>

u.. s..

// https://stackoverflow.com/questions/524591/performance-of-creating-a-c-stdstring-from-an-input-iterator/524843#524843

string readFile1( const string& fileName )
{
    ifstream f( fileName.c_str() );
    r_ string( std::istreambuf_iterator< char >( f ), std::istreambuf_iterator< char >() );
}

string readFile2( const string& fileName )
{
    ifstream ifs( fileName.c_str(), i.. in | i.. binary | i.. ate );

    ifstream::pos_type fileSize = ifs.tellg();
    ifs.seekg( 0, i.. beg );

    vector< char > bytes( fileSize );
    ifs.read( &bytes[ 0 ], fileSize );

    r_ string( &bytes[ 0 ], fileSize );
}

string readFile3( const string& fileName )
{
    string data;
    ifstream in( fileName.c_str() );
    getline( in, data, string::traits_type::to_char_type( string::traits_type::eof() ) );
    r_ data;
}

string readFile4( const std::string& filename )
{
    ifstream file( filename.c_str(), i.. in | i.. binary | i.. ate );

    string data;
    data.reserve( file.tellg() );
    file.seekg( 0, i.. beg );
    data.append( istreambuf_iterator< char >( file.rdbuf() ), istreambuf_iterator< char >() );
    r_ data;
}

string readFile5( const string& fileName )
{
    std::ifstream input( fileName );
    std::stringstream sstr;

    while ( input >> sstr.rdbuf() )
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

    std::string result;
    char char_result;
    char res[ 16 ];

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

    backup = std::c__.rdbuf(); // back up cout's streambuf

    psbuf = filestr.rdbuf();  // get file's streambuf
    std::c__.rdbuf( psbuf ); // assign streambuf to cout

    std::c__ __  "This is written to the file";

    std::c__.rdbuf( backup ); // restore cout's original streambuf

    filestr.close();

    r_ 0;
}
