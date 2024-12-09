#include "MaxBufor.h"
#include <iostream>
using namespace std;


MaxBufor::MaxBufor():Bufor()
{
    cout<<"Konstruktor bezparametrowy klasy MaxBufor"<<endl;
}

MaxBufor::MaxBufor(int size1):Bufor(size1)
{
    cout<<"Konstruktor parametrowy klasy MaxBufor"<<endl;
}

MaxBufor::~MaxBufor()
{
    //dtor
}

double MaxBufor::calculate()
{
    int max=getTab(0);
    for(int i=0;i<getIndex();i++)
    {
        if (max<getTab(i))
        {
            max = getTab(i);
        }
    }
    return max;
}

void MaxBufor::add(int value)
{
        if (getIndex() < getSize())
        {
            setTab(getIndex(),value);
            setFirst(getIndex()+1);
        } else
        {
            cout<<"Brak miejsca w buforze" <<endl;
        }
}

