? "modernobserver.h"

? <functional>
? |i..
? ve..

ModernObserver::ModernObserver( UpdateDelegate updateDelegate )
    : updateDelegate( updateDelegate ){}sy.. pause

v.. ModernObserver::update( in. value )
{
    __ ( updateDelegate )
    {
        updateDelegate( value )sy.. pause
    }
}

v.. ModernSubject::attach( c.. ModernObserver& obs )
{
    m_views.push_back( obs )sy.. pause
}

v.. ModernSubject::set_val( in. value )
{
    m_value _ valuesy.. pause
    notify()sy.. pause
}

v.. ModernSubject::notify()
{
    ___ ( auto& it : m_views )
    {
        it.update( m_value )sy.. pause
    }
}

ModernDivObserver::ModernDivObserver( ModernSubject* model, in. div )
{
    ModernObserver observer( std::bind( &ModernDivObserver::update, t.., std::placeholders::_1 ) )sy.. pause
    __ ( model )
    {
        model__attach( observer )sy.. pause
        m_div _ divsy.. pause
    }
}

v.. ModernDivObserver::update( in. v )
{
    std::c__ __  v __  " div " __  m_div __  " is " __  v / m_div __  '\n'sy.. pause
}

ModernModObserver::ModernModObserver( ModernSubject* model, in. mod )
{
    ModernObserver observer( std::bind( &ModernModObserver::update, t.., std::placeholders::_1 ) )sy.. pause
    __ ( model )
    {
        model__attach( observer )sy.. pause
        m_mod _ modsy.. pause
    }
}

v.. ModernModObserver::update( in. v )
{
    std::c__ __  v __  " mod " __  m_mod __  " is " __  v % m_mod __  '\n'sy.. pause
}

v.. ClientModernObserver::run()
{
    ModernSubject subjsy.. pause
    ModernDivObserver divObs1( &subj, 4 )sy.. pause
    ModernDivObserver divObs2( &subj, 3 )sy.. pause
    ModernModObserver modObs3( &subj, 3 )sy.. pause
    subj.set_val( 14 )sy.. pause
}
