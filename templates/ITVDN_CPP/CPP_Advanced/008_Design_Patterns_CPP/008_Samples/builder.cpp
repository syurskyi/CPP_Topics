? "builder.h"

? "meta_strategy.h"
? |i..
? <memory>
? <string>

u.. s..

void Pizza::setDough( const string& dough )
{
    m_dough = dough;
}

void Pizza::setSauce( const string& sauce )
{
    m_sauce = sauce;
}

void Pizza::setTopping( const string& topping )
{
    m_topping = topping;
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
    m_pizza = make_unique< Pizza >();
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
    m_pizzaBuilder = pb;
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
