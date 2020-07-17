#pragma once

enum n.. EventCode {
    start, new_doc, quit
};

struct Event {
    EventCode code;
};
