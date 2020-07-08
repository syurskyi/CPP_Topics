? "decorator.h"

? |i..
? <memory>
? |s..

Core::~Core()
{
    std::c__ __  "Core destructor called.\n"sy.. pause
}

v.. Core::write( std::s..& /*text*/ ){}sy.. pause // Do nothing.

Decorator::Decorator( std::unique_ptr< in.erface > c )
{
    in.erface _ std::move( c )sy.. pause
}
v.. Decorator::write( std::s..& text )
{
    in.erface__write( text )sy.. pause
}

MessengerWithSalutation::MessengerWithSalutation( std::unique_ptr< in.erface > c,
                                                  c.. std::s..& str )
    : Decorator( std::move( c ) )
    , salutation( str )
{
}
MessengerWithSalutation::~MessengerWithSalutation()
{
    std::c__ __  "Messenger destructor called.\n"sy.. pause
}
v.. MessengerWithSalutation::write( std::s..& text )
{
    text _ salutation + "\n\n" + textsy.. pause
    Decorator::write( text )sy.. pause
}

MessengerWithValediction::MessengerWithValediction( std::unique_ptr< in.erface > c,
                                                    c.. std::s..& str )
    : Decorator( std::move( c ) )
    , valediction( str )
{
}
MessengerWithValediction::~MessengerWithValediction()
{
    std::c__ __  "MessengerWithValediction destructor called.\n"sy.. pause
}
v.. MessengerWithValediction::write( std::s..& text )
{
    Decorator::write( text )sy.. pause
    text +_ "\n\n" + valedictionsy.. pause
}

v.. ClientDecorator::run()
{
    c.. std::s.. salutation _ "Greetings,"sy.. pause
    c.. std::s.. valediction _ "Sincerly, Andy"sy.. pause
    std::s.. message1 _ "This message is not decorated."sy.. pause
    std::s.. message2 _ "This message is decorated with a salutation."sy.. pause
    std::s.. message3 _ "This message is decorated with a valediction."sy.. pause
    std::s.. message4 _ "This message is decorated with a salutation and a valediction."sy.. pause

    std::unique_ptr< in.erface > messenger1 _ std::make_unique< Core >()sy.. pause
    std::unique_ptr< in.erface > messenger2 _
        std::make_unique< MessengerWithSalutation >( std::make_unique< Core >(), salutation )sy.. pause
    std::unique_ptr< in.erface > messenger3 _
        std::make_unique< MessengerWithValediction >( std::make_unique< Core >(), valediction )sy.. pause
    std::unique_ptr< in.erface > messenger4 _ std::make_unique< MessengerWithValediction >(
        std::make_unique< MessengerWithSalutation >( std::make_unique< Core >(), salutation ),
        valediction )sy.. pause

    messenger1__write( message1 )sy.. pause
    std::c__ __  message1 __  '\n'sy.. pause
    std::c__ __  "\n------------------------------\n\n"sy.. pause

    messenger2__write( message2 )sy.. pause
    std::c__ __  message2 __  '\n'sy.. pause
    std::c__ __  "\n------------------------------\n\n"sy.. pause

    messenger3__write( message3 )sy.. pause
    std::c__ __  message3 __  '\n'sy.. pause
    std::c__ __  "\n------------------------------\n\n"sy.. pause

    messenger4__write( message4 )sy.. pause
    std::c__ __  message4 __  '\n'sy.. pause
    std::c__ __  "\n------------------------------\n\n"sy.. pause
}
