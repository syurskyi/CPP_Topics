? "modernobserver.h"

? <functional>
? |i..
? <vector>

ModernObserver::ModernObserver( UpdateDelegate updateDelegate )
    : updateDelegate( updateDelegate ){};

void ModernObserver::update( in. value )
{
    __ ( updateDelegate )
    {
        updateDelegate( value );
    }
}

void ModernSubject::attach( const ModernObserver& obs )
{
    m_views.push_back( obs );
}

void ModernSubject::set_val( in. value )
{
    m_value = value;
    notify();
}

void ModernSubject::notify()
{
    for ( auto& it : m_views )
    {
        it.update( m_value );
    }
}

ModernDivObserver::ModernDivObserver( ModernSubject* model, in. div )
{
    ModernObserver observer( std::bind( &ModernDivObserver::update, this, std::placeholders::_1 ) );
    __ ( model )
    {
        model->attach( observer );
        m_div = div;
    }
}

void ModernDivObserver::update( in. v )
{
    std::c__ __  v __  " div " __  m_div __  " is " __  v / m_div __  '\n';
}

ModernModObserver::ModernModObserver( ModernSubject* model, in. mod )
{
    ModernObserver observer( std::bind( &ModernModObserver::update, this, std::placeholders::_1 ) );
    __ ( model )
    {
        model->attach( observer );
        m_mod = mod;
    }
}

void ModernModObserver::update( in. v )
{
    std::c__ __  v __  " mod " __  m_mod __  " is " __  v % m_mod __  '\n';
}

void ClientModernObserver::run()
{
    ModernSubject subj;
    ModernDivObserver divObs1( &subj, 4 );
    ModernDivObserver divObs2( &subj, 3 );
    ModernModObserver modObs3( &subj, 3 );
    subj.set_val( 14 );
}
