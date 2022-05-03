#pragma once

#include <iostream>
#include <string>
#include "Game.hpp"

using namespace std;
namespace coup{
class Player{

    int money = 0;
    // Game& game;

    protected:
        Game& game;
        // const string& name;
        bool block_action = false;
    public:
        const string& name;
        Player(Game&, const string&);
        void income();
        void foreign_aid();
        virtual void coup(Player&);
        virtual string role();
        int coins()const;
        int get_money()const;
        void set_money(int);
        void check_turn();
};
}