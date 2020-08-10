//
//  game.hpp
//  BlackJack
//


#ifndef game_hpp
#define game_hpp

#include <string>
#include "deck.hpp"
#include "machine.hpp"
#include "player.hpp"

class Game
{
public:
    Game(const std::vector<std::string>& names);
    
    ~Game();
    
    void Play();
    
private:
    Deck m_Deck;
    Machine m_Machine;
    
    
    std::vector<Player> m_Players;
};
#endif /* game_hpp */
