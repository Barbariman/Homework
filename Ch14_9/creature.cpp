#include "creature.h"

Creature::Creature():type(0),strength(10),hitpoints(10){}

Creature::Creature(int newType, int newStrength, int newHit):type(newType),strength(newStrength),hitpoints(newHit){}

string Creature::getSpecies()
{
    switch (type)
    {
    case 0:
        return "Human";
    case 1:
        return "Cyberdemon";
    case 2:
        return "Balrog";
    case 3:
        return "Elf";
    }
    return "Unknown";
}

void Creature::setSpecies(const int &newType){
    type=newType;
}

int Creature::getDamage()
{
    int damage;
    // All creatures inflict damage, which is a
    // random number up to their strength
    damage = (rand() % strength) + 1;
    cout << getSpecies() << " attacks for " << damage << " points!" << endl;
    // Demons can inflict damage of 50 with a 5% chance
    if ((type == 2) || (type == 1))
        if ((rand() % 100) < 5)
        {
            damage = damage + 50;
            cout << "Demonic attack inflicts 50 "
                 << " additional damage points!" << endl;
        }
    // Elves inflict double magical damage with a 10% chance
    if (type == 3)
    {
        if ((rand() % 10) == 0)
        {
            cout << "Magical attack inflicts " << damage << " additional damage points!" << endl;
            damage = damage * 2;
        }
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