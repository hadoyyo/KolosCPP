#include "Developer.h"
#include <iostream>
using namespace std;


Developer::Developer(string surname1, int age1, int experience1, int salary1):Employee(surname1,age1,experience1,salary1)
{
   cout<<"Konstruktor parametrowy klasy Developer"<<endl;
}

Developer::~Developer()
{
    //dtor
}

 float Developer::calculateBonus(int value)
 {
     return value+(0.2*value)*(getSalary()+getExperience());
 }

 int Developer::calculateSalary(int value) {
    return calculateBonus(value);
 }
