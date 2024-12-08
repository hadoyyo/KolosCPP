#ifndef DICTIONARY_H
#define DICTIONARY_H
#include <map>
#include <iostream>

using namespace std;

class Dictionary
{
    public:
        Dictionary();
        virtual ~Dictionary();
        void addWord(string word,string trans);
        void deleteWord(string word);
        void show();
        string showTrans(string word);
        void sortWords(int tryb);

    protected:

    private:
        map<string,string> words;
};

#endif // DICTIONARY_H
