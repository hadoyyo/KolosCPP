#ifndef GRUPA_H
#define GRUPA_H
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

class Grupa
{
    public:
        Grupa();
        virtual ~Grupa();
        void SzukajPoIndeksie(int indeks);
        void SzukajPoNazwisku(string nazwisko);
        map<int,pair<string,string>> studenci;


    protected:

    private:
};

#endif // GRUPA_H
