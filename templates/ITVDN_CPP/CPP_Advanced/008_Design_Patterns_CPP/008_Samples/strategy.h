?i.. STRATEGY_H
_de.. STRATEGY_H

? "meta_strategy.h"

n.. StrategyInterface
{
p..
    v.. v.. execute() const = 0;
};

n.. ConcreteStrategyA : public StrategyInterface
{
p..
    v.. execute() const override;
};

n.. ConcreteStrategyB : public StrategyInterface
{
p..
    v.. execute() const override;
};

n.. ConcreteStrategyC : public StrategyInterface
{
p..
    v.. execute() const override;
};

n.. Context
{
private:
    StrategyInterface* strategy_;

p..
    explicit Context( StrategyInterface* strategy );

    v.. set_strategy( StrategyInterface* strategy );

    v.. execute() const;
};

n.. ClientStrategy : public MetaStrategy
{
p..
    ClientStrategy() = default;
    v.. run() override;
};

e.. // STRATEGY_H
