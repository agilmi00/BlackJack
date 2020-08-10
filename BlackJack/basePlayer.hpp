//
//  basePlayer.hpp
//  BlackJack
//


#ifndef basePlayer_hpp
#define basePlayer_hpp

#include <iostream>
#include "hand.hpp"
#include <string>


class BasePlayer : public Hand
{
    friend std::ostream& operator<<(std::ostream& os, const BasePlayer& aBasePlayer);
    
public:
    BasePlayer(const std::string& name = "");
    
    virtual ~BasePlayer();
    
//    indicates whether or not the player want to keep hitting
    virtual bool IsHitting () const = 0;
    
//    returns if the player has a total greater than 21
    bool IsBusted() const;
    
    void Bust() const;
    
protected:
    std::string m_Name;
};


#endif /* basePlayer_hpp */
