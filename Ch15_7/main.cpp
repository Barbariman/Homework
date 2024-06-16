#include "loadeddice.h"
#include <iostream>

using std::cout;

int rollTwoDice(const LoadedDice &die1, const LoadedDice &die2)
{
    return die1.rollDice() + die2.rollDice();
}

int main(){
    LoadedDice dice1;
    LoadedDice dice2(17);

    cout<<rollTwoDice(dice1,dice2);

    return 0;
}
