#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include "Citizen.h"
#include "City.h"

using namespace std;

template <typename T>
void showVector(vector<T> vec) {
    for (auto element : vec) {
        cout << element << " ";
    }
    cout << endl;
}

void showVector(vector<City> vec) {
    for (auto element : vec) {
        cout << element.show_city()<< "(" << element.citizensCount()<<") ";
    }
    cout << endl;
}


City cityWithMostUniquePostalCodes(vector<City> cities) {
    City result;
    int max_unique = 0;
    for (auto city : cities)
        {
        if (city.countUnique() > max_unique)
            {
            result = city;
            max_unique = city.countUnique();
        }
    }
    return result;
}

City cityWithMostCitizens(vector<City> cities) {
    City result;
    int max = 0;
    for (auto city : cities)
    {
        if (city.citizensCount()>max)
        {
            result = city;
            max = city.citizensCount();
        }
    }
    return result;

}

Citizen cityYoungest(vector<City> cities) {
    Citizen result;
    int youngest = 999;
    for (auto city : cities)
    {
        for (auto citizen : city.getCitizens()) {
            if (citizen.getAge() < youngest) {
                youngest = citizen.getAge();
                result = citizen;
            }
    }

}
return result;
}

void the_most(vector<City> cities, int mode) {
    switch (mode) {
        case 1: {
            City city = cityWithMostUniquePostalCodes(cities);
            cout<<"Najwiecej unikalnych kodow pocztowych: "<<city.show_city()<<endl;
            break;
        }
        case 2: {
            City city = cityWithMostCitizens(cities);
            cout<<"Najwiecej mieszkancow: "<<city.show_city()<<endl;
            break;
        }
        case 3: {
            Citizen citizen = cityYoungest(cities);
            cout<<"Najmlodszy mieszkaniec: "<<endl;
            citizen.show();
            break;
        }
    }
}

void statatistic(vector<City> cities)
{
    for(auto city : cities)
    {
        cout<<city.show_city();
        cout<<" - Liczba mieszkancow: "<<city.citizensCount()<<" ( "<<city.women()<<" kobiet i "<<city.citizensCount()-city.women()<<" mezczyzn ) ( "<<city.adults()<<" pelnoletnich i "<<city.citizensCount()-city.adults()<<" niepelnoletnich )"<<endl;

    }
}

void sort(vector<City>& cities) {
    int n = cities.size();
    for (int i = 1; i < n; i++) {
        City key = cities[i];
        int j = i - 1;
        while (j >= 0 && cities[j].citizensCount() > key.citizensCount()) {
            cities[j + 1] = cities[j];
            j--;
        }
        cities[j + 1] = key;
    }
}


void print(int num) {
    cout << num << " ";
}

int main() {
    cout<<"Zadanie 4.2"<<endl;
    srand(time(0));

    int n = rand() % 10 + 1;
    cout<<"Wylosowana liczba n: "<<n<<endl;
    vector<int> numbers(n);
    for (int& num : numbers) {
        num = rand() % 41 - 20;
    }


    list<int> sortedList;
    for (int num : numbers) {
        if (num >= 0) {
            sortedList.push_front(num);
        } else {
            sortedList.push_back(num);
    }
    }

    cout << "Zawartosc listy (iterator i petla for): ";
    for (list<int>::iterator it = sortedList.begin(); it != sortedList.end(); ++it) {
        cout<<*it<<" ";
    }
    cout<<endl;

    cout << "Zawartosc listy (petla wyliczeniowa for_each): ";
    for_each(sortedList.begin(), sortedList.end(), print);
    cout<<endl;

    cout<<"Zawartosc listy (petla for z typem auto): ";
    for (auto num : sortedList) {
        cout << num << " ";
    }
    cout<<endl << "--------------------------\nZadanie 4.3"<<endl;

    Citizen c1("Hubert","Jedruchniewicz",21,'M',"21-300");
    Citizen c2("Bartosz","Gos",45,'M',"20-849");
    Citizen c3("Beata","Kot",30,'K',"20-849");
    Citizen c4("Emilia","Ziolkowska",17,'K',"22-333");
    Citizen c5("Pawel","Pytlik",77,'M',"20-849");

    City lublin("Lublin");
    lublin.addCitizen(c1);
    lublin.addCitizen(c2);
    lublin.addCitizen(c3);
    lublin.addCitizen(c4);
    lublin.show_citizens();
    cout<<"--------------------------\n";
    lublin.deleteCitizen("Gos",42);
    lublin.deleteCitizen("Gos",45);
    cout<<"--------------------------\n";
    cout<<"Liczba kobiet w miescie "<<lublin.show_city()<<": "<<lublin.women()<<endl;
    cout<<"Liczba mieszkancow w miescie "<<lublin.show_city()<<": "<<lublin.citizensCount()<<endl;
    cout<<"Liczba pelnoletnich mieszkancow w miescie "<<lublin.show_city()<<": "<<lublin.adults()<<endl;
    cout<<"--------------------------\n";
    lublin.addCitizen(c2);
    lublin.postal_codes();
    cout<<"--------------------------\n";
    lublin.deleteCitizen("Jedruchniewicz",21);
    lublin.deleteCitizen("Ziolkowska",17);
    lublin.addCitizen(c5);
    City swidnik("Swidnik");
    swidnik.addCitizen(c1);
    swidnik.addCitizen(c4);
    cout<<"--------------------------\n";
    lublin.show_citizens();
    cout<<"--------------------------\n";
    swidnik.show_citizens();
    cout<<"--------------------------\n";
    vector<City> cities = {swidnik,lublin};
    the_most(cities,1);
    the_most(cities,2);
    the_most(cities,3);
    cout<<"--------------------------\n";
    statatistic(cities);
    cout<<"--------------------------\n";
    sort(cities);
    cout<<"Miasta posortowane wzgledem liczby mieszkancow (rosnaco):"<<endl;
    showVector(cities);
}
