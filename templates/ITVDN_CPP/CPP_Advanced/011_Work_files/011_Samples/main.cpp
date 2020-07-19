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
    ifstream f( fileName.c_str() )sy.. p..
    r_ s..( st. istreambuf_iterator< c.. >( f ), st. istreambuf_iterator< c.. >() )sy.. p..
}

s.. readFile2( c.. s..& fileName )
{
    ifstream ifs( fileName.c_str(), i.. in | i.. binary | i.. ate )sy.. p..

    ifstream::pos_type fileSize _ ifs.tellg()sy.. p..
    ifs.seekg( 0, i.. beg )sy.. p..

    ve..< c.. > bytes( fileSize )sy.. p..
    ifs.read( &bytes[ 0 ], fileSize )sy.. p..

    r_ s..( &bytes[ 0 ], fileSize )sy.. p..
}

s.. readFile3( c.. s..& fileName )
{
    s.. datasy.. p..
    ifstream in( fileName.c_str() )sy.. p..
    getline( in, data, s..::traits_type::to_char_type( s..::traits_type::eof() ) )sy.. p..
    r_ datasy.. p..
}

s.. readFile4( c.. st. s..& filename )
{
    ifstream file( filename.c_str(), i.. in | i.. binary | i.. ate )sy.. p..

    s.. datasy.. p..
    data.reserve( file.tellg() )sy.. p..
    file.seekg( 0, i.. beg )sy.. p..
    data.append( istreambuf_iterator< c.. >( file.rdbuf() ), istreambuf_iterator< c.. >() )sy.. p..
    r_ datasy.. p..
}

s.. readFile5( c.. s..& fileName )
{
    st. ifstream input( fileName )sy.. p..
    st. stringstream sstrsy.. p..

    w___ ( input __ sstr.rdbuf() )
        sy.. p..

    r_ sstr.str()sy.. p..
}

in. main()
{
    // ofstream out( "lesson_files" );
    c__ __  "Start" __  e..

    ofstream out_rightsy.. p..

    out_right.open( "lesson_files", ofstream::app )sy.. p..

    __ ( out_right.is_open() )
    {
        out_right __  "\n ___ test text from lesson"sy.. p..
    }

    out_right.close()sy.. p..

    ifstream in_streamsy.. p..

    in_stream.open( "lesson_files" )sy.. p..

    st. s.. resultsy.. p..
    c.. char_resultsy.. p..
    c.. res[ 16 ]sy.. p..

    c__ __  "start" __  e..

    __ ( in_stream.is_open() )
    {
        w___ ( st. getline( in_stream, result ) )
        {
            // in_stream >> result;
            c__ __  resultsy.. p..
        }
    }

    in_stream.close()sy.. p..

    c__ __  "\nend" __  e..

    st. streambuf *psbuf, *backupsy.. p..
    st. ofstream filestrsy.. p..
    filestr.open( "test.txt" )sy.. p..

    backup _ st. c__.rdbuf()sy.. p.. // back up cout's streambuf

    psbuf _ filestr.rdbuf()sy.. p..  // get file's streambuf
    st. c__.rdbuf( psbuf )sy.. p.. // assign streambuf to cout

    st. c__ __  "This is written to the file"sy.. p..

    st. c__.rdbuf( backup )sy.. p.. // restore cout's original streambuf

    filestr.close()sy.. p..

    r_ 0sy.. p..
}
