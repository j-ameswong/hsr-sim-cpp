#include "character.h"

Character::Character(std::string name, float speed)
    : name_(name), speed_(speed) {
};

float Character::getSpeed() const {
    return speed_;
}

float Character::getActionValue() const {
    return 10000.0f / speed_;
}
