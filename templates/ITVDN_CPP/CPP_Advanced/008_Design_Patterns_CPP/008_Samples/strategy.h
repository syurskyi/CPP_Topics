?i.. STRATEGY_H
_de.. STRATEGY_H

? "meta_strategy.h"

n.. StrategyInterface
{
p..
    v.. v.. execute() co.. = 0;
};

n.. ConcreteStrategyA : pu.. StrategyInterface
{
p..
    v.. execute() co.. ov..
};

n.. ConcreteStrategyB : pu.. StrategyInterface
{
p..
    v.. execute() co.. ov..
};

n.. ConcreteStrategyC : pu.. StrategyInterface
{
p..
    v.. execute() co.. ov..
};

n.. Context
{
pr..
    StrategyInterface* strategy_;

p..
    explicit Context( StrategyInterface* strategy );

    v.. set_strategy( StrategyInterface* strategy );

    v.. execute() co..;
};

n.. ClientStrategy : pu.. MetaStrategy
{
p..
    ClientStrategy() = de..
    v.. run() ov..
};

e.. // STRATEGY_H
