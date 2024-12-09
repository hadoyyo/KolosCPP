#ifndef CITY_H
#define CITY_H
#include <iostream>
#include <Citizen.h>
#include <vector>
#include <map>

using namespace std;



class City
{
    public:
        City();
        City(string city_name1);
        virtual ~City();

        void addCitizen(Citizen citizen1);
        void deleteCitizen(string surname1, int age1);
        void show_citizens();
        string show_city();
        int women();
        int citizensCount();
        int adults();
        void postal_codes();

        int countUnique();

        vector<Citizen> getCitizens();

    protected:

    private:
        vector<Citizen> citizens;
        string city_name;
};

#endif // CITY_H
