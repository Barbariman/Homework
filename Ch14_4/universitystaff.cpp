//cpp file
//implememnt universitystaff.h
#include "universitystaff.h"
#include <iostream>
using std::cout;
using std::endl;
namespace University{
    UniversityStaff::UniversityStaff():name("no name"){

    }
    UniversityStaff::UniversityStaff(string theName) : name(theName){

    }
    UniversityStaff::UniversityStaff(const UniversityStaff &theObject){
        this->name=theObject.getName();
    }
    string UniversityStaff::getName() const{
        return this->name;
    }
    UniversityStaff &UniversityStaff::operator=(const UniversityStaff &rtSide){
        if(this!=&rtSide){
            this->name=rtSide.name;
        }

        return *this;
    }
    istream &operator>>(istream &inStream, UniversityStaff &staffObject)
    {
        cout << "Enter name of staff: ";
        inStream >> staffObject.name ;
        return inStream;
    }
    ostream &operator<<(ostream &outStream, const UniversityStaff &staffObject)
    {
        outStream <<"Enter name of staff: "<< staffObject.getName()<<endl;
        return outStream;
    }
}