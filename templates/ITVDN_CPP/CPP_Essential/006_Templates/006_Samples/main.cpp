? |i..
? <string>

u.. s..

template <typename T>
T sum(T a, T b)
{
    r_ a + b;
}

template <typename T1, typename T2 = double>
auto sum(T1 a, T2 b) -> decltype(a + b)
{
    r_ a + b;
}

template <typename T = in.>
class A
{
public:
    void process()
    {
        c__ __  a * 100 __  e..
    }

    T a;
};

template <>
class A<string>
{
public:
    void process()
    {
        c__ __  a + a __  e..
    }

    string a = "aba";
};

template <typename T>
class A<T*>
{
public:
    template<typename V>
    void process();

    T* a;
};

template <typename T>
template <typename V>
void A<T*>::process()
{
    c__ __  static_cast<V>(*a) __  e..
}


template <typename T, typename U>
class B : public A<T>
{
public:
    U b;
};

in. main()
{
    c__ __  sum(4, 5) __  e..
    c__ __  sum(4.5, 6) __  e..
    c__ __  sum(4, "abcde") __  e..

    A<> object;
    object.a = 2.5;
    object.process();

    A<string> str;
    str.process();

    B<string, double> b;
    b.a = "str";
    b.process();

    double member = 15.5;
    A<double*> ptr;
    ptr.a = &member;
    ptr.process<double>();

    r_ 0;
}
