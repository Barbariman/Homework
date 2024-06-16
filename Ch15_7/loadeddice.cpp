#include "loadeddice.h"

LoadedDice::LoadedDice(){
    numSides=6;
    srand(time(NULL));
}
LoadedDice::LoadedDice(int numSides)
{
    this->numSides = numSides;
    srand(time(NULL)); // Seeds random number generator
}
int LoadedDice::rollDice() const
{   
    int roll=rand();
    if(roll%2==0){
        return numSides;
    }
    else{
        roll=rand();
        return (roll % numSides) + 1;
    }
}