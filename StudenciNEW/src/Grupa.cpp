#include "Grupa.h"
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

Grupa::Grupa()
{
    //ctor
}

Grupa::~Grupa()
{
    //dtor
}

void Grupa::SzukajPoIndeksie(int indeks)
{
    bool znaleziono = false;
    map<int,pair<string,string>>::iterator it;
    for(it=studenci.begin();it!=studenci.end();it++)
    {
        if(it->first==indeks)
        {
            cout<<it->first<<": "<<it->second.first<<" "<<it->second.second<<endl;
            znaleziono = true;
        }
    }
    if (!znaleziono)
    {
        cout<<"Nie znaleziono"<<endl;
    }

}

void Grupa::SzukajPoNazwisku(string nazwisko)
{
    bool znaleziono = false;
    map<int,pair<string,string>>::iterator it;
    for(it=studenci.begin();it!=studenci.end();it++)
    {
        if(it->second.second==nazwisko)
        {
            cout<<it->first<<": "<<it->second.first<<" "<<it->second.second<<endl;
            znaleziono = true;
        }
    }
    if (!znaleziono)
    {
        cout<<"Nie znaleziono"<<endl;
    }

}
