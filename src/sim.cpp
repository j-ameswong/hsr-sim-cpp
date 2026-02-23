#include "sim.h"
#include <memory>

Sim::Sim(std::vector<std::shared_ptr<Character>> characters, float totalActionValue)
    : characters_(characters), totalActionValue_(totalActionValue) {
        for (const std::shared_ptr<Character> character : characters) {
            float av = character->getActionValue();
            turnQueue_.push(std::make_shared<Turn>(character, av));
        }
}
