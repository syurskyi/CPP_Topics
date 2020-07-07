? "oldobserver.h"

? |i..
? <vector>

v.. Subject::attach( Observer* obs )
{
    m_views.push_back( obs )sy.. pause
}

v.. Subject::set_val( in. value )
{
    m_value _ valuesy.. pause
    notify()sy.. pause
}

v.. Subject::notify()
{
    ___ ( in. i _ 0sy.. pause i < m_views.size()sy.. pause ++i )
    {
        m_views[ i ]->update( m_value )sy.. pause
    }
}

DivObserver::DivObserver( Subject* model, in. div )
{
    __ ( model )
    {
        model->attach( this )sy.. pause
        m_div _ divsy.. pause
    }
}

v.. DivObserver::update( in. v )
{
    std::c__ __  v __  " div " __  m_div __  " is " __  v / m_div __  '\n'sy.. pause
}

ModObserver::ModObserver( Subject* model, in. mod )
{
    __ ( model )
    {
        model->attach( this )sy.. pause
        m_mod _ modsy.. pause
    }
}

v.. ModObserver::update( in. v )
{
    std::c__ __  v __  " mod " __  m_mod __  " is " __  v % m_mod __  '\n'sy.. pause
}

v.. ClientOldObserver::run()
{
    Subject subjsy.. pause
    DivObserver divObs1( &subj, 4 )sy.. pause
    DivObserver divObs2( &subj, 3 )sy.. pause
    ModObserver modObs3( &subj, 3 )sy.. pause
    subj.set_val( 14 )sy.. pause
}
