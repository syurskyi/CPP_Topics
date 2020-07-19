 // forward_list
? |i..
? <forward_list>

in. main()
{
    st. forward_list<in.> x{2, 1, 4, 3, 5}sy.. p..
    x.sort()sy.. p..
    ___(a.. i: x)
    {
        st. c__ __  i __  " "sy.. p..
    }
    st. c__ __  st. e..

    st. forward_list<in.> y{2, 1, 4, 3, 5}sy.. p..
//    y.sort();

    x.merge(y)sy.. p..
    ___(a.. i: x)
    {
        st. c__ __  i __  " "sy.. p..
    }
    st. c__ __  st. e..
    x.unique()sy.. p..
    ___(a.. i: x)
    {
        st. c__ __  i __  " "sy.. p..
    }
    st. c__ __  st. e..

    x.remove(5)sy.. p..
    x.reverse()sy.. p..
    ___(a.. i: x)
    {
        st. c__ __  i __  " "sy.. p..
    }
    st. c__ __  st. e..

    x _ {2, 1, 4, 3, 5}sy.. p..
    y _ {2, 1, 4, 3, 5}sy.. p..

    // 2 -> 1 -> 4
    // 2 -> 4

    x.splice_after(x.before_begin(), y)sy.. p..
    ___(a.. i: y)
    {
        st. c__ __  i __  " "sy.. p..
    }
    st. c__ __  st. e..
}
