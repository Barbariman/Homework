#ifndef UNIVERSITYSTAFF_H
#define UNIVERSITYSTAFF_H
#include <iostream>
using std::string;
using std::istream;
using std::ostream;
namespace University{
    class UniversityStaff
    {
    public:
        UniversityStaff();
        UniversityStaff(string theName);
        UniversityStaff(const UniversityStaff &theObject);
        string getName() const;
        UniversityStaff &operator=(const UniversityStaff &rtSide);
        friend istream &operator>>(istream &inStream,
                                   UniversityStaff &staffObject);
        friend ostream &operator<<(ostream &outStream,
                                   const UniversityStaff &staffObject);
                                   
    private:
        string name;
    };
} // namespace University

#endif // UNIVERSITYSTAFF_H