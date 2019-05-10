//
// Created by alejandro on 5/10/19.
//

#ifndef PC2_ATTACK_H
#define PC2_ATTACK_H

class Attack{
protected:
    int power;
public:

    virtual int attack(){
        return power;
    }
};


#endif //PC2_ATTACK_H
