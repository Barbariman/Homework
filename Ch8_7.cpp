#include <iostream>
#include <cmath>
using namespace std;

class PrimeNumber {
private:
    int prime;

    // Helper function to check if a number is prime
    bool isPrime(int num) const {
        if (num <= 1) return false;
        if (num == 2) return true;
        if (num % 2 == 0) return false;
        for (int i = 3; i <= sqrt(num); i += 2) {
            if (num % i == 0) return false;
        }
        return true;
    }

    // Helper function to find the next prime
    int nextPrime(int num) const {
        int next = num + 1;
        while (!isPrime(next)) {
            next++;
        }
        return next;
    }

    // Helper function to find the previous prime
    int previousPrime(int num) const {
        int prev = num - 1;
        while (prev > 1 && !isPrime(prev)) {
            prev--;
        }
        return prev > 1 ? prev : 1;
    }

public:
    // Default constructor
    PrimeNumber() : prime(1) {}

    // Constructor with an integer parameter
    PrimeNumber(int num) : prime(num) {
        if (!isPrime(num)) {
            prime = 1; // Reset to 1 if num is not a prime
        }
    }

    // Accessor function
    int getPrime() const {
        return prime;
    }

    // Overloaded prefix ++ operator
    PrimeNumber& operator++() {
        prime = nextPrime(prime);
        return *this;
    }

    // Overloaded postfix ++ operator
    PrimeNumber operator++(int) {
        PrimeNumber temp = *this;
        prime = nextPrime(prime);
        return temp;
    }

    // Overloaded prefix -- operator
    PrimeNumber& operator--() {
        prime = previousPrime(prime);
        return *this;
    }

    // Overloaded postfix -- operator
    PrimeNumber operator--(int) {
        PrimeNumber temp = *this;
        prime = previousPrime(prime);
        return temp;
    }
};

// Test program
int main() {
    // Test default constructor
    PrimeNumber p1;
    cout << "Default prime: " << p1.getPrime() << endl; // Should be 1

    // Test parameterized constructor
    PrimeNumber p2(13);
    cout << "Prime number set to 13: " << p2.getPrime() << endl; // Should be 13

    // Test prefix ++ operator
    ++p2;
    cout << "Next prime after 13 (using prefix ++): " << p2.getPrime() << endl; // Should be 17

    // Test postfix ++ operator
    PrimeNumber p3 = p2++;
    cout << "Next prime after 17 (using postfix ++): " << p2.getPrime() << endl; // Should be 19
    cout << "Value of p3 (should still be 17): " << p3.getPrime() << endl; // Should be 17

    // Test prefix -- operator
    --p2;
    cout << "Previous prime before 19 (using prefix --): " << p2.getPrime() << endl; // Should be 17

    // Test postfix -- operator
    PrimeNumber p4 = p2--;
    cout << "Previous prime before 17 (using postfix --): " << p2.getPrime() << endl; // Should be 13
    cout << "Value of p4 (should still be 17): " << p4.getPrime() << endl; // Should be 17

    return 0;
}
