#ifndef DEMON_H
#define DEMON_H
#include "creature.h"

class Demon : public Creature {
protected:
    Demon();
    Demon(int newStrength, int newHitpoints);
};

#endif //DEMON_H