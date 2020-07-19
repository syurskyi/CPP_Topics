? "oldobserver.h"

? |i..
? ve..

v.. Subject::attach( Observer* obs )
{
    m_views.push_back( obs )sy.. p..
}

v.. Subject::set_val( in. value )
{
    m_value _ valuesy.. p..
    notify()sy.. p..
}

v.. Subject::notify()
{
    ___ ( in. i _ 0sy.. p.. i < m_views.s..sy.. p.. ++i )
    {
        m_views[ i ]__update( m_value )sy.. p..
    }
}

DivObserver::DivObserver( Subject* model, in. div )
{
    __ ( model )
    {
        model__attach( t.. )sy.. p..
        m_div _ divsy.. p..
    }
}

v.. DivObserver::update( in. v )
{
    st. c__ __  v __  " div " __  m_div __  " is " __  v / m_div __  '\n'sy.. p..
}

ModObserver::ModObserver( Subject* model, in. mod )
{
    __ ( model )
    {
        model__attach( t.. )sy.. p..
        m_mod _ modsy.. p..
    }
}

v.. ModObserver::update( in. v )
{
    st. c__ __  v __  " mod " __  m_mod __  " is " __  v % m_mod __  '\n'sy.. p..
}

v.. ClientOldObserver::run()
{
    Subject subjsy.. p..
    DivObserver divObs1( &subj, 4 )sy.. p..
    DivObserver divObs2( &subj, 3 )sy.. p..
    ModObserver modObs3( &subj, 3 )sy.. p..
    subj.set_val( 14 )sy.. p..
}
