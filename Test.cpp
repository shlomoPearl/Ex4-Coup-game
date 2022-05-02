#include "doctest.h"
#include <string>
#include <iostream>
#include <vector>
#include "Player.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Game.hpp"
using namespace std;
using namespace coup;
Game g1{};
Duke duke1{g1, "shlomo"};
Duke duke2{g1, "noga"};
Assassin assassin{g1, "noam"};
Ambassador ambassador{g1, "harel"};
Captain captain{g1, "haim"};
Contessa contessa{g1, "dovi"};
vector<Player> players = {duke1 ,duke2 ,assassin ,ambassador ,captain ,contessa};
vector<string> names = {"shlomo", "noga", "noam", "harel", "haim", "dovi"};

TEST_CASE("turn"){
    for (uint i = 0; i < players.size(); i++) {
        // cout <<g1.turn()<<endl;
        CHECK_EQ(g1.turn(), names.at(i));
        g1.current_turn++;
        // players.at(i).income();
    }
}
TEST_CASE("income&foreign_aid"){
    for (int i = 1; i <= 10; i++)
    {   
        CHECK_EQ(players.at(i).coins(),i);
        players.at(i).income();
    }
    for (int i = 10; i <= 30; i+=2)
    {   
        CHECK_EQ(duke1.coins(),i);
        duke1.foreign_aid();
    }
}
// TEST_CASE("not his turn - exception"){
//     string current_turn = g1.turn();
//     for (uint i = 0; i < players.size(); i++) {
//         if(players.at(i).role() != current_turn){
//             CHECK_THROWS(players.at(i).income());
//         }
//     }    
// }
