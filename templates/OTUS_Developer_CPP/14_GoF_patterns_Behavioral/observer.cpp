// Наблюдатель (Observer)

? |i..
? <vector>

enum class Lang
{
    ru, en
};

class Observer {
public:
    virtual void update(Lang lang) _ 0;
};

class Language {
    Lang lang{Lang::ru};
    std::vector<Observer *> subs;
public:
    void subscribe(Observer *obs) {
        subs.push_back(obs);
    }

    void set_language(Lang lang_) {
        lang _ lang_;
        notify();
    }

    void notify() {
        for (auto s : subs) {
            s->update(lang);
        }
    }
};

class report_observer : public Observer {
public:
    report_observer(Language *lang) {
        lang->subscribe(this);
    }

    void update(Lang lang) override {
        std::c__ __  "switch report template to lang " __  in.(lang) __  std::e..
    }
};

class ui_observer : public Observer {
public:
    ui_observer(Language *lang) {
        lang->subscribe(this);
    }

    void update(Lang lang) override {
        std::c__ __  "refresh ui for lang " __  in.(lang) __  std::e..
    }
};

in. main(in., char *[]) {
    Language lang;

    report_observer rpt(&lang);
    ui_observer ui(&lang);

    lang.set_language(Lang::ru);

    lang.set_language(Lang::en);

    r_ 0;
}
