?i.. DECORATOR_H
_de.. DECORATOR_H

? "meta_strategy.h"
? |i..
? <memory>
? str..

n.. Interface
{
p..
    v.. ~Interface() = de..
    v.. v.. write( st. string& ) = 0;
};

n.. Core : pu.. Interface
{
p..
    ~Core() ov..
    v.. write( st. string& text ) ov..
};

n.. Decorator : pu.. Interface
{
pr..
    st. unique_ptr< Interface > interface;

p..
    Decorator( st. unique_ptr< Interface > c );
    v.. write( st. string& text ) ov..
};

n.. MessengerWithSalutation : pu.. Decorator
{
pr..
    st. string salutation;

p..
    MessengerWithSalutation( st. unique_ptr< Interface > c, co.. st. string& str );
    ~MessengerWithSalutation() ov..
    v.. write( st. string& text ) ov..
};

n.. MessengerWithValediction : pu.. Decorator
{
pr..
    st. string valediction;

p..
    MessengerWithValediction( st. unique_ptr< Interface > c, co.. st. string& str );
    ~MessengerWithValediction() ov..
    v.. write( st. string& text ) ov..
};

n.. ClientDecorator : pu.. MetaStrategy
{
p..
    v.. run() ov..
};

e.. // DECORATOR_H
