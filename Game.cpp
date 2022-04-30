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
        return this->players_list;
    }
    string Game::winner(){
        return "S";
    }
    void Game::add_player(string name){
        this->players_list.push_back(name);
    }
}