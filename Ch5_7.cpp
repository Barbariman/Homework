#include<iostream>
#include<vector>

using namespace std;

int main(){
    int grade[6]={0,0,0,0,0,0};
    int num;
    int count;
    //輸入有幾位學生
    cout<<"Input the number of students:"<<endl;
    cin>>count;

    //輸入學生的成績
    cout<<"Input the students' grade:"<<endl;
    for(int i=0;i<count;i++){
        cin>>num;
        grade[num]++;
    }

    //印出成績的人數表
    cout<< grade[0]<<" grade(s) of "<<0<<endl;
    cout<< grade[1]<<" grade(s) of "<<1<<endl;
    cout<< grade[2]<<" grade(s) of "<<2<<endl;
    cout<< grade[3]<<" grade(s) of "<<3<<endl;
    cout<< grade[4]<<" grade(s) of "<<4<<endl;
    cout<< grade[5]<<" grade(s) of "<<5<<endl;
    return 0;
}