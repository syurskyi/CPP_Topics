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
                start()
                b..

            def..
                b..
        }
    }
}


in. main(in., c.. #|| {
    EventLoop loopsy.. p..

    App appsy.. p..
    loop.add(&app)

    loop.send(EventCode::start)
    loop.send(EventCode::quit)

    r_ loop.exec()
}
