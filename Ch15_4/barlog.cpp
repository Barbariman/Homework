#include "balrog.h"

Barlog::Barlog():Demon(){
    setSpecies(2);
}

Barlog::Barlog(int newStrength, int newHitpoints):Demon(newStrength,newHitpoints){
    setSpecies(2);
}

int Barlog::getDamage(){
    int damage;
    // All creatures inflict damage, which is a
    // random number up to their strength
    damage = (rand() % strength) + 1;
    cout << getSpecies() << " attacks for " << damage << " points!" << endl;
    if ((rand() % 100) < 5)
    {
        damage = damage + 50;
        cout << "Demonic attack inflicts 50 "
             << " additional damage points!" << endl;
    }
    // Balrogs are so fast they get to attack twice
    if (type == 2)
    {
        int damage2 = (rand() % strength) + 1;
        cout << "Balrog speed attack inflicts " << damage2 << " additional damage points!" << endl;
        damage = damage + damage2;
    }
    return damage;
}