#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include "Ambassador.hpp"
const int TAX = 3;
using namespace std;

namespace coup{
    Ambassador::Ambassador(Game& game,const string& name) : Player(game, name){}
    string Ambassador::role(){
        return this-> card;
    }
    void Ambassador::transfer(Player& p1, Player& p2){
        p1.set_money(-1);
        p2.set_money(1);
    }    
}