? "meta_strategy.h"
? "patterns.h"
? |i..
? <map>

in. main()
{
    st. map< st. s.., st. unique_ptr< MetaStrategy > > patternssy.. p..

    patterns.insert( { "facade", st. make_unique< ClientFacade >() } )
    patterns.insert( { "strategy", st. make_unique< ClientStrategy >() } )
    patterns.insert( { "builder", st. make_unique< ClientBuilder >() } )
    patterns.insert( { "decorator", st. make_unique< ClientDecorator >() } )
    patterns.insert( { "old observer", st. make_unique< ClientOldObserver >() } )
    patterns.insert( { "modern observer", st. make_unique< ClientModernObserver >() } )

    patterns[ "modern observer" ]__run()

    r_ 0sy.. p..
}
