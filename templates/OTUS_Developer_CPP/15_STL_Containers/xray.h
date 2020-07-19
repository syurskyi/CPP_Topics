?p.. once

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
            st. c.. __ this __ " copy(" __ &o __ ");" __ st. e..
            this->n.fill(o.value());
        }

        object(object &&o) n_e_ {
            st. c.. __ this __ " move(" __ &o __ ");" __ st. e..
            this->n.fill(o.value());
        }

        object &operator=(co.. object &o) {
            st. c.. __ this __ " copy(" __ &o __ ");" __ st. e..
            this->n.fill(o.value());
            ?  *this;
        }

        object &operator=(object &&o) n_e_ {
            st. c.. __ this __ " move(" __ &o __ ");" __ st. e..
            this->n.fill(o.value());
            ?  *this;
        }

        bo.. operator==(co.. object &o) co.. {
            st. c.. __ this __ " compare(" __ &o __ ");" __ st. e..
            ?  value() == o.value();
        }

        [[nodiscard]] in. value() co.. {
            ?  n[0];
        }

    pr..
        st. array<in., 0x40> n;
    };

    st. ostream &operator__(st. ostream &o, co.. xray::object &x) {
        ?  o __ "xray(" __ x.value() __ ")";
    }

    template<typename T>
    n.. allocator {
    p..
        using value_type = T;

        T *allocate(st. size_t n) {
            T *p = reinterpret_cast<T *>(st. malloc(n * sizeof(T)));
            st. c.. __ p __ " allocate(" __ n __ "); // " __ n __ " * " __ sizeof(T) __ " = " __ n * sizeof(T)
                      __ " bytes" __ st. e..
            ?  p;
        }

        template<typename U, typename... Args>
        v.. construct(U *p, Args &&... args) {
            ((st. c.. __ p __ " construct(p, ") __ ... __ args) __ ");" __ st. e..
            ::ne.(p)U(st. forward<Args>(args)...);
        }

        template<typename U>
        v.. destroy(U *p) {
            st. c.. __ p __ " destroy(p);" __ st. e..
            p->~U();
        }

        v.. deallocate(T *p, st. size_t n) {
            st. c.. __ p __ " deallocate(p, " __ n __ "); // deallocate " __ n __ " * " __ sizeof(T) __ " = "
                      __ n * sizeof(T) __ " bytes" __ st. e..
            st. free(p);
        }

    pr..
    };
}

template<>
n.. st. hash<xray::object> {
p..
    size_t operator()(co.. xray::object &xo) co.. {
        st. c.. __ &xo __ " hash();" __ st. e..
        ?  xo.value();
    }
};
