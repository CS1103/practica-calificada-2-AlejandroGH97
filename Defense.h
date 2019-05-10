//
// Created by alejandro on 5/10/19.
//

#ifndef PC2_DEFENSE_H
#define PC2_DEFENSE_H


class Defense{
protected:
    int level;
public:
    virtual int defense(){
        return level;
    }

};


#endif //PC2_DEFENSE_H
