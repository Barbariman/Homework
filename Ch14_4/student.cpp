#include "student.h"
#include<iostream>

using std::cout;
using std::endl;

namespace University{
    // Default constructor
    Student::Student() : universityName(""), registrationNumber(0), proctor() {}

    // Parameterized constructor
    Student::Student(const string &theUniversityName, const int &theRegistrationNumber, const UniversityStaff &theProctor)
        : universityName(theUniversityName), registrationNumber(theRegistrationNumber), proctor(theProctor) {}

    // Accessor functions
    const string Student::getUniversityName() const {
        return universityName;
    }

    const int Student::getRegistrationNumber() const {
        return registrationNumber;
    }

    const UniversityStaff Student::getProctor() const {
        return proctor;
    }

    // Mutator functions
    void Student::setUniversityName(const string &newUniversityName) {
        universityName = newUniversityName;
    }

    void Student::setRegistrationNumber(const int &newRegistrationNumber) {
        registrationNumber = newRegistrationNumber;
    }

    void Student::setProctor(const UniversityStaff &newProctor) {
        proctor = newProctor;
    }

    // Assignment operator
    Student &Student::operator=(const Student &rtSide) {
        if(this!=&rtSide){
            this->universityName=rtSide.universityName;
            this->registrationNumber=rtSide.registrationNumber;
            this->universityName=rtSide.universityName;
        }

        return *this;
    }

    // Friend functions for input and output
    istream &operator>>(istream &inStream, Student &studentObject) {
        cout << "Enter university name: ";
        inStream >> studentObject.universityName;
        cout << "Enter registration number: ";
        inStream >> studentObject.registrationNumber;
        // Assuming UniversityStaff has a proper >> operator overload
        cout << "Enter proctor details: ";
        inStream >> studentObject.proctor;
        return inStream;
    }

    ostream &operator<<(ostream &outStream, const Student &studentObject) {
        outStream << "University Name: " << studentObject.universityName << endl;
        outStream << "Registration Number: " << studentObject.registrationNumber << endl;
        // Assuming UniversityStaff has a proper << operator overload
        outStream << "Proctor Details: " << studentObject.proctor << endl;
        return outStream;
    }
}
