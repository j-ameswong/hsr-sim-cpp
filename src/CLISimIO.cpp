#include "../include/CLISimIO.h"
#include "iostream"
#include <memory>
#include <string>
#include <vector>

std::vector<std::shared_ptr<Character>> CLISimIO::promptCharacters() {
    auto prompt = [](std::string param) {
        return std::string("Input character ") + param
            + std::string(": ");
    };

    std::string input;

    std::string name;
    std::cout << prompt("name");
    std::cin >> name; 

    float speed;
    std::cout << prompt("speed");
    std::cin >> input; 
    speed = std::stof(input);

    Equipment equipment;
    std::cout << prompt("vonwacq/eagle/ddd (yn/yn/yn)");
    std::cin >> input;

    std::vector<bool> equips;
    std::string remaining = input;
    while (equips.size() < 3) {
        std::string token;
        auto pos = remaining.find('/');
        if (pos != std::string::npos) {
            token = remaining.substr(0, pos);
            remaining = remaining.substr(pos + 1);
        } else {
            token = remaining;
            remaining = "";
        }
        if (token == "y" || token == "n") {
            equips.push_back(token == "y");
        } else {
            break;
        }
    }

    if (equips.size() == 3) {
        equipment.vonwacq = equips[0];
        equipment.eagle = equips[1];
        equipment.ddd = equips[2];
    }

    if (equipment.ddd) {
        std::cout << prompt("DDD superimpose level (1-5)");
        std::cin >> input;
        equipment.dddLevel = std::stoi(input);
    }

    Character character; 
    character.name = name;
    character.speed = speed;
    character.equipment = equipment;

    std::vector<std::shared_ptr<Character>> characters;
    characters.push_back(std::make_shared<Character>(character));

    std::cout << character.summary();
    return characters;
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
