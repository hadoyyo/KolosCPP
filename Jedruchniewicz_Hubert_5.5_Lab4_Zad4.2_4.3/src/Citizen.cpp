#include "Citizen.h"
#include <iostream>

using namespace std;

Citizen::Citizen()
{
    //ctor
}

Citizen::Citizen(string name1, string surname1,int age1, char sex1, string postal_code1)
{
    name = name1;
    surname = surname1;
    age = age1;
    sex = sex1;
    postal_code = postal_code1;
}

void Citizen::show()
{
    cout<<"Imie: "<<name<<", ";
    cout<<"Nazwisko: "<<surname<<", ";
    cout<<"Wiek: "<<age<<", ";
    cout<<"Plec: "<<sex<<", ";
    cout<<"Kod pocztowy: "<<postal_code<<endl;

}

int Citizen::getAge()
{
    return age;
}

string Citizen::getSurname()
{
    return surname;
}

char Citizen::getSex()
{
    return sex;
}

string Citizen::getPostalCode()
{
    return postal_code;
}

Citizen::~Citizen()
{
    //dtor
}
