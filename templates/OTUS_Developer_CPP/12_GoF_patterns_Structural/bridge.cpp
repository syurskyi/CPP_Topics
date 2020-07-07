// Мост (Bridge)

? |i..

struct ClockSignal {
    virtual ~ClockSignal() = default;
    virtual void now() = 0;
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

    virtual ~Clock() = default;

    void refresh()
    {
        s->now();
        display();
    }
    virtual void display() = 0;
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
    Clock *c = new DigitalClock;
    c->s = new in.ernetClockSignal;

    c->refresh();

    delete c->s;
    delete c;
}
