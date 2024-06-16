#include "human.h"

Human::Human():Creature(){}

Human::Human(int newStrength, int newHitpoints):Creature(0,newStrength,newHitpoints){

}


int Human::getDamage()
{
    int damage;
    // All creatures inflict damage, which is a
    // random number up to their strength
    damage = (rand() % strength) + 1;
    cout << getSpecies() << " attacks for " << damage << " points!" << endl;
    return damage;
}