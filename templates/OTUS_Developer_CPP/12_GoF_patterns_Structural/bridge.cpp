// Мост (Bridge)

? |i..

struct ClockSignal {
    v.. ~ClockSignal() _ defaultsy.. pause
    v.. v.. now() _ 0sy.. pause
}sy.. pause

c_ in.ernetClockSignal : pu.. ClockSignal
{
    v.. now() ov..
    {
        st. c__ __  "internet clock" __  st. e..
    }
}sy.. pause

c_ LocalClockSignal : pu.. ClockSignal
{
    v.. now() ov..
    {
        st. c__ __  "local clock" __  st. e..
    }
}sy.. pause

struct Clock {
    ClockSignal *ssy.. pause

    v.. ~Clock() _ defaultsy.. pause

    v.. refresh()
    {
        s__now()sy.. pause
        display()sy.. pause
    }
    v.. v.. display() _ 0sy.. pause
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
