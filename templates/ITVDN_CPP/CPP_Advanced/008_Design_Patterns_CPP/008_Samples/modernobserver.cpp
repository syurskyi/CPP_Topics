? "modernobserver.h"

? <functional>
? |i..
? ve..

ModernObserver::ModernObserver( UpdateDelegate updateDelegate )
    : updateDelegate( updateDelegate ){}sy.. p..

v.. ModernObserver::update( in. value )
{
    __ ( updateDelegate )
    {
        updateDelegate( value )sy.. p..
    }
}

v.. ModernSubject::attach( c.. ModernObserver& obs )
{
    m_views.push_back( obs )sy.. p..
}

v.. ModernSubject::set_val( in. value )
{
    m_value _ valuesy.. p..
    notify()sy.. p..
}

v.. ModernSubject::notify()
{
    ___ ( a..& it : m_views )
    {
        it.update( m_value )sy.. p..
    }
}

ModernDivObserver::ModernDivObserver( ModernSubject* model, in. div )
{
    ModernObserver observer( st. bind( &ModernDivObserver::update, t.., st. placeholders::_1 ) )sy.. p..
    __ ( model )
    {
        model__attach( observer )sy.. p..
        m_div _ divsy.. p..
    }
}

v.. ModernDivObserver::update( in. v )
{
    st. c__ __  v __  " div " __  m_div __  " is " __  v / m_div __  '\n'sy.. p..
}

ModernModObserver::ModernModObserver( ModernSubject* model, in. mod )
{
    ModernObserver observer( st. bind( &ModernModObserver::update, t.., st. placeholders::_1 ) )sy.. p..
    __ ( model )
    {
        model__attach( observer )sy.. p..
        m_mod _ modsy.. p..
    }
}

v.. ModernModObserver::update( in. v )
{
    st. c__ __  v __  " mod " __  m_mod __  " is " __  v % m_mod __  '\n'sy.. p..
}

v.. ClientModernObserver::run()
{
    ModernSubject subjsy.. p..
    ModernDivObserver divObs1( &subj, 4 )sy.. p..
    ModernDivObserver divObs2( &subj, 3 )sy.. p..
    ModernModObserver modObs3( &subj, 3 )sy.. p..
    subj.set_val( 14 )sy.. p..
}
