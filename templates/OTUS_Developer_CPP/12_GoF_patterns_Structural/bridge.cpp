// Мост (Bridge)

? |i..

struct ClockSignal {
    virtual ~ClockSignal() _ defaultsy.. pause
    virtual v.. now() _ 0sy.. pause
}sy.. pause

c_ in.ernetClockSignal : pu.. ClockSignal
{
    v.. now() override
    {
        st. c__ __  "internet clock" __  st. e..
    }
}sy.. pause

c_ LocalClockSignal : pu.. ClockSignal
{
    v.. now() override
    {
        st. c__ __  "local clock" __  st. e..
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

c_ DigitalClock : pu.. Clock
{
    v.. display()
    {
        st. c__ __  "digital" __  st. e..
    }
}sy.. pause

c_ AnalogClock : pu.. Clock
{
    v.. display()
    {
        st. c__ __  "analog" __  st. e..
    }
}sy.. pause

in. main(in., c.. *[])
{
    Clock *c _ n.. DigitalClocksy.. pause
    c__s _ n.. in.ernetClockSignalsy.. pause

    c__refresh()sy.. pause

    de.. c__ssy.. pause
    de.. csy.. pause
}
