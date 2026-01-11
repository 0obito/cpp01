#include <string>
#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    if (N <= 0)
    {
        std::cout << "No Zombies have been created, N must be greater than 0" << std::endl;
        return (NULL);
    }
    Zombie* horde = new Zombie[N];
    for (int i = 0 ; i < N ; i++) {
        horde[i].setName(name);
    }
    return (horde);
}
