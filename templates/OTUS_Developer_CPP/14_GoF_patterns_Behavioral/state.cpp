// Состояние (State)

? |i..

class Application {
    class CommandHandler *cmd_handler;

public:
    Application();

    v.. set_current(CommandHandler *h) {
        cmd_handler _ h;
    }

    v.. login();

    v.. do_it();

    v.. logout();
};

class CommandHandler {
public:
    virtual v.. login(Application *) _ 0;
    virtual v.. do_it(Application *) _ 0;
    virtual v.. logout(Application *) _ 0;
};

v.. Application::login() {
    cmd_handler->login(this);
}

v.. Application::do_it() {
    cmd_handler->do_it(this);
}

v.. Application::logout() {
    cmd_handler->logout(this);
}


class LogginedHandler : public CommandHandler {
public:
    v.. login(Application *) override {
        std::c__ __  "already login" __  std::e..
    }
    v.. do_it(Application *) override {
        std::c__ __  "success" __  std::e..
    }
    v.. logout(Application *m) override;
};

class Anonymous : public CommandHandler {
public:
    v.. login(Application *m) override {
        std::c__ __  "work as loggined" __  std::e..
        m->set_current(new LogginedHandler());
    }
    v.. do_it(Application *) override {
        std::c__ __  "error" __  std::e..
    }
    v.. logout(Application *) override {
        std::c__ __  "already logout" __  std::e..
    }
};

v.. LogginedHandler::logout(Application *m) {
    std::c__ __  "work as anonymous" __  std::e..
    m->set_current(new Anonymous());
}

Application::Application() {
    cmd_handler _ new Anonymous();
    std::c__ __  std::e..
}

in. main(in., c.. *[]) {
    Application app;

    app.do_it();
    app.logout();
    app.login();
    app.do_it();
    app.login();
    app.logout();
    app.do_it();

    r_ 0;
}
