#include <iostream>
#include <GrupaDziekanska.h>

using namespace std;

int main()
{
    GrupaDziekanska grupa = GrupaDziekanska();
    grupa.dodaj("anna.nowak@gmail.com",1100);
    grupa.dodaj("s54321@pollub.edu.pl",1101);
    grupa.dodaj("s99999@pollub.edu.pl",1100);
    grupa.dodaj("s12345@pollub.edu.pl",1001);
    grupa.dodaj("s55555@pollub.edu.pl",1002);
    grupa.dodaj("jan.kowalski@gmail.com",1010);
    grupa.dodaj("s11111@pollub.edu.pl",1010);

    grupa.wyswietlgrupe();
    grupa.szukajwartosc("jan.kowalski@gmail.com");
    cout<<endl;
    grupa.findklucz(1100);
    return 0;
}
