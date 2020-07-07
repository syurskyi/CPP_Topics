// Мост (Bridge)

? |i..

struct ClockSignal {
    virtual ~ClockSignal() _ default;
    virtual void now() _ 0;
};

class in.ernetClockSignal : public ClockSignal
{
    void now() override
    {
        std::c__ __  "internet clock" __  std::e..
    }
};

class LocalClockSignal : public ClockSignal
{
    void now() override
    {
        std::c__ __  "local clock" __  std::e..
    }
};

struct Clock {
    ClockSignal *s;

    virtual ~Clock() _ default;

    void refresh()
    {
        s->now();
        display();
    }
    virtual void display() _ 0;
};

class DigitalClock : public Clock
{
    void display()
    {
        std::c__ __  "digital" __  std::e..
    }
};

class AnalogClock : public Clock
{
    void display()
    {
        std::c__ __  "analog" __  std::e..
    }
};

in. main(in., char *[])
{
    Clock *c _ new DigitalClock;
    c->s _ new in.ernetClockSignal;

    c->refresh();

    delete c->s;
    delete c;
}
