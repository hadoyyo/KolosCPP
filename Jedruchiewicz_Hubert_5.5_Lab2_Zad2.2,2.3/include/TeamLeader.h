#ifndef TEAMLEADER_H
#define TEAMLEADER_H
#include "Employee.h"
#include <iostream>
using namespace std;

class TeamLeader: public Employee
{
    public:
        TeamLeader();
        TeamLeader(string surname1, int age1, int experience1, int salary1);
        virtual ~TeamLeader();

        float calculateBonus(int value);

        int calculateSalary(int value) override;

        void show() override;

    protected:

    private:
};

#endif // TEAMLEADER_H
