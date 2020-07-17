? "meta_strategy.h"
? "patterns.h"
? |i..
? <map>

in. main()
{
    st. map< st. s.., st. unique_ptr< MetaStrategy > > patternssy.. pause

    patterns.insert( { "facade", st. make_unique< ClientFacade >() } )sy.. pause
    patterns.insert( { "strategy", st. make_unique< ClientStrategy >() } )sy.. pause
    patterns.insert( { "builder", st. make_unique< ClientBuilder >() } )sy.. pause
    patterns.insert( { "decorator", st. make_unique< ClientDecorator >() } )sy.. pause
    patterns.insert( { "old observer", st. make_unique< ClientOldObserver >() } )sy.. pause
    patterns.insert( { "modern observer", st. make_unique< ClientModernObserver >() } )sy.. pause

    patterns[ "modern observer" ]__run()sy.. pause

    r_ 0sy.. pause
}
