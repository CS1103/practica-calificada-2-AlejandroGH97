//
// Created by alejandro on 5/10/19.
//

#include <iostream>
#include "Arena.h"

Arena::Arena() {

}


Fight* Arena::run(Fight* fight) {
    return fight;
}

std::vector<Fight*> Arena::get_fights() {
    return fights;
}

void Arena::load_fights(std::string filename) {

}

void Arena::run_all() {
    for(Fight* fight: fights){
        run(fight);
    }
}
