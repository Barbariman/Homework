#include<iostream>
#include<cstdlib>
using namespace std;

int roll(){
    return (rand()%12)+1;
}

int play(){
    int first = roll();
    if(first==7 || first==11) return 1;
    if(first==2 || first==3 || first==12) return 2;
    
    while(true){
        int twice = roll();
        if(twice==7) return 2;
        if(twice==4 || twice==5 || twice==6 || twice==8 || twice==9 || twice==10) return 1;
    }
}

int main(){
    int win=0;
    int lose=0;
    for(int i=0;i<10000;i++){
        int ans=play();

        if(ans==1) win++;
        if(ans==2) lose++;
    }
    double pw=(double)win/(win+lose);

    cout << "win of probability:"<< pw<<endl;
    
    if(pw>0.5){
        cout<<"Iwin"<<endl;
    }
    else{
        cout<< "Nah, I win."<<endl;
    }

    return 0;
}

