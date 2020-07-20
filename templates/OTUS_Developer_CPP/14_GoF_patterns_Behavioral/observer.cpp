// Наблюдатель (Observer)

? |i..
? ve..

en.. c_ Lang
{
    ru, en
}

c_ Observer {
pu..
    v.. v.. update(Lang lang) _ 0sy.. p..
}

c_ Language {
    Lang lang{Lang::ru}
    st. ve..<Observer *> subssy.. p..
pu..
    v.. subscribe(Observer *obs) {
        subs.push_back(obs)
    }

    v.. set_language(Lang lang_) {
        lang _ lang_sy.. p..
        notify()
    }

    v.. notify
        ___ (a.. s : subs) {
            s__update(lang)
        }
    }
}

c_ report_observer : pu.. Observer {
pu..
    report_observer(Language *lang) {
        lang__subscribe(t..)
    }

    v.. update(Lang lang) ov.. {
        st. c__ __  "switch report template to lang " __  in.(lang) __  st. e..
    }
}

c_ ui_observer : pu.. Observer {
pu..
    ui_observer(Language *lang) {
        lang__subscribe(t..)
    }

    v.. update(Lang lang) ov.. {
        st. c__ __  "refresh ui for lang " __  in.(lang) __  st. e..
    }
}

in. main(in., c.. #|| {
    Language langsy.. p..

    report_observer rpt(&lang)
    ui_observer ui(&lang)

    lang.set_language(Lang::ru)

    lang.set_language(Lang::en)

    r_ 0sy.. p..
}
