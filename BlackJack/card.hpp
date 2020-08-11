//
//  card.hpp
//  BlackJack
//


#ifndef card_hpp
#define card_hpp
#include <iostream>


class Card
{
public:
    enum rank {ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGTH, NINE, TEN, JACK, QUEEN, KING};
    enum suit {DIAMONDS, CLUBS, HEARTS, SPADES};
    
//  overloading operator so can send Card object to standard
    friend std::ostream& operator<<(std::ostream& os, const Card& aCard);
    
    Card(rank r = ACE, suit s = DIAMONDS, bool faceUP = true);
    
    int GetRank() const;
    
    void Flip();
    
private:
    rank m_Rank;
    suit m_Suit;
    bool m_IsFaceUp;
};
#endif /* card_hpp */
