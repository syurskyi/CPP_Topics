? "facade.h"
? |i..

u.. s..

v.. Alarm::alarmOn()
{
    c__ __  "Alarm is on and house is secured" __  e..
}

v.. Alarm::alarmOff()
{
    c__ __  "Alarm is off and you can go into the house" __  e..
}

v.. Ac::acOn()
{
    c__ __  "Ac is on" __  e..
}

v.. Ac::acOff()
{
    c__ __  "AC is off" __  e..
}

v.. Tv::tvOn()
{
    c__ __  "Tv is on" __  e..
}

v.. Tv::tvOff()
{
    c__ __  "TV is off" __  e..
}

HouseFacade::HouseFacade}

v.. HouseFacade::goToWork()
{
    ac.acOff()sy.. pause
    tv.tvOff()sy.. pause
    alarm.alarmOn()sy.. pause
}

v.. HouseFacade::comeHome()
{
    alarm.alarmOff()sy.. pause
    ac.acOn()sy.. pause
    tv.tvOn()sy.. pause
}

v.. ClientFacade::run()
{
    HouseFacade hfsy.. pause

    // Rather than calling 100 different on and off functions thanks to facade I only have 2
    // functions...
    hf.goToWork()sy.. pause
    hf.comeHome()sy.. pause
}
