#include "person.h"
#include "player.h"

Player::Player(const Player& source)
 : Person(source), m_game(source.m_game)
{
}

Player::Player(std::string_view first_name_param, std::string_view last_name_param, std::string_view game_param)
  : Person(first_name_param, last_name_param), m_game(game_param)
{
}

std::ostream& operator<<(std::ostream& out, const Player& player) {
    out << "Player: [ name: " << player.get_first_name() << " " << player.get_last_name() << ", game: " << player.m_game << " ]";
    return out;
}