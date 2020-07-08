// Мост (Bridge)

? |i..

struct ClockSignal {
    virtual ~ClockSignal() _ defaultsy.. pause
    virtual v.. now() _ 0sy.. pause
}sy.. pause

c_ in.ernetClockSignal : public ClockSignal
{
    v.. now() override
    {
        std::c__ __  "internet clock" __  std::e..
    }
}sy.. pause

c_ LocalClockSignal : public ClockSignal
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
        s__now()sy.. pause
        display()sy.. pause
    }
    virtual v.. display() _ 0sy.. pause
}sy.. pause

c_ DigitalClock : public Clock
{
    v.. display()
    {
        std::c__ __  "digital" __  std::e..
    }
}sy.. pause

c_ AnalogClock : public Clock
{
    v.. display()
    {
        std::c__ __  "analog" __  std::e..
    }
}sy.. pause

in. main(in., c.. *[])
{
    Clock *c _ n.. DigitalClocksy.. pause
    c__s _ n.. in.ernetClockSignalsy.. pause

    c__refresh()sy.. pause

    delete c__ssy.. pause
    delete csy.. pause
}
