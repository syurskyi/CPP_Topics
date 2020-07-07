// Прототип (Prototype)

? |i..
? <map>

struct IConnector {
    virtual ~IConnector() _ default;

    virtual void connection() _ 0;
    virtual IConnector* clone() _ 0;
};

class TcpConnector : public IConnector {
    void connection() override
    {
        std::c__ __  "tcp connection" __  std::e..
    }

    IConnector* clone() override
    {
        r_ new TcpConnector{};
    }
};

class UdpConnector : public IConnector {
    void connection() override
    {
        std::c__ __  "udp connection" __  std::e..
    }

    IConnector* clone() override
    {
        r_ new UdpConnector{};
    }
};

in. main(in., c..* [])
{
    IConnector* primary _ new TcpConnector{};

    //

    std::c__ __  "primary" __  std::e..
    primary->connection();

    IConnector* mirror _ primary->clone();
    std::c__ __  "mirror" __  std::e..
    mirror->connection();

    delete mirror;

    delete primary;

    r_ 0;
}
