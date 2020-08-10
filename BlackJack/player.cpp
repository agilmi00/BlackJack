//
//  player.cpp
//  BlackJack
//


#include "player.hpp"

Player::Player(const std::string& name):
    BasePlayer(name)
{}

Player::~Player()
{}

bool Player::IsHitting() const
{
    std::cout << m_Name << ", do you want a hit? (Y/N): ";
    char response;
    std::cin >> response;
    
    return (response == 'Y' || response == 'y');
}

void Player::Win()  const
{
    std::cout << m_Name << " WINS.\n";
}

void Player::Lose() const
{
    std::cout << m_Name << "loses.\n";
}

void Player::Push() const
{
    std::cout << m_Name << "pushes.\n";
}
