//
//  machine.cpp
//  BlackJack
//

#include "machine.hpp"

Machine::Machine(const string& name):
    BasePlayer(name)
{
    
}

Machine::~Machine()
{
    
}

bool Machine::IsHitting() const
{
    return (GetTotal() <= 15);
}

void Machine::FlipFirstCard()
{
    if(!(m_Cards.empty()))
    {
        m_Cards[0] -> Flip();
    }
    else
    {
        cout << "No card to flip!\n";
    }
}
