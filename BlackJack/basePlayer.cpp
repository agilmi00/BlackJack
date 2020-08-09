//
//  basePlayer.cpp
//  BlackJack
//
//  Created by Adrián Gil Miranda on 09/08/2020.
//  Copyright © 2020 Adrián Gil Miranda. All rights reserved.
//

#include "basePlayer.hpp"

BasePlayer::BasePlayer(const string& name):
    m_Name(name)
{
    
}

BasePlayer::~BasePlayer()
{
    
}

bool BasePlayer::isBusted() const
{
    return (GetTotal() > 21);
}

void BasePlayer::Bust() const
{
    cout << m_Name << " busts. \n";
}
