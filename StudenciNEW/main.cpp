#include <iostream>
#include <algorithm>
#include <map>
#include <Grupa.h>

using namespace std;

int main()
{
    Grupa gr = Grupa();
    gr.studenci.insert({1001,  {"Jan", "Kowalski"}});
    gr.studenci.insert({1002,  {"Jan", "Niezbêdny"}});
    gr.studenci.insert({1003,  {"Anna", "Zaradna"}});
    gr.studenci.insert({1101,  {"Magda", "Nowak"}});
    gr.studenci.insert({1102,  {"Tadeusz", "Zieliñski"}});
    gr.studenci.insert({1010,  {"Wojciech", "Nowak"}});

    gr.SzukajPoIndeksie(1001);

    gr.SzukajPoNazwisku("Nowak");

    gr.SzukajPoIndeksie(9955);
    gr.SzukajPoNazwisku("Jedruchniewicz");
}
