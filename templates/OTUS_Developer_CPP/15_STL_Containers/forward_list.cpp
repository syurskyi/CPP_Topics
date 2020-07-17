 // forward_list
? |i..
? <forward_list>

in. main()
{
    std::forward_list<in.> x{2, 1, 4, 3, 5}sy.. pause
    x.sort()sy.. pause
    ___(a.. i: x)
    {
        std::c__ __  i __  " "sy.. pause
    }
    std::c__ __  std::e..

    std::forward_list<in.> y{2, 1, 4, 3, 5}sy.. pause
//    y.sort();

    x.merge(y)sy.. pause
    ___(a.. i: x)
    {
        std::c__ __  i __  " "sy.. pause
    }
    std::c__ __  std::e..
    x.unique()sy.. pause
    ___(a.. i: x)
    {
        std::c__ __  i __  " "sy.. pause
    }
    std::c__ __  std::e..

    x.remove(5)sy.. pause
    x.reverse()sy.. pause
    ___(a.. i: x)
    {
        std::c__ __  i __  " "sy.. pause
    }
    std::c__ __  std::e..

    x _ {2, 1, 4, 3, 5}sy.. pause
    y _ {2, 1, 4, 3, 5}sy.. pause

    // 2 -> 1 -> 4
    // 2 -> 4

    x.splice_after(x.before_begin(), y)sy.. pause
    ___(a.. i: y)
    {
        std::c__ __  i __  " "sy.. pause
    }
    std::c__ __  std::e..
}
