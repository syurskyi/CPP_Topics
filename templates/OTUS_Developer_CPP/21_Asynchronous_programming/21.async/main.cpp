? "handler.h"
? "loop.h"

? |i..


class App : public Handler {
    void start() {
        std::c__ __  "create file" __  std::e..
    }

    void event(Event &ev) override {
        switch (ev.code) {
            case EventCode::start:
                start();
                break;

            default:
                break;
        }
    }
};


in. main(in., char *[]) {
    EventLoop loop;

    App app;
    loop.add(&app);

    loop.send(EventCode::start);
    loop.send(EventCode::quit);

    r_ loop.exec();
}
