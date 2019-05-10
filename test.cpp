//
// Created by alejandro on 5/10/19.
//

#include <iostream>
#include "catch2.h"
#include "Arena.h"
#include "Fight.h"
#include "ChuckNorris.h"
#include "JasonStatham.h"
#include "BruceLee.h"
#include "fstream"


TEST_CASE("Test arena:"){
    JasonStatham testF1;
    testF1.addAttack('F');
    testF1.addAttack('P');
    testF1.addDefense('A');

    REQUIRE(testF1.attack()==11);
    REQUIRE(testF1.defense()==8);

    BruceLee testF2;
    testF2.addAttack('S');
    testF2.addDefense('E');

    Fight fight(&testF1, &testF2);
    Arena arena;
    REQUIRE(arena.run(&fight)->score == 10);
    REQUIRE(arena.run(&fight)->winner==&testF1);

    ChuckNorris testF3;
    testF3.addAttack('F');
    testF3.addDefense('A');

    BruceLee testF4;
    testF4.addAttack('S');
    testF4.addDefense('E');

    Fight fight2(&testF3, &testF4);

    arena.addFight(&fight);

    REQUIRE(arena.get_fights()[0]->score == 10);
    REQUIRE(arena.get_fights()[0]->winner==&testF1);

    arena.addFight(&fight2);

    REQUIRE(arena.get_fights()[1]->score == 9);
    REQUIRE(arena.get_fights()[1]->winner==&testF3);

    ChuckNorris testF5;
    testF3.addAttack('F');
    testF3.addDefense('A');

    BruceLee testF6;
    testF4.addAttack('F');
    testF4.addDefense('A');

    Fight fight3(&testF5, &testF6);
    REQUIRE(fight3.winner == nullptr);
    REQUIRE(fight3.score == 0);


    std::vector<Fighter*> peleadores;
    std::ifstream peleas("peleas2.txt");
    std::string nombre_peleador;
    char ataque;
    char defensa;
    int peleador = 0;

    while(!peleas.eof()){
        getline(peleas,nombre_peleador);
        peleadores.emplace_back(new Fighter());
        peleas>>ataque;
    }


}