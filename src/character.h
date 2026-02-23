#pragma once
#include <string>

class Character {
public:
    Character(std::string name, float actionValue);

    float getSpeed() const;
    float getActionValue() const;

private:
    std::string name_;
    float speed_;
    // skill
};
