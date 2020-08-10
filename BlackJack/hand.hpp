//
//  hand.hpp
//  BlackJack
//


#ifndef hand_hpp
#define hand_hpp

#include "card.hpp"
#include <vector>




class Hand
{
public:
    
    Hand();
    virtual ~Hand();
    
    void Add(Card* pCard);
    
    void Clear();
    
    int GetTotal() const;
    
protected:
    std::vector<Card*> m_Cards;
};

#endif /* hand_hpp */
