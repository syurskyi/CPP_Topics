#include "handler.h"
#include "loop.h"

#include <iostream>


class App : public Handler {
    void start() {
        std::cout << "create file" << std::endl;
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


int main(int, char *[]) {
    EventLoop loop;

    App app;
    loop.add(&app);

    loop.send(EventCode::start);
    loop.send(EventCode::quit);

    return loop.exec();
}
