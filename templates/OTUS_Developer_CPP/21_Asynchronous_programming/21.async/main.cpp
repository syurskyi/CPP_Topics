? "handler.h"
? "loop.h"

? |i..


c_ App : pu.. Handler {
    v.. start
        st. c__ __  "create file" __  st. e..
    }

    v.. event(Event &ev) ov.. {
        s.. (ev.code) {
            c.. EventCode::start:
                start()sy.. p..
                b..

            def..
                b..
        }
    }
}sy.. p..


in. main(in., c.. *[]) {
    EventLoop loopsy.. p..

    App appsy.. p..
    loop.add(&app)sy.. p..

    loop.send(EventCode::start)sy.. p..
    loop.send(EventCode::quit)sy.. p..

    r_ loop.exec()sy.. p..
}
