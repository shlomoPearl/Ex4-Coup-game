#pragma once

#include <iostream>
#include <string>
#include "Game.hpp"

using namespace std;
namespace coup{
class Player{

    int money = 0;
    Game game;
    string name;

    public:

        Player(Game,string);
        void income();
        void foreign_aid();
        void coup(Player);
        virtual string role();
        int coins();
        int get_money();
        void set_money(int);
};
}