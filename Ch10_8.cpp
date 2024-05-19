#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <sstream>
using namespace std;

class Television {
private:
    string displayType;
    double dimension;
    vector<string> connectivitySupport;

public:
    // Default constructor
    Television() : displayType("default type"), dimension(2.5){
        connectivitySupport.push_back("NOTHING");
    }

    // Parameterized constructor
    Television(const string& displayType, double dimension, const vector<string> connectivitySupport)
        : displayType(displayType), dimension(dimension),connectivitySupport(connectivitySupport){}

    // Copy constructor
    Television(const Television& other)
        : displayType(other.displayType), dimension(other.dimension) ,connectivitySupport(other.connectivitySupport){}

    // Destructor
    ~Television() {}

    // Mutator functions
    void setDisplayType(const string& displayType) {
        this->displayType = displayType;
    }

    void setDimension(double dimension) {
        this->dimension = dimension;
    }

    void setConnectivitySupport(const vector<string> connectivitySupport) {
        this->connectivitySupport=connectivitySupport;
    }

    // Accessor functions
    string getDisplayType() const {
        return displayType;
    }

    double getDimension() const {
        return dimension;
    }

    vector<string> getConnectivitySupport() const {
        return connectivitySupport;
    }

    // Function to display the television details
    void displayTelevision() const {
        cout << "Display Type: " << displayType << endl;
        cout << "Dimension: " << dimension << " inches" << endl;
        cout << "Connectivity Support: ";
        for(auto mode:connectivitySupport){
            cout<<"\""<<mode<<"\", ";
        }
        cout << endl;
    }
};

// Main function to test the class
int main() {
    int numTelevisions;
    cout << "\nEnter the number of televisions: ";
    cin >> numTelevisions;
    cin.ignore(); // Consume the newline character

    vector<Television> televisions(numTelevisions);

    for (int i = 0; i < numTelevisions; ++i) {
        televisions[i] = *(new Television); // Use the copy constructor
        char customize;
        cout << "\nDo you want to customize television " << i + 1 << "? (y/n): ";
        cin >> customize;
        cin.ignore(); // Consume the newline character

        if (customize == 'y' || customize == 'Y') {
            string displayType;
            double dimension;
            vector<string> connectivitySupport;

            cout << "Enter display type: ";
            getline(cin, displayType);
            cout << "Enter dimension (in inches): ";
            cin >> dimension;
            cin.ignore();
            cout << "Enter a connectivity mode supported by the television: ";
            string word;
            while(true){
                getline(cin,word);
                if(word=="quit"){
                    cout<<'.';
                    break;
                }

                connectivitySupport.push_back(word);
                cout << "Enter another connectivity mode supported by the television(or enter 'quit' to leave): ";
            }

            televisions[i].setDisplayType(displayType);
            televisions[i].setDimension(dimension);
            televisions[i].setConnectivitySupport(connectivitySupport);
        }
    }

    // Display all televisions
    cout << "\nTelevision details:" << endl;
    for (int i = 0; i < numTelevisions; ++i) {
        cout << "\nTelevision " << i + 1 << ":\n";
        televisions[i].displayTelevision();
    }

    return 0;
}