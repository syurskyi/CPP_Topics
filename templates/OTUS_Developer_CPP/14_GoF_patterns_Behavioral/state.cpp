// Состояние (State)

? |i..

class Application {
    class CommandHandler *cmd_handler;

public:
    Application();

    void set_current(CommandHandler *h) {
        cmd_handler = h;
    }

    void login();

    void do_it();

    void logout();
};

class CommandHandler {
public:
    virtual void login(Application *) = 0;
    virtual void do_it(Application *) = 0;
    virtual void logout(Application *) = 0;
};

void Application::login() {
    cmd_handler->login(this);
}

void Application::do_it() {
    cmd_handler->do_it(this);
}

void Application::logout() {
    cmd_handler->logout(this);
}


class LogginedHandler : public CommandHandler {
public:
    void login(Application *) override {
        std::c__ __  "already login" __  std::e..
    }
    void do_it(Application *) override {
        std::c__ __  "success" __  std::e..
    }
    void logout(Application *m) override;
};

class Anonymous : public CommandHandler {
public:
    void login(Application *m) override {
        std::c__ __  "work as loggined" __  std::e..
        m->set_current(new LogginedHandler());
    }
    void do_it(Application *) override {
        std::c__ __  "error" __  std::e..
    }
    void logout(Application *) override {
        std::c__ __  "already logout" __  std::e..
    }
};

void LogginedHandler::logout(Application *m) {
    std::c__ __  "work as anonymous" __  std::e..
    m->set_current(new Anonymous());
}

Application::Application() {
    cmd_handler = new Anonymous();
    std::c__ __  std::e..
}

in. main(in., char *[]) {
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
