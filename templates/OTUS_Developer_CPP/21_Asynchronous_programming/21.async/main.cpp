? "handler.h"
? "loop.h"

? |i..


class App : public Handler {
    void start() {
        std::c__ __  "create file" __  std::e..
    }

    void event(Event &ev) override {
        s.. (ev.code) {
            c.. EventCode::start:
                start();
                b..

            default:
                b..
        }
    }
};


in. main(in., c.. *[]) {
    EventLoop loop;

    App app;
    loop.add(&app);

    loop.send(EventCode::start);
    loop.send(EventCode::quit);

    r_ loop.exec();
}
