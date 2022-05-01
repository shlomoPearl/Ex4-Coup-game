#pragma once

#include <iostream>
#include <string>
#include "Player.hpp"
using namespace std;
namespace coup{
class Assassin : public Player {

    string card = "Assassin";
    public:
        Assassin(Game& ,const string&);
        string role();
};
}