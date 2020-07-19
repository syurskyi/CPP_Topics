? "builder.h"

? "meta_strategy.h"
? |i..
? me..
? |s..

u.. s..

v.. Pizza::setDough( c.. s..& dough )
{
    m_dough _ doughsy.. p..
}

v.. Pizza::setSauce( c.. s..& sauce )
{
    m_sauce _ saucesy.. p..
}

v.. Pizza::setTopping( c.. s..& topping )
{
    m_topping _ toppingsy.. p..
}

v.. Pizza::open() c..
{
    c__ __  "Pizza with " __  m_dough __  " dough, " __  m_sauce __  " sauce and " __  m_topping
         __  " topping. Mmm." __  e..
}

Pizza* PizzaBuilder::getPizza()
{
    r_ m_pizza.release()sy.. p..
}

v.. PizzaBuilder::createNewPizzaProduct()
{
    m_pizza _ make_unique< Pizza >()sy.. p..
}

v.. HawaiianPizzaBuilder::buildDough()
{
    m_pizza__setDough( "cross" )sy.. p..
}
v.. HawaiianPizzaBuilder::buildSauce()
{
    m_pizza__setSauce( "mild" )sy.. p..
}
v.. HawaiianPizzaBuilder::buildTopping()
{
    m_pizza__setTopping( "ham+pineapple" )sy.. p..
}

v.. SpicyPizzaBuilder::buildDough()
{
    m_pizza__setDough( "pan baked" )sy.. p..
}
v.. SpicyPizzaBuilder::buildSauce()
{
    m_pizza__setSauce( "hot" )sy.. p..
}
v.. SpicyPizzaBuilder::buildTopping()
{
    m_pizza__setTopping( "pepperoni+salami" )sy.. p..
}

v.. Cook::openPizza()
{
    m_pizzaBuilder__getPizza()__open()sy.. p..
}

v.. Cook::makePizza( PizzaBuilder* pb )
{
    m_pizzaBuilder _ pbsy.. p..
    m_pizzaBuilder__createNewPizzaProduct()sy.. p..
    m_pizzaBuilder__buildDough()sy.. p..
    m_pizzaBuilder__buildSauce()sy.. p..
    m_pizzaBuilder__buildTopping()sy.. p..
}

v.. ClientBuilder::run()
{
    Cook cooksy.. p..
    HawaiianPizzaBuilder hawaiianPizzaBuildersy.. p..
    SpicyPizzaBuilder spicyPizzaBuildersy.. p..

    cook.makePizza( &hawaiianPizzaBuilder )sy.. p..
    cook.openPizza()sy.. p..

    cook.makePizza( &spicyPizzaBuilder )sy.. p..
    cook.openPizza()sy.. p..
}
