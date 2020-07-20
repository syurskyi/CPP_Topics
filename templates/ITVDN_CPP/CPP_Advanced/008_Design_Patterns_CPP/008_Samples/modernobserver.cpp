? "modernobserver.h"

? <functional>
? |i..
? ve..

ModernObserver::ModernObserver( UpdateDelegate updateDelegate )
    : updateDelegate( updateDelegate ){}

v.. ModernObserver::update( in. value )
{
    __ ( updateDelegate )
    {
        updateDelegate( value )
    }
}

v.. ModernSubject::attach( c.. ModernObserver& obs )
{
    m_views.push_back( obs )
}

v.. ModernSubject::set_val( in. value )
{
    m_value _ valuesy.. p..
    notify()
}

v.. ModernSubject::notify()
{
    ___ ( a..& it : m_views )
    {
        it.update( m_value )
    }
}

ModernDivObserver::ModernDivObserver( ModernSubject* model, in. div )
{
    ModernObserver observer( st. bind( &ModernDivObserver::update, t.., st. placeholders::_1 ) )
    __ ( model )
    {
        model__attach( observer )
        m_div _ divsy.. p..
    }
}

v.. ModernDivObserver::update( in. v )
{
    st. c__ __  v __  " div " __  m_div __  " is " __  v / m_div __  '\n'
}

ModernModObserver::ModernModObserver( ModernSubject* model, in. mod )
{
    ModernObserver observer( st. bind( &ModernModObserver::update, t.., st. placeholders::_1 ) )
    __ ( model )
    {
        model__attach( observer )
        m_mod _ modsy.. p..
    }
}

v.. ModernModObserver::update( in. v )
{
    st. c__ __  v __  " mod " __  m_mod __  " is " __  v % m_mod __  '\n'
}

v.. ClientModernObserver::run()
{
    ModernSubject subjsy.. p..
    ModernDivObserver divObs1( &subj, 4 )
    ModernDivObserver divObs2( &subj, 3 )
    ModernModObserver modObs3( &subj, 3 )
    subj.set_val( 14 )
}
