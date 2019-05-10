//
// Created by alejandro on 5/10/19.
//

#ifndef PC2_FIGHT_H
#define PC2_FIGHT_H
#include "Fighter.h"

class Fight {
public:
    Fighter* a;
    Fighter* b;
    Fighter* winner;
    int score;

    Fight(Fighter* _a, Fighter* _b):a{_a},b{_b}{
        if(a->attack()-b->defense()>b->attack()-a->defense()){
            winner = a;
            score = a->attack()-b->defense();
        }
        else{
            winner = b;
            score = b->attack()-a->defense();
        }
    }
};


#endif //PC2_FIGHT_H
