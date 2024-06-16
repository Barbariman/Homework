#include "sciencestudent.h"

using std::cout;
using std::endl;

namespace University
{
    // Default constructor
    ScienceStudent::ScienceStudent() : Student(), scienceDiscipline(""), course("") {}

    // Parameterized constructor
    ScienceStudent::ScienceStudent(const string &theUniversityName, const int &theRegistrationNumber, const UniversityStaff &theProctor, const string &theScienceDiscipline, const string &theCourse)
        : Student(theUniversityName, theRegistrationNumber, theProctor), scienceDiscipline(theScienceDiscipline), course(theCourse) {}

    // Accessor for scienceDiscipline
    const string ScienceStudent::getScienceDiscipline() const
    {
        return scienceDiscipline;
    }

    // Accessor for course
    const string ScienceStudent::getCourse() const
    {
        return course;
    }

    // Mutator for scienceDiscipline
    void ScienceStudent::setScienceDiscipline(const string &newScienceDiscipline)
    {
        scienceDiscipline = newScienceDiscipline;
    }

    // Mutator for course
    void ScienceStudent::setCourse(const string &newCourse)
    {
        course = newCourse;
    }

    // Assignment operator
    ScienceStudent &ScienceStudent::operator=(const ScienceStudent &rtSide)
    {
        if (this != &rtSide)
        {
            Student::operator=(rtSide); // Call base class assignment operator
            scienceDiscipline = rtSide.scienceDiscipline;
            course = rtSide.course;
        }
        return *this;
    }

    // Friend function for input
    istream &operator>>(istream &inStream, ScienceStudent &studentObject)
    {
        inStream >> static_cast<Student &>(studentObject); // Read base class part
        cout << "Enter science discipline: ";
        inStream >> studentObject.scienceDiscipline;
        cout << "Enter course: ";
        inStream >> studentObject.course;
        return inStream;
    }

    // Friend function for output
    ostream &operator<<(ostream &outStream, const ScienceStudent &studentObject)
    {
        outStream << static_cast<const Student &>(studentObject); // Print base class part
        outStream << "Science Discipline: " << studentObject.scienceDiscipline << endl;
        outStream << "Course: " << studentObject.course << endl;
        return outStream;
    }
}