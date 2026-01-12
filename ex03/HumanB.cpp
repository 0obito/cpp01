#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB() {
}

HumanB::~HumanB() {
}

void HumanB::attack() {
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}