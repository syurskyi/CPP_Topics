? "meta_strategy.h"
? "patterns.h"
? |i..
? <map>

in. main()
{
    std::map< std::string, std::unique_ptr< MetaStrategy > > patterns;

    patterns.insert( { "facade", std::make_unique< ClientFacade >() } );
    patterns.insert( { "strategy", std::make_unique< ClientStrategy >() } );
    patterns.insert( { "builder", std::make_unique< ClientBuilder >() } );
    patterns.insert( { "decorator", std::make_unique< ClientDecorator >() } );
    patterns.insert( { "old observer", std::make_unique< ClientOldObserver >() } );
    patterns.insert( { "modern observer", std::make_unique< ClientModernObserver >() } );

    patterns[ "modern observer" ]->run();

    r_ 0;
}
