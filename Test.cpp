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
TEST_CASE("turn"){
    vector<string> names = {"shlomo", "noga", "noam", "harel", "haim", "dovi"};
    for (uint i = 0; i < players.size(); i++) {
        CHECK_EQ(g1.turn(), names.at(i));
        players.at(i).income();
    }
}
TEST_CASE("income&foreign_aid"){
    for (int i = 1; i <= 10; i++)
    {   
        CHECK_EQ(duke1.coins(),i);
        duke1.income();
    }
    for (int i = 10; i <= 30; i+=2)
    {   
        CHECK_EQ(duke1.coins(),i);
        duke1.foreign_aid();
    }
}
TEST_CASE()