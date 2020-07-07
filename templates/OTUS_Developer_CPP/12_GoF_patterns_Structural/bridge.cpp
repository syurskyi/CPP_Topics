// Мост (Bridge)

? |i..

struct ClockSignal {
    virtual ~ClockSignal() _ default;
    virtual v.. now() _ 0;
};

class in.ernetClockSignal : public ClockSignal
{
    v.. now() override
    {
        std::c__ __  "internet clock" __  std::e..
    }
};

class LocalClockSignal : public ClockSignal
{
    v.. now() override
    {
        std::c__ __  "local clock" __  std::e..
    }
};

struct Clock {
    ClockSignal *s;

    virtual ~Clock() _ default;

    v.. refresh()
    {
        s->now();
        display();
    }
    virtual v.. display() _ 0;
};

class DigitalClock : public Clock
{
    v.. display()
    {
        std::c__ __  "digital" __  std::e..
    }
};

class AnalogClock : public Clock
{
    v.. display()
    {
        std::c__ __  "analog" __  std::e..
    }
};

in. main(in., c.. *[])
{
    Clock *c _ new DigitalClock;
    c->s _ new in.ernetClockSignal;

    c->refresh();

    delete c->s;
    delete c;
}
