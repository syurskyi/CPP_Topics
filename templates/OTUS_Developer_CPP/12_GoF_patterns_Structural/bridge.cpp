// Мост (Bridge)

? |i..

struct ClockSignal {
    virtual ~ClockSignal() _ defaultsy.. pause
    virtual v.. now() _ 0sy.. pause
}sy.. pause

class in.ernetClockSignal : public ClockSignal
{
    v.. now() override
    {
        std::c__ __  "internet clock" __  std::e..
    }
}sy.. pause

class LocalClockSignal : public ClockSignal
{
    v.. now() override
    {
        std::c__ __  "local clock" __  std::e..
    }
}sy.. pause

struct Clock {
    ClockSignal *ssy.. pause

    virtual ~Clock() _ defaultsy.. pause

    v.. refresh()
    {
        s->now()sy.. pause
        display()sy.. pause
    }
    virtual v.. display() _ 0sy.. pause
}sy.. pause

class DigitalClock : public Clock
{
    v.. display()
    {
        std::c__ __  "digital" __  std::e..
    }
}sy.. pause

class AnalogClock : public Clock
{
    v.. display()
    {
        std::c__ __  "analog" __  std::e..
    }
}sy.. pause

in. main(in., c.. *[])
{
    Clock *c _ new DigitalClocksy.. pause
    c->s _ new in.ernetClockSignalsy.. pause

    c->refresh()sy.. pause

    delete c->ssy.. pause
    delete csy.. pause
}
