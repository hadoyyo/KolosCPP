#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee()
{
   cout<<"Konstruktor bezparametrowy klasy Employee"<<endl;
}

Employee::Employee(string surname1, int age1, int experience1, int salary1)
{
    cout<<"Konstruktor parametrowy klasy Employee"<<endl;
    surname=surname1;
    age=age1;
    experience=experience1;
    salary=salary1;
}

Employee::~Employee()
{
    //dtor
}

string Employee::getSurname()
{
    return surname;
}
int Employee::getAge()
{
    return age;
}
int Employee::getExperience()
{
    return experience;
}
int Employee::getSalary()
{
    return salary;
}

int Employee::ageEmployment()
{
    return age-experience;
}

void Employee::show()
{
    cout<<"Nazwisko: "<<surname<<endl;
    cout<<"Wiek: "<<age<<endl;
    cout<<"Doswiadczenie: "<<experience<<endl;
    cout<<"Wynagrodzenie: "<<salary<<endl;
}


