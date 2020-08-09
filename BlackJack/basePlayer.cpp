//
//  basePlayer.cpp
//  BlackJack
//


#include "basePlayer.hpp"

BasePlayer::BasePlayer(const string& name):
    m_Name(name)
{
    
}

BasePlayer::~BasePlayer()
{
    
}

bool BasePlayer::isBusted() const
{
    return (GetTotal() > 21);
}

void BasePlayer::Bust() const
{
    cout << m_Name << " busts. \n";
}
