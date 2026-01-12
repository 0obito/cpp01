#include "Weapon.hpp"

Weapon::Weapon() {
}

Weapon::~Weapon() {
}

std::string& Weapon::getType() {
    std::string& weaponRef = _type;
    return (weaponRef);
}

void Weapon::setType(std::string type) {
    _type = type;
}