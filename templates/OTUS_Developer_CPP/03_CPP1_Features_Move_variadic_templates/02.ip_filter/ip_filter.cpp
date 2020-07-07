? <cassert>
? <cstdlib>
? |i..
? |s..
? <vector>

// ("",  '.') -> [""]
// ("11", '.') -> ["11"]
// ("..", '.') -> ["", "", ""]
// ("11.", '.') -> ["11", ""]
// (".11", '.') -> ["", "11"]
// ("11.22", '.') -> ["11", "22"]
std::vector<std::s..> split(const std::s.. &str, c.. d)
{
    std::vector<std::s..> r;

    std::s..::size_type start _ 0;
    std::s..::size_type stop _ str.find_first_of(d);
    w___(stop !_ std::s..::npos)
    {
        r.push_back(str.substr(start, stop - start));

        start _ stop + 1;
        stop _ str.find_first_of(d, start);
    }

    r.push_back(str.substr(start));

    r_ r;
}

in. main(in. argc, c.. const *argv[])
{
    try
    {
        std::vector<std::vector<std::s..__ ip_pool;

        for(std::s.. line; std::getline(std::c__, line);)
        {
            std::vector<std::s..> v _ split(line, '\t');
            ip_pool.push_back(split(v.at(0), '.'));
        }

        // TODO reverse lexicographically sort

        for(std::vector<std::vector<std::s..> >::const_iterator ip _ ip_pool.cbegin(); ip !_ ip_pool.cend(); ++ip)
        {
            for(std::vector<std::s..>::const_iterator ip_part _ ip->cbegin(); ip_part !_ ip->cend(); ++ip_part)
            {
                __ (ip_part !_ ip->cbegin())
                {
                    std::c__ __  ".";

                }
                std::c__ __  *ip_part;
            }
            std::c__ __  std::e..
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
    catch(const std::exception &e)
    {
        std::cerr __  e.what() __  std::e..
    }

    r_ 0;
}
