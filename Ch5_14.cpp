#include<iostream>

using namespace std;

//觀眾對電影的評價
const int reviews[4][6] ={
    {3,1,5,2,1,5},
    {4,2,1,4,2,4},
    {3,1,2,4,4,1},
    {5,1,4,2,4,2}
    }; 

//根據題目給的算式計算出喜好最接近的觀眾
int sqrt(const int reviews[4][6],int movie[3],int rate[3]){
    int lowest=26;
    int neighbor;
    for(int i=0;i<4;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=(reviews[i][movie[j]]-rate[j])*(reviews[i][movie[j]]-rate[j]);
        }
        if(lowest>sum){
            lowest = sum;
            neighbor = i;
        }
    }
    return neighbor;
}

//提示使用者輸入要評價的電影以及對其的評價
void rating(int movie[3], int rate[3]){
    cout<<"Input 3 movies you want to rate:"<<endl;
    for(int i=0;i<3;i++){
        cin>>movie[i];
        movie[i]-=100;
    }
    cout<<"Input your rate of 3 movies:"<<endl;

    for(int i=0;i<3;i++){
        cin>>rate[i];
    }
}

//從選出的電影號碼找出沒被選出的電影號碼
void find_num(int predict[3],int movie[3]){
    //100~105
    int num[6] = {0,1,2,3,4,5};
    
    //從100~105抽離被選中的號碼
    int count=0;
    for(int i=0;i<6;i++){
        if(num[i]==movie[0]||num[i]==movie[1]||num[i]==movie[2]){
            num[i]=-1;
            count++;
        }
    }

    //將沒被選中的號碼加入陣列
    int index=0;
    for(int i:num){
        if(i!=-1){
            predict[index]=i;
            index++;
        }
    }
}

int main(){
    int movie[3];
    int rate[3];

    rating(movie, rate);

    int neighbor = sqrt(reviews,movie,rate);

    int predict[3];

    find_num(predict,movie);

    for(int i=0;i<3;i++){
        cout<<"rating of "<<reviews[neighbor][predict[i]]<<" for movie "<<100+predict[i]<<endl;
    }
    return 0;
}