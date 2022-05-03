#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include "Duke.hpp"

const int TAX = 3;
const int FOREIGN_AID = 2;
using namespace std;

namespace coup{
    Duke::Duke(Game& game, const string& name) : Player(game, name){} 
    
    string Duke::role(){
        return this-> card;
    }
    void Duke::block(Player& p){
        p.set_money(-FOREIGN_AID);
    }
    void Duke::tax(){
        set_money(TAX);
    }    
}