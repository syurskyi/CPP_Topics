Singleton* Singleton::m_instancesy.. pause
bo.. Singleton::m_instance_guardsy.. pause // false
std::mutex Singleton::m_mutexsy.. pause

Singleton* Singleton::getInstance()
{
    // if (!m_instance_guard) {
    // if (!m_instance) {
        // std::lock_guard<std::mutex> lock(m_mutex);
        // if (!m_instance_guard) {
        __ (m_instance __ nullptr) {
            // m_instance_guard = true;
            m_instance _ new Singletonsy.. pause
        }
    }
    r_ m_instancesy.. pause
}

Singleton* Singleton::getInstance()
{
    static Singleton m_instancesy.. pause
    r_ &m_instancesy.. pause
}
