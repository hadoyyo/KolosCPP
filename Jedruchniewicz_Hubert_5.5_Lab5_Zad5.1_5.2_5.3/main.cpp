#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
#include <cmath>
#include <set>
#include <string>
#include <map>

using namespace std;

int sumaCyfr(int n) {
    int suma = 0;
    n = abs(n);
    while (n > 0) {
        suma += n % 10;
        n /= 10;
    }
    return suma;
}

void print(int n) {
    cout<<n<< " ";
}

int liczbaCyfr(int n) {
    if (n == 0) return 1;
    return (log10(abs(n))) + 1;
}

pair<int, int> duplikat(vector<int> lc)
{
    set<int> uni;
    int duplikat;
    int sum = 0;
    bool found = false;
    for (int l : lc)
    {
        if (uni.count(l) > 0) {
            duplikat = l;
            found = true;
        }
        else {
            uni.insert(l);
            sum += l;
        }
    }
    if (!found) {
        return make_pair(0, sum);
    }
    else {
    return make_pair(duplikat, sum);
    }
}

template <typename T>
void uniSum(const set<T>& set1, const set<T>& set2) {
    vector<T> uni;
    T sum = 0;
    for (T elem1 : set1) {
        bool found = false;
        for (T elem2 : set2) {
            if (elem1 == elem2) {
                found = true;
                break;
            }
        }
        if (!found) {
            uni.push_back(elem1);
        }
    }
    for (T elem2 : set2) {
        bool found = false;
        for (T elem1 : set1) {
            if (elem2 == elem1) {
                found = true;
                break;
            }
        }
        if (!found) {
            uni.push_back(elem2);
        }
    }
    cout << "Unikatowe elementy: ";
    for (T elem : uni) {
        cout << elem << " ";
        sum += elem;
    }
    cout << endl;
    cout << "Suma elementow unikatowych z obu zbiorow: " << sum << endl;
}

char findAddedCharacter(string str1,string str2) {
    map<char, int> charCount;

    for (char c : str2) {
        charCount[c]++;
    }

    for (char c : str1) {
        charCount[c]--;
        if (charCount[c] == 0) {
            charCount.erase(c);
        }
    }
    return charCount.begin()->first;
}

int main() {
    cout<<"Lab 5\n-------------------"<<endl;
    srand(time(0));
    vector<int> numbers(10);
    for (int& num : numbers) {
        num = rand() % 1200 - 0;
    }
    sort(numbers.begin(), numbers.end(), [](int a, int b) {return sumaCyfr(a) < sumaCyfr(b);});
    cout << "Posortowane liczby wedlug sumy cyfr:" << endl;
    for_each(numbers.begin(),numbers.end(),print);
    cout<<endl;
    sort(numbers.begin(), numbers.end(), [](int a, int b) {return liczbaCyfr(a) > liczbaCyfr(b);});
    cout << "Posortowane liczby wedlug liczby cyfr:" << endl;
    for_each(numbers.begin(),numbers.end(),print);

    cout<<"\n-------------------"<<endl;
    vector<int> lc = {1,2,3,4,5,5};
    pair<int, int> para = duplikat(lc);
    cout<<"Elementy wektora:"<<endl;
    for_each(lc.begin(),lc.end(),print);
    cout<<endl;
    cout<<"Znaleziony duplikat: "<<para.first<<endl;
    cout<<"Suma unikatowych elementow: " <<para.second<<endl;
    cout<<"-------------------"<<endl;
    set<int> set1 = {1, 2, 3, 4, 5};
    set<int> set2 = {4, 5, 6, 7, 8};
    uniSum(set1, set2);
    cout<<"-------------------"<<endl;
    string str1 = "kajak";
    string str2 = "kkjaxa";
    cout<<"Pierwszy napis: "<<str1<<endl;
    cout<<"Drugi napis: "<<str2<<endl;
    char addedChar = findAddedCharacter(str1, str2);
    cout << "Dodany znak: " << addedChar << endl;
    return 0;


}

