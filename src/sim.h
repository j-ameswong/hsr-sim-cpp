#include <memory>
#include <queue>
#include <vector>
#include "character.h"
#include "turn.h"

class Sim {
    public:
        Sim(std::vector<std::shared_ptr<Character>> characters, float totalActionValue);
        void executeTurn();

    private:
        // Reverse comparator to go from lowest to highest AV
        struct TurnOrder {
            bool operator()(const std::shared_ptr<Turn> a,
                            const std::shared_ptr<Turn> b) const {
                return a->getActionValue() > b->getActionValue();
            }
        };

        std::priority_queue<
            std::shared_ptr<Turn>,
            std::vector<std::shared_ptr<Turn>>,
            TurnOrder
        > turnQueue_;

        std::vector<std::shared_ptr<Character>> characters_;

        float totalActionValue_;
};

