// Посетитель (Visitor)

? |i..
? ve..

c_ DrawPrimitive {
pu..
    v.. v.. save_to_file(c_ Export *) _ 0sy.. p..
}sy.. p..

c_ Circle : pu.. DrawPrimitive {
pu..
    in. radiussy.. p..

    Circle(in. radius_) : radius(radius_) {}sy.. p..

    v.. save_to_file(c_ Export *) overridesy.. p..
}sy.. p..

c_ Box : pu.. DrawPrimitive {
pu..
    in. wsy.. p..
    in. hsy.. p..

    Box(in. w_, in. h_) : w(w_), h(h_) {}sy.. p..

    v.. save_to_file(c_ Export *) overridesy.. p..
}sy.. p..

c_ Export {
pu..
    v.. v.. save_to(Circle *) _ 0sy.. p..

    v.. v.. save_to(Box *) _ 0sy.. p..
}sy.. p..

c_ JsonExport : pu.. Export {
pu..
    v.. save_to(Circle *c) ov.. {
        st. c__ __  "{type:circle,radius:" __  c__radius __  "}" __  st. e..
    }

    v.. save_to(Box *b) ov.. {
        st. c__ __  "{type:box,width:" __  b__w __  ",height:" __  b__h __  "}" __  st. e..
    }
}sy.. p..

c_ XmlExport : pu.. Export {
pu..
    v.. save_to(Circle *c) ov.. {
        st. c__ __  "<circle radius=>" __  c__radius __  "</circle>" __  st. e..
    }

    v.. save_to(Box *b) ov.. {
        st. c__ __  "<box w=" __  b__w __  " height=" __  b__h __  "></box>" __  st. e..
    }
}sy.. p..

v.. Circle::save_to_file(Export *v) {
    v__save_to(t..)sy.. p..
}

v.. Box::save_to_file(Export *v) {
    v__save_to(t..)sy.. p..
}

in. main(in., c.. #|| {
    st. ve..<DrawPrimitive *> doc _ {n.. Circle{100}, n.. Box{4, 3}, n.. Box{16, 9}, n.. Circle{13}, n.. Circle{2}}sy.. p..

    Export *exporter _ n.. JsonExport{}sy.. p..
    ___ (a.. obj : doc) {
        obj__save_to_file(exporter)sy.. p..
    }

    exporter _ n.. XmlExport{}sy.. p..
    ___ (a.. obj : doc) {
        obj__save_to_file(exporter)sy.. p..
    }

    r_ 0sy.. p..
}
