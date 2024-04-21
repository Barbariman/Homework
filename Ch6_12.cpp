#include "iostream"
#include "fstream"
#include "cstdlib"
#include "vector"
#include "random"

using namespace std;

// Function to read the list of food items from a file
vector<string> readFoodList(){
    ifstream in("data.txt");

    // Check if the file opening failed
    if(in.fail()){ 
        cout << "input file opening failed"<<endl;
        exit(1); 
    }

    vector<string> foodList;
    // Read 5 food items from the file
    for(int i=0;i<5;i++){
        string whatFood;
        in >> whatFood;
        foodList.push_back(whatFood);
    }

    return foodList;
}

// Global constant vector containing the list of food items
const vector<string> foodList=readFoodList();

// Function to generate a random number between 1 and 3
const int randomNum(){
    return rand()%3+1;
}

// Function to select 3 random food items from the list
const vector<string> selectFood(){
    vector<string> food;
    // Select 3 random food items from the list
    for(int i=0;i<3;i++){
        food.push_back(foodList[randomNum()]);
    }
    return food;
}

// Class definition for BoxOfProduce
class BoxOfProduce{
public:
    // Function to output the selected food items
    void output(){
        for(string x:food){
            cout<<x<<endl;
        }
    }

    // Function to set a food item in the box
    void setFood(int oringinIndex,string substitution){
        // Replace a food item at the specified index with the given substitution
        food[oringinIndex]=substitution;
    }
private:
    // Private member variable containing the selected food items
    vector<string> food=selectFood();
};

// Main function
int main(){
    // Initialize the random number generator
    srand(time(0));
    
    // Create an instance of BoxOfProduce
    BoxOfProduce b1;
    // Output the selected food items for the first box
    b1.output();

    cout<<endl;

    // Create another instance of BoxOfProduce
    BoxOfProduce b2;
    // Output the selected food items for the second box
    b2.output();

    cout<<endl;

    // Set a new food item in the second box
    b2.setFood(2, "Kale");
    // Output the updated food items for the second box
    b2.output();

    return 0;
}
