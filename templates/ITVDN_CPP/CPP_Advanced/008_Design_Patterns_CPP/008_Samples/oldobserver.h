?i.. OLDOBSERVER_H
_de.. OLDOBSERVER_H

? "meta_strategy.h"
? |i..
? <vector>

n.. Observer
{
p..
    Observer() = default;
    v.. ~Observer() = default;
    v.. v.. update( int value ) = 0;
};

n.. Subject
{
    int m_value;
    std::vector< Observer* > m_views;

p..
    v.. attach( Observer* obs );
    v.. set_val( int value );
    v.. notify();
};

n.. DivObserver : public Observer
{
    int m_div;

p..
    DivObserver( Subject* model, int div );

    v.. update( int v ) override;
};

n.. ModObserver : public Observer
{
    int m_mod;

p..
    ModObserver( Subject* model, int mod );
    v.. update( int v ) override;
};

n.. ClientOldObserver : public MetaStrategy
{
p..
    v.. run() override;
};

e.. // OLDOBSERVER_H
