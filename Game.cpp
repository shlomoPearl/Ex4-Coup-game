#include <iostream>
#include <vector>
#include <string>
#include "Game.hpp"

using namespace std;
namespace coup{
    Game::Game(){}
    
    string Game::turn(){
        return this->players_list.at(this->current_turn % (uint)this->players_list.size());
    }
    vector<string> Game::players(){
        return this->players_list;
    }
    string Game::winner(){
        if (this->players_list.size() == 1) {
            return this->players_list.at(0);
        }
        throw("the game isn't over");
    }
    vector<string>* Game::get_list() {
        return &this->players_list;
    }
    void Game::add_player(const string& name){
        vector<string>* v = get_list();
        v->push_back(name);
    }
    void Game::remove_player(const string& name) {
        vector<string>* v = get_list();
        for (uint i = 0; i < v->size(); i++) {
            if (v->at(i) == name) {
                v->erase(v->begin() + i);
                break;
            }
        }
    }
}