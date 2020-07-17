?i.. BUILDER_H
_de.. BUILDER_H

? "meta_strategy.h"
? |i..
? <memory>
? <string>

u.. s..

n.. Pizza
{
p..
    v.. setDough( const string& dough );
    v.. setSauce( const string& sauce );
    v.. setTopping( const string& topping );
    v.. open() const;

private:
    string m_dough;
    string m_sauce;
    string m_topping;
};

n.. PizzaBuilder
{
p..
    v.. ~PizzaBuilder() = default;

    Pizza* getPizza();
    v.. createNewPizzaProduct();
    v.. v.. buildDough() = 0;
    v.. v.. buildSauce() = 0;
    v.. v.. buildTopping() = 0;

protected:
    unique_ptr< Pizza > m_pizza;
};

n.. HawaiianPizzaBuilder : public PizzaBuilder
{
p..
    ~HawaiianPizzaBuilder() override = default;

    v.. buildDough() override;
    v.. buildSauce() override;
    v.. buildTopping() override;
};

n.. SpicyPizzaBuilder : public PizzaBuilder
{
p..
    ~SpicyPizzaBuilder() override = default;

    v.. buildDough() override;
    v.. buildSauce() override;
    v.. buildTopping() override;
};

n.. Cook
{
p..
    v.. openPizza();
    v.. makePizza( PizzaBuilder* pb );

private:
    PizzaBuilder* m_pizzaBuilder;
};

n.. ClientBuilder : public MetaStrategy
{
p..
    v.. run() override;
};

e.. // BUILDER_H
