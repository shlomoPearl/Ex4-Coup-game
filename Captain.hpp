#pragma once

#include <iostream>
#include <string>
#include "Player.hpp"
using namespace std;
namespace coup{
class Captain : public Player {

    string card = "Captain";
    public:
        Captain(Game, string);
        // void income();
        // void foreign_aid();
        // void coup();
        string role();
        void steal(Player);
        void block(Player);
        // string coins();
};
}