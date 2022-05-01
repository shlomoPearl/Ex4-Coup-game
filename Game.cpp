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
    vector<string>* Game::get_list(){
        return &this->players_list;
    }
    void Game::add_player(const string& name){
        // cout << "add player\n";
        vector<string>* v = get_list();
        v->push_back(name);
        // cout <<this->players_list.size()<< endl;
    }
}