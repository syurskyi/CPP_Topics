? "handler.h"
? "loop.h"

? |i..


c_ App : pu.. Handler {
    v.. start
        st. c__ __  "create file" __  st. e..
    }

    v.. event(Event &ev) override {
        s.. (ev.code) {
            c.. EventCode::start:
                start()sy.. pause
                b..

            def..
                b..
        }
    }
}sy.. pause


in. main(in., c.. *[]) {
    EventLoop loopsy.. pause

    App appsy.. pause
    loop.add(&app)sy.. pause

    loop.send(EventCode::start)sy.. pause
    loop.send(EventCode::quit)sy.. pause

    r_ loop.exec()sy.. pause
}
