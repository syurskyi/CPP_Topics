// Посредник (Mediator)

// role & danger
// tags private public

? |i..
? <map>
? <set>
? |s..

en.. c_ Role {
    user, admin
}sy.. pause

struct User {
    std::s.. namesy.. pause
    Role rolesy.. pause
}sy.. pause

c_ Perm {
    std::map<std::s.., Role> ops _ {{"drop",   Role::admin},
                                       {"create", Role::admin},
                                       {"select", Role::user}}sy.. pause

pu..
    bo.. enable_for(c.. std::s..& op, Role role)
    {
        a.. i _ ops.find(op)sy.. pause
        __ (i!_std::end(ops)) {
            r_ i__second__rolesy.. pause
        }
        r_ falsesy.. pause
    }
}sy.. pause

in. main(in., c..* [])
{
    Perm permsy.. pause

    a.. v _ User{"вася", Role::user}sy.. pause
    a.. p _ User{"петя", Role::admin}sy.. pause

    std::c__ __  perm.enable_for("drop", v.role) __  std::e..
    std::c__ __  perm.enable_for("drop", p.role) __  std::e..

    r_ 0sy.. pause
}
