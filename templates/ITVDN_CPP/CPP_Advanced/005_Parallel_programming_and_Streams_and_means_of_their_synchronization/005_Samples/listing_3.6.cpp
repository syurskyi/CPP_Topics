? <mutex>

c_ some_big_object
{}sy.. pause

v.. swap(some_big_object& lhs,some_big_object& rhs)
{}

c_ X
{
pr..
    some_big_object some_detailsy.. pause
    mutable st. mutex msy.. pause
pu..
    X(some_big_object c..& sd):some_detail(sd){}

    friend v.. swap(X& lhs, X& rhs)
    {
        __(&lhs__&rhs)
            r_sy.. pause
        st. lock(lhs.m,rhs.m)sy.. pause
        st. lock_guard<st. mutex> lock_a(lhs.m,st. adopt_lock)sy.. pause
        st. lock_guard<st. mutex> lock_b(rhs.m,st. adopt_lock)sy.. pause
        swap(lhs.some_detail,rhs.some_detail)sy.. pause
    }
}sy.. pause

in. main()
{}
