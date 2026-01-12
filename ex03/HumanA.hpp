#ifndef HUMAN_A
#define HUMAN_A

#include <string>
#include "Weapon.hpp"

class HumanA {
    private:
        Weapon _weapon;
        std::string _name;
    public:
        HumanA();
        ~HumanA();
        void attack();
};

#endif