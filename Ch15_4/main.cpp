#include "human.h"
#include "elf.h"
#include "cyberdemon.h" 
#include "balrog.h"

void battleArena(Creature &creature1, Creature &creature2){
    while(creature1.getHitpoints()>0 && creature2.getHitpoints()>0){
        creature2.decreaseHitpoints(creature1.getDamage());
        cout<<"creature 2's hp:"<<creature2.getHitpoints()<<endl;
        if(creature2.getHitpoints()<=0) break;
        creature1.decreaseHitpoints(creature2.getDamage());
        cout<<"creature 1's hp:"<<creature1.getHitpoints()<<endl;
        if(creature1.getHitpoints()<=0) break;
    }
    if(creature1.getHitpoints()<=0){
        cout<<"creature 2 win"<<endl;
    }
    else{
        cout<<"creature 1 win"<<endl;
    }
}

int main(){
    srand(time(0));

    Human h1;
    Elf e1(30,30);
    Cyberdemon c1(50,20);

    battleArena(e1,c1);

    return 0;
}