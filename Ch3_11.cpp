#include<iostream>
#include<cstdlib>
using namespace std;

int roll(){
    return (rand()%6)+1;
}

int humanTurn(int humanTotalScore){
    int current=0;
    int first = roll();

    if(first==1){
        cout<<"you rolled 1. It's done"<<endl;
        return 0;
    }
    current+=first;
    cout<<"your point this turn is "<<current<<endl;
    cout<<"Do you wanna continue?(r/h)"<<endl;

    char ans;
    cin >> ans;
    while(ans=='r'){
        int twice = roll();
        if(twice==1){
            cout<<"you rolled 1. It's done"<<endl;
            return 0;
        }
        current+=twice;
        cout<<"your point this turn is "<<current<<endl;
        cout<<"Do you wanna continue?(r/h)"<<endl;
        cin >> ans;
    }
    return current;
}

int computerTurn(int computerTotalScore){
    int current=0;
    while(current<20){
        int num = roll();
        if(num==1){
            cout<<"computer's turn is done"<<endl;
            return 0;
        }
        current += num;
    }
    cout<<"computer's turn is done"<<endl;
    cout<<"computer got "<<current<<" point"<<endl;
    return current;
}

int main(){
    int humanTotalScore=0;
    int computerTotalScore=0;
    int turn=1;

    while(humanTotalScore < 100 || computerTotalScore <100){
        if(turn==1){
            humanTotalScore+=humanTurn(humanTotalScore);
            turn=2;
        }
        else{
            computerTotalScore+=computerTurn(computerTotalScore);
            turn=1;
        }
    }

    if(humanTotalScore>=100){
        cout<< "you win"<<endl;
    }
    else{
        cout<<"computer win" <<endl;
    }
}