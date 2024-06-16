#include "human.h"
#include "elf.h"
#include "cyberdemon.h" 
#include "balrog.h"

int main(){
    srand(time(0));

    Human h1;
    Elf e1(30,30);
    Cyberdemon c1(50,20);

    c1.getDamage();

    return 0;
}