#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {
}

HumanB::~HumanB() {
}

void HumanB::setWeapon(Weapon& weaponB) {
    _weapon = &weaponB;
}

void HumanB::attack() {
    if (_weapon != NULL)
        std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
    else
        std::cout << _name << " has no weapon to attack with" << std::endl;
}