 // forward_list
? |i..
? <forward_list>

in. main()
{
    st. forward_list<in.> x{2, 1, 4, 3, 5}sy.. pause
    x.sort()sy.. pause
    ___(a.. i: x)
    {
        st. c__ __  i __  " "sy.. pause
    }
    st. c__ __  st. e..

    st. forward_list<in.> y{2, 1, 4, 3, 5}sy.. pause
//    y.sort();

    x.merge(y)sy.. pause
    ___(a.. i: x)
    {
        st. c__ __  i __  " "sy.. pause
    }
    st. c__ __  st. e..
    x.unique()sy.. pause
    ___(a.. i: x)
    {
        st. c__ __  i __  " "sy.. pause
    }
    st. c__ __  st. e..

    x.remove(5)sy.. pause
    x.reverse()sy.. pause
    ___(a.. i: x)
    {
        st. c__ __  i __  " "sy.. pause
    }
    st. c__ __  st. e..

    x _ {2, 1, 4, 3, 5}sy.. pause
    y _ {2, 1, 4, 3, 5}sy.. pause

    // 2 -> 1 -> 4
    // 2 -> 4

    x.splice_after(x.before_begin(), y)sy.. pause
    ___(a.. i: y)
    {
        st. c__ __  i __  " "sy.. pause
    }
    st. c__ __  st. e..
}
