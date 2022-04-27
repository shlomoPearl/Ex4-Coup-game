#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include "Player.hpp"

#define FOREIGN 2

using namespace std;

namespace coup{
    Player::Player(Game game, string name){
        this->game = game;
        this->name = name;
    }
    void Player::income(){
        this->money ++;
    }
    void Player::foreign_aid(){
        this->money += FOREIGN;
    }
    void Player::coup(Player p){

    }
    int Player::coins(){
        return this->money;
    }
    int Player::get_money(){
        return this->money;
    }
    void Player::set_money(int m){
        this->money += m;
    }
    string Player::role(){
        return "role";
    }
}