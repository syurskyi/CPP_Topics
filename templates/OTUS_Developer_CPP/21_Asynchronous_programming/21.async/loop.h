#pragma once

? "event.h"
? "handler.h"

? <queue>
? <stack>
? <thread>
? <chrono>

n.. EventLoop {
    bo.. quit{false};
    st. queue<Event> event_queue;
    st. stack<Handler *> handlers;
p..
    v.. send(EventCode code) {
        event_queue.push({code});
    }

    v.. add(Handler *handler) {
        handlers.push(handler);
    }

    in. exec() {
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
                st. this_thread::sleep_for(st. chrono::seconds(1));
            }
        }

        return 0;
    }
};
