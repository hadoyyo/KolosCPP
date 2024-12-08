#include "GrupaDziekanska.h"
#include <map>
 #include <iostream>

using namespace std;

GrupaDziekanska::GrupaDziekanska()
{
    //ctor
}



GrupaDziekanska::~GrupaDziekanska()
{
    //dtor
}

void GrupaDziekanska::wyswietlgrupe()
{
    cout<<"Grupa:"<<endl;
    map<string,int>::iterator it;
    for(it=mapa.begin(); it!=mapa.end(); ++it)
    {
        cout<<it->first<<" - "<<it->second<<endl;
    }
    cout<<endl;
}

void GrupaDziekanska::dodaj(string klucz, int wartosc)
{
    mapa.insert(pair<string,int>(klucz,wartosc));
    cout<<"Dla indeksu "<<wartosc<<" dodano email: "<<klucz<<endl;
}

void GrupaDziekanska::findklucz(int wartosc)
{
    map<string, int>::iterator it;
    cout<<"Dla podanej wartosci "<<wartosc<<" znaleziono:"<<endl;
    for(it=mapa.begin();it!=mapa.end();it++)
    {
        if(it->second == wartosc)
        {
            cout<<"Klucz: "<<it->first<<endl;
        }
    }
}

void GrupaDziekanska::szukajwartosc(string klucz)
{
    map<string, int>::iterator it;
    for(it=mapa.begin();it!=mapa.end();it++)
    {
        if(it->first == klucz)
        {
            cout<<"Email: " <<klucz<<" nalezy do indeksu: "<<it->second<<endl;
        }
    }
}
