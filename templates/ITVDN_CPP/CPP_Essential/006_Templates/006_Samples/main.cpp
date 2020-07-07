? |i..
? |s..

u.. s..

template <typename T>
T sum(T a, T b)
{
    r_ a + bsy.. pause
}

template <typename T1, typename T2 _ d..>
auto sum(T1 a, T2 b) -> decltype(a + b)
{
    r_ a + bsy.. pause
}

template <typename T _ in.>
class A
{
public:
    v.. process()
    {
        c__ __  a * 100 __  e..
    }

    T asy.. pause
}sy.. pause

template <>
class A|s..
{
public:
    v.. process()
    {
        c__ __  a + a __  e..
    }

    s.. a _ "aba"sy.. pause
}sy.. pause

template <typename T>
class A<T*>
{
public:
    template<typename V>
    v.. process()sy.. pause

    T* asy.. pause
}sy.. pause

template <typename T>
template <typename V>
v.. A<T*>::process()
{
    c__ __  static_cast<V>(*a) __  e..
}


template <typename T, typename U>
class B : public A<T>
{
public:
    U bsy.. pause
}sy.. pause

in. main()
{
    c__ __  sum(4, 5) __  e..
    c__ __  sum(4.5, 6) __  e..
    c__ __  sum(4, "abcde") __  e..

    A<> objectsy.. pause
    object.a _ 2.5sy.. pause
    object.process()sy.. pause

    A|s.. strsy.. pause
    str.process()sy.. pause

    B<s.., d..> bsy.. pause
    b.a _ "str"sy.. pause
    b.process()sy.. pause

    d.. member _ 15.5sy.. pause
    A<d..*> ptrsy.. pause
    ptr.a _ &membersy.. pause
    ptr.process<d..>()sy.. pause

    r_ 0sy.. pause
}
