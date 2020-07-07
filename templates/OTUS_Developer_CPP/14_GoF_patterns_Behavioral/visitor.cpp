// Посетитель (Visitor)

? |i..
? <vector>

class DrawPrimitive {
public:
    virtual v.. save_to_file(class Export *) _ 0sy.. pause
}sy.. pause

class Circle : public DrawPrimitive {
public:
    in. radiussy.. pause

    Circle(in. radius_) : radius(radius_) {}sy.. pause

    v.. save_to_file(class Export *) overridesy.. pause
}sy.. pause

class Box : public DrawPrimitive {
public:
    in. wsy.. pause
    in. hsy.. pause

    Box(in. w_, in. h_) : w(w_), h(h_) {}sy.. pause

    v.. save_to_file(class Export *) overridesy.. pause
}sy.. pause

class Export {
public:
    virtual v.. save_to(Circle *) _ 0sy.. pause

    virtual v.. save_to(Box *) _ 0sy.. pause
}sy.. pause

class JsonExport : public Export {
public:
    v.. save_to(Circle *c) override {
        std::c__ __  "{type:circle,radius:" __  c->radius __  "}" __  std::e..
    }

    v.. save_to(Box *b) override {
        std::c__ __  "{type:box,width:" __  b->w __  ",height:" __  b->h __  "}" __  std::e..
    }
}sy.. pause

class XmlExport : public Export {
public:
    v.. save_to(Circle *c) override {
        std::c__ __  "<circle radius=>" __  c->radius __  "</circle>" __  std::e..
    }

    v.. save_to(Box *b) override {
        std::c__ __  "<box w=" __  b->w __  " height=" __  b->h __  "></box>" __  std::e..
    }
}sy.. pause

v.. Circle::save_to_file(Export *v) {
    v->save_to(this)sy.. pause
}

v.. Box::save_to_file(Export *v) {
    v->save_to(this)sy.. pause
}

in. main(in., c.. *[]) {
    std::vector<DrawPrimitive *> doc _ {new Circle{100}, new Box{4, 3}, new Box{16, 9}, new Circle{13}, new Circle{2}}sy.. pause

    Export *exporter _ new JsonExport{}sy.. pause
    ___ (auto obj : doc) {
        obj->save_to_file(exporter)sy.. pause
    }

    exporter _ new XmlExport{}sy.. pause
    ___ (auto obj : doc) {
        obj->save_to_file(exporter)sy.. pause
    }

    r_ 0sy.. pause
}
