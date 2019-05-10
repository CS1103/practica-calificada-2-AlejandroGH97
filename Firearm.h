//
// Created by alejandro on 5/10/19.
//

#ifndef PC2_FIREARM_H
#define PC2_FIREARM_H


#include "Attack.h"

class Firearm : public Attack {
public:
    Firearm(){
        power = 10;
    }
};


#endif //PC2_FIREARM_H
