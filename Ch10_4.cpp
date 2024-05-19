#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Subscriber {
private:
    string name;
    int numChannels;
    vector<string> channelList;

public:
    // Default constructor
    Subscriber() : name(""), numChannels(0){}

    // Parameterized constructor
    Subscriber(const string& name, int numChannels, const vector<string> channels)
        : name(name), numChannels(numChannels) {
        channelList=channels;
    }

    // Copy constructor
    Subscriber(const Subscriber& other)
        : name(other.name), numChannels(other.numChannels) {
        channelList=other.channelList;
    }

    // Destructor
    ~Subscriber() {
    }

    // Overloaded assignment operator
    Subscriber& operator=(const Subscriber& other) {
        if (this != &other) {
            numChannels = other.numChannels;

            channelList.erase(channelList.begin(),channelList.end());
            channelList=other.channelList;
        }
        return *this;
    }

    // Mutator functions
    void setName(const string& name) {
        this->name = name;
    }

    void setNumChannels(int numChannels) {
        this->numChannels = numChannels;
    }

    void setChannelList(const vector<string> channels, int numChannels) {
        channelList.erase(channelList.begin(),channelList.end());
        this->numChannels = numChannels;
        channelList = channels;
    }

    // Accessor functions
    string getName() const {
        return name;
    }

    int getNumChannels() const {
        return numChannels;
    }

    vector<string> getChannelList() const {
        return channelList;
    }

    // Function to input subscriber details
    void inputSubscriber() {
        cout << "Enter subscriber's name: ";
        getline(cin, name);
        cout << "Enter number of channels: ";
        cin >> numChannels;
        cin.ignore(); // To consume the newline character after the number input

        channelList.erase(channelList.begin(),channelList.end());

        cout << "Enter the names of the channels:" << endl;
        for (int i = 0; i < numChannels; ++i) {
            string name;
            cout << "Channel " << (i + 1) << ": ";
            getline(cin, name);
            channelList.push_back(name);
        }
    }

    // Function to output subscriber details
    void displaySubscriber() const {
        cout << "Subscriber Name: " << name << endl;
        cout << "Subscribed Channels (" << numChannels << "):" << endl;
        for (int i = 0; i < numChannels; ++i) {
            cout << " - " << channelList[i] << endl;
        }
    }

    // Function to reset subscriber details
    void resetSubscriber() {
        name = "";
        numChannels = 0;
        channelList.erase(channelList.begin(),channelList.end());
    }
};

// Main function to test the Subscriber class
int main() {

    
    // Test inputSubscriber and displaySubscriber functions
    Subscriber sub1;
    sub1.inputSubscriber();
    sub1.displaySubscriber();

    // Test resetSubscriber function
    cout << "\nResetting subscriber..." << endl;
    sub1.resetSubscriber();
    sub1.displaySubscriber();

    // Test parameterized constructor and displaySubscriber function
    cout << "\nTesting parameterized constructor..." << endl;
    vector<string> channels = {"HBO", "Netflix", "Disney+"};
    Subscriber sub2("John Doe", 3, channels);
    sub2.displaySubscriber();

    // Test copy constructor and assignment operator
    cout << "\nTesting copy constructor and assignment operator..." << endl;
    Subscriber sub3(sub2);
    sub3.displaySubscriber();

    Subscriber sub4;
    sub4 = sub2;
    sub4.displaySubscriber();

    // Test modifying sub4 to ensure deep copy
    
    cout << "\nChanging sub4's channels..." << endl;
    
    vector<string> newChannels = {"BBC", "CNN"};
    sub4.setChannelList(newChannels, 2);
    sub4.displaySubscriber();

    cout << "\nOriginal sub2 should remain unchanged..." << endl;
    sub2.displaySubscriber();
    
   
    return 0;
}