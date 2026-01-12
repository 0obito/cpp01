#ifndef HUMAN_B
#define HUMAN_B

#include <string>
#include "Weapon.hpp"

class HumanB {
    private:
        Weapon _weapon;
        std::string _name;
    public:
        HumanB();
        ~HumanB();
        void attack();
};

#endif