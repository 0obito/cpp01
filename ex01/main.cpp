#include "Zombie.hpp"

int main() {
    int zombiesNum;

    zombiesNum = 13;
    Zombie* head = zombieHorde(zombiesNum, "Flan");
    if (!head)
        return (1);
    for (int i = 0 ; i < zombiesNum ; i++) {
        head[i].announce();
    }
    delete[] head;
}
