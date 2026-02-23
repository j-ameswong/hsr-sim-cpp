#include "character.h"
#include <memory>

class Turn {
    public:
        Turn(std::shared_ptr<Character> character, float currentActionValue);
        float getActionValue() const;

    private:
        std::shared_ptr<Character> character_;
        float actionValue_;
};
