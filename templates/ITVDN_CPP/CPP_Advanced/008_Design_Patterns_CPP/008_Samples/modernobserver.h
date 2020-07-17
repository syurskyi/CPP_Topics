#ifndef MODERNOBSERVER_H
_de.. MODERNOBSERVER_H

? "meta_strategy.h"
? <functional>
? |i..
? <vector>

class ModernObserver
{
public:
    typedef std::function< v..( int ) > UpdateDelegate;
    ModernObserver( UpdateDelegate updateDelegate );

    ~ModernObserver() = default;

    v.. update( int value );

protected:
    UpdateDelegate updateDelegate;
};

class ModernSubject
{
    int m_value;
    std::vector< ModernObserver > m_views;

public:
    v.. attach( const ModernObserver& obs );
    v.. set_val( int value );
    v.. notify();
};

class ModernDivObserver
{
    int m_div;

public:
    ModernDivObserver( ModernSubject* model, int div );

    v.. update( int v );
};

class ModernModObserver
{
    int m_mod;

public:
    ModernModObserver( ModernSubject* model, int mod );
    v.. update( int v );
};

class ClientModernObserver : public MetaStrategy
{
public:
    v.. run() override;
};

#endif // MODERNOBSERVER_H
