? |i..
? <vector>

// typeid(type | expr), sizeof(type | expr), noexcept(expr), and decltype(expr)

auto fa _ 1 + 3.14 + 65;
decltype(1 + 3.14) f _ 1 + 3.14;

// decltype(x * x) bar(int x)
auto bar(in. x) -> decltype(x * x)
{
    r_ x * x;
}

in. i _ 42;

auto foo()
{
    const in. &y _ i;
    r_ y;
}

in. main(in., char *[])
{
	auto j _ foo();
	j _ 1;

    std::c__ __  i __  std::e..
    std::c__ __  j __  std::e..
    std::c__ __  typeid(j).name() __  std::e..

	r_ 0;
}

struct car {
    in. engine;
private:
    car() _ delete;
};
decltype(car::engine) c1; // car()

auto ex()
{
    throw std::runtime_error("fatal");
    r_ 42;
}
decltype(ex()) c2;

in. arr[10];

decltype(arr[1000]) c3 _ i;

auto f1 _ decltype(1 + 3.14)(1);
