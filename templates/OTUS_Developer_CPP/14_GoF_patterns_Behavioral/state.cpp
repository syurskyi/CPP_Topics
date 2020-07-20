// Состояние (State)

? |i..

c_ Application {
    c_ CommandHandler *cmd_handlersy.. p..

pu..
    Application()

    v.. set_current(CommandHandler *h) {
        cmd_handler _ hsy.. p..
    }

    v.. login()

    v.. do_it()

    v.. logout()
}

c_ CommandHandler {
pu..
    v.. v.. login(Application *) _ 0sy.. p..
    v.. v.. do_it(Application *) _ 0sy.. p..
    v.. v.. logout(Application *) _ 0sy.. p..
}

v.. Application::login
    cmd_handler__login(t..)
}

v.. Application::do_it
    cmd_handler__do_it(t..)
}

v.. Application::logout
    cmd_handler__logout(t..)
}


c_ LogginedHandler : pu.. CommandHandler {
pu..
    v.. login(Application *) ov.. {
        st. c__ __  "already login" __  st. e..
    }
    v.. do_it(Application *) ov.. {
        st. c__ __  "success" __  st. e..
    }
    v.. logout(Application *m) overridesy.. p..
}

c_ Anonymous : pu.. CommandHandler {
pu..
    v.. login(Application *m) ov.. {
        st. c__ __  "work as loggined" __  st. e..
        m__set_current(n.. LogginedHandler())
    }
    v.. do_it(Application *) ov.. {
        st. c__ __  "error" __  st. e..
    }
    v.. logout(Application *) ov.. {
        st. c__ __  "already logout" __  st. e..
    }
}

v.. LogginedHandler::logout(Application *m) {
    st. c__ __  "work as anonymous" __  st. e..
    m__set_current(n.. Anonymous())
}

Application::Application
    cmd_handler _ n.. Anonymous()
    st. c__ __  st. e..
}

in. main(in., c.. #|| {
    Application appsy.. p..

    app.do_it()
    app.logout()
    app.login()
    app.do_it()
    app.login()
    app.logout()
    app.do_it()

    r_ 0sy.. p..
}
