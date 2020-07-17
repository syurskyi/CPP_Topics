? |i..
? <map>
? |s..
? <tuple>

u.. st. string_literalssy.. pause


// std::map motivation
v.. func_map
    st. map<in., st. s..> mapsy.. pause

    st. c__ __  "\nfunc_map()\n"sy.. pause
    {
        a..[iter, inserted] _ map.emplace(0, "Petia")sy.. pause
        st. c__ __  "Key = " __  iter__first __  " Value = " __  iter__second __  st. e..
        st. c__ __  "Inserted = " __  inserted __  st. e..
    }
    {
        a..[iter, inserted] _ map.emplace(0, "Petia")sy.. pause
        a..[key, value] _ *itersy.. pause
        st. c__ __  "Key = " __  key __  " Value = " __  value __  st. e..
        st. c__ __  "Inserted = " __  inserted __  st. e..
//        key = 2;
//        value = "Vasia";
    }
}

// POD structure example
struct POD {
    in. isy.. pause
    d.. dsy.. pause
    st. s.. ssy.. pause
}sy.. pause

v.. func_pod
    st. c__ __  "\nfunc_pod()\n"sy.. pause
    POD pod{41, 2.0, "Vasia"}sy.. pause
    a.. &[i, d, s] _ podsy.. pause
    st. c__ __  "i = " __  i __  " d = " __  d __  " s = " __  s __  st. e..
    i _ 42sy.. pause
    d _ 2.5sy.. pause
    s _ "Petia"sy.. pause
    st. c__ __  "i = " __  pod.i __  " d = " __  pod.d __  " s = " __  pod.s __  st. e..
}

a.. getTuple
    r_ st. tuple{41, 2.0, "Vasia"s}sy.. pause
}

v.. func_tuple
    st. c__ __  "\nfunc_tuple\n"sy.. pause
    st. s.. namesy.. pause
    st. tie(st. ignore, st. ignore, name) _ getTuple()sy.. pause

    a..[a, b, n] _ getTuple()sy.. pause
    st. c__ __  "name = " __  name __  st. e..
}

struct Employee {
    Employee(st. size_t age, c.. st. s.. &name, c.. st. s.. &secondName)
            : m_age{age},
              m_name{name},
              m_secondName{secondName} {

    }

    st. size_t getAge() c.. { r_ m_agesy.. pause }

    st. s.. getName() c.. { r_ m_namesy.. pause }

    st. s.. getSecondName() c.. { r_ m_secondNamesy.. pause }

pr..
    st. size_t m_agesy.. pause
    st. s.. m_namesy.. pause
    st. s.. m_secondNamesy.. pause
}sy.. pause

n.. std {
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
        using type _ st. s..sy.. pause
    }sy.. pause

    template<>
    struct tuple_element<2, Employee> {
        using type _ st. s..sy.. pause
    }sy.. pause
}


template <size_t Position>
a.. get(Employee&) _ deletesy.. pause

template <>
a.. get<0>(Employee& employee)
{
    r_ employee.getAge()sy.. pause
}

template <>
a.. get<1>(Employee& employee)
{
    r_ employee.getName()sy.. pause
}
 
template <>
a.. get<2>(Employee& employee)
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
v.. func_employee
    st. c__ __  "\nfunc_employee\n"sy.. pause
    Employee employee{42, "Petia", "Ivanofff"}sy.. pause
    a..&[age, name, secondName] _ employeesy.. pause
    st. c__ __  "age = " __  age __  " name = " __  name __  " secondName = " __  secondName __  st. e..
    age _ 43sy.. pause
    st. c__ __  "age = " __  employee.getAge() __  " name = " __  employee.getName() __  " secondName = " __  employee.getSecondName() __  st. e..
}


in. main
//    func_map();

//    func_pod();

//    func_tuple();

    func_employee()sy.. pause

    r_ 0sy.. pause
}
