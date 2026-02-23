#include "turn.h"
#include <memory>

Turn::Turn(std::shared_ptr<Character> character, float currentActionValue)
    : character_(character), actionValue_() {
        auto actionValue_ = currentActionValue + character->getActionValue();
    }

float Turn::getActionValue() const {
    return actionValue_;
}
