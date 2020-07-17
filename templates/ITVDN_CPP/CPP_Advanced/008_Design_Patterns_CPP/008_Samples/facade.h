#ifndef FACADE_H
_de.. FACADE_H

? "meta_strategy.h"

class Alarm
{
public:
    v.. alarmOn();

    v.. alarmOff();
};

class Ac
{
public:
    v.. acOn();

    v.. acOff();
};

class Tv
{
public:
    v.. tvOn();

    v.. tvOff();
};

class HouseFacade
{
    Alarm alarm;
    Ac ac;
    Tv tv;

public:
    HouseFacade();

    v.. goToWork();

    v.. comeHome();
};

class ClientFacade : public MetaStrategy
{
public:
    ClientFacade() = default;

    v.. run() override;
};

#endif
