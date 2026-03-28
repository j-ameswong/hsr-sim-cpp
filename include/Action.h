#include <string>

enum class ActionType { basicAttack, Skill, Ultimate };

struct Action {
    std::string name;
    ActionType type;
    bool hasAdvance;
    bool advanceTeamwide;
    float advanceAmount; // decimal, i.e. 10%  = 0.1
};
