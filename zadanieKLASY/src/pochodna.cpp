#include "pochodna.h"
#include <iostream>
#include <bazowa.h>

using namespace std;

pochodna::pochodna()
{
    //ctor
}

pochodna::pochodna(int liczba1):bazowa(liczba1*100){}

pochodna::~pochodna()
{
    //dtor
}

void pochodna::print()
{
    cout<<"liczba pochodna: "<<liczba<<endl;
}

void pochodna::show()
{
    cout<<"liczba pochodna virtual: "<<liczba<<endl;
}
