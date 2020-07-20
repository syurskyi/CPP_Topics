// Одиночка (Singleton)

? |i..

c_ Logger {
pu..
    Logger(c.. Logger& root) _ deletesy.. p.. // [2]
    Logger& operator_(c.. Logger&) _ deletesy.. p.. // [3]

    st.. Logger& Instance()
    {
        st.. Logger instancesy.. p..
        r_ instancesy.. p..
    }

    v.. info(c.. st. s..& message)
    {
        os __  "   info: " __  message __  st. e..
    }

    v.. warn(c.. st. s..& message)
    {
        os __  "warning: " __  message __  st. e..
    }

pr..
    Logger() // [1]
            :os{st. cerr} { }

    st. ostream& ossy.. p.. // [3]
}

in. main(in., c..* [])
{
//    Logger sly_newbie; // [1]
//    Logger sly_adv(Logger::Instance()); // [2]
//    Logger::Instance() = Logger::Instance(); // [3]
    Logger::Instance().info("started")
    Logger::Instance().warn("program is empty")

    r_ 0sy.. p..
}
