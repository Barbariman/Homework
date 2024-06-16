#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include <string>
#include "salariedemployee.h"

using std::string;

namespace SavitchEmployees
{
    class Administrator : public SalariedEmployee
    {
    public:
        Administrator();
        Administrator(const string &theName,
                      const string &theNumber,
                      double theWeeklyPay,
                      const string &theTitle,
                      const string &theArea,
                      const string &theSupervisor);
        void setSupervisor(const string &newSupervisor);
        void print();
        void printCheck();
        void readData();

    private:
        string title;
        string area;
        string supervisor;
    };
}

#endif // ADMINISTRATOR_H