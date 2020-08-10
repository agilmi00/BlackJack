//
//  machine.hpp
//  BlackJack
//


#ifndef machine_hpp
#define machine_hpp

#include "basePlayer.hpp"

class Machine : public BasePlayer
{
public:
    Machine(const std::string& name = "Machine");
    
    virtual ~Machine();
    
//  Always hit on 15 or less
    virtual bool IsHitting() const;
    
    void FlipFirstCard();
};
#endif /* machine_hpp */
