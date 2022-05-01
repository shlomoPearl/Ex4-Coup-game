#pragma once

#include <iostream>
#include <string>
#include <vector>
// #include "Player.hpp"
using namespace std;
namespace coup{
    class Game{

        vector<string> players_list;

        public:
            Game();
            // Game() : players_list(0){};
            string turn();
            vector<string> players();
            string winner();
            vector<string>* get_list();
            void add_player(const string&);

    };
}