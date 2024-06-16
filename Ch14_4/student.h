#ifndef STUDENT_H
#define STUDENT_H
#include "universitystaff.h"
namespace University
{
    class Student
    {
    public:
        Student();
        Student(const string &theUniversityName, const int &theRegistrationNumber, const UniversityStaff &theProctor);
        const string getUniversityName()const;
        const int getRegistrationNumber()const;
        const UniversityStaff getProctor()const;
        void setUniversityName(const string &newUniversityName);
        void setRegistrationNumber(const int &newRegistrationNumber);
        void setProctor(const UniversityStaff &newProctor);
        Student &operator=(const Student &rtSide);
        friend istream& operator>>(istream &inStream,
                                   Student &studentObject);
        friend ostream& operator<<(ostream &outStream,
                                   const Student &studentObject);

    protected:
        string universityName;
        int registrationNumber;
        UniversityStaff proctor;
    };
}

#endif // STUDENT_H