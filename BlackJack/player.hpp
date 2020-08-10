//
//  player.hpp
//  BlackJack
//

#ifndef player_hpp
#define player_hpp

#include "basePlayer.hpp"

class Player : public BasePlayer
{
public:
    Player(const std::string& name = "");
    
    virtual ~Player();
    
//  returns if the player wants another hit
    virtual bool IsHitting() const;
    
//  return if the player wins
    void Win() const;
    
    void Lose() const;
    
    void Push() const;
};
#endif /* player_hpp */
