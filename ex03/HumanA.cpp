#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA() {
}

HumanA::~HumanA() {
}

void HumanA::attack() {
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}