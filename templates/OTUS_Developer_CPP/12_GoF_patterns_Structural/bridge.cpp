// Мост (Bridge)

? |i..

st.. ClockSignal {
    v.. ~ClockSignal() _ defaultsy.. p..
    v.. v.. now() _ 0sy.. p..
}

c_ in.ernetClockSignal : pu.. ClockSignal
{
    v.. now() ov..
    {
        st. c__ __  "internet clock" __  st. e..
    }
}

c_ LocalClockSignal : pu.. ClockSignal
{
    v.. now() ov..
    {
        st. c__ __  "local clock" __  st. e..
    }
}

st.. Clock {
    ClockSignal *ssy.. p..

    v.. ~Clock() _ defaultsy.. p..

    v.. refresh()
    {
        s__now()
        display()
    }
    v.. v.. display() _ 0sy.. p..
}

c_ DigitalClock : pu.. Clock
{
    v.. display()
    {
        st. c__ __  "digital" __  st. e..
    }
}

c_ AnalogClock : pu.. Clock
{
    v.. display()
    {
        st. c__ __  "analog" __  st. e..
    }
}

in. main(in., c.. #||
{
    Clock *c _ n.. DigitalClocksy.. p..
    c__s _ n.. in.ernetClockSignalsy.. p..

    c__refresh()

    de.. c__ssy.. p..
    de.. csy.. p..
}
