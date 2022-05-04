#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include "Captain.hpp"
const int TAX = 3;
using namespace std;

namespace coup{
    Captain::Captain(Game& game ,const string& name) : Player(game, name){}
    string Captain::role(){
        return this-> card;
    }
    void Captain::steal(Player& p){
        this->check_turn();
        this->set_money(2);
        p.set_money(-2);
        this->game.next_turn();

    } 
    void Captain::block(const Player& p){

    }   
}