#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include "Captain.hpp"
#define TAX 3
using namespace std;

namespace coup{
    Captain::Captain(Game game, string name) : Player(game, name){}
    string Captain::role(){
        return this-> card;
    }
    void Captain::steal(Player p){

    } 
    void Captain::block(Player p){

    }   
}