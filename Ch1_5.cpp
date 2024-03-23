
#include<iostream>
using namespace std;

int main(){
    for(int T=0;T<10;T++){
        for(int O=0;O<10;O++){
            for(int G=0;G<10;G++){
                for(int D=0;D<10;D++){
                    if(4*(100*T+11*O)==1000*G+110*O+D && T!=O &&O!=G && G!=D && O!=D){
                        cout << "T:"<<T<<endl;
                        cout << "O:"<<O<<endl;
                        cout << "G:"<<G<<endl;
                        cout << "D:"<<D<<endl;
                    }
                }
            }
        }
    }
}