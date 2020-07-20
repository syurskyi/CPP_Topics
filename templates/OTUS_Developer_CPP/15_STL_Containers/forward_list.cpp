 // forward_list
? |i..
? <forward_list>

in. main()
{
    st. forward_list<in.> x{2, 1, 4, 3, 5}
    x.sort()
    ___(a.. i: x)
    {
        st. c__ __  i __  " "
    }
    st. c__ __  st. e..

    st. forward_list<in.> y{2, 1, 4, 3, 5}
//    y.sort();

    x.merge(y)
    ___(a.. i: x)
    {
        st. c__ __  i __  " "
    }
    st. c__ __  st. e..
    x.unique()
    ___(a.. i: x)
    {
        st. c__ __  i __  " "
    }
    st. c__ __  st. e..

    x.remove(5)
    x.reverse()
    ___(a.. i: x)
    {
        st. c__ __  i __  " "
    }
    st. c__ __  st. e..

    x _ {2, 1, 4, 3, 5}
    y _ {2, 1, 4, 3, 5}

    // 2 -> 1 -> 4
    // 2 -> 4

    x.splice_after(x.before_begin(), y)
    ___(a.. i: y)
    {
        st. c__ __  i __  " "
    }
    st. c__ __  st. e..
}
