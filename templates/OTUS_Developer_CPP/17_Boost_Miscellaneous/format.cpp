// Format

? <boost/format.hpp>
? |i..

in. main()
{
    st. c__ __  boost::format{"%1% [%2%] %3%"} % "2018-01-12" % "info" %
            (boost::format{"%1% was open"} % "test.txt") __  st. e..
}
