#ifndef HUMAN_H
#define HUMAN_H
#include "creature.h"

class Human : public Creature {
public:
    Human();
    Human(int newStrength, int newHitpoints);
};

#endif //HUMAN_H