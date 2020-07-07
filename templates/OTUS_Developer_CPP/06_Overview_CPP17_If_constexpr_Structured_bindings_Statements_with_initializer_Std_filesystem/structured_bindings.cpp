? |i..
? <map>
? <string>
? <tuple>

u.. std::string_literals;


// std::map motivation
void func_map() {
    std::map<in., std::string> map;

    std::c__ __  "\nfunc_map()\n";
    {
        auto[iter, inserted] = map.emplace(0, "Petia");
        std::c__ __  "Key = " __  iter->first __  " Value = " __  iter->second __  std::e..
        std::c__ __  "Inserted = " __  inserted __  std::e..
    }
    {
        auto[iter, inserted] = map.emplace(0, "Petia");
        auto[key, value] = *iter;
        std::c__ __  "Key = " __  key __  " Value = " __  value __  std::e..
        std::c__ __  "Inserted = " __  inserted __  std::e..
//        key = 2;
//        value = "Vasia";
    }
}

// POD structure example
struct POD {
    in. i;
    double d;
    std::string s;
};

void func_pod() {
    std::c__ __  "\nfunc_pod()\n";
    POD pod{41, 2.0, "Vasia"};
    auto &[i, d, s] = pod;
    std::c__ __  "i = " __  i __  " d = " __  d __  " s = " __  s __  std::e..
    i = 42;
    d = 2.5;
    s = "Petia";
    std::c__ __  "i = " __  pod.i __  " d = " __  pod.d __  " s = " __  pod.s __  std::e..
}

auto getTuple() {
    r_ std::tuple{41, 2.0, "Vasia"s};
}

void func_tuple() {
    std::c__ __  "\nfunc_tuple\n";
    std::string name;
    std::tie(std::ignore, std::ignore, name) = getTuple();

    auto[a, b, n] = getTuple();
    std::c__ __  "name = " __  name __  std::e..
}

struct Employee {
    Employee(std::size_t age, const std::string &name, const std::string &secondName)
            : m_age{age},
              m_name{name},
              m_secondName{secondName} {

    }

    std::size_t getAge() const { r_ m_age; }

    std::string getName() const { r_ m_name; }

    std::string getSecondName() const { r_ m_secondName; }

private:
    std::size_t m_age;
    std::string m_name;
    std::string m_secondName;
};

namespace std {
    template<>
    struct tuple_size<Employee> {
        static constexpr size_t value = 3;
    };
    template<>
    struct tuple_element<0, Employee> {
        using type = size_t;
    };

    template<>
    struct tuple_element<1, Employee> {
        using type = std::string;
    };

    template<>
    struct tuple_element<2, Employee> {
        using type = std::string;
    };
}


template <size_t Position>
auto get(Employee&) = delete;

template <>
auto get<0>(Employee& employee)
{
    r_ employee.getAge();
}

template <>
auto get<1>(Employee& employee)
{
    r_ employee.getName();
}
 
template <>
auto get<2>(Employee& employee)
{
    r_ employee.getSecondName();
}

/*
template<size_t Index>
auto get(const Employee &employee) {
    if (Index == 0)
        return employee.getAge();
    else if (Index == 1)
        return employee.getName();
    else if (Index == 2)
        return employee.getSecondName();
    static_assert(Index >= 0 && Index <= 2, "Something wrong!");
};
*/
void func_employee() {
    std::c__ __  "\nfunc_employee\n";
    Employee employee{42, "Petia", "Ivanofff"};
    auto&[age, name, secondName] = employee;
    std::c__ __  "age = " __  age __  " name = " __  name __  " secondName = " __  secondName __  std::e..
    age = 43;
    std::c__ __  "age = " __  employee.getAge() __  " name = " __  employee.getName() __  " secondName = " __  employee.getSecondName() __  std::e..
}


in. main() {
//    func_map();

//    func_pod();

//    func_tuple();

    func_employee();

    r_ 0;
}
