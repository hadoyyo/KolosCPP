#include <iostream>

using namespace std;


template <typename T>
void showConvert(int divider,T elem)
{
    cout<<"Dla podanego typu brak specjalizacji"<<endl;
}

template <>
void showConvert(int divider,int elem)
{
    if (divider==100)
    {
        cout<<elem<<"g = "<<elem/divider<<"dg"<<endl;
    }
    else if (divider==1000)
    {
        cout<<elem<<"g = "<<elem/divider<<"kg"<<endl;
    }
    else
    {
        cout<<"Nieznany divider"<<endl;
    }
}

template <>
void showConvert(int divider,float elem)
{
    if (divider==100)
    {
        cout<<elem<<"g = "<<elem/divider<<"dag"<<endl;
    }
    else if (divider==1000)
    {
        cout<<elem<<"g = "<<elem/divider<<"kg"<<endl;
    }
    else
    {
        cout<<"Nieznany divider"<<endl;
    }
}



int main()
{
    showConvert<int>(100,1000);
    showConvert<float>(100,100.7);
    showConvert<int>(1000,1000);
    showConvert<char>(100,'1');
    showConvert<string>(100,"10");
    return 0;
}
