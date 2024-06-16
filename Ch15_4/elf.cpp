#include "elf.h"

Elf::Elf() : Creature()
{
    setSpecies(3);
}

Elf::Elf(int newStrength, int newHitpoints) : Creature(3, newStrength, newHitpoints)
{
}
int Elf::getDamage()
{
    srand(time(0));
    int damage;
    // All creatures inflict damage, which is a
    // random number up to their strength
    damage = (rand() % strength) + 1;
    cout << getSpecies() << " attacks for " << damage << " points!" << endl;
    // Elves inflict double magical damage with a 10% chance
    if ((rand() % 10) == 0)
    {
        cout << "Magical attack inflicts " << damage << " additional damage points!" << endl;
        damage = damage * 2;
    }
    return damage;
}