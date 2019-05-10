//
// Created by alejandro on 5/10/19.
//

#ifndef PC2_FIGHTER_H
#define PC2_FIGHTER_H

#include <vector>
#include "Attack.h"
#include "Defense.h"
#include "Punch.h"
#include "Saber.h"
#include "Firearm.h"
#include "Elude.h"
#include "Shield.h"
#include "Armor.h"

class Fighter {
protected:
    std::vector<Attack*>ataque;
    std::vector<Defense*>defensa;

public:

    void addAttack(char type){
        if(type=='P'){
            ataque.emplace_back(new Punch());
        }
        else if(type=='S'){
            ataque.emplace_back(new Saber());
        }
        else if(type=='F'){
            ataque.emplace_back(new Firearm());
        }
    };

    void addDefense(char type){
        if(type=='E'){
            defensa.emplace_back(new Elude());
        }
        else if(type=='S'){
            defensa.emplace_back(new Shield());
        }
        else if(type=='A'){
            defensa.emplace_back(new Armor());
        }
    }


    virtual int attack(){
        int ataqueTotal = 0;
        for(Attack* attack : ataque){
            ataqueTotal+=attack->attack();
        }
        return ataqueTotal;
    }

    virtual int defense(){
        int defensaTotal = 0;
        for(Defense* defense : defensa){
            defensaTotal+=defense->defense();
        }
        return  defensaTotal;
    }

};


#endif //PC2_FIGHTER_H
