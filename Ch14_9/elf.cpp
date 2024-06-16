#include "elf.h"

Elf::Elf():Creature(){
    setSpecies(3);
}

Elf::Elf(int newStrength, int newHitpoints):Creature(3,newStrength,newHitpoints){

}