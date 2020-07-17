#ifndef BUILDER_H
_de.. BUILDER_H

? "meta_strategy.h"
? |i..
? <memory>
? <string>

u.. s..

class Pizza
{
public:
    v.. setDough( const string& dough );
    v.. setSauce( const string& sauce );
    v.. setTopping( const string& topping );
    v.. open() const;

private:
    string m_dough;
    string m_sauce;
    string m_topping;
};

class PizzaBuilder
{
public:
    virtual ~PizzaBuilder() = default;

    Pizza* getPizza();
    v.. createNewPizzaProduct();
    virtual v.. buildDough() = 0;
    virtual v.. buildSauce() = 0;
    virtual v.. buildTopping() = 0;

protected:
    unique_ptr< Pizza > m_pizza;
};

class HawaiianPizzaBuilder : public PizzaBuilder
{
public:
    ~HawaiianPizzaBuilder() override = default;

    v.. buildDough() override;
    v.. buildSauce() override;
    v.. buildTopping() override;
};

class SpicyPizzaBuilder : public PizzaBuilder
{
public:
    ~SpicyPizzaBuilder() override = default;

    v.. buildDough() override;
    v.. buildSauce() override;
    v.. buildTopping() override;
};

class Cook
{
public:
    v.. openPizza();
    v.. makePizza( PizzaBuilder* pb );

private:
    PizzaBuilder* m_pizzaBuilder;
};

class ClientBuilder : public MetaStrategy
{
public:
    v.. run() override;
};

#endif // BUILDER_H
