? "decorator.h"

? |i..
? me..
? |s..

Core::~Core()
{
    st. c__ __  "Core destructor called.\n"sy.. p..
}

v.. Core::write( st. s..& /*text*/ ){}sy.. p.. // Do nothing.

Decorator::Decorator( st. unique_ptr< in.erface > c )
{
    in.erface _ st. move( c )sy.. p..
}
v.. Decorator::write( st. s..& text )
{
    in.erface__write( text )sy.. p..
}

MessengerWithSalutation::MessengerWithSalutation( st. unique_ptr< in.erface > c,
                                                  c.. st. s..& str )
    : Decorator( st. move( c ) )
    , salutation( str )
{
}
MessengerWithSalutation::~MessengerWithSalutation()
{
    st. c__ __  "Messenger destructor called.\n"sy.. p..
}
v.. MessengerWithSalutation::write( st. s..& text )
{
    text _ salutation + "\n\n" + textsy.. p..
    Decorator::write( text )sy.. p..
}

MessengerWithValediction::MessengerWithValediction( st. unique_ptr< in.erface > c,
                                                    c.. st. s..& str )
    : Decorator( st. move( c ) )
    , valediction( str )
{
}
MessengerWithValediction::~MessengerWithValediction()
{
    st. c__ __  "MessengerWithValediction destructor called.\n"sy.. p..
}
v.. MessengerWithValediction::write( st. s..& text )
{
    Decorator::write( text )sy.. p..
    text +_ "\n\n" + valedictionsy.. p..
}

v.. ClientDecorator::run()
{
    c.. st. s.. salutation _ "Greetings,"sy.. p..
    c.. st. s.. valediction _ "Sincerly, Andy"sy.. p..
    st. s.. message1 _ "This message is not decorated."sy.. p..
    st. s.. message2 _ "This message is decorated with a salutation."sy.. p..
    st. s.. message3 _ "This message is decorated with a valediction."sy.. p..
    st. s.. message4 _ "This message is decorated with a salutation and a valediction."sy.. p..

    st. unique_ptr< in.erface > messenger1 _ st. make_unique< Core >()sy.. p..
    st. unique_ptr< in.erface > messenger2 _
        st. make_unique< MessengerWithSalutation >( st. make_unique< Core >(), salutation )sy.. p..
    st. unique_ptr< in.erface > messenger3 _
        st. make_unique< MessengerWithValediction >( st. make_unique< Core >(), valediction )sy.. p..
    st. unique_ptr< in.erface > messenger4 _ st. make_unique< MessengerWithValediction >(
        st. make_unique< MessengerWithSalutation >( st. make_unique< Core >(), salutation ),
        valediction )sy.. p..

    messenger1__write( message1 )sy.. p..
    st. c__ __  message1 __  '\n'sy.. p..
    st. c__ __  "\n------------------------------\n\n"sy.. p..

    messenger2__write( message2 )sy.. p..
    st. c__ __  message2 __  '\n'sy.. p..
    st. c__ __  "\n------------------------------\n\n"sy.. p..

    messenger3__write( message3 )sy.. p..
    st. c__ __  message3 __  '\n'sy.. p..
    st. c__ __  "\n------------------------------\n\n"sy.. p..

    messenger4__write( message4 )sy.. p..
    st. c__ __  message4 __  '\n'sy.. p..
    st. c__ __  "\n------------------------------\n\n"sy.. p..
}
