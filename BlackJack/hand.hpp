//
//  hand.hpp
//  BlackJack
//
//  Created by Adrián Gil Miranda on 09/08/2020.
//  Copyright © 2020 Adrián Gil Miranda. All rights reserved.
//

#ifndef hand_hpp
#define hand_hpp

#include "card.hpp"
#include <vector>
#include <stdio.h>

using namespace std;


class Hand
{
public:
    
    Hand();
    virtual ~Hand();
    
    void Add(Card* pCard);
    
    void Clear();
    
    int GetTotal() const;
    
protected:
    vector<Card*> m_Cards;
};

#endif /* hand_hpp */
