#include "City.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include "Citizen.h"
#include <map>
#include <string>


using namespace std;

City::City(string city_name1)
{
    city_name = city_name1;
    cout<<"Dodano miasto "<<city_name1<<endl;
}

City::City()
{

}

City::~City()
{
    //dtor
}


void City::addCitizen(Citizen citizen1)
{
    cout<<"Dodano nowego miszkanca do miasta "<<city_name<<": "<<citizen1.getSurname()<<" lat: "<<citizen1.getAge()<<endl;
    citizens.push_back(citizen1);
}

void City::show_citizens()
{
    cout<<"Mieszkancy miasta "<<city_name<<":"<<endl;
     for (auto citizen : citizens) {
            citizen.show();
    }
}

void City::deleteCitizen(string surname1, int age1)
{
    for (auto it = citizens.begin(); it != citizens.end(); ++it) {
            if (it->getSurname() == surname1 && it->getAge() == age1) {
                citizens.erase(it);
                cout<<"Usunieto mieszkanca o nazwisku "<<surname1<<" w wieku "<<age1<<" lat z listy mieszkancow miasta "<<city_name<<endl;
                return;
            }
        }
        std::cout <<"Nie znaleziono mieszkanca o nazwisku "<<surname1<<" w wieku "<<age1<<" lat na liscie mieszkancow miasta "<<city_name<<endl;
}

string City::show_city()
{
    return city_name;
}

int City::women()
{
    int count=0;
    for (auto it = citizens.begin(); it != citizens.end(); ++it)
    {
        if (it->getSex() == 'K')
        {
            count++;
        }
    }
    return count;
}

int City::citizensCount()
{
    int count=0;
     for (auto num : citizens) {
        count++;
    }
    return count;
}

int City::adults()
{
    int count=0;
     for (auto num : citizens) {
        if(num.getAge()>=18)
        {
            count++;
        }
    }
    return count;
}


void City::postal_codes() {
    map<string, int> postal_stats;
    for (auto citizen : citizens) {
        postal_stats[citizen.getPostalCode()]++;
    }
    for (auto pair : postal_stats)
    {
        cout<<pair.first<<" -> " << pair.second << " mieszkancow\n";
    }
}

int City::countUnique()
        {
            map<string, int> postal_stats;
            for (auto citizen : citizens) {
                postal_stats[citizen.getPostalCode()]++;
            }
            return postal_stats.size();
        }

vector<Citizen> City::getCitizens() {
    return citizens;
}
