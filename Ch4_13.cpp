const double mile = 1.61;

#include<iostream>

using namespace std;

//將1 mile花費幾分幾轉換成mph
double convertToMPH(int min,int sec){
    double hour = (double)min/60 + (double)sec/60/60;
    return 1/hour;
}

//將kpm轉換成mph
double convertToMPH(double kpm){
    return kpm/mile*60; 
}

int main(){
    char type;
    do{
        //先詢問使用者要輸入哪種計算方式
        cout<<"Input the type you want(k for KPM to MPH, h for minute and second per mile):"<<endl;
        cin>>type;
    }while(!(type=='k'||type=='h'));

    if(type=='h'){//提示使用者輸入每mile幾分幾秒
        int min,sec;
        cout<<"Input minute and second per mile:"<<endl;
        cin>>min;
        cin>>sec;
        double mph= convertToMPH(min,sec);
        cout<<"mph:"<<mph<<endl;
    }
    else{//提示使用者輸入kpm
        double kpm;
        cout<<"Input kpm:"<<endl;
        cin>>kpm;
        double mph =convertToMPH(kpm);
        cout<<"mph:"<<mph<<endl;
    }
    return 0;
}