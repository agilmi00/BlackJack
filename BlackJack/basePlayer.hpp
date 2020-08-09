//
//  basePlayer.hpp
//  BlackJack
//
//  Created by Adrián Gil Miranda on 09/08/2020.
//  Copyright © 2020 Adrián Gil Miranda. All rights reserved.
//

#ifndef basePlayer_hpp
#define basePlayer_hpp

#include <stdio.h>
#include <iostream>
#include "hand.hpp"

using namespace std;


class BasePlayer : public Hand
{
    friend ostream& operator <<(ostream& os, const BasePlayer& aBasePlayer);
    
public:
    BasePlayer(const string& name = "");
    
    virtual ~BasePlayer();
    
//    indicates whether or not the player want to keep hitting
    virtual bool isHitting () const = 0;
    
//    returns if the player has a total greater than 21
    bool isBusted() const;
    
    void Bust() const;
    
protected:
    string m_Name;
};


#endif /* basePlayer_hpp */
