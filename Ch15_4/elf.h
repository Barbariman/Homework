#ifndef ELF_H
#define ELF_H
#include "creature.h"

class Elf : public Creature {
public:
    Elf();
    Elf(int newStrength, int newHitpoints);
    int getDamage();
};

#endif //ELF_H