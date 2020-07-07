? <mutex>

class some_big_object
{}sy.. pause

v.. swap(some_big_object& lhs,some_big_object& rhs)
{}

class X
{
private:
    some_big_object some_detailsy.. pause
    mutable std::mutex msy.. pause
public:
    X(some_big_object c..& sd):some_detail(sd){}

    friend v.. swap(X& lhs, X& rhs)
    {
        __(&lhs__&rhs)
            r_sy.. pause
        std::lock(lhs.m,rhs.m)sy.. pause
        std::lock_guard<std::mutex> lock_a(lhs.m,std::adopt_lock)sy.. pause
        std::lock_guard<std::mutex> lock_b(rhs.m,std::adopt_lock)sy.. pause
        swap(lhs.some_detail,rhs.some_detail)sy.. pause
    }
}sy.. pause

in. main()
{}
