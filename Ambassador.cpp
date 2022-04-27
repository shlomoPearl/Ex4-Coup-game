#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include "Ambassador.hpp"
#define TAX 3
using namespace std;

namespace coup{
    Ambassador::Ambassador(Game game, string name) : Player(game, name){}
    string Ambassador::role(){
        return this-> card;
    }
    void Ambassador::transfer(Player p1, Player p2){

    }    
}