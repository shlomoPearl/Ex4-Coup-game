#include <iostream>
#include <vector>
#include <string>
#include "Game.hpp"

using namespace std;
namespace coup{
    Game::Game(){}
    string Game::turn(){
        return this->players_list.at(this->current_turn % (uint)this->players_list.size())->name;
    }
    vector<string> Game::players(){
        vector<string> v;
        for (uint i = 0; i < this->players_list.size(); i++) {
            v.push_back(this->players_list.at(i)->name);
        }
        return v;
    }
    string Game::winner(){
        if (this->players_list.size() == 1) {
            return this->players_list.at(0)->name;
        }
        throw logic_error("the game isn't over");
    }
    void Game::next_turn(){
        this->current_turn++;
        
    }
    vector<Player*>* Game::get_list() {
        return &this->players_list;
    }
    void Game::add_player(Player* p){
        vector<Player*>* v = get_list();
        v->push_back(p);
    }
    void Game::remove_player(const string& name) {
        vector<Player*>* v = get_list();
        for (uint i = 0; i < v->size(); i++) {
            if (v->at(i)->name == name) {
                v->erase(v->begin() + i);
                break;
            }
        }
    }
}