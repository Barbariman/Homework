#include<iostream>
using namespace std;

int main(){
    int floor,price;
    double rate;
    cout<<"Input the rates (as a decimal) of the charges: "<<endl;
    cin>>rate;
    cout<<"Input the number of stories: "<<endl;
    cin>>floor;
    cout<<"Input the base price of apartments on the first floor: "<<endl;
    cin>>price;

    for(int i=1;i<=floor;i++){
        cout<<"The price of floor "<<i<<endl;
        cout<<price*i*rate<<endl;
    }
}