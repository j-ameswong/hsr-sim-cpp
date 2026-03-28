#include <memory>
#include "Character.h"
#include "SimReport.h"

enum class WindowType { AVZero, PreAction, ActiveTurn, PostTurn };

struct WindowContext {
    WindowType type;
    std::shared_ptr<Character> activeCharacter;  // nullptr for AVZero
    float currentAV;
};

struct ActionPrompt {
    std::shared_ptr<Character> caster;
    Action action;
    std::shared_ptr<Character> target;  // nullptr if teamwide or no target
};

struct SimConfig {
    int wave;
    float avLimit;
};

class SimIO {
public:
    virtual ~SimIO() = default;

    virtual std::vector<std::shared_ptr<Character>> promptCharacters() = 0;

    virtual SimConfig promptConfig() = 0;

    virtual std::vector<ActionPrompt> promptWindow(
        const WindowContext& ctx,
        const std::vector<std::shared_ptr<Character>>& roster) = 0;

    virtual void presentReport(const SimReport& report) = 0;
};

