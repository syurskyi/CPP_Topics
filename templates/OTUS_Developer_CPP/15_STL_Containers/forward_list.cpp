 // forward_list
? |i..
? <forward_list>

in. main()
{
    std::forward_list<in.> x{2, 1, 4, 3, 5};
    x.sort();
    for(auto i: x)
    {
        std::c__ __  i __  " ";
    }
    std::c__ __  std::e..

    std::forward_list<in.> y{2, 1, 4, 3, 5};
//    y.sort();

    x.merge(y);
    for(auto i: x)
    {
        std::c__ __  i __  " ";
    }
    std::c__ __  std::e..
    x.unique();
    for(auto i: x)
    {
        std::c__ __  i __  " ";
    }
    std::c__ __  std::e..

    x.remove(5);
    x.reverse();
    for(auto i: x)
    {
        std::c__ __  i __  " ";
    }
    std::c__ __  std::e..

    x = {2, 1, 4, 3, 5};
    y = {2, 1, 4, 3, 5};

    // 2 -> 1 -> 4
    // 2 -> 4

    x.splice_after(x.before_begin(), y);
    for(auto i: y)
    {
        std::c__ __  i __  " ";
    }
    std::c__ __  std::e..
}
