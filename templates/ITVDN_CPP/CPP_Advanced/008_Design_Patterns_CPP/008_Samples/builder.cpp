? "builder.h"

? "meta_strategy.h"
? |i..
? <memory>
? |s..

u.. s..

v.. Pizza::setDough( const s..& dough )
{
    m_dough _ dough;
}

v.. Pizza::setSauce( const s..& sauce )
{
    m_sauce _ sauce;
}

v.. Pizza::setTopping( const s..& topping )
{
    m_topping _ topping;
}

v.. Pizza::open() const
{
    c__ __  "Pizza with " __  m_dough __  " dough, " __  m_sauce __  " sauce and " __  m_topping
         __  " topping. Mmm." __  e..
}

Pizza* PizzaBuilder::getPizza()
{
    r_ m_pizza.release();
}

v.. PizzaBuilder::createNewPizzaProduct()
{
    m_pizza _ make_unique< Pizza >();
}

v.. HawaiianPizzaBuilder::buildDough()
{
    m_pizza->setDough( "cross" );
}
v.. HawaiianPizzaBuilder::buildSauce()
{
    m_pizza->setSauce( "mild" );
}
v.. HawaiianPizzaBuilder::buildTopping()
{
    m_pizza->setTopping( "ham+pineapple" );
}

v.. SpicyPizzaBuilder::buildDough()
{
    m_pizza->setDough( "pan baked" );
}
v.. SpicyPizzaBuilder::buildSauce()
{
    m_pizza->setSauce( "hot" );
}
v.. SpicyPizzaBuilder::buildTopping()
{
    m_pizza->setTopping( "pepperoni+salami" );
}

v.. Cook::openPizza()
{
    m_pizzaBuilder->getPizza()->open();
}

v.. Cook::makePizza( PizzaBuilder* pb )
{
    m_pizzaBuilder _ pb;
    m_pizzaBuilder->createNewPizzaProduct();
    m_pizzaBuilder->buildDough();
    m_pizzaBuilder->buildSauce();
    m_pizzaBuilder->buildTopping();
}

v.. ClientBuilder::run()
{
    Cook cook;
    HawaiianPizzaBuilder hawaiianPizzaBuilder;
    SpicyPizzaBuilder spicyPizzaBuilder;

    cook.makePizza( &hawaiianPizzaBuilder );
    cook.openPizza();

    cook.makePizza( &spicyPizzaBuilder );
    cook.openPizza();
}
