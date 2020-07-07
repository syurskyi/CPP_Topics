#pragma once

#include "event.h"

class Handler {
public:
    virtual void event(Event &) = 0;
};
