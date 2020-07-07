? "oldobserver.h"

? |i..
? <vector>

v.. Subject::attach( Observer* obs )
{
    m_views.push_back( obs );
}

v.. Subject::set_val( in. value )
{
    m_value _ value;
    notify();
}

v.. Subject::notify()
{
    ___ ( in. i _ 0; i < m_views.size(); ++i )
    {
        m_views[ i ]->update( m_value );
    }
}

DivObserver::DivObserver( Subject* model, in. div )
{
    __ ( model )
    {
        model->attach( this );
        m_div _ div;
    }
}

v.. DivObserver::update( in. v )
{
    std::c__ __  v __  " div " __  m_div __  " is " __  v / m_div __  '\n';
}

ModObserver::ModObserver( Subject* model, in. mod )
{
    __ ( model )
    {
        model->attach( this );
        m_mod _ mod;
    }
}

v.. ModObserver::update( in. v )
{
    std::c__ __  v __  " mod " __  m_mod __  " is " __  v % m_mod __  '\n';
}

v.. ClientOldObserver::run()
{
    Subject subj;
    DivObserver divObs1( &subj, 4 );
    DivObserver divObs2( &subj, 3 );
    ModObserver modObs3( &subj, 3 );
    subj.set_val( 14 );
}
