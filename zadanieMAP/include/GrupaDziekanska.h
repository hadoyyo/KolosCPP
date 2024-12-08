#ifndef GRUPADZIEKANSKA_H
#define GRUPADZIEKANSKA_H
#include <map>
#include <iostream>

using namespace std;

class GrupaDziekanska
{
    public:
        GrupaDziekanska();
        virtual ~GrupaDziekanska();
        void wyswietlgrupe();
        void findklucz(int wartosc);
        void szukajwartosc(string klucz);
        void dodaj(string klucz, int wartosc);

    protected:

    private:
        map<string,int> mapa;
};

#endif // GRUPADZIEKANSKA_H
