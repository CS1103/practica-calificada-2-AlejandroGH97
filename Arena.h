//
// Created by alejandro on 5/10/19.
//

#ifndef PC2_ARENA_H
#define PC2_ARENA_H


#include "Fight.h"
#include <vector>
#include <string>

class Arena {
private:
    std::vector<Fight*> fights;
public:
    Arena();
    Fight* run(Fight* a);
    std::vector<Fight*> get_fights();
    void addFight(Fight* fight){
        fights.emplace_back(fight);
    }
    void load_fights(std::string filename);
    void run_all();
};


#endif //PC2_ARENA_H
