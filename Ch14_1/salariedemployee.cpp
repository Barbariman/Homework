// This is the file salariedemployee.cpp
// This is the implementation for the class SalariedEmployee.
// The interface for the class SalariedEmployee is in
// the header file salariedemployee.h.
#include <iostream>
#include <string>
#include "salariedemployee.h"
using std::cout;
using std::endl;
using std::string;
namespace SavitchEmployees
{
    SalariedEmployee::SalariedEmployee() : Employee(), salary(0)
    {
        // deliberately empty
    }
    SalariedEmployee::SalariedEmployee(const string &theName,
                                       const string &theNumber,
                                       double theWeeklyPay)
        : Employee(theName, theNumber), salary(theWeeklyPay)
    {
        // deliberately empty
    }
    double SalariedEmployee::getSalary() const
    {
        return salary;
    }
    void SalariedEmployee::setSalary(double newSalary)
    {
        salary = newSalary;
        setNetPay(salary);
    }
    void SalariedEmployee::printCheck()
    {
        cout << "\n________________________________________________\n";
        cout << "Pay to the order of " << getName() << endl;
        cout << "The sum of " << getNetPay() << " Dollars\n";
        cout << "_________________________________________________\n";
        cout << "Check Stub NOT NEGOTIABLE \n";
        cout << "Employee Number: " << getSsn() << endl;
        cout << "Salaried Employee. Regular Pay: "
             << salary << endl;
        cout << "_________________________________________________\n";
    }
} // SavitchEmployees