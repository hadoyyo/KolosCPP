#include "TeamLeader.h"
#include <iostream>
using namespace std;




TeamLeader::TeamLeader(string surname1, int age1, int experience1, int salary1):Employee(surname1,age1,experience1,salary1)
{
   cout<<"Konstruktor parametrowy klasy TeamLeader"<<endl;
}
TeamLeader::~TeamLeader()
{
    //dtor
}

 float TeamLeader::calculateBonus(int value)
 {
     return value*(1+getSalary()+getExperience());
 }

 int TeamLeader::calculateSalary(int value) {
    return calculateBonus(value);
 }

void TeamLeader::show()
 {
    Employee::show();
    cout<<"Jestem Team Leader z "<<getExperience()<<" letnim doswiadczeniem."<<endl;
}

