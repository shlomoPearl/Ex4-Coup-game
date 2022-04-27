#pragma once

#include <iostream>
#include <string>
#include <vector>
// #include "Player.hpp"
using namespace std;
namespace coup{
    class Game{

        vector<string> players_name;

        public:
            Game();
            string turn();
            vector<string> players();
            string winner();

    };
}