#include <iostream>
#include <string>
#include "administrator.h"
using std::cout;
using std::endl;
using std::string;

namespace SavitchEmployees
{
    Administrator::Administrator() : SalariedEmployee(), title("No title yet"), area("No area yet"), supervisor("No supervisor yet")
    {
        // deliberately empty
    }
    Administrator::Administrator(const string &theName,
                                 const string &theNumber,
                                 double theWeeklyPay,
                                 const string &theTitle,
                                 const string &theArea,
                                 const string &theSupervisor):
        SalariedEmployee(theName, theNumber, theWeeklyPay),
        title(theTitle), area(theArea), supervisor(theSupervisor)
    {
        // deliberately empty
    }

    void Administrator::setSupervisor(const string &newSupervisor)
    {
        supervisor = newSupervisor;
    }
    void Administrator::print(){
        cout<<"name:"<<name<<endl;
        cout<<"ssn:"<<ssn<<endl;
        cout<<"pay:"<<netPay<<endl;
        cout<<"area:"<<area<<endl;
        cout<<"supervisor:"<<supervisor<<endl;
    }
    void Administrator::printCheck(){
        cout << "\n________________________________________________\n";
        cout << "Pay to the order of " << getName() << endl;
        cout << "The sum of " << getNetPay() << " Dollars\n";
        cout << "_________________________________________________\n";
        cout << "Check Stub NOT NEGOTIABLE \n";
        cout << "Employee Number: " << getSsn() << endl;
        cout << "Salaried Employee. Regular Pay: "
             << salary << endl;
        cout << "_________________________________________________\n";
        cout<<"Administrator's title: "<<title<<endl;
        cout<<"Area of responsibility: "<<area<<endl;
        cout<<"administrator's immediate supervisor: "<<supervisor<<endl;
        cout << "_________________________________________________\n";
    }
    void Administrator::readData(){
        cout<<"enter the type of data you want to read:";
        string type;
        getline(std::cin,type);
        if(type=="name"){
            cout<<"name:"<<name<<endl;
        }
        else if(type=="ssn"){
            cout<<"ssn:"<<ssn<<endl;
        }
        else if(type=="pay"){
        cout<<"pay:"<<netPay<<endl;
        }
        else if(type=="area"){
        cout<<"area:"<<area<<endl;
        }
        else if(type=="supervisor"){
        cout<<"supervisor:"<<supervisor<<endl;
        }
    }
} // namespace SavitchEmployees
