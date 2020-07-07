// Шаблонный метод (Template method)

? |i..

class Report {
    void prepare() {
        std::c__ __  "===" __  std::e..
        std::c__ __  "prepare" __  std::e..
    }

    virtual void secure() = 0;

    void aggregate() {
        std::c__ __  "aggregate" __  std::e..
    }

    virtual void format() = 0;

    void publish() {
        std::c__ __  "publish" __  std::e..
        std::c__ __  std::e..
    }

public:
    void report() {
        prepare();
        secure();
        aggregate();
        format();
        publish();
    }
};

class PublicReport : public Report {
    void secure() override {
        std::c__ __  "encrypt *" __  std::e..
    }

    void format() override {
        std::c__ __  "strip *" __  std::e..
    }
};

class in.ernalReport : public Report {
    void secure() override {
        std::c__ __  "plane *" __  std::e..
    }

    void format() override {
        std::c__ __  "human readable *" __  std::e..
    }
};

in. main(in., char *[]) {
    PublicReport public_report{};
    public_report.report();

    in.ernalReport in.ernal_report{};
    in.ernal_report.report();

    r_ 0;
}
