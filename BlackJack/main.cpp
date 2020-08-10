//
//  main.cpp
//  BlackJack


#include <iostream>
#include "card.hpp"
#include "machine.hpp"
#include "player.hpp"
#include "game.hpp"

std::ostream& operator<<(std::ostream os, const  Card& aCard);
std::ostream& operator<<(std::ostream os, const  BasePlayer& aBasePlayer);


int main() {
    std::cout << "\t\t Welcome to BlackJack!" << "\n";
    
    int numPlayers = 0;
    while (numPlayers < 1 || numPlayers > 7) {
        std::cout << "How many players? (1 - 7):";
        std::cin >> numPlayers;
    }
    
    std::vector<std::string> names;
    std::string name;
    for (int i = 0; i < numPlayers; ++i) {
        std::cout << "Enter player name: ";
        std::cin >> name;
        names.push_back(name);
    }
    
    std::cout << "\n";
    
//    gameloop
    
    Game aGame(names);
    char again = 'y';
    
    while (again != 'n' && again != 'N') {
        aGame.Play();
        std::cout << "\nDo you want to play again? (Y/N): ";
        std::cin >> again;
    }
    
    return 0;
};
