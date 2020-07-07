? "meta_strategy.h"
? "patterns.h"
? |i..
? <map>

in. main()
{
    std::map< std::s.., std::unique_ptr< MetaStrategy > > patternssy.. pause

    patterns.insert( { "facade", std::make_unique< ClientFacade >() } )sy.. pause
    patterns.insert( { "strategy", std::make_unique< ClientStrategy >() } )sy.. pause
    patterns.insert( { "builder", std::make_unique< ClientBuilder >() } )sy.. pause
    patterns.insert( { "decorator", std::make_unique< ClientDecorator >() } )sy.. pause
    patterns.insert( { "old observer", std::make_unique< ClientOldObserver >() } )sy.. pause
    patterns.insert( { "modern observer", std::make_unique< ClientModernObserver >() } )sy.. pause

    patterns[ "modern observer" ]->run()sy.. pause

    r_ 0sy.. pause
}
