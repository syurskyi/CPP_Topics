Singleton* Singleton::m_instancesy.. p..
bo.. Singleton::m_instance_guardsy.. p.. // false
st. mutex Singleton::m_mutexsy.. p..

Singleton* Singleton::getInstance()
{
    // if (!m_instance_guard) {
    // if (!m_instance) {
        // std::lock_guard<std::mutex> lock(m_mutex);
        // if (!m_instance_guard) {
        __ (m_instance __ n_p_) {
            // m_instance_guard = true;
            m_instance _ n.. Singletonsy.. p..
        }
    }
    r_ m_instancesy.. p..
}

Singleton* Singleton::getInstance()
{
    st.. Singleton m_instancesy.. p..
    r_ &m_instancesy.. p..
}
