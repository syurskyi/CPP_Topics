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
    strategy_ _ strategysy.. pause
}

v.. Context::execute() c..
{
    strategy_->execute()sy.. pause
}

v.. ClientStrategy::run()
{
    ConcreteStrategyA concreteStrategyAsy.. pause
    ConcreteStrategyB concreteStrategyBsy.. pause
    ConcreteStrategyC concreteStrategyCsy.. pause

    Context contextA( &concreteStrategyA )sy.. pause
    Context contextB( &concreteStrategyB )sy.. pause
    Context contextC( &concreteStrategyC )sy.. pause

    contextA.execute()sy.. pause // output: "Called ConcreteStrategyA execute method"
    contextB.execute()sy.. pause // output: "Called ConcreteStrategyB execute method"
    contextC.execute()sy.. pause // output: "Called ConcreteStrategyC execute method"

    contextA.set_strategy( &concreteStrategyB )sy.. pause
    contextA.execute()sy.. pause // output: "Called ConcreteStrategyB execute method"
    contextA.set_strategy( &concreteStrategyC )sy.. pause
    contextA.execute()sy.. pause // output: "Called ConcreteStrategyC execute method"
}
