// Шаблонный метод (Template method)

? |i..

c_ Report {
    v.. prepare
        st. c__ __  "===" __  st. e..
        st. c__ __  "prepare" __  st. e..
    }

    v.. v.. secure() _ 0sy.. pause

    v.. aggregate
        st. c__ __  "aggregate" __  st. e..
    }

    v.. v.. format() _ 0sy.. pause

    v.. publish
        st. c__ __  "publish" __  st. e..
        st. c__ __  st. e..
    }

pu..
    v.. report
        prepare()sy.. pause
        secure()sy.. pause
        aggregate()sy.. pause
        format()sy.. pause
        publish()sy.. pause
    }
}sy.. pause

c_ PublicReport : pu.. Report {
    v.. secure() override {
        st. c__ __  "encrypt *" __  st. e..
    }

    v.. format() override {
        st. c__ __  "strip *" __  st. e..
    }
}sy.. pause

c_ in.ernalReport : pu.. Report {
    v.. secure() override {
        st. c__ __  "plane *" __  st. e..
    }

    v.. format() override {
        st. c__ __  "human readable *" __  st. e..
    }
}sy.. pause

in. main(in., c.. *[]) {
    PublicReport public_report{}sy.. pause
    public_report.report()sy.. pause

    in.ernalReport in.ernal_report{}sy.. pause
    in.ernal_report.report()sy.. pause

    r_ 0sy.. pause
}
