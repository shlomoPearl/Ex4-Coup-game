#pragma once

#include <iostream>
#include <string>
#include "Player.hpp"
#include "Game.hpp"
using namespace std;
namespace coup{
class Contessa : public Player {

    string card = "Contessa";
    public:
        
        Contessa(Game&, const string&);
        string role();
        void block(Player&);
};
}