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

void Creature::setHitpoints(const int &hp){
    hitpoints=hp;
}
void Creature::decreaseHitpoints(const int &hp){
    setHitpoints(getHitpoints()-hp);
}
int Creature::getHitpoints() const {
    return hitpoints;
}
