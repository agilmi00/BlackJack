//
//  basePlayer.cpp
//  BlackJack
//


#include "basePlayer.hpp"

BasePlayer::BasePlayer(const std::string& name):
    m_Name(name)
{
    
}

BasePlayer::~BasePlayer()
{
    
}

bool BasePlayer::IsBusted() const
{
    return (GetTotal() > 21);
}

void BasePlayer::Bust() const
{
    std::cout << m_Name << " busts. \n";
}
