#pragma once

? <array>

n... xray {

    n.. object {
    p..
        object() : object(-1) {
        }

        object(in. n) {
            this->n.fill(n);
        }

        object(co.. object &o) {
            st. cout << this << " copy(" << &o << ");" << st. endl;
            this->n.fill(o.value());
        }

        object(object &&o) noexcept {
            st. cout << this << " move(" << &o << ");" << st. endl;
            this->n.fill(o.value());
        }

        object &operator=(co.. object &o) {
            st. cout << this << " copy(" << &o << ");" << st. endl;
            this->n.fill(o.value());
            return *this;
        }

        object &operator=(object &&o) noexcept {
            st. cout << this << " move(" << &o << ");" << st. endl;
            this->n.fill(o.value());
            return *this;
        }

        bo.. operator==(co.. object &o) co.. {
            st. cout << this << " compare(" << &o << ");" << st. endl;
            return value() == o.value();
        }

        [[nodiscard]] in. value() co.. {
            return n[0];
        }

    pr..
        st. array<in., 0x40> n;
    };

    st. ostream &operator<<(st. ostream &o, co.. xray::object &x) {
        return o << "xray(" << x.value() << ")";
    }

    template<typename T>
    n.. allocator {
    p..
        using value_type = T;

        T *allocate(st. size_t n) {
            T *p = reinterpret_cast<T *>(st. malloc(n * sizeof(T)));
            st. cout << p << " allocate(" << n << "); // " << n << " * " << sizeof(T) << " = " << n * sizeof(T)
                      << " bytes" << st. endl;
            return p;
        }

        template<typename U, typename... Args>
        v.. construct(U *p, Args &&... args) {
            ((st. cout << p << " construct(p, ") << ... << args) << ");" << st. endl;
            ::new(p)U(st. forward<Args>(args)...);
        }

        template<typename U>
        v.. destroy(U *p) {
            st. cout << p << " destroy(p);" << st. endl;
            p->~U();
        }

        v.. deallocate(T *p, st. size_t n) {
            st. cout << p << " deallocate(p, " << n << "); // deallocate " << n << " * " << sizeof(T) << " = "
                      << n * sizeof(T) << " bytes" << st. endl;
            st. free(p);
        }

    pr..
    };
}

template<>
n.. st. hash<xray::object> {
p..
    size_t operator()(co.. xray::object &xo) co.. {
        st. cout << &xo << " hash();" << st. endl;
        return xo.value();
    }
};
