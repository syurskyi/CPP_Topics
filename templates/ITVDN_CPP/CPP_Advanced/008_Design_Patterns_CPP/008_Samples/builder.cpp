? "builder.h"

? "meta_strategy.h"
? |i..
? <memory>
? |s..

u.. s..

void Pizza::setDough( const s..& dough )
{
    m_dough _ dough;
}

void Pizza::setSauce( const s..& sauce )
{
    m_sauce _ sauce;
}

void Pizza::setTopping( const s..& topping )
{
    m_topping _ topping;
}

void Pizza::open() const
{
    c__ __  "Pizza with " __  m_dough __  " dough, " __  m_sauce __  " sauce and " __  m_topping
         __  " topping. Mmm." __  e..
}

Pizza* PizzaBuilder::getPizza()
{
    r_ m_pizza.release();
}

void PizzaBuilder::createNewPizzaProduct()
{
    m_pizza _ make_unique< Pizza >();
}

void HawaiianPizzaBuilder::buildDough()
{
    m_pizza->setDough( "cross" );
}
void HawaiianPizzaBuilder::buildSauce()
{
    m_pizza->setSauce( "mild" );
}
void HawaiianPizzaBuilder::buildTopping()
{
    m_pizza->setTopping( "ham+pineapple" );
}

void SpicyPizzaBuilder::buildDough()
{
    m_pizza->setDough( "pan baked" );
}
void SpicyPizzaBuilder::buildSauce()
{
    m_pizza->setSauce( "hot" );
}
void SpicyPizzaBuilder::buildTopping()
{
    m_pizza->setTopping( "pepperoni+salami" );
}

void Cook::openPizza()
{
    m_pizzaBuilder->getPizza()->open();
}

void Cook::makePizza( PizzaBuilder* pb )
{
    m_pizzaBuilder _ pb;
    m_pizzaBuilder->createNewPizzaProduct();
    m_pizzaBuilder->buildDough();
    m_pizzaBuilder->buildSauce();
    m_pizzaBuilder->buildTopping();
}

void ClientBuilder::run()
{
    Cook cook;
    HawaiianPizzaBuilder hawaiianPizzaBuilder;
    SpicyPizzaBuilder spicyPizzaBuilder;

    cook.makePizza( &hawaiianPizzaBuilder );
    cook.openPizza();

    cook.makePizza( &spicyPizzaBuilder );
    cook.openPizza();
}
