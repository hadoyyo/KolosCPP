#include "bazowa.h"
#include <iostream>

using namespace std;

bazowa::bazowa()
{
    //ctor
}

bazowa::bazowa(int liczba1)
{
    liczba = liczba1;
}

bazowa::~bazowa()
{
    //dtor
}

void bazowa::print()
{
    cout<<"liczba bazowa: "<<liczba<<endl;
}

void bazowa::show()
{
    cout<<"liczba bazowa virtual: "<<liczba<<endl;
}
