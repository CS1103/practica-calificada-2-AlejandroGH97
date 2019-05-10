cmake_minimum_required(VERSION 3.14)
project(PC2)

set(CMAKE_CXX_STANDARD 14)

add_executable(PC2 main.cpp Fight.cpp Fight.h Fighter.cpp Fighter.h Arena.cpp Arena.h Attack.h Defense.h Attack.cpp Defense.cpp Elude.cpp Elude.h Shield.cpp Shield.h Armor.cpp Armor.h Punch.cpp Punch.h Saber.cpp Saber.h Firearm.cpp Firearm.h test.cpp catch2.h BruceLee.cpp BruceLee.h ChuckNorris.cpp ChuckNorris.h JasonStatham.cpp JasonStatham.h)