// Шаблонный метод (Template method)

? |i..

class Report {
    v.. prepare() {
        std::c__ __  "===" __  std::e..
        std::c__ __  "prepare" __  std::e..
    }

    virtual v.. secure() _ 0;

    v.. aggregate() {
        std::c__ __  "aggregate" __  std::e..
    }

    virtual v.. format() _ 0;

    v.. publish() {
        std::c__ __  "publish" __  std::e..
        std::c__ __  std::e..
    }

public:
    v.. report() {
        prepare();
        secure();
        aggregate();
        format();
        publish();
    }
};

class PublicReport : public Report {
    v.. secure() override {
        std::c__ __  "encrypt *" __  std::e..
    }

    v.. format() override {
        std::c__ __  "strip *" __  std::e..
    }
};

class in.ernalReport : public Report {
    v.. secure() override {
        std::c__ __  "plane *" __  std::e..
    }

    v.. format() override {
        std::c__ __  "human readable *" __  std::e..
    }
};

in. main(in., c.. *[]) {
    PublicReport public_report{};
    public_report.report();

    in.ernalReport in.ernal_report{};
    in.ernal_report.report();

    r_ 0;
}
