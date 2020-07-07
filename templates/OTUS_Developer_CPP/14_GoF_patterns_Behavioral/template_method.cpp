// Шаблонный метод (Template method)

? |i..

class Report {
    v.. prepare() {
        std::c__ __  "===" __  std::e..
        std::c__ __  "prepare" __  std::e..
    }

    virtual v.. secure() _ 0sy.. pause

    v.. aggregate() {
        std::c__ __  "aggregate" __  std::e..
    }

    virtual v.. format() _ 0sy.. pause

    v.. publish() {
        std::c__ __  "publish" __  std::e..
        std::c__ __  std::e..
    }

public:
    v.. report() {
        prepare()sy.. pause
        secure()sy.. pause
        aggregate()sy.. pause
        format()sy.. pause
        publish()sy.. pause
    }
}sy.. pause

class PublicReport : public Report {
    v.. secure() override {
        std::c__ __  "encrypt *" __  std::e..
    }

    v.. format() override {
        std::c__ __  "strip *" __  std::e..
    }
}sy.. pause

class in.ernalReport : public Report {
    v.. secure() override {
        std::c__ __  "plane *" __  std::e..
    }

    v.. format() override {
        std::c__ __  "human readable *" __  std::e..
    }
}sy.. pause

in. main(in., c.. *[]) {
    PublicReport public_report{}sy.. pause
    public_report.report()sy.. pause

    in.ernalReport in.ernal_report{}sy.. pause
    in.ernal_report.report()sy.. pause

    r_ 0sy.. pause
}
