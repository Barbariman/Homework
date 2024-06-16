#ifndef ELF_H
#define ELF_H
#include "creature.h"

class Elf : public Creature {
public:
    Elf();
    Elf(int newStrength, int newHitpoints);
};

#endif //ELF_H