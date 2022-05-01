#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include "Assassin.hpp"

// #define TAX 3
using namespace std;

namespace coup{
    Assassin::Assassin(Game& game, const string& name) : Player(game, name){}
    string Assassin::role(){
        return this-> card;
    }
      
}