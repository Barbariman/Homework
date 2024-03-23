#include<iostream>

using namespace std;

//輸入小時 分鐘
void time_input(int& hour,int& min){
    cin>>hour;
    cin>>min;
}

//將24時制轉換成am pm制
void convert(char& time,int& hour){
    if(hour<12) time='A';
    else time='P';
    
    if(hour>12) hour-=12;
}

//輸出結果
void time_output(char& time, int hour , int min){
    cout<<hour<<":"<<min<<" "<<time<<".M."<<endl;
}

//詢問使用者是否退出輸入模式
bool again(){
    cout<<"Do you wannt to quit? (press q)"<<endl;
    char again;
    cin>>again;
    if(again=='q') return false;
    else return true;
}

int main(){

    do{
        cout<<"Input hour and minute:"<<endl;
        int hour,min;
        char time;
        time_input(hour,min);
        convert(time,hour);
        time_output(time,hour,min);
    }while(again());

    return 0;
}