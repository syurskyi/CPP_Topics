?i.. OLDOBSERVER_H
_de.. OLDOBSERVER_H

? "meta_strategy.h"
? |i..
? ve..

n.. Observer
{
p..
    Observer() = de..
    v.. ~Observer() = de..
    v.. v.. update( in. value ) = 0;
};

n.. Subject
{
    in. m_value;
    st. ve..< Observer* > m_views;

p..
    v.. attach( Observer* obs );
    v.. set_val( in. value );
    v.. notify();
};

n.. DivObserver : pu.. Observer
{
    in. m_div;

p..
    DivObserver( Subject* model, in. div );

    v.. update( in. v ) ov..
};

n.. ModObserver : pu.. Observer
{
    in. m_mod;

p..
    ModObserver( Subject* model, in. mod );
    v.. update( in. v ) ov..
};

n.. ClientOldObserver : pu.. MetaStrategy
{
p..
    v.. run() ov..
};

e.. // OLDOBSERVER_H
