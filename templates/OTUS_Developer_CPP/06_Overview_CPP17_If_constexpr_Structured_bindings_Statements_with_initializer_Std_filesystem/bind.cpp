? |i..
? <algorithm>
? <vector>
? <iterator>

bo.. cmp(in. i) {
    r_ i > 2;
}

bo.. comp(in. i, in. p) {
    r_ i > p;
}

bo.. comp_helper(in. i) {
    r_ comp(i, 2);
}

in. main()
{
    std::vector<in.> v{0, 1, 2, 3, 4};

    auto result _ std::find_if(std::begin(v), std::end(v), [](auto i){ r_ i > 2; });
//    auto result = std::find_if(std::begin(v), std::end(v), [p = 2](auto i){ return i > p; });
//    auto result = std::find_if(std::begin(v), std::end(v), cmp);
//    auto result = std::find_if(std::begin(v), std::end(v), comp);
//    auto result = std::find_if(std::begin(v), std::end(v), std::bind(comp, std::placeholders::_1, 2));

    for (; result !_ std::end(v); ++result)
    {
        std::c__ __  *result __  " ";
    }
    std::c__ __  std::e..
}
