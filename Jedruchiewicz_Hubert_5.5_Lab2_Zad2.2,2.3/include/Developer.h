#ifndef DEVELOPER_H
#define DEVELOPER_H
#include "Employee.h"
#include <iostream>
using namespace std;

class Developer: public Employee
{
    public:
        Developer();
        Developer(string surname1, int age1, int experience1, int salary1);
        virtual ~Developer();
        float calculateBonus(int value);

        int calculateSalary(int value) override;

    protected:

    private:
};

#endif // DEVELOPER_H

