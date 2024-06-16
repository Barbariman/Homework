#include "cyberdemon.h"

Cyberdemon::Cyberdemon() : Demon() {}

Cyberdemon::Cyberdemon(int newStrength, int newHitpoints) : Demon(newStrength, newHitpoints)
{
}

int Cyberdemon::getDamage()
{
    int damage;
    // All creatures inflict damage, which is a
    // random number up to their strength
    damage = (rand() % strength) + 1;
    cout << getSpecies() << " attacks for " << damage << " points!" << endl;
    if ((rand() % 10) == 0)
    {
        cout << "Magical attack inflicts " << damage << " additional damage points!" << endl;
        damage = damage * 2;
    }
    if ((rand() % 100) < 5)
    {
        damage = damage + 50;
        cout << "Demonic attack inflicts 50 "
             << " additional damage points!" << endl;
    }
    return damage;
}