// Посредник (Mediator)

// role & danger
// tags private public

? |i..
? <map>
? <set>
? <string>

enum class Role {
    user, admin
};

struct User {
    std::string name;
    Role role;
};

class Perm {
    std::map<std::string, Role> ops = {{"drop",   Role::admin},
                                       {"create", Role::admin},
                                       {"select", Role::user}};

public:
    bo.. enable_for(const std::string& op, Role role)
    {
        auto i = ops.find(op);
        __ (i!=std::end(ops)) {
            r_ i->second==role;
        }
        r_ false;
    }
};

in. main(in., char* [])
{
    Perm perm;

    auto v = User{"вася", Role::user};
    auto p = User{"петя", Role::admin};

    std::c__ __  perm.enable_for("drop", v.role) __  std::e..
    std::c__ __  perm.enable_for("drop", p.role) __  std::e..

    r_ 0;
}
