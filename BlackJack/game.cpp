//
//  game.cpp
//  BlackJack
//


#include "game.hpp"

Game::Game(const std::vector<std::string>& names)
{
    //create a vector of players from a vector of names
    std::vector<std::string>::const_iterator pName;
    for (pName = names.begin(); pName != names.end(); ++pName) {
        m_Players.push_back(Player(*pName));
    }
    
    //srand(static_cast<unsigned int>(time(0)));
    m_Deck.Populate();
    m_Deck.Shuffle();
}

Game::~Game()
{
    
}

void Game::Play()
{
    
//    deal initial 2 cards to everyone
    std::vector<Player>::iterator pPlayer;
    for (int i = 0; i < 2; ++i)
    {
        
        for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer)
        {
            m_Deck.Deal(*pPlayer);
        }
        m_Deck.Deal(m_Machine);
    }
    
//    hide machine first card
    
    m_Machine.FlipFirstCard();
    
//    display everyones hand
    for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer)
    {
        std::cout << *pPlayer << "\n";
    }
    
    std::cout << m_Machine <<  "\n";
    
//    deal additional cards to a players
    for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer)
    {
        m_Deck.AdditionalCards(*pPlayer);
    }
    
//    reveal machine firts card
    m_Machine.FlipFirstCard();
    std::cout << "\n" << m_Machine;
    
//    deal additional cards to machine
    m_Deck.AdditionalCards(m_Machine);
    
//    everyone still playing wins
    if (m_Machine.IsBusted())
    {
        for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer) {
            if (!(pPlayer->IsBusted())) {
                pPlayer->Win();
            }
        }
    }
    else
    {
//        compare each player still playing to house
        for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer) {
            if (!(pPlayer->IsBusted())) {
                if (pPlayer->GetTotal() > m_Machine.GetTotal()) {
                    pPlayer->Win();
                }
                else if (pPlayer->GetTotal() < m_Machine.GetTotal())
                {
                    pPlayer->Lose();
                }
                else
                {
                    pPlayer->Push();
                }
            }
        }
    }
    
//    remove everyones cards
    for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer) {
        pPlayer->Clear();
    }
    m_Machine.Clear();
}
