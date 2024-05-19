#include "User.h"
#include "Administrator.h"
#include <iostream>

using namespace std;

int main(){
    string password = "password";
    string username = "monday"; 
    User u1;
    if(u1.login(username,password)==true){
        cout<<"Login successful."<<endl;
    }
    else{
        cout<<"Login fail."<<endl;
    }
    return 0;
    Administrator a1;
    if(a1.login(username,password)==true){
        cout<<"Login successful."<<endl;
    }
    else{
        cout<<"Login fail."<<endl;
    }
    return 0;
}