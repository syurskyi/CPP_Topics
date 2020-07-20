? "decorator.h"

? |i..
? me..
? |s..

Core::~Core()
{
    st. c__ __  "Core destructor called.\n"
}

v.. Core::write( st. s..& /*text*/ ){} // Do nothing.

Decorator::Decorator( st. unique_ptr< in.erface > c )
{
    in.erface _ st. move( c )
}
v.. Decorator::write( st. s..& text )
{
    in.erface__write( text )
}

MessengerWithSalutation::MessengerWithSalutation( st. unique_ptr< in.erface > c,
                                                  c.. st. s..& str )
    : Decorator( st. move( c ) )
    , salutation( str )
{
}
MessengerWithSalutation::~MessengerWithSalutation()
{
    st. c__ __  "Messenger destructor called.\n"
}
v.. MessengerWithSalutation::write( st. s..& text )
{
    text _ salutation + "\n\n" + textsy.. p..
    Decorator::write( text )
}

MessengerWithValediction::MessengerWithValediction( st. unique_ptr< in.erface > c,
                                                    c.. st. s..& str )
    : Decorator( st. move( c ) )
    , valediction( str )
{
}
MessengerWithValediction::~MessengerWithValediction()
{
    st. c__ __  "MessengerWithValediction destructor called.\n"
}
v.. MessengerWithValediction::write( st. s..& text )
{
    Decorator::write( text )
    text +_ "\n\n" + valedictionsy.. p..
}

v.. ClientDecorator::run()
{
    c.. st. s.. salutation _ "Greetings,"
    c.. st. s.. valediction _ "Sincerly, Andy"
    st. s.. message1 _ "This message is not decorated."
    st. s.. message2 _ "This message is decorated with a salutation."
    st. s.. message3 _ "This message is decorated with a valediction."
    st. s.. message4 _ "This message is decorated with a salutation and a valediction."

    st. unique_ptr< in.erface > messenger1 _ st. make_unique< Core >()
    st. unique_ptr< in.erface > messenger2 _
        st. make_unique< MessengerWithSalutation >( st. make_unique< Core >(), salutation )
    st. unique_ptr< in.erface > messenger3 _
        st. make_unique< MessengerWithValediction >( st. make_unique< Core >(), valediction )
    st. unique_ptr< in.erface > messenger4 _ st. make_unique< MessengerWithValediction >(
        st. make_unique< MessengerWithSalutation >( st. make_unique< Core >(), salutation ),
        valediction )

    messenger1__write( message1 )
    st. c__ __  message1 __  '\n'
    st. c__ __  "\n------------------------------\n\n"

    messenger2__write( message2 )
    st. c__ __  message2 __  '\n'
    st. c__ __  "\n------------------------------\n\n"

    messenger3__write( message3 )
    st. c__ __  message3 __  '\n'
    st. c__ __  "\n------------------------------\n\n"

    messenger4__write( message4 )
    st. c__ __  message4 __  '\n'
    st. c__ __  "\n------------------------------\n\n"
}
