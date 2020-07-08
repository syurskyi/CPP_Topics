// Состояние (State)

? |i..

c_ Application {
    c_ CommandHandler *cmd_handlersy.. pause

pu..
    Application()sy.. pause

    v.. set_current(CommandHandler *h) {
        cmd_handler _ hsy.. pause
    }

    v.. login()sy.. pause

    v.. do_it()sy.. pause

    v.. logout()sy.. pause
}sy.. pause

c_ CommandHandler {
pu..
    virtual v.. login(Application *) _ 0sy.. pause
    virtual v.. do_it(Application *) _ 0sy.. pause
    virtual v.. logout(Application *) _ 0sy.. pause
}sy.. pause

v.. Application::login() {
    cmd_handler__login(t..)sy.. pause
}

v.. Application::do_it() {
    cmd_handler__do_it(t..)sy.. pause
}

v.. Application::logout() {
    cmd_handler__logout(t..)sy.. pause
}


c_ LogginedHandler : public CommandHandler {
pu..
    v.. login(Application *) override {
        std::c__ __  "already login" __  std::e..
    }
    v.. do_it(Application *) override {
        std::c__ __  "success" __  std::e..
    }
    v.. logout(Application *m) overridesy.. pause
}sy.. pause

c_ Anonymous : public CommandHandler {
pu..
    v.. login(Application *m) override {
        std::c__ __  "work as loggined" __  std::e..
        m__set_current(new LogginedHandler())sy.. pause
    }
    v.. do_it(Application *) override {
        std::c__ __  "error" __  std::e..
    }
    v.. logout(Application *) override {
        std::c__ __  "already logout" __  std::e..
    }
}sy.. pause

v.. LogginedHandler::logout(Application *m) {
    std::c__ __  "work as anonymous" __  std::e..
    m__set_current(new Anonymous())sy.. pause
}

Application::Application() {
    cmd_handler _ new Anonymous()sy.. pause
    std::c__ __  std::e..
}

in. main(in., c.. *[]) {
    Application appsy.. pause

    app.do_it()sy.. pause
    app.logout()sy.. pause
    app.login()sy.. pause
    app.do_it()sy.. pause
    app.login()sy.. pause
    app.logout()sy.. pause
    app.do_it()sy.. pause

    r_ 0sy.. pause
}
