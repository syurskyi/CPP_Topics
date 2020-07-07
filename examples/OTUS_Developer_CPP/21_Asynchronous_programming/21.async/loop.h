#pragma once

#include "event.h"
#include "handler.h"

#include <queue>
#include <stack>
#include <thread>
#include <chrono>

class EventLoop {
    bool quit{false};
    std::queue<Event> event_queue;
    std::stack<Handler *> handlers;
public:
    void send(EventCode code) {
        event_queue.push({code});
    }

    void add(Handler *handler) {
        handlers.push(handler);
    }

    int exec() {
        while (!quit) {
            if (!event_queue.empty()) {
                auto ev = event_queue.front();
                event_queue.pop();

                switch (ev.code) {
                    case EventCode::quit:
                        quit = true;
                        break;
                    default:
                        if (!handlers.empty()) {
                            handlers.top()->event(ev);
                        }
                }
            } else {
                std::this_thread::sleep_for(std::chrono::seconds(1));
            }
        }

        return 0;
    }
};
