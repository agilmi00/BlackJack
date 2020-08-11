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

//Overloads operator so a basePlayer can be sent to cout
std::ostream& operator<<(std::ostream& os, const BasePlayer& aBasePlayer)
{
    os << aBasePlayer.m_Name << ":\t";
    
    std::vector<Card*>::const_iterator pCard;
    
    if(!aBasePlayer.m_Cards.empty())
    {
        for (pCard = aBasePlayer.m_Cards.begin(); pCard != aBasePlayer.m_Cards.end(); ++pCard)
        {
            os << *(*pCard) << "\t";
        }
        
        if (aBasePlayer.GetTotal() != 0) {
            std::cout << "(" << aBasePlayer.GetTotal() << ")";
        }
    }
    else
    {
        os << "<empty>";
    }
    
    return os;
}
bool BasePlayer::IsBusted() const
{
    return (GetTotal() > 21);
}

void BasePlayer::Bust() const
{
    std::cout << m_Name << " busts. \n";
}
