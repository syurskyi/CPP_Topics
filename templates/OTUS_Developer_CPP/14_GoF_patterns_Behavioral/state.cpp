// Состояние (State)

? |i..

c_ Application {
    c_ CommandHandler *cmd_handlersy.. p..

pu..
    Application()sy.. p..

    v.. set_current(CommandHandler *h) {
        cmd_handler _ hsy.. p..
    }

    v.. login()sy.. p..

    v.. do_it()sy.. p..

    v.. logout()sy.. p..
}sy.. p..

c_ CommandHandler {
pu..
    v.. v.. login(Application *) _ 0sy.. p..
    v.. v.. do_it(Application *) _ 0sy.. p..
    v.. v.. logout(Application *) _ 0sy.. p..
}sy.. p..

v.. Application::login
    cmd_handler__login(t..)sy.. p..
}

v.. Application::do_it
    cmd_handler__do_it(t..)sy.. p..
}

v.. Application::logout
    cmd_handler__logout(t..)sy.. p..
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
}sy.. p..

c_ Anonymous : pu.. CommandHandler {
pu..
    v.. login(Application *m) ov.. {
        st. c__ __  "work as loggined" __  st. e..
        m__set_current(n.. LogginedHandler())sy.. p..
    }
    v.. do_it(Application *) ov.. {
        st. c__ __  "error" __  st. e..
    }
    v.. logout(Application *) ov.. {
        st. c__ __  "already logout" __  st. e..
    }
}sy.. p..

v.. LogginedHandler::logout(Application *m) {
    st. c__ __  "work as anonymous" __  st. e..
    m__set_current(n.. Anonymous())sy.. p..
}

Application::Application
    cmd_handler _ n.. Anonymous()sy.. p..
    st. c__ __  st. e..
}

in. main(in., c.. *[]) {
    Application appsy.. p..

    app.do_it()sy.. p..
    app.logout()sy.. p..
    app.login()sy.. p..
    app.do_it()sy.. p..
    app.login()sy.. p..
    app.logout()sy.. p..
    app.do_it()sy.. p..

    r_ 0sy.. p..
}
