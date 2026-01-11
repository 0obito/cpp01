#include "Zombie.hpp"

int main()
{
    randomChump("Hamid");
    Zombie* newZ = newZombie("Hassan");
    newZ->announce();
    delete(newZ);
    return (0);
}
