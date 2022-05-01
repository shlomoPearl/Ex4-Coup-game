#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include "Duke.hpp"

const int TAX = 3;
using namespace std;

namespace coup{
    Duke::Duke(Game& game, const string& name) : Player(game, name){} 
    
    string Duke::role(){
        return this-> card;
    }
    void Duke::block(Player& p){

    }
    void Duke::tax(){
        set_money(TAX);
    }    
}