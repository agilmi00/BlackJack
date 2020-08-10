//
//  card.cpp
//  BlackJack
//


#include "card.hpp"

Card::Card(rank r, suit s, bool faceUp): m_Rank(r), m_Suit(s), m_IsFaceUp(faceUp)
{
    
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
