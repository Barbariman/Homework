#include "balrog.h"

Barlog::Barlog():Demon(){
    setSpecies(2);
}

Barlog::Barlog(int newStrength, int newHitpoints):Demon(newStrength,newHitpoints){
    setSpecies(2);
}