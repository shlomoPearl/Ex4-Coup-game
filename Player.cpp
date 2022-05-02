#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <typeinfo>
#include "Player.hpp"

const int FOREIGN_AID = 2;
const int COST_OF_COUP = 7;
using namespace std;

namespace coup{
    Player::Player(Game& game ,const string& name) : game(game), name(name){
        game.add_player(name);
    }
    void Player::income(){
        // cout << "turn befor- "<< game.turn() <<endl;
        check_turn();
        this->money++;
        this->game.current_turn++;
        // cout << "turn after- "<< game.turn() <<endl;
    }
    void Player::foreign_aid(){
        check_turn();
        this->money += FOREIGN_AID;
        this->game.current_turn++;
    }
    void Player::coup(Player& p){
        check_turn();
        if (this->coins() >= COST_OF_COUP) {
            this->set_money(-COST_OF_COUP);
            this->game.remove_player(p.name);
        }
        this->game.current_turn++;
    }
    int Player::coins()const{
        return this->money;
    }
    int Player::get_money()const{
        return this->money;
    }
    void Player::set_money(int m){
        this->money += m;
    }
    string Player::role(){
        return "role";
    }
    void Player::check_turn(){
        // cout << name<< " <- name , turn-> " << game.turn()<< endl;
        if (this->name != this->game.turn()){
            throw logic_error("it's not your turn");
        }
    }
}