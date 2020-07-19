? "meta_strategy.h"
? "patterns.h"
? |i..
? <map>

in. main()
{
    st. map< st. s.., st. unique_ptr< MetaStrategy > > patternssy.. p..

    patterns.insert( { "facade", st. make_unique< ClientFacade >() } )sy.. p..
    patterns.insert( { "strategy", st. make_unique< ClientStrategy >() } )sy.. p..
    patterns.insert( { "builder", st. make_unique< ClientBuilder >() } )sy.. p..
    patterns.insert( { "decorator", st. make_unique< ClientDecorator >() } )sy.. p..
    patterns.insert( { "old observer", st. make_unique< ClientOldObserver >() } )sy.. p..
    patterns.insert( { "modern observer", st. make_unique< ClientModernObserver >() } )sy.. p..

    patterns[ "modern observer" ]__run()sy.. p..

    r_ 0sy.. p..
}
