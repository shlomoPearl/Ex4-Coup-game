#pragma once

#include <iostream>
#include <string>
#include <vector>
// #include "Player.hpp"
using namespace std;
namespace coup{
    class Game{

        vector<string> players_list;
        vector<string>* get_list();
        public:
            Game();
            string turn();
            uint current_turn = 0;
            vector<string> players();
            string winner();
            void add_player(const string&);
            void remove_player(const string&);
    };
}