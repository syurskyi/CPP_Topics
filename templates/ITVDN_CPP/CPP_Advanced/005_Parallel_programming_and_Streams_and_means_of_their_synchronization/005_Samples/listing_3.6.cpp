? <mutex>

c_ some_big_object
{}sy.. p..

v.. swap(some_big_object& lhs,some_big_object& rhs)
{}

c_ X
{
pr..
    some_big_object some_detailsy.. p..
    mutable st. mutex msy.. p..
pu..
    X(some_big_object c..& sd):some_detail(sd){}

    fr.. v.. swap(X& lhs, X& rhs)
    {
        __(&lhs__&rhs)
            r_sy.. p..
        st. lock(lhs.m,rhs.m)sy.. p..
        st. lock_guard<st. mutex> lock_a(lhs.m,st. adopt_lock)sy.. p..
        st. lock_guard<st. mutex> lock_b(rhs.m,st. adopt_lock)sy.. p..
        swap(lhs.some_detail,rhs.some_detail)sy.. p..
    }
}sy.. p..

in. main()
{}
