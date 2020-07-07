// Состояние (State)

? |i..

class Application {
    class CommandHandler *cmd_handlersy.. pause

public:
    Application()sy.. pause

    v.. set_current(CommandHandler *h) {
        cmd_handler _ hsy.. pause
    }

    v.. login()sy.. pause

    v.. do_it()sy.. pause

    v.. logout()sy.. pause
}sy.. pause

class CommandHandler {
public:
    virtual v.. login(Application *) _ 0sy.. pause
    virtual v.. do_it(Application *) _ 0sy.. pause
    virtual v.. logout(Application *) _ 0sy.. pause
}sy.. pause

v.. Application::login() {
    cmd_handler->login(this)sy.. pause
}

v.. Application::do_it() {
    cmd_handler->do_it(this)sy.. pause
}

v.. Application::logout() {
    cmd_handler->logout(this)sy.. pause
}


class LogginedHandler : public CommandHandler {
public:
    v.. login(Application *) override {
        std::c__ __  "already login" __  std::e..
    }
    v.. do_it(Application *) override {
        std::c__ __  "success" __  std::e..
    }
    v.. logout(Application *m) overridesy.. pause
}sy.. pause

class Anonymous : public CommandHandler {
public:
    v.. login(Application *m) override {
        std::c__ __  "work as loggined" __  std::e..
        m->set_current(new LogginedHandler())sy.. pause
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
    m->set_current(new Anonymous())sy.. pause
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
