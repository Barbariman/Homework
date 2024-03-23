#include<iostream>
using namespace std;
int main(){
    const int end=100;
    const int start=3;

    for(int i=start;i<end;i++){
        for(int j=3;j<=i;j++){
            if(j==i) cout << j<<endl;
            
            if(i%j==0) break;
        }
    }

    return 0;
}