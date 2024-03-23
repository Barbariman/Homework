#include<iostream>
#include<cstdlib>

using namespace std;

//真正的密碼
const int actual_number[10]={0,1,2,3,4,5,6,7,8,9};

int main(){
    //生成1~3的隨機碼
    int random_number[10];
    cout<<"NUM:";
    for(int i=0;i<10;i++){
        random_number[i]=(rand()%3)+1;
        cout<<" "<<random_number[i];
    }
    cout<<endl;

    //提示使用者輸入對應的號碼 並根據號碼判斷對錯
    int answer_number;
    cout<<"Input your correspond number:"<<endl;
    for(int i=0;i<10;i++){
        cin>>answer_number;
        if(answer_number!=random_number[actual_number[i]]){
            cout<<"Error number!"<<endl;
            return 0;
        }
    }
    cout<<"Correct number!"<<endl;
    return 0;
}