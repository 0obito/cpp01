#include "Harl.hpp"

int main() {
    Harl forrest;
    std::string op;
    while (std::getline(std::cin, op)) {
        forrest.complain(op);
    }
}