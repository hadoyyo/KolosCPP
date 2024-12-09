#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
using namespace std;


class Employee
{
    public:
        Employee(string surname1, int age1, int experience1, int salary1);
        Employee();
        virtual ~Employee();

        virtual void show();
        virtual int calculateSalary(int value) = 0;

        string getSurname();
        int getAge();
        int getExperience();
        int getSalary();

        int ageEmployment();


    protected:

    private:
        string surname;
        int age;
        int experience;
        int salary;
};

#endif // EMPLOYEE_H
