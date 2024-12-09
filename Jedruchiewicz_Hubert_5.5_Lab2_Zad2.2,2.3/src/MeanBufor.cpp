#include "MeanBufor.h"
#include <iostream>
using namespace std;


MeanBufor::MeanBufor():Bufor()
{
    cout<<"Konstruktor bezparametrowy klasy MeanBufor"<<endl;
}

MeanBufor::MeanBufor(int size1):Bufor(size1)
{
    cout<<"Konstruktor parametrowy klasy MeanBufor"<<endl;
}

MeanBufor::~MeanBufor()
{
    //dtor
}

double MeanBufor::calculate()
{
    double sum=0;
    for(int i=0;i<getIndex();i++)
    {
        sum += getTab(i);
    }
    return sum/(getIndex());

}
