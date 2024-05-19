#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class MyInteger {
private:
    int value;

public:
    // Constructor
    MyInteger(int val = 0) : value(val) {}

    // Get method
    int getValue() const {
        return value;
    }

    // Set method
    void setValue(int val) {
        value = val;
    }

    // Overloaded [] operator
    int operator[](int index) const {
        string valueStr = to_string(value);
        reverse(valueStr.begin(), valueStr.end()); // Reversing to access least significant digit first
        if (index >= 0 && index < valueStr.size()) {
            return valueStr[index] - '0'; // Convert char digit to int
        } else {
            return -1; // If index is out of bounds
        }
    }
};

// Test program
int main() {
    MyInteger x(418);

    // Testing the overloaded [] operator
    cout << "x[0] = " << x[0] << endl;  // Should return 8
    cout << "x[1] = " << x[1] << endl;  // Should return 1
    cout << "x[2] = " << x[2] << endl;  // Should return 4
    cout << "x[3] = " << x[3] << endl;  // Should return -1

    // Testing get and set methods
    x.setValue(12345);
    cout << "New value of x = " << x.getValue() << endl;
    cout << "x[0] = " << x[0] << endl;  // Should return 5
    cout << "x[4] = " << x[4] << endl;  // Should return 1
    cout << "x[5] = " << x[5] << endl;  // Should return -1

    return 0;
}
