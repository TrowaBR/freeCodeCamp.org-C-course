#include <iostream>
#include "player.h"

int main() {

    Player player1("John", "Snow", "Basketball");
    Player player2(player1);

    std::cout << "player1: " << player1 << std::endl;
    std::cout << "player2: " << player2 << std::endl;

    return 0;
}