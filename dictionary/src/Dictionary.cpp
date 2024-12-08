#include "Dictionary.h"
#include <map>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

Dictionary::Dictionary()
{
    //ctor
}

Dictionary::~Dictionary()
{
    //dtor
}

void Dictionary::addWord(string word,string trans)
{
    words.insert(pair<string,string>(word,trans));
}

void Dictionary::deleteWord(string word)
{
    if (words.count(word))
    {
        words.erase(word);
    }
    else
    {
        cout<<"Slowo \""<<word<<"\" nie znajduje sie w slowniku"<<endl;
    }
}

void Dictionary::show()
{
     map<string, string>::iterator it;
     for(it=words.begin(); it!=words.end(); ++it)
        {
            cout << it->first <<" - "<<it->second<<endl;
        }
     cout<<endl;
}

string Dictionary::showTrans(string word)
{
    string ans = "Slowo \""+word+"\" nie znajduje sie w slowniku";
    if (words.count(word))
    {
        ans = "Tlumaczenie slowa \""+word+"\" - "+words.find(word)->second;
    }
    return ans;
}

void Dictionary::sortWords(int tryb)
{
    if (tryb==1)
    {
        show();
    }
    else if (tryb==2)
    {
         vector<pair<string, string>> vec(words.begin(), words.end());
         sort(vec.begin(), vec.end(), [](pair<string, string> a,pair<string, string> b) {return a.second < b.second;});
         for(unsigned int i=0; i<vec.size(); i++)
         {
            cout<<vec.at(i).second<<" - "<<vec.at(i).first<<endl;
         }
            cout<<endl;
    }
    else
    {
        cout<<"Podano bledny tryb"<<endl;
    }
}
