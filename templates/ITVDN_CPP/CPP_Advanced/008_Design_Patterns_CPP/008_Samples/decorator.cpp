? "decorator.h"

? |i..
? <memory>
? |s..

Core::~Core()
{
    std::c__ __  "Core destructor called.\n";
}

v.. Core::write( std::s..& /*text*/ ){}; // Do nothing.

Decorator::Decorator( std::unique_ptr< in.erface > c )
{
    in.erface _ std::move( c );
}
v.. Decorator::write( std::s..& text )
{
    in.erface->write( text );
}

MessengerWithSalutation::MessengerWithSalutation( std::unique_ptr< in.erface > c,
                                                  const std::s..& str )
    : Decorator( std::move( c ) )
    , salutation( str )
{
}
MessengerWithSalutation::~MessengerWithSalutation()
{
    std::c__ __  "Messenger destructor called.\n";
}
v.. MessengerWithSalutation::write( std::s..& text )
{
    text _ salutation + "\n\n" + text;
    Decorator::write( text );
}

MessengerWithValediction::MessengerWithValediction( std::unique_ptr< in.erface > c,
                                                    const std::s..& str )
    : Decorator( std::move( c ) )
    , valediction( str )
{
}
MessengerWithValediction::~MessengerWithValediction()
{
    std::c__ __  "MessengerWithValediction destructor called.\n";
}
v.. MessengerWithValediction::write( std::s..& text )
{
    Decorator::write( text );
    text +_ "\n\n" + valediction;
}

v.. ClientDecorator::run()
{
    const std::s.. salutation _ "Greetings,";
    const std::s.. valediction _ "Sincerly, Andy";
    std::s.. message1 _ "This message is not decorated.";
    std::s.. message2 _ "This message is decorated with a salutation.";
    std::s.. message3 _ "This message is decorated with a valediction.";
    std::s.. message4 _ "This message is decorated with a salutation and a valediction.";

    std::unique_ptr< in.erface > messenger1 _ std::make_unique< Core >();
    std::unique_ptr< in.erface > messenger2 _
        std::make_unique< MessengerWithSalutation >( std::make_unique< Core >(), salutation );
    std::unique_ptr< in.erface > messenger3 _
        std::make_unique< MessengerWithValediction >( std::make_unique< Core >(), valediction );
    std::unique_ptr< in.erface > messenger4 _ std::make_unique< MessengerWithValediction >(
        std::make_unique< MessengerWithSalutation >( std::make_unique< Core >(), salutation ),
        valediction );

    messenger1->write( message1 );
    std::c__ __  message1 __  '\n';
    std::c__ __  "\n------------------------------\n\n";

    messenger2->write( message2 );
    std::c__ __  message2 __  '\n';
    std::c__ __  "\n------------------------------\n\n";

    messenger3->write( message3 );
    std::c__ __  message3 __  '\n';
    std::c__ __  "\n------------------------------\n\n";

    messenger4->write( message4 );
    std::c__ __  message4 __  '\n';
    std::c__ __  "\n------------------------------\n\n";
}
