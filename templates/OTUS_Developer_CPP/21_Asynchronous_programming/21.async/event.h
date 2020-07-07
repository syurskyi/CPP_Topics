#pragma once

enum class EventCode {
    start, new_doc, quit
};

struct Event {
    EventCode code;
};
