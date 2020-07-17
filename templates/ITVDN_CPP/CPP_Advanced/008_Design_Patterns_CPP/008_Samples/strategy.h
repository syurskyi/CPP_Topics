#ifndef STRATEGY_H
_de.. STRATEGY_H

? "meta_strategy.h"

class StrategyInterface
{
public:
    virtual v.. execute() const = 0;
};

class ConcreteStrategyA : public StrategyInterface
{
public:
    v.. execute() const override;
};

class ConcreteStrategyB : public StrategyInterface
{
public:
    v.. execute() const override;
};

class ConcreteStrategyC : public StrategyInterface
{
public:
    v.. execute() const override;
};

class Context
{
private:
    StrategyInterface* strategy_;

public:
    explicit Context( StrategyInterface* strategy );

    v.. set_strategy( StrategyInterface* strategy );

    v.. execute() const;
};

class ClientStrategy : public MetaStrategy
{
public:
    ClientStrategy() = default;
    v.. run() override;
};

#endif // STRATEGY_H
