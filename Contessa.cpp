#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include "Contessa.hpp"

#define TAX 3
using namespace std;

namespace coup{
    Contessa::Contessa(Game game, string name) : Player(game, name){}
    string Contessa::role(){
        return this-> card;
    }
    void Contessa::block(Player p){

    }    
}