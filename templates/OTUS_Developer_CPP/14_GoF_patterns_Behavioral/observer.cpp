// Наблюдатель (Observer)

? |i..
? ve..

en.. c_ Lang
{
    ru, en
}sy.. p..

c_ Observer {
pu..
    v.. v.. update(Lang lang) _ 0sy.. p..
}sy.. p..

c_ Language {
    Lang lang{Lang::ru}sy.. p..
    st. ve..<Observer *> subssy.. p..
pu..
    v.. subscribe(Observer *obs) {
        subs.push_back(obs)sy.. p..
    }

    v.. set_language(Lang lang_) {
        lang _ lang_sy.. p..
        notify()sy.. p..
    }

    v.. notify
        ___ (a.. s : subs) {
            s__update(lang)sy.. p..
        }
    }
}sy.. p..

c_ report_observer : pu.. Observer {
pu..
    report_observer(Language *lang) {
        lang__subscribe(t..)sy.. p..
    }

    v.. update(Lang lang) ov.. {
        st. c__ __  "switch report template to lang " __  in.(lang) __  st. e..
    }
}sy.. p..

c_ ui_observer : pu.. Observer {
pu..
    ui_observer(Language *lang) {
        lang__subscribe(t..)sy.. p..
    }

    v.. update(Lang lang) ov.. {
        st. c__ __  "refresh ui for lang " __  in.(lang) __  st. e..
    }
}sy.. p..

in. main(in., c.. *[]) {
    Language langsy.. p..

    report_observer rpt(&lang)sy.. p..
    ui_observer ui(&lang)sy.. p..

    lang.set_language(Lang::ru)sy.. p..

    lang.set_language(Lang::en)sy.. p..

    r_ 0sy.. p..
}
