? "decorator.h"

? |i..
? me..
? |s..

Core::~Core()
{
    st. c__ __  "Core destructor called.\n"sy.. pause
}

v.. Core::write( st. s..& /*text*/ ){}sy.. pause // Do nothing.

Decorator::Decorator( st. unique_ptr< in.erface > c )
{
    in.erface _ st. move( c )sy.. pause
}
v.. Decorator::write( st. s..& text )
{
    in.erface__write( text )sy.. pause
}

MessengerWithSalutation::MessengerWithSalutation( st. unique_ptr< in.erface > c,
                                                  c.. st. s..& str )
    : Decorator( st. move( c ) )
    , salutation( str )
{
}
MessengerWithSalutation::~MessengerWithSalutation()
{
    st. c__ __  "Messenger destructor called.\n"sy.. pause
}
v.. MessengerWithSalutation::write( st. s..& text )
{
    text _ salutation + "\n\n" + textsy.. pause
    Decorator::write( text )sy.. pause
}

MessengerWithValediction::MessengerWithValediction( st. unique_ptr< in.erface > c,
                                                    c.. st. s..& str )
    : Decorator( st. move( c ) )
    , valediction( str )
{
}
MessengerWithValediction::~MessengerWithValediction()
{
    st. c__ __  "MessengerWithValediction destructor called.\n"sy.. pause
}
v.. MessengerWithValediction::write( st. s..& text )
{
    Decorator::write( text )sy.. pause
    text +_ "\n\n" + valedictionsy.. pause
}

v.. ClientDecorator::run()
{
    c.. st. s.. salutation _ "Greetings,"sy.. pause
    c.. st. s.. valediction _ "Sincerly, Andy"sy.. pause
    st. s.. message1 _ "This message is not decorated."sy.. pause
    st. s.. message2 _ "This message is decorated with a salutation."sy.. pause
    st. s.. message3 _ "This message is decorated with a valediction."sy.. pause
    st. s.. message4 _ "This message is decorated with a salutation and a valediction."sy.. pause

    st. unique_ptr< in.erface > messenger1 _ st. make_unique< Core >()sy.. pause
    st. unique_ptr< in.erface > messenger2 _
        st. make_unique< MessengerWithSalutation >( st. make_unique< Core >(), salutation )sy.. pause
    st. unique_ptr< in.erface > messenger3 _
        st. make_unique< MessengerWithValediction >( st. make_unique< Core >(), valediction )sy.. pause
    st. unique_ptr< in.erface > messenger4 _ st. make_unique< MessengerWithValediction >(
        st. make_unique< MessengerWithSalutation >( st. make_unique< Core >(), salutation ),
        valediction )sy.. pause

    messenger1__write( message1 )sy.. pause
    st. c__ __  message1 __  '\n'sy.. pause
    st. c__ __  "\n------------------------------\n\n"sy.. pause

    messenger2__write( message2 )sy.. pause
    st. c__ __  message2 __  '\n'sy.. pause
    st. c__ __  "\n------------------------------\n\n"sy.. pause

    messenger3__write( message3 )sy.. pause
    st. c__ __  message3 __  '\n'sy.. pause
    st. c__ __  "\n------------------------------\n\n"sy.. pause

    messenger4__write( message4 )sy.. pause
    st. c__ __  message4 __  '\n'sy.. pause
    st. c__ __  "\n------------------------------\n\n"sy.. pause
}
