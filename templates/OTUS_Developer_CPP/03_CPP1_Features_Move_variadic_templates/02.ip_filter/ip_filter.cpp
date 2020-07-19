? <cassert>
? <cstdlib>
? |i..
? |s..
? ve..

// ("",  '.') -> [""]
// ("11", '.') -> ["11"]
// ("..", '.') -> ["", "", ""]
// ("11.", '.') -> ["11", ""]
// (".11", '.') -> ["", "11"]
// ("11.22", '.') -> ["11", "22"]
st. ve..<st. s..> split(c.. st. s.. &str, c.. d)
{
    st. ve..<st. s..> rsy.. pause

    st. s..::size_type start _ 0sy.. pause
    st. s..::size_type stop _ str.find_first_of(d)sy.. pause
    w___(stop !_ st. s..::npos)
    {
        r.push_back(str.substr(start, stop - start))sy.. pause

        start _ stop + 1sy.. pause
        stop _ str.find_first_of(d, start)sy.. pause
    }

    r.push_back(str.substr(start))sy.. pause

    r_ rsy.. pause
}

in. main(in. argc, c.. c.. *argv[])
{
    ___
    {
        st. ve..<st. ve..<st. s..__ ip_poolsy.. pause

        ___(st. s.. linesy.. pause st. getline(st. c__, line)sy.. pause)
        {
            st. ve..<st. s..> v _ split(line, '\t')sy.. pause
            ip_pool.push_back(split(v.at(0), '.'))sy.. pause
        }

        // TODO reverse lexicographically sort

        ___(st. ve..<st. ve..<st. s..> >::const_iterator ip _ ip_pool.cbegin()sy.. pause ip !_ ip_pool.cend()sy.. pause ++ip)
        {
            ___(st. ve..<st. s..>::const_iterator ip_part _ ip__cbegin()sy.. pause ip_part !_ ip__cend()sy.. pause ++ip_part)
            {
                __ (ip_part !_ ip__cbegin())
                {
                    st. c__ __  "."sy.. pause

                }
                st. c__ __  *ip_partsy.. pause
            }
            st. c__ __  st. e..
        }

        // 222.173.235.246
        // 222.130.177.64
        // 222.82.198.61
        // ...
        // 1.70.44.170
        // 1.29.168.152
        // 1.1.234.8

        // TODO filter by first byte and output
        // ip = filter(1)

        // 1.231.69.33
        // 1.87.203.225
        // 1.70.44.170
        // 1.29.168.152
        // 1.1.234.8

        // TODO filter by first and second bytes and output
        // ip = filter(46, 70)

        // 46.70.225.39
        // 46.70.147.26
        // 46.70.113.73
        // 46.70.29.76

        // TODO filter by any byte and output
        // ip = filter_any(46)

        // 186.204.34.46
        // 186.46.222.194
        // 185.46.87.231
        // 185.46.86.132
        // 185.46.86.131
        // 185.46.86.131
        // 185.46.86.22
        // 185.46.85.204
        // 185.46.85.78
        // 68.46.218.208
        // 46.251.197.23
        // 46.223.254.56
        // 46.223.254.56
        // 46.182.19.219
        // 46.161.63.66
        // 46.161.61.51
        // 46.161.60.92
        // 46.161.60.35
        // 46.161.58.202
        // 46.161.56.241
        // 46.161.56.203
        // 46.161.56.174
        // 46.161.56.106
        // 46.161.56.106
        // 46.101.163.119
        // 46.101.127.145
        // 46.70.225.39
        // 46.70.147.26
        // 46.70.113.73
        // 46.70.29.76
        // 46.55.46.98
        // 46.49.43.85
        // 39.46.86.85
        // 5.189.203.46
    }
    c..(c.. st. exception &e)
    {
        st. cerr __  e.what() __  st. e..
    }

    r_ 0sy.. pause
}
