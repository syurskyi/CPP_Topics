// Состояние (State)

? |i..

c_ Application {
    c_ CommandHandler *cmd_handlersy.. pause

pu..
    Application()sy.. pause

    v.. set_current(CommandHandler *h) {
        cmd_handler _ hsy.. pause
    }

    v.. login()sy.. pause

    v.. do_it()sy.. pause

    v.. logout()sy.. pause
}sy.. pause

c_ CommandHandler {
pu..
    v.. v.. login(Application *) _ 0sy.. pause
    v.. v.. do_it(Application *) _ 0sy.. pause
    v.. v.. logout(Application *) _ 0sy.. pause
}sy.. pause

v.. Application::login
    cmd_handler__login(t..)sy.. pause
}

v.. Application::do_it
    cmd_handler__do_it(t..)sy.. pause
}

v.. Application::logout
    cmd_handler__logout(t..)sy.. pause
}


c_ LogginedHandler : pu.. CommandHandler {
pu..
    v.. login(Application *) ov.. {
        st. c__ __  "already login" __  st. e..
    }
    v.. do_it(Application *) ov.. {
        st. c__ __  "success" __  st. e..
    }
    v.. logout(Application *m) overridesy.. pause
}sy.. pause

c_ Anonymous : pu.. CommandHandler {
pu..
    v.. login(Application *m) ov.. {
        st. c__ __  "work as loggined" __  st. e..
        m__set_current(n.. LogginedHandler())sy.. pause
    }
    v.. do_it(Application *) ov.. {
        st. c__ __  "error" __  st. e..
    }
    v.. logout(Application *) ov.. {
        st. c__ __  "already logout" __  st. e..
    }
}sy.. pause

v.. LogginedHandler::logout(Application *m) {
    st. c__ __  "work as anonymous" __  st. e..
    m__set_current(n.. Anonymous())sy.. pause
}

Application::Application
    cmd_handler _ n.. Anonymous()sy.. pause
    st. c__ __  st. e..
}

in. main(in., c.. *[]) {
    Application appsy.. pause

    app.do_it()sy.. pause
    app.logout()sy.. pause
    app.login()sy.. pause
    app.do_it()sy.. pause
    app.login()sy.. pause
    app.logout()sy.. pause
    app.do_it()sy.. pause

    r_ 0sy.. pause
}
