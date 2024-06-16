#ifndef SCIENCESTUDENT_H
#define SCIENCESTUDENT_H
#include "student.h"
namespace University
{
    class ScienceStudent : public Student
    {
    public:
        ScienceStudent();
        ScienceStudent(const string &theUniversityName, const int &theRegistrationNumber, const UniversityStaff &theProctor, const string &theScienceDiscipline, const string &theCourse);
        const string getScienceDiscipline()const;
        const string getCourse()const;
        void setScienceDiscipline(const string &newScienceDiscipline);
        void setCourse(const string &newCurse);
        ScienceStudent &operator=(const ScienceStudent &rtSide);
        friend istream &operator>>(istream &inStream,
                                   ScienceStudent &studentObject);
        friend ostream &operator<<(ostream &outStream,
                                   const ScienceStudent &studentObject);
    protected:
        string scienceDiscipline;
        string course;
    };
}
#endif // SCIENCESTUDENT_H