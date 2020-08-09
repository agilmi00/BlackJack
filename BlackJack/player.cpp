//
//  player.cpp
//  BlackJack
//


#include "player.hpp"

Player::Player(const string& name):
    BasePlayer(name)
{}

Player::~Player()
{}

bool Player::IsHitting() const
{
    cout << m_Name << ", do you want a hit? (Y/N): ";
    char response;
    cin >> response;
    
    return (response == 'Y' || response == 'y');
}

void Player::Win()  const
{
    cout << m_Name << " WINS.\n";
}

void Player::Lose() const
{
    cout << m_Name << "loses.\n";
}
