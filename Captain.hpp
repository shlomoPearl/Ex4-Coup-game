#pragma once

#include <iostream>
#include <string>
#include "Player.hpp"
using namespace std;
namespace coup{
class Captain : public Player {

    string card = "Captain";
    public:
        Captain(Game&, const string&);
        string role();
        void steal(Player&);
        void block(const Player&);
};
}