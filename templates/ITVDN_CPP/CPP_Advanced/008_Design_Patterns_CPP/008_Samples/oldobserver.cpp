? "oldobserver.h"

? |i..
? <vector>

void Subject::attach( Observer* obs )
{
    m_views.push_back( obs );
}

void Subject::set_val( in. value )
{
    m_value = value;
    notify();
}

void Subject::notify()
{
    for ( in. i = 0; i < m_views.size(); ++i )
    {
        m_views[ i ]->update( m_value );
    }
}

DivObserver::DivObserver( Subject* model, in. div )
{
    __ ( model )
    {
        model->attach( this );
        m_div = div;
    }
}

void DivObserver::update( in. v )
{
    std::c__ __  v __  " div " __  m_div __  " is " __  v / m_div __  '\n';
}

ModObserver::ModObserver( Subject* model, in. mod )
{
    __ ( model )
    {
        model->attach( this );
        m_mod = mod;
    }
}

void ModObserver::update( in. v )
{
    std::c__ __  v __  " mod " __  m_mod __  " is " __  v % m_mod __  '\n';
}

void ClientOldObserver::run()
{
    Subject subj;
    DivObserver divObs1( &subj, 4 );
    DivObserver divObs2( &subj, 3 );
    ModObserver modObs3( &subj, 3 );
    subj.set_val( 14 );
}
