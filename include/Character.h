#pragma once
#include <string>
#include <vector>
#include "Action.h"

struct Equipment {
    bool vonwacq = false;
    bool eagle = false;
    bool ddd = false;
    int dddLevel = 1;

    std::string summary() const {
        std::string output;
        output.append(std::string("Vonwacq: ") + (vonwacq ? "y" : "n") + '\n');
        output.append(std::string("Eagle: ") + (eagle ? "y" : "n") + '\n');
        output.append(std::string("DDD: ") + (ddd ? "y" : "n") + '\n');
        output.append(std::string("DDD Superimposition Level: ")
                + (ddd ? std::to_string(dddLevel) : "N/A") + '\n');

        return output;
    }
};

struct Character {
    std::string name;
    float speed;
    Equipment equipment;
    std::vector<Action> actions;

    std::string summary() const {
        return std::string("Name: ") + name
            + "\n" + std::string("Speed: ") + std::to_string(speed)
            + "\n" + equipment.summary();
    };
};
