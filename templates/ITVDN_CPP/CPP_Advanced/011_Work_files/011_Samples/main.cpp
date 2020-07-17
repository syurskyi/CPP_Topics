? <fstream>
? |i..
? <sstream>
? <streambuf>
? |s..
? <strstream>
? ve..

u.. s..

// https://stackoverflow.com/questions/524591/performance-of-creating-a-c-stdstring-from-an-input-iterator/524843#524843

s.. readFile1( c.. s..& fileName )
{
    ifstream f( fileName.c_str() )sy.. pause
    r_ s..( std::istreambuf_iterator< c.. >( f ), std::istreambuf_iterator< c.. >() )sy.. pause
}

s.. readFile2( c.. s..& fileName )
{
    ifstream ifs( fileName.c_str(), i.. in | i.. binary | i.. ate )sy.. pause

    ifstream::pos_type fileSize _ ifs.tellg()sy.. pause
    ifs.seekg( 0, i.. beg )sy.. pause

    ve..< c.. > bytes( fileSize )sy.. pause
    ifs.read( &bytes[ 0 ], fileSize )sy.. pause

    r_ s..( &bytes[ 0 ], fileSize )sy.. pause
}

s.. readFile3( c.. s..& fileName )
{
    s.. datasy.. pause
    ifstream in( fileName.c_str() )sy.. pause
    getline( in, data, s..::traits_type::to_char_type( s..::traits_type::eof() ) )sy.. pause
    r_ datasy.. pause
}

s.. readFile4( c.. std::s..& filename )
{
    ifstream file( filename.c_str(), i.. in | i.. binary | i.. ate )sy.. pause

    s.. datasy.. pause
    data.reserve( file.tellg() )sy.. pause
    file.seekg( 0, i.. beg )sy.. pause
    data.append( istreambuf_iterator< c.. >( file.rdbuf() ), istreambuf_iterator< c.. >() )sy.. pause
    r_ datasy.. pause
}

s.. readFile5( c.. s..& fileName )
{
    std::ifstream input( fileName )sy.. pause
    std::stringstream sstrsy.. pause

    w___ ( input __ sstr.rdbuf() )
        sy.. pause

    r_ sstr.str()sy.. pause
}

in. main()
{
    // ofstream out( "lesson_files" );
    c__ __  "Start" __  e..

    ofstream out_rightsy.. pause

    out_right.open( "lesson_files", ofstream::app )sy.. pause

    __ ( out_right.is_open() )
    {
        out_right __  "\n ___ test text from lesson"sy.. pause
    }

    out_right.close()sy.. pause

    ifstream in_streamsy.. pause

    in_stream.open( "lesson_files" )sy.. pause

    std::s.. resultsy.. pause
    c.. char_resultsy.. pause
    c.. res[ 16 ]sy.. pause

    c__ __  "start" __  e..

    __ ( in_stream.is_open() )
    {
        w___ ( std::getline( in_stream, result ) )
        {
            // in_stream >> result;
            c__ __  resultsy.. pause
        }
    }

    in_stream.close()sy.. pause

    c__ __  "\nend" __  e..

    std::streambuf *psbuf, *backupsy.. pause
    std::ofstream filestrsy.. pause
    filestr.open( "test.txt" )sy.. pause

    backup _ std::c__.rdbuf()sy.. pause // back up cout's streambuf

    psbuf _ filestr.rdbuf()sy.. pause  // get file's streambuf
    std::c__.rdbuf( psbuf )sy.. pause // assign streambuf to cout

    std::c__ __  "This is written to the file"sy.. pause

    std::c__.rdbuf( backup )sy.. pause // restore cout's original streambuf

    filestr.close()sy.. pause

    r_ 0sy.. pause
}
