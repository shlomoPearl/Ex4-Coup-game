#pragma once

#include <iostream>
#include <string>
#include "Player.hpp"
using namespace std;
namespace coup{
class Ambassador : public Player {

    string card = "Ambassador";
    public:
        Ambassador(Game& ,const string&);
        string role();
        void transfer(Player&, Player&);
};
}