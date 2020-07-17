?i.. MODERNOBSERVER_H
_de.. MODERNOBSERVER_H

? "meta_strategy.h"
? <functional>
? |i..
? <vector>

n.. ModernObserver
{
p..
    typedef std::function< v..( int ) > UpdateDelegate;
    ModernObserver( UpdateDelegate updateDelegate );

    ~ModernObserver() = default;

    v.. update( int value );

protected:
    UpdateDelegate updateDelegate;
};

n.. ModernSubject
{
    int m_value;
    std::vector< ModernObserver > m_views;

p..
    v.. attach( const ModernObserver& obs );
    v.. set_val( int value );
    v.. notify();
};

n.. ModernDivObserver
{
    int m_div;

p..
    ModernDivObserver( ModernSubject* model, int div );

    v.. update( int v );
};

n.. ModernModObserver
{
    int m_mod;

p..
    ModernModObserver( ModernSubject* model, int mod );
    v.. update( int v );
};

n.. ClientModernObserver : public MetaStrategy
{
p..
    v.. run() override;
};

e.. // MODERNOBSERVER_H
