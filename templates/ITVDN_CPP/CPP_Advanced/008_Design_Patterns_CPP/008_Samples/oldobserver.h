#ifndef OLDOBSERVER_H
_de.. OLDOBSERVER_H

? "meta_strategy.h"
? |i..
? <vector>

class Observer
{
public:
    Observer() = default;
    virtual ~Observer() = default;
    virtual v.. update( int value ) = 0;
};

class Subject
{
    int m_value;
    std::vector< Observer* > m_views;

public:
    v.. attach( Observer* obs );
    v.. set_val( int value );
    v.. notify();
};

class DivObserver : public Observer
{
    int m_div;

public:
    DivObserver( Subject* model, int div );

    v.. update( int v ) override;
};

class ModObserver : public Observer
{
    int m_mod;

public:
    ModObserver( Subject* model, int mod );
    v.. update( int v ) override;
};

class ClientOldObserver : public MetaStrategy
{
public:
    v.. run() override;
};

#endif // OLDOBSERVER_H
