#include <iostream>
#include <vector>
#include <string>
#include "Game.hpp"

using namespace std;
namespace coup{
    Game::Game(){}
    
    string Game::turn(){
        return "S";
    }
    vector<string> Game::players(){
        return this->players_name;
    }
    string Game::winner(){
        return "S";
    }
}