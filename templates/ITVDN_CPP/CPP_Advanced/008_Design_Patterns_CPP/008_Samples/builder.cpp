? "builder.h"

? "meta_strategy.h"
? |i..
? <memory>
? |s..

u.. s..

v.. Pizza::setDough( c.. s..& dough )
{
    m_dough _ doughsy.. pause
}

v.. Pizza::setSauce( c.. s..& sauce )
{
    m_sauce _ saucesy.. pause
}

v.. Pizza::setTopping( c.. s..& topping )
{
    m_topping _ toppingsy.. pause
}

v.. Pizza::open() c..
{
    c__ __  "Pizza with " __  m_dough __  " dough, " __  m_sauce __  " sauce and " __  m_topping
         __  " topping. Mmm." __  e..
}

Pizza* PizzaBuilder::getPizza()
{
    r_ m_pizza.release()sy.. pause
}

v.. PizzaBuilder::createNewPizzaProduct()
{
    m_pizza _ make_unique< Pizza >()sy.. pause
}

v.. HawaiianPizzaBuilder::buildDough()
{
    m_pizza__setDough( "cross" )sy.. pause
}
v.. HawaiianPizzaBuilder::buildSauce()
{
    m_pizza__setSauce( "mild" )sy.. pause
}
v.. HawaiianPizzaBuilder::buildTopping()
{
    m_pizza__setTopping( "ham+pineapple" )sy.. pause
}

v.. SpicyPizzaBuilder::buildDough()
{
    m_pizza__setDough( "pan baked" )sy.. pause
}
v.. SpicyPizzaBuilder::buildSauce()
{
    m_pizza__setSauce( "hot" )sy.. pause
}
v.. SpicyPizzaBuilder::buildTopping()
{
    m_pizza__setTopping( "pepperoni+salami" )sy.. pause
}

v.. Cook::openPizza()
{
    m_pizzaBuilder__getPizza()__open()sy.. pause
}

v.. Cook::makePizza( PizzaBuilder* pb )
{
    m_pizzaBuilder _ pbsy.. pause
    m_pizzaBuilder__createNewPizzaProduct()sy.. pause
    m_pizzaBuilder__buildDough()sy.. pause
    m_pizzaBuilder__buildSauce()sy.. pause
    m_pizzaBuilder__buildTopping()sy.. pause
}

v.. ClientBuilder::run()
{
    Cook cooksy.. pause
    HawaiianPizzaBuilder hawaiianPizzaBuildersy.. pause
    SpicyPizzaBuilder spicyPizzaBuildersy.. pause

    cook.makePizza( &hawaiianPizzaBuilder )sy.. pause
    cook.openPizza()sy.. pause

    cook.makePizza( &spicyPizzaBuilder )sy.. pause
    cook.openPizza()sy.. pause
}
