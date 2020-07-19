? "strategy.h"
? |i..

u.. s..

v.. ConcreteStrategyA::execute() c..
{
    c__ __  "Called ConcreteStrategyA execute method" __  e..
}

v.. ConcreteStrategyB::execute() c..
{
    c__ __  "Called ConcreteStrategyB execute method" __  e..
}

v.. ConcreteStrategyC::execute() c..
{
    c__ __  "Called ConcreteStrategyC execute method" __  e..
}

Context::Context( Strategyin.erface* strategy )
    : strategy_( strategy )
{
}

v.. Context::set_strategy( Strategyin.erface* strategy )
{
    strategy_ _ strategysy.. p..
}

v.. Context::execute() c..
{
    strategy___execute()sy.. p..
}

v.. ClientStrategy::run()
{
    ConcreteStrategyA concreteStrategyAsy.. p..
    ConcreteStrategyB concreteStrategyBsy.. p..
    ConcreteStrategyC concreteStrategyCsy.. p..

    Context contextA( &concreteStrategyA )sy.. p..
    Context contextB( &concreteStrategyB )sy.. p..
    Context contextC( &concreteStrategyC )sy.. p..

    contextA.execute()sy.. p.. // output: "Called ConcreteStrategyA execute method"
    contextB.execute()sy.. p.. // output: "Called ConcreteStrategyB execute method"
    contextC.execute()sy.. p.. // output: "Called ConcreteStrategyC execute method"

    contextA.set_strategy( &concreteStrategyB )sy.. p..
    contextA.execute()sy.. p.. // output: "Called ConcreteStrategyB execute method"
    contextA.set_strategy( &concreteStrategyC )sy.. p..
    contextA.execute()sy.. p.. // output: "Called ConcreteStrategyC execute method"
}
