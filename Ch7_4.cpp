#include "iostream"

using namespace std;

// Class definition for HotDogStand
class HotDogStand{
    // Static member variable to keep track of total hot dogs sold by all stands
    static int total_hotDog;
public:
    // Static function to return the total number of hot dogs sold
    static int returnTotal_hotdog(){
        return total_hotDog;
    }

    // Function to indicate that a hot dog has been sold
    void JustSold(){
        hotDog++; // Increment the number of hot dogs sold by this stand
        total_hotDog++; // Increment the total number of hot dogs sold
    }

    // Default constructor
    HotDogStand(){
        ID=0;
        hotDog=0;
    }

    // Parameterized constructor
    HotDogStand(int ID,int hotDog){
        this->ID=ID;
        this->hotDog=hotDog;
        total_hotDog+=hotDog; // Increment the total number of hot dogs sold by all stands
    }
private:
    // Private member variables for the ID and number of hot dogs sold by each stand
    int ID;
    int hotDog;
};

// Initialization of static member variable outside the class definition
int HotDogStand::total_hotDog=0;

// Main function
int main(){
    // Create instances of HotDogStand
    HotDogStand* s1= new HotDogStand;
    HotDogStand* s2=new HotDogStand(87,100);
    HotDogStand* s3=new HotDogStand(69,200);

    // Output the total number of hot dogs sold by all stands
    cout<<"total hotdog has been sold:"<<HotDogStand::returnTotal_hotdog()<<endl;

    // Simulate selling hot dogs from one stand
    s3->JustSold();
    s3->JustSold();
    s3->JustSold();
    s3->JustSold();

    // Output the total number of hot dogs sold by the third stand after additional sales
    cout<<"total hotdog has been sold:"<<s3->returnTotal_hotdog()<<endl;

    return 0;
}