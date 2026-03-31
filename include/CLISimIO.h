#pragma once
#include "SimIO.h"

class CLISimIO : public SimIO {
public:
    std::vector<std::shared_ptr<Character>> promptCharacters() override;

    SimConfig promptConfig() override;

    std::vector<ActionPrompt> promptWindow(
        const WindowContext& ctx,
        const std::vector<std::shared_ptr<Character>>& roster) override;

    void presentReport(const SimReport& report) override;
};
