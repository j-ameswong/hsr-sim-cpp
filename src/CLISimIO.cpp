#include "../include/CLISimIO.h"
#include "iostream"
#include <string>
#include <vector>

std::vector<std::shared_ptr<Character>> CLISimIO::promptCharacters() {
    auto prompt = [](std::string param) {
        return std::string("Input character ") + param
            + std::string(": ");
    };

    std::vector<std::string> responses;

    std::vector<std::string> params = {"name", "speed", "equipment"};
    std::string input;
    for (int i = 0; i < params.size(); i++) {
        std::cout << prompt(params[i]);
        std::cin >> input; 

        responses.push_back(input);
    }

    std::cout << responses[0];
    return {};
}

SimConfig CLISimIO::promptConfig() {
    // TODO
    return {};
}

std::vector<ActionPrompt> CLISimIO::promptWindow(
    const WindowContext& ctx,
    const std::vector<std::shared_ptr<Character>>& roster) {
    // TODO
    return {};
}

void CLISimIO::presentReport(const SimReport& report) {
    // TODO
}
