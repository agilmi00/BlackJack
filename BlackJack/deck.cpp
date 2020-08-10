//
//  deck.cpp
//  BlackJack
//


#include "deck.hpp"
#include <random>
Deck::Deck()
{
    m_Cards.reserve(52);
    Populate();
}

Deck::~Deck()
{
    
}

void Deck::Populate()
{
    Clear();
    
    for (int s = Card::CLUBS; s <= Card::SPADES; ++s) {
        for (int r = Card::ACE; r <= Card::KING; ++r) {
            Add(new Card(static_cast<Card::rank>(r), static_cast<Card::suit>(s)));
        }
    }
}

void  Deck::Shuffle()
{
    std::random_device rd;
    std::mt19937 rng(rd());
    std::shuffle(m_Cards.begin(), m_Cards.end(), rng);
}

void Deck::Deal(Hand& aHand)
{
    if (!m_Cards.empty()) {
        aHand.Add(m_Cards.back());
        m_Cards.pop_back();
    }
    else
    {
        std::cout << "Out of cards. Unable to deal.";
    }
}

void Deck::AdditionalCards(BasePlayer& aBasePlayer)
{
    std::cout << "\n";
    
    while (!(aBasePlayer.IsBusted()) && aBasePlayer.IsHitting())
    {
        Deal(aBasePlayer);
//        std::cout << aBasePlayer << "\n";
        
        if (aBasePlayer.IsBusted())
        {
            aBasePlayer.Bust();
        }
    }
}

