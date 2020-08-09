//
//  hand.cpp
//  BlackJack
//
//  Created by Adrián Gil Miranda on 09/08/2020.
//  Copyright © 2020 Adrián Gil Miranda. All rights reserved.
//

#include "hand.hpp"
#include "card.hpp"

Hand::Hand()
{
    m_Cards.reserve(7);
}

Hand::~Hand()
{
    Clear();
}

void Hand::Add(Card* pCard)
{
    m_Cards.push_back(pCard);
}

void Hand::Clear()
{
    vector<Card*>::iterator iter = m_Cards.begin();
    for (iter = m_Cards.begin(); iter != m_Cards.end(); ++iter) {
        delete *iter;
        *iter = 0;
    }
    
    m_Cards.clear();
}

int Hand::GetTotal() const
{
    if (m_Cards.empty())
    {
        return 0;
    }
//    if a first cards has value of 0, the card is faced down
    if (m_Cards[0] -> GetRank() == 0) {
        return 0;
    }
    
    int total = 0;
    vector<Card*>::const_iterator iter;
    for (iter = m_Cards.begin(); iter != m_Cards.end(); ++iter)
    {
        total += (*iter) ->GetRank();
    }
    
//    Determines if hand contains an ace
    bool containsAce = false;
    for (iter = m_Cards.begin(); iter != m_Cards.end(); ++iter)
    {
        if ((*iter) -> GetRank() == Card::ACE)
        {
            containsAce = true;
        }
    }
    
    if (containsAce && total <= 11)
    {
        total+= 10;
    }
    return total;
}
