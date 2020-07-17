// Прототип (Prototype)

? |i..
? <map>

struct IConnector {
    virtual ~IConnector() _ defaultsy.. pause

    virtual v.. connection() _ 0sy.. pause
    virtual IConnector* clone() _ 0sy.. pause
}sy.. pause

c_ TcpConnector : pu.. IConnector {
    v.. connection() override
    {
        st. c__ __  "tcp connection" __  st. e..
    }

    IConnector* clone() override
    {
        r_ n.. TcpConnector{}sy.. pause
    }
}sy.. pause

c_ UdpConnector : pu.. IConnector {
    v.. connection() override
    {
        st. c__ __  "udp connection" __  st. e..
    }

    IConnector* clone() override
    {
        r_ n.. UdpConnector{}sy.. pause
    }
}sy.. pause

in. main(in., c..* [])
{
    IConnector* primary _ n.. TcpConnector{}sy.. pause

    //

    st. c__ __  "primary" __  st. e..
    primary__connection()sy.. pause

    IConnector* mirror _ primary__clone()sy.. pause
    st. c__ __  "mirror" __  st. e..
    mirror__connection()sy.. pause

    de.. mirrorsy.. pause

    de.. primarysy.. pause

    r_ 0sy.. pause
}
