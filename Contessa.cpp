#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include "Contessa.hpp"

const int TAX = 3;
using namespace std;

namespace coup{
    Contessa::Contessa(Game& game,const string& name) : Player(game, name){}
    string Contessa::role(){
        return this-> card;
    }
    void Contessa::block(Player& p){

    }    
}