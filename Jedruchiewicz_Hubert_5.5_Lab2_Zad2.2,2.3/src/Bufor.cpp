#include "Bufor.h"
#include <iostream>
using namespace std;

Bufor::Bufor()
{
    cout<<"Konstruktor bezparametrowy klasy Bufor"<<endl;
    size = 10;
    arr = new int[size];
    index = 0;


}

Bufor::Bufor(int size1)
{
    cout<<"Konstruktor parametrowy klasy Bufor"<<endl;
    size = size1;
    arr = new int[size];
    index = 0;


}

Bufor::~Bufor()
{
    delete[] arr;
}

void Bufor::add(int value)
{
            arr[index] = value;
            index++;
}

int Bufor::getIndex()
{
    return index;
}

int Bufor::getSize()
{
    return size;
}

int Bufor::getFirst()
{
    return  index;
}

int Bufor::getTab(int i)
{
    return arr[i];
}

void Bufor::setFirst(int value)
{
    index = value;
}

void Bufor::setTab(int pos,int value)
{
    arr[pos] = value;
}

void Bufor::show()
{
    cout<<"Tablica: ";
    for (int i=0;i<index;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
