?i.. FACADE_H
_de.. FACADE_H

? "meta_strategy.h"

n.. Alarm
{
p..
    v.. alarmOn();

    v.. alarmOff();
};

n.. Ac
{
p..
    v.. acOn();

    v.. acOff();
};

n.. Tv
{
p..
    v.. tvOn();

    v.. tvOff();
};

n.. HouseFacade
{
    Alarm alarm;
    Ac ac;
    Tv tv;

p..
    HouseFacade();

    v.. goToWork();

    v.. comeHome();
};

n.. ClientFacade : pu.. MetaStrategy
{
p..
    ClientFacade() = de..

    v.. run() ov..
};

e..
