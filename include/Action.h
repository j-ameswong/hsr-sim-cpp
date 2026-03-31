#pragma once
#include <string>

enum class ActionType { BasicAtk, Skill, Ultimate };

struct Action {
    std::string name;
    ActionType type;
    bool hasAdvance;
    bool advanceTeamwide;
    float advanceAmount; // decimal, i.e. 10%  = 0.1
};
