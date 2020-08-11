//
//  card.cpp
//  BlackJack
//


#include "card.hpp"

Card::Card(rank r, suit s, bool faceUp): m_Rank(r), m_Suit(s), m_IsFaceUp(faceUp)
{
    
}

std::ostream& operator<<(std::ostream& os, const Card& aCard)
{
    const std::string RANKS[] = {"0", "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
    
    const std::string SUITS[] = {"c", "d", "h", "s"};
    
    if (aCard.m_IsFaceUp) {
        os << RANKS[aCard.m_Rank] << SUITS[aCard.m_Suit];
    }
    else
    {
        os << "XX";
    }
    
    return os;
}

int Card::GetRank() const
{
    int value = 0;
    if (m_IsFaceUp)
    {
        value = m_Rank;
        if (value > 10)
        {
            value = 10;
        }
    }
    return value;
}

void Card::Flip()
{
    m_IsFaceUp = !(m_IsFaceUp);
}
