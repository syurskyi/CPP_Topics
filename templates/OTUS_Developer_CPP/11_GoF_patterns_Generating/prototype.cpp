// Прототип (Prototype)

? |i..
? <map>

st.. IConnector {
    v.. ~IConnector() _ defaultsy.. p..

    v.. v.. connection() _ 0sy.. p..
    v.. IConnector* clone() _ 0sy.. p..
}

c_ TcpConnector : pu.. IConnector {
    v.. connection() ov..
    {
        st. c__ __  "tcp connection" __  st. e..
    }

    IConnector* clone() ov..
    {
        r_ n.. TcpConnector{}
    }
}

c_ UdpConnector : pu.. IConnector {
    v.. connection() ov..
    {
        st. c__ __  "udp connection" __  st. e..
    }

    IConnector* clone() ov..
    {
        r_ n.. UdpConnector{}
    }
}

in. main(in., c..* [])
{
    IConnector* primary _ n.. TcpConnector{}

    //

    st. c__ __  "primary" __  st. e..
    primary__connection()

    IConnector* mirror _ primary__clone()
    st. c__ __  "mirror" __  st. e..
    mirror__connection()

    de.. mirrorsy.. p..

    de.. primarysy.. p..

    r_ 0sy.. p..
}
