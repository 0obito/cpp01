#include "Zombie.hpp"

int main() {
    int zombiesNum;

    zombiesNum = -1;
    Zombie* head = zombieHorde(zombiesNum, "Aba Sakafkaf");
    for (int i = 0 ; i < zombiesNum ; i++) {
        head[i].announce();
    }
    delete[] head;
}
