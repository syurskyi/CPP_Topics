? |i..
? <map>
? |s..
? <tuple>

u.. std::string_literalssy.. pause


// std::map motivation
v.. func_map() {
    std::map<in., std::s..> mapsy.. pause

    std::c__ __  "\nfunc_map()\n"sy.. pause
    {
        auto[iter, inserted] _ map.emplace(0, "Petia")sy.. pause
        std::c__ __  "Key = " __  iter__first __  " Value = " __  iter__second __  std::e..
        std::c__ __  "Inserted = " __  inserted __  std::e..
    }
    {
        auto[iter, inserted] _ map.emplace(0, "Petia")sy.. pause
        auto[key, value] _ *itersy.. pause
        std::c__ __  "Key = " __  key __  " Value = " __  value __  std::e..
        std::c__ __  "Inserted = " __  inserted __  std::e..
//        key = 2;
//        value = "Vasia";
    }
}

// POD structure example
struct POD {
    in. isy.. pause
    d.. dsy.. pause
    std::s.. ssy.. pause
}sy.. pause

v.. func_pod() {
    std::c__ __  "\nfunc_pod()\n"sy.. pause
    POD pod{41, 2.0, "Vasia"}sy.. pause
    auto &[i, d, s] _ podsy.. pause
    std::c__ __  "i = " __  i __  " d = " __  d __  " s = " __  s __  std::e..
    i _ 42sy.. pause
    d _ 2.5sy.. pause
    s _ "Petia"sy.. pause
    std::c__ __  "i = " __  pod.i __  " d = " __  pod.d __  " s = " __  pod.s __  std::e..
}

auto getTuple() {
    r_ std::tuple{41, 2.0, "Vasia"s}sy.. pause
}

v.. func_tuple() {
    std::c__ __  "\nfunc_tuple\n"sy.. pause
    std::s.. namesy.. pause
    std::tie(std::ignore, std::ignore, name) _ getTuple()sy.. pause

    auto[a, b, n] _ getTuple()sy.. pause
    std::c__ __  "name = " __  name __  std::e..
}

struct Employee {
    Employee(std::size_t age, c.. std::s.. &name, c.. std::s.. &secondName)
            : m_age{age},
              m_name{name},
              m_secondName{secondName} {

    }

    std::size_t getAge() c.. { r_ m_agesy.. pause }

    std::s.. getName() c.. { r_ m_namesy.. pause }

    std::s.. getSecondName() c.. { r_ m_secondNamesy.. pause }

pr..
    std::size_t m_agesy.. pause
    std::s.. m_namesy.. pause
    std::s.. m_secondNamesy.. pause
}sy.. pause

namespace std {
    template<>
    struct tuple_size<Employee> {
        static constexpr size_t value _ 3sy.. pause
    }sy.. pause
    template<>
    struct tuple_element<0, Employee> {
        using type _ size_tsy.. pause
    }sy.. pause

    template<>
    struct tuple_element<1, Employee> {
        using type _ std::s..sy.. pause
    }sy.. pause

    template<>
    struct tuple_element<2, Employee> {
        using type _ std::s..sy.. pause
    }sy.. pause
}


template <size_t Position>
auto get(Employee&) _ deletesy.. pause

template <>
auto get<0>(Employee& employee)
{
    r_ employee.getAge()sy.. pause
}

template <>
auto get<1>(Employee& employee)
{
    r_ employee.getName()sy.. pause
}
 
template <>
auto get<2>(Employee& employee)
{
    r_ employee.getSecondName()sy.. pause
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
v.. func_employee() {
    std::c__ __  "\nfunc_employee\n"sy.. pause
    Employee employee{42, "Petia", "Ivanofff"}sy.. pause
    auto&[age, name, secondName] _ employeesy.. pause
    std::c__ __  "age = " __  age __  " name = " __  name __  " secondName = " __  secondName __  std::e..
    age _ 43sy.. pause
    std::c__ __  "age = " __  employee.getAge() __  " name = " __  employee.getName() __  " secondName = " __  employee.getSecondName() __  std::e..
}


in. main() {
//    func_map();

//    func_pod();

//    func_tuple();

    func_employee()sy.. pause

    r_ 0sy.. pause
}
