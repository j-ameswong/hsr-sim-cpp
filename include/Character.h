#pragma once
#include <string>
#include <vector>
#include "Action.h"

struct Equipment {
    bool vonwacq = false;
    bool eagle = false;
    bool ddd = false;
    int dddLevel = 1;
};

struct Character {
    std::string name;
    float speed;
    Equipment equipment;
    std::vector<Action> actions;
};
