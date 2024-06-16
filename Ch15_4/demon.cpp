#include "demon.h"

//Default type of demon is 1
Demon::Demon():Creature(){
    setSpecies(1);
}

Demon::Demon(int newStrength, int newHitpoints):Creature(1,newStrength,newHitpoints){

}