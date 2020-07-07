? "strategy.h"
? |i..

u.. s..

v.. ConcreteStrategyA::execute() const
{
    c__ __  "Called ConcreteStrategyA execute method" __  e..
}

v.. ConcreteStrategyB::execute() const
{
    c__ __  "Called ConcreteStrategyB execute method" __  e..
}

v.. ConcreteStrategyC::execute() const
{
    c__ __  "Called ConcreteStrategyC execute method" __  e..
}

Context::Context( Strategyin.erface* strategy )
    : strategy_( strategy )
{
}

v.. Context::set_strategy( Strategyin.erface* strategy )
{
    strategy_ _ strategy;
}

v.. Context::execute() const
{
    strategy_->execute();
}

v.. ClientStrategy::run()
{
    ConcreteStrategyA concreteStrategyA;
    ConcreteStrategyB concreteStrategyB;
    ConcreteStrategyC concreteStrategyC;

    Context contextA( &concreteStrategyA );
    Context contextB( &concreteStrategyB );
    Context contextC( &concreteStrategyC );

    contextA.execute(); // output: "Called ConcreteStrategyA execute method"
    contextB.execute(); // output: "Called ConcreteStrategyB execute method"
    contextC.execute(); // output: "Called ConcreteStrategyC execute method"

    contextA.set_strategy( &concreteStrategyB );
    contextA.execute(); // output: "Called ConcreteStrategyB execute method"
    contextA.set_strategy( &concreteStrategyC );
    contextA.execute(); // output: "Called ConcreteStrategyC execute method"
}
