#ifndef CITIZEN_H
#define CITIZEN_H
#include <iostream>

using namespace std;

class Citizen
{
    public:
        Citizen();
        Citizen(string name1, string surname1,int age1, char sex1, string postal_code1);
        virtual ~Citizen();

        void show();

        string getSurname();
        int getAge();
        char getSex();
        string getPostalCode();

    protected:

    private:
        string name, surname,postal_code;
        int age;
        char sex;
};

#endif // CITIZEN_H
