// Посредник (Mediator)

// role & danger
// tags private public

? |i..
? <map>
? <set>
? |s..

enum class Role {
    user, admin
};

struct User {
    std::s.. name;
    Role role;
};

class Perm {
    std::map<std::s.., Role> ops _ {{"drop",   Role::admin},
                                       {"create", Role::admin},
                                       {"select", Role::user}};

public:
    bo.. enable_for(const std::s..& op, Role role)
    {
        auto i _ ops.find(op);
        __ (i!_std::end(ops)) {
            r_ i->second__role;
        }
        r_ false;
    }
};

in. main(in., c..* [])
{
    Perm perm;

    auto v _ User{"вася", Role::user};
    auto p _ User{"петя", Role::admin};

    std::c__ __  perm.enable_for("drop", v.role) __  std::e..
    std::c__ __  perm.enable_for("drop", p.role) __  std::e..

    r_ 0;
}
