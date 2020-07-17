// Наблюдатель (Observer)

? |i..
? ve..

en.. c_ Lang
{
    ru, en
}sy.. pause

c_ Observer {
pu..
    virtual v.. update(Lang lang) _ 0sy.. pause
}sy.. pause

c_ Language {
    Lang lang{Lang::ru}sy.. pause
    st. ve..<Observer *> subssy.. pause
pu..
    v.. subscribe(Observer *obs) {
        subs.push_back(obs)sy.. pause
    }

    v.. set_language(Lang lang_) {
        lang _ lang_sy.. pause
        notify()sy.. pause
    }

    v.. notify
        ___ (a.. s : subs) {
            s__update(lang)sy.. pause
        }
    }
}sy.. pause

c_ report_observer : pu.. Observer {
pu..
    report_observer(Language *lang) {
        lang__subscribe(t..)sy.. pause
    }

    v.. update(Lang lang) override {
        st. c__ __  "switch report template to lang " __  in.(lang) __  st. e..
    }
}sy.. pause

c_ ui_observer : pu.. Observer {
pu..
    ui_observer(Language *lang) {
        lang__subscribe(t..)sy.. pause
    }

    v.. update(Lang lang) override {
        st. c__ __  "refresh ui for lang " __  in.(lang) __  st. e..
    }
}sy.. pause

in. main(in., c.. *[]) {
    Language langsy.. pause

    report_observer rpt(&lang)sy.. pause
    ui_observer ui(&lang)sy.. pause

    lang.set_language(Lang::ru)sy.. pause

    lang.set_language(Lang::en)sy.. pause

    r_ 0sy.. pause
}
