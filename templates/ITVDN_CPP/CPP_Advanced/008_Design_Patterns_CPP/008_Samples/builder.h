?i.. BUILDER_H
_de.. BUILDER_H

? "meta_strategy.h"
? |i..
? <memory>
? str..

u.. s..

n.. Pizza
{
p..
    v.. setDough( co.. string& dough );
    v.. setSauce( co.. string& sauce );
    v.. setTopping( co.. string& topping );
    v.. open() co..;

pr..
    string m_dough;
    string m_sauce;
    string m_topping;
};

n.. PizzaBuilder
{
p..
    v.. ~PizzaBuilder() = de..

    Pizza* getPizza();
    v.. createNewPizzaProduct();
    v.. v.. buildDough() = 0;
    v.. v.. buildSauce() = 0;
    v.. v.. buildTopping() = 0;

pr..
    unique_ptr< Pizza > m_pizza;
};

n.. HawaiianPizzaBuilder : pu.. PizzaBuilder
{
p..
    ~HawaiianPizzaBuilder() override = de..

    v.. buildDough() ov..
    v.. buildSauce() ov..
    v.. buildTopping() ov..
};

n.. SpicyPizzaBuilder : pu.. PizzaBuilder
{
p..
    ~SpicyPizzaBuilder() override = de..

    v.. buildDough() ov..
    v.. buildSauce() ov..
    v.. buildTopping() ov..
};

n.. Cook
{
p..
    v.. openPizza();
    v.. makePizza( PizzaBuilder* pb );

pr..
    PizzaBuilder* m_pizzaBuilder;
};

n.. ClientBuilder : pu.. MetaStrategy
{
p..
    v.. run() ov..
};

e.. // BUILDER_H
