#include "iostream"

using namespace std;

class Weight{
public:
//convert different weight unit to ounce
    void setWeightPounds(double pound){
        ounce=pound*16;
    }

    void setWeightKilograms(double kilogram){
        ounce=kilogram*2.21*16;
    }

    void setWeightOunces(double ounce){
        this->ounce=ounce;
    }

//convert different ounce to weight unit 
    double returnWeightPounds(){
        return ounce/16;
    }

    double returnWeightKilograms(){
        return (ounce/16)/2.21;
    }

    double returnWeightOunces(){
        return ounce;
    }

private:
    double ounce;
};

int main(){
    Weight* w1 = new Weight;
    w1->setWeightPounds(87);
    cout<<w1->returnWeightKilograms()<<endl;

    Weight* w2 = new Weight;
    w2->setWeightKilograms(69);
    cout<<w2->returnWeightOunces()<<endl;

    return 0;
}