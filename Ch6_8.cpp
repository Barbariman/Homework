#include "iostream"

using namespace std;

class Money{
public:
//set the monetary
void setMoney(int dollar, int cent){
    this->dollar=dollar;
    this->cent=cent;
}

//return thes monetary
double monetary(){
    return (double)dollar+(double)cent/100;
}

private:
    int dollar;
    int cent;
};

int main(){
    Money* m1 = new Money;
    Money* m2 = new Money;

    m1->setMoney(100,10);
    m2->setMoney(20,10000);

    cout<<"monetary of m1:"<<m1->monetary()<<"$"<<endl;
    cout<<"monetary of m2:"<<m2->monetary()<<"$"<<endl;

    return 0;
}