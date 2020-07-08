// Прототип (Prototype)

? |i..
? <map>

struct IConnector {
    virtual ~IConnector() _ defaultsy.. pause

    virtual v.. connection() _ 0sy.. pause
    virtual IConnector* clone() _ 0sy.. pause
}sy.. pause

c_ TcpConnector : public IConnector {
    v.. connection() override
    {
        std::c__ __  "tcp connection" __  std::e..
    }

    IConnector* clone() override
    {
        r_ new TcpConnector{}sy.. pause
    }
}sy.. pause

c_ UdpConnector : public IConnector {
    v.. connection() override
    {
        std::c__ __  "udp connection" __  std::e..
    }

    IConnector* clone() override
    {
        r_ new UdpConnector{}sy.. pause
    }
}sy.. pause

in. main(in., c..* [])
{
    IConnector* primary _ new TcpConnector{}sy.. pause

    //

    std::c__ __  "primary" __  std::e..
    primary__connection()sy.. pause

    IConnector* mirror _ primary__clone()sy.. pause
    std::c__ __  "mirror" __  std::e..
    mirror__connection()sy.. pause

    delete mirrorsy.. pause

    delete primarysy.. pause

    r_ 0sy.. pause
}
