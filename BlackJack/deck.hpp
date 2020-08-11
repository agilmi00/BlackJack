//
//  deck.hpp
//  BlackJack
//


#ifndef deck_hpp
#define deck_hpp

#include "hand.hpp"
#include "basePlayer.hpp"
#include "card.hpp"

class Deck : public Hand
{
public:
    Deck();
    
    virtual ~Deck();
    
    //creates a deck of 52 cards
    void Populate();
    
    void Shuffle();
    
//  deal one card to a hand
    void Deal (Hand& aHand);
    
    //give additional cards to a base player
    void AdditionalCards(BasePlayer& aBasePlayer);
};

#endif /* deck_hpp */
