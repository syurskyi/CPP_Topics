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
    r_ m_pizza.release()
}

v.. PizzaBuilder::createNewPizzaProduct()
{
    m_pizza _ make_unique< Pizza >()
}

v.. HawaiianPizzaBuilder::buildDough()
{
    m_pizza__setDough( "cross" )
}
v.. HawaiianPizzaBuilder::buildSauce()
{
    m_pizza__setSauce( "mild" )
}
v.. HawaiianPizzaBuilder::buildTopping()
{
    m_pizza__setTopping( "ham+pineapple" )
}

v.. SpicyPizzaBuilder::buildDough()
{
    m_pizza__setDough( "pan baked" )
}
v.. SpicyPizzaBuilder::buildSauce()
{
    m_pizza__setSauce( "hot" )
}
v.. SpicyPizzaBuilder::buildTopping()
{
    m_pizza__setTopping( "pepperoni+salami" )
}

v.. Cook::openPizza()
{
    m_pizzaBuilder__getPizza()__open()
}

v.. Cook::makePizza( PizzaBuilder* pb )
{
    m_pizzaBuilder _ pbsy.. p..
    m_pizzaBuilder__createNewPizzaProduct()
    m_pizzaBuilder__buildDough()
    m_pizzaBuilder__buildSauce()
    m_pizzaBuilder__buildTopping()
}

v.. ClientBuilder::run()
{
    Cook cooksy.. p..
    HawaiianPizzaBuilder hawaiianPizzaBuildersy.. p..
    SpicyPizzaBuilder spicyPizzaBuildersy.. p..

    cook.makePizza( &hawaiianPizzaBuilder )
    cook.openPizza()

    cook.makePizza( &spicyPizzaBuilder )
    cook.openPizza()
}
