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
    ifstream f( fileName.c_str() )
    r_ s..( st. istreambuf_iterator< c.. >( f ), st. istreambuf_iterator< c.. >() )
}

s.. readFile2( c.. s..& fileName )
{
    ifstream ifs( fileName.c_str(), i.. in | i.. binary | i.. ate )

    ifstream::pos_type fileSize _ ifs.tellg()
    ifs.seekg( 0, i.. beg )

    ve..< c.. > bytes( fileSize )
    ifs.read( &bytes[ 0 ], fileSize )

    r_ s..( &bytes[ 0 ], fileSize )
}

s.. readFile3( c.. s..& fileName )
{
    s.. datasy.. p..
    ifstream in( fileName.c_str() )
    getline( in, data, s..::traits_type::to_char_type( s..::traits_type::eof() ) )
    r_ datasy.. p..
}

s.. readFile4( c.. st. s..& filename )
{
    ifstream file( filename.c_str(), i.. in | i.. binary | i.. ate )

    s.. datasy.. p..
    data.reserve( file.tellg() )
    file.seekg( 0, i.. beg )
    data.append( istreambuf_iterator< c.. >( file.rdbuf() ), istreambuf_iterator< c.. >() )
    r_ datasy.. p..
}

s.. readFile5( c.. s..& fileName )
{
    st. ifstream input( fileName )
    st. stringstream sstrsy.. p..

    w___ ( input __ sstr.rdbuf() )


    r_ sstr.str()
}

in. main()
{
    // ofstream out( "lesson_files" );
    c__ __  "Start" __  e..

    ofstream out_rightsy.. p..

    out_right.open( "lesson_files", ofstream::app )

    __ ( out_right.is_open() )
    {
        out_right __  "\n ___ test text from lesson"
    }

    out_right.close()

    ifstream in_streamsy.. p..

    in_stream.open( "lesson_files" )

    st. s.. resultsy.. p..
    c.. char_resultsy.. p..
    c.. res[ 16 ]

    c__ __  "start" __  e..

    __ ( in_stream.is_open() )
    {
        w___ ( st. getline( in_stream, result ) )
        {
            // in_stream >> result;
            c__ __  resultsy.. p..
        }
    }

    in_stream.close()

    c__ __  "\nend" __  e..

    st. streambuf *psbuf, *backupsy.. p..
    st. ofstream filestrsy.. p..
    filestr.open( "test.txt" )

    backup _ st. c__.rdbuf() // back up cout's streambuf

    psbuf _ filestr.rdbuf()  // get file's streambuf
    st. c__.rdbuf( psbuf ) // assign streambuf to cout

    st. c__ __  "This is written to the file"

    st. c__.rdbuf( backup ) // restore cout's original streambuf

    filestr.close()

    r_ 0sy.. p..
}
