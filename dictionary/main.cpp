#include <iostream>
#include <Dictionary.h>

using namespace std;

int main()
{
    Dictionary dict = Dictionary();
    dict.addWord("czesc","hello");
    dict.addWord("papuga","parrot");
    dict.addWord("samochod","car");
    dict.addWord("drzewo","tree");
    dict.addWord("strzala","arrow");
    dict.addWord("luk","bow");
    dict.addWord("woda","water");
    dict.addWord("pies","dog");

    dict.show();

    dict.deleteWord("drzewo");

    dict.show();

    dict.deleteWord("dom");

    cout<<dict.showTrans("papuga")<<endl;
    cout<<dict.showTrans("statek")<<endl;
    cout<<endl<<"Sortowanie wzgledem slow:"<<endl;
    dict.sortWords(1);
    cout<<"Sortowanie wzgledem tlumaczen:"<<endl;
    dict.sortWords(2);

        cout<<endl<<"Sortowanie wzgledem slow:"<<endl;
    dict.sortWords(1);


}
