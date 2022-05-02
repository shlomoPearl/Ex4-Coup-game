#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include "Assassin.hpp"

const int COST_OF_COUP = 3;
using namespace std;

namespace coup{
    Assassin::Assassin(Game& game ,const string& name) : Player(game, name){}
    string Assassin::role(){
        return this-> card;
    }
    void Assassin::coup(Player& p) {
        check_turn();
        if (this->coins() == COST_OF_COUP) {
            this->set_money(-COST_OF_COUP);
            this->game.remove_player(p.name);
            this->game.current_turn++;
        }
    }
      
}