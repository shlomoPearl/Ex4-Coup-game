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
        // void income();
        // void foreign_aid();
        // void coup();
        Contessa(Game, string);
        string role();
        void block(Player);
        // string coins();
};
}