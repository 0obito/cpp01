#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weaponA) : _name(name), _weapon(weaponA) {
}

HumanA::~HumanA() {
}

void HumanA::attack() {
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}