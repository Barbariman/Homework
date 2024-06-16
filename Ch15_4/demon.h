#ifndef DEMON_H
#define DEMON_H
#include "creature.h"

class Demon : public Creature {
protected:
    Demon();
    Demon(int newStrength, int newHitpoints);
    virtual int getDamage()=0;
};

#endif //DEMON_H