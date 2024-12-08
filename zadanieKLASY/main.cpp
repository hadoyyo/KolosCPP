#include <iostream>
#include <bazowa.h>
#include <pochodna.h>

using namespace std;

int main()
{
    int liczba = 10;
    bazowa baz = bazowa(liczba);
    baz.print();
    baz.show();
    pochodna poch = pochodna(liczba);
    poch.print();
    poch.show();
    return 0;
}
