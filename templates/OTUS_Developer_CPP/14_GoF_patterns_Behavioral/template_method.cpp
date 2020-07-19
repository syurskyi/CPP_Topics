// Шаблонный метод (Template method)

? |i..

c_ Report {
    v.. prepare
        st. c__ __  "===" __  st. e..
        st. c__ __  "prepare" __  st. e..
    }

    v.. v.. secure() _ 0sy.. p..

    v.. aggregate
        st. c__ __  "aggregate" __  st. e..
    }

    v.. v.. format() _ 0sy.. p..

    v.. publish
        st. c__ __  "publish" __  st. e..
        st. c__ __  st. e..
    }

pu..
    v.. report
        prepare()sy.. p..
        secure()sy.. p..
        aggregate()sy.. p..
        format()sy.. p..
        publish()sy.. p..
    }
}sy.. p..

c_ PublicReport : pu.. Report {
    v.. secure() ov.. {
        st. c__ __  "encrypt *" __  st. e..
    }

    v.. format() ov.. {
        st. c__ __  "strip *" __  st. e..
    }
}sy.. p..

c_ in.ernalReport : pu.. Report {
    v.. secure() ov.. {
        st. c__ __  "plane *" __  st. e..
    }

    v.. format() ov.. {
        st. c__ __  "human readable *" __  st. e..
    }
}sy.. p..

in. main(in., c.. *[]) {
    PublicReport public_report{}sy.. p..
    public_report.report()sy.. p..

    in.ernalReport in.ernal_report{}sy.. p..
    in.ernal_report.report()sy.. p..

    r_ 0sy.. p..
}
