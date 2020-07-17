?i.. MODERNOBSERVER_H
_de.. MODERNOBSERVER_H

? "meta_strategy.h"
? <functional>
? |i..
? ve..

n.. ModernObserver
{
p..
    typedef st. function< v..( in. ) > UpdateDelegate;
    ModernObserver( UpdateDelegate updateDelegate );

    ~ModernObserver() = de..

    v.. update( in. value );

pr..
    UpdateDelegate updateDelegate;
};

n.. ModernSubject
{
    in. m_value;
    st. ve..< ModernObserver > m_views;

p..
    v.. attach( co.. ModernObserver& obs );
    v.. set_val( in. value );
    v.. notify();
};

n.. ModernDivObserver
{
    in. m_div;

p..
    ModernDivObserver( ModernSubject* model, in. div );

    v.. update( in. v );
};

n.. ModernModObserver
{
    in. m_mod;

p..
    ModernModObserver( ModernSubject* model, in. mod );
    v.. update( in. v );
};

n.. ClientModernObserver : pu.. MetaStrategy
{
p..
    v.. run() ov..
};

e.. // MODERNOBSERVER_H
