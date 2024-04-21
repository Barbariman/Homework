#include "iostream"

using namespace std;

class Pizza{
public:
    void outputDescription(){
        cout<<"type of pizza:"<<type<<endl;
        cout<<"size of pizza:"<<size<<endl;
        cout<<"number of toppings:"<<topping<<endl;
        cout<<"price of pizza:"<<computePrice()<<"$"<<endl;
    }

    double computePrice(){
        if(size=="small"){
            return 10+2*topping;
        }
        if(size=="medium"){
            return 14+2*topping;
        }
        if(size=="large"){
            return 17+2*topping;    
        }
        return 0;
    }

    //default constructor
    Pizza(){
        type = "hand tossed";
        size = "medium";
        topping = 6;
    }

    Pizza(string type,string size,int topping){
        this->size= size;
        this->type = type;
        this->topping = topping;
    }
private:
    string type;
    string size;
    int topping;
};

int main(){
    Pizza* p1 = new Pizza;
    Pizza* p2= new Pizza("deep dish","large",16);

    p1->outputDescription();
    cout<<endl;
    p2->outputDescription();

    return 0;
}