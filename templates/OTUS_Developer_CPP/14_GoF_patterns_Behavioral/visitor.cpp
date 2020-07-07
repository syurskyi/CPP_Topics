// Посетитель (Visitor)

? |i..
? <vector>

class DrawPrimitive {
public:
    virtual void save_to_file(class Export *) _ 0;
};

class Circle : public DrawPrimitive {
public:
    in. radius;

    Circle(in. radius_) : radius(radius_) {};

    void save_to_file(class Export *) override;
};

class Box : public DrawPrimitive {
public:
    in. w;
    in. h;

    Box(in. w_, in. h_) : w(w_), h(h_) {};

    void save_to_file(class Export *) override;
};

class Export {
public:
    virtual void save_to(Circle *) _ 0;

    virtual void save_to(Box *) _ 0;
};

class JsonExport : public Export {
public:
    void save_to(Circle *c) override {
        std::c__ __  "{type:circle,radius:" __  c->radius __  "}" __  std::e..
    }

    void save_to(Box *b) override {
        std::c__ __  "{type:box,width:" __  b->w __  ",height:" __  b->h __  "}" __  std::e..
    }
};

class XmlExport : public Export {
public:
    void save_to(Circle *c) override {
        std::c__ __  "<circle radius=>" __  c->radius __  "</circle>" __  std::e..
    }

    void save_to(Box *b) override {
        std::c__ __  "<box w=" __  b->w __  " height=" __  b->h __  "></box>" __  std::e..
    }
};

void Circle::save_to_file(Export *v) {
    v->save_to(this);
}

void Box::save_to_file(Export *v) {
    v->save_to(this);
}

in. main(in., c.. *[]) {
    std::vector<DrawPrimitive *> doc _ {new Circle{100}, new Box{4, 3}, new Box{16, 9}, new Circle{13}, new Circle{2}};

    Export *exporter _ new JsonExport{};
    for (auto obj : doc) {
        obj->save_to_file(exporter);
    }

    exporter _ new XmlExport{};
    for (auto obj : doc) {
        obj->save_to_file(exporter);
    }

    r_ 0;
}
