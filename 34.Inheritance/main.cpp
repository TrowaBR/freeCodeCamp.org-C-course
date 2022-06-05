#include <iostream>
#include "player.h"

int main() {

    Player player1("Basketball");
    player1.set_first_name("John");
    player1.set_last_name("Snow");

    std::cout << "player1: " << player1 << std::endl;

    return 0;
}