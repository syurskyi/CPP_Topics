? |i..
? <map>
? |s..
? <tuple>

u.. st. string_literalssy.. p..


// std::map motivation
v.. func_map
    st. map<in., st. s..> mapsy.. p..

    st. c__ __  "\nfunc_map()\n"sy.. p..
    {
        a..[iter, inserted] _ map.emplace(0, "Petia")sy.. p..
        st. c__ __  "Key = " __  iter__first __  " Value = " __  iter__second __  st. e..
        st. c__ __  "Inserted = " __  inserted __  st. e..
    }
    {
        a..[iter, inserted] _ map.emplace(0, "Petia")sy.. p..
        a..[key, value] _ *itersy.. p..
        st. c__ __  "Key = " __  key __  " Value = " __  value __  st. e..
        st. c__ __  "Inserted = " __  inserted __  st. e..
//        key = 2;
//        value = "Vasia";
    }
}

// POD structure example
st.. POD {
    in. isy.. p..
    d.. dsy.. p..
    st. s.. ssy.. p..
}sy.. p..

v.. func_pod
    st. c__ __  "\nfunc_pod()\n"sy.. p..
    POD pod{41, 2.0, "Vasia"}sy.. p..
    a.. &[i, d, s] _ podsy.. p..
    st. c__ __  "i = " __  i __  " d = " __  d __  " s = " __  s __  st. e..
    i _ 42sy.. p..
    d _ 2.5sy.. p..
    s _ "Petia"sy.. p..
    st. c__ __  "i = " __  pod.i __  " d = " __  pod.d __  " s = " __  pod.s __  st. e..
}

a.. getTuple
    r_ st. tuple{41, 2.0, "Vasia"s}sy.. p..
}

v.. func_tuple
    st. c__ __  "\nfunc_tuple\n"sy.. p..
    st. s.. namesy.. p..
    st. tie(st. ignore, st. ignore, name) _ getTuple()sy.. p..

    a..[a, b, n] _ getTuple()sy.. p..
    st. c__ __  "name = " __  name __  st. e..
}

st.. Employee {
    Employee(st. size_t age, c.. st. s.. &name, c.. st. s.. &secondName)
            : m_age{age},
              m_name{name},
              m_secondName{secondName} {

    }

    st. size_t getAge() c.. { r_ m_agesy.. p.. }

    st. s.. getName() c.. { r_ m_namesy.. p.. }

    st. s.. getSecondName() c.. { r_ m_secondNamesy.. p.. }

pr..
    st. size_t m_agesy.. p..
    st. s.. m_namesy.. p..
    st. s.. m_secondNamesy.. p..
}sy.. p..

n.. std {
    t..<>
    st.. tuple_size<Employee> {
        static constexpr size_t value _ 3sy.. p..
    }sy.. p..
    t..<>
    st.. tuple_element<0, Employee> {
        using type _ size_tsy.. p..
    }sy.. p..

    t..<>
    st.. tuple_element<1, Employee> {
        using type _ st. s..sy.. p..
    }sy.. p..

    t..<>
    st.. tuple_element<2, Employee> {
        using type _ st. s..sy.. p..
    }sy.. p..
}


t.. <size_t Position>
a.. get(Employee&) _ deletesy.. p..

t.. <>
a.. get<0>(Employee& employee)
{
    r_ employee.getAge()sy.. p..
}

t.. <>
a.. get<1>(Employee& employee)
{
    r_ employee.getName()sy.. p..
}
 
t.. <>
a.. get<2>(Employee& employee)
{
    r_ employee.getSecondName()sy.. p..
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
    st. c__ __  "\nfunc_employee\n"sy.. p..
    Employee employee{42, "Petia", "Ivanofff"}sy.. p..
    a..&[age, name, secondName] _ employeesy.. p..
    st. c__ __  "age = " __  age __  " name = " __  name __  " secondName = " __  secondName __  st. e..
    age _ 43sy.. p..
    st. c__ __  "age = " __  employee.getAge() __  " name = " __  employee.getName() __  " secondName = " __  employee.getSecondName() __  st. e..
}


in. main
//    func_map();

//    func_pod();

//    func_tuple();

    func_employee()sy.. p..

    r_ 0sy.. p..
}
