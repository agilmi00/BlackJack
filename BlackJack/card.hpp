//
//  card.hpp
//  BlackJack
//
//  Created by Adrián Gil Miranda on 09/08/2020.
//  Copyright © 2020 Adrián Gil Miranda. All rights reserved.
//

#ifndef card_hpp
#define card_hpp

#include <stdio.h>

class Card
{
public:
    enum rank {ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGTH, NINE, TEN, JACK, QUEEN, KING};
    enum suit {DIAMONDS, CLUBS, HEARTS, SPADES};
    
    Card(rank r = ACE, suit s = DIAMONDS, bool faceUP = true);
    
    int GetRank() const;
    
    void Flip();
    
private:
    rank m_Rank;
    suit m_Suit;
    bool m_IsFaceUp;
};
#endif /* card_hpp */
