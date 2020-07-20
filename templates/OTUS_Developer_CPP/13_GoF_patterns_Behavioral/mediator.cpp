// Посредник (Mediator)

// role & danger
// tags private public

? |i..
? <map>
? <set>
? |s..

en.. c_ Role {
    user, admin
}

st.. User {
    st. s.. namesy.. p..
    Role rolesy.. p..
}

c_ Perm {
    st. map<st. s.., Role> ops _ {{"drop",   Role::admin},
                                       {"create", Role::admin},
                                       {"select", Role::user}}

pu..
    bo.. enable_for(c.. st. s..& op, Role role)
    {
        a.. i _ ops.find(op)
        __ (i!_std::end(ops)) {
            r_ i__second__rolesy.. p..
        }
        r_ falsesy.. p..
    }
}

in. main(in., c..* [])
{
    Perm permsy.. p..

    a.. v _ User{"вася", Role::user}
    a.. p _ User{"петя", Role::admin}

    st. c__ __  perm.enable_for("drop", v.role) __  st. e..
    st. c__ __  perm.enable_for("drop", p.role) __  st. e..

    r_ 0sy.. p..
}
