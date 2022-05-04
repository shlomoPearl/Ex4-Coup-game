#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include "Assassin.hpp"

const int COST_OF_COUP = 3;
const int COST_OF_COUP_ASSASSIN = 7;
using namespace std;

namespace coup{
    Assassin::Assassin(Game& game ,const string& name) : Player(game, name){}
    string Assassin::role(){
        return this-> card;
    }
    void Assassin::coup(Player& p) {
        check_turn();
        this->game.next_turn();
        if (this->coins() >= COST_OF_COUP_ASSASSIN && this->coins() < COST_OF_COUP) {
            this->set_money(-COST_OF_COUP_ASSASSIN);  // coup in 3 coins
            this->game.remove_player(p.name);
        }else if (this->coins() >= COST_OF_COUP) {
            this->set_money(-COST_OF_COUP);  // coup in 7 like the other
            this->game.remove_player(p.name);
        }
    }
}