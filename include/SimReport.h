#include <string>
#include <vector>
#include "Action.h"

struct AVChange {
    std::string characterName;
    float before;
    float after;
    std::string reason;  // e.g. "eagle", "DDD", "skill advance"
};

struct TurnResult {
    float av;
    std::string characterName;
    Action actionTaken;
    std::vector<AVChange> avChanges;
};

struct SimReport {
    std::vector<TurnResult> turns;
};

