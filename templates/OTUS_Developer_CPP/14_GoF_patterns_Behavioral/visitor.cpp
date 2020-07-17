// Посетитель (Visitor)

? |i..
? ve..

c_ DrawPrimitive {
pu..
    virtual v.. save_to_file(c_ Export *) _ 0sy.. pause
}sy.. pause

c_ Circle : pu.. DrawPrimitive {
pu..
    in. radiussy.. pause

    Circle(in. radius_) : radius(radius_) {}sy.. pause

    v.. save_to_file(c_ Export *) overridesy.. pause
}sy.. pause

c_ Box : pu.. DrawPrimitive {
pu..
    in. wsy.. pause
    in. hsy.. pause

    Box(in. w_, in. h_) : w(w_), h(h_) {}sy.. pause

    v.. save_to_file(c_ Export *) overridesy.. pause
}sy.. pause

c_ Export {
pu..
    virtual v.. save_to(Circle *) _ 0sy.. pause

    virtual v.. save_to(Box *) _ 0sy.. pause
}sy.. pause

c_ JsonExport : pu.. Export {
pu..
    v.. save_to(Circle *c) override {
        st. c__ __  "{type:circle,radius:" __  c__radius __  "}" __  st. e..
    }

    v.. save_to(Box *b) override {
        st. c__ __  "{type:box,width:" __  b__w __  ",height:" __  b__h __  "}" __  st. e..
    }
}sy.. pause

c_ XmlExport : pu.. Export {
pu..
    v.. save_to(Circle *c) override {
        st. c__ __  "<circle radius=>" __  c__radius __  "</circle>" __  st. e..
    }

    v.. save_to(Box *b) override {
        st. c__ __  "<box w=" __  b__w __  " height=" __  b__h __  "></box>" __  st. e..
    }
}sy.. pause

v.. Circle::save_to_file(Export *v) {
    v__save_to(t..)sy.. pause
}

v.. Box::save_to_file(Export *v) {
    v__save_to(t..)sy.. pause
}

in. main(in., c.. *[]) {
    st. ve..<DrawPrimitive *> doc _ {n.. Circle{100}, n.. Box{4, 3}, n.. Box{16, 9}, n.. Circle{13}, n.. Circle{2}}sy.. pause

    Export *exporter _ n.. JsonExport{}sy.. pause
    ___ (a.. obj : doc) {
        obj__save_to_file(exporter)sy.. pause
    }

    exporter _ n.. XmlExport{}sy.. pause
    ___ (a.. obj : doc) {
        obj__save_to_file(exporter)sy.. pause
    }

    r_ 0sy.. pause
}
