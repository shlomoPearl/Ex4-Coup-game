#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Player.hpp"

using namespace std;

namespace coup{
    class Player;
    class Game{
        vector<Player*> players_list;
        vector<Player*>* get_list();
        uint current_turn = 0;
        public:
            Game();
            string turn();
            vector<string> players();
            string winner();
            void next_turn();
            void add_player(Player*);
            void remove_player(const string&);
    };
}