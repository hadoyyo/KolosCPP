#include <iostream>
#include <Employee.h>
#include <Developer.h>
#include <TeamLeader.h>
#include <Bufor.h>
#include <MeanBufor.h>
#include <MaxBufor.h>

using namespace std;

void whoWorksMoreThan5Years(Employee** employees, int size );
void howManyEarnLessThanMeanBonus(Employee** employees, int size1);

int main()
{
    TeamLeader* t1 = new TeamLeader("Kowalski",22,2,6000);
    Developer* d1 = new Developer("Kotarski",25,6,4000);
    Developer* d2 = new Developer("Bednarczyk",26,1,4000);
    int size1=3;
    Employee** employees = new Employee*[size1];
    employees[0] = t1;
    employees[1] = d1;
    employees[2] = d2;

    cout<<"Team:"<<endl;
    t1->show();
    cout<<"--------"<<endl;
    d1->show();
    cout<<"--------"<<endl;
    d2->show();
    cout<<"--------"<<endl;

    whoWorksMoreThan5Years(employees,size1);
    howManyEarnLessThanMeanBonus(employees,size1);
    cout<<"--------"<<endl;
    MeanBufor b1(5);
    b1.add(1);
    b1.add(2);
    b1.add(4);
    MaxBufor b2(3);
    b2.add(7);
    b2.add(5);
    b2.add(1);
    b1.show();
    cout<<"Srednia arytmetyczna elementow: "<<b1.calculate()<<endl;
    cout<<"Zmiana jednego elementu tablicy arr[1]: 2->4"<<endl;
    b1.setTab(1,4);
    b1.show();
    cout<<"Srednia arytmetyczna elementow: "<<b1.calculate()<<endl;
    cout<<"--------"<<endl;
    b2.show();
    cout<<"Najwiekszy element: "<<b2.calculate()<<endl;
    cout<<"Zmiana jednego elementu tablicy arr[2]: 1->9"<<endl;
    b2.setTab(2,9);
    b2.show();
    cout<<"Najwiekszy element: "<<b2.calculate()<<endl;
    cout<<"Proba przepelnienia tablicy"<<endl;
    b2.add(1);





}

void whoWorksMoreThan5Years (Employee** employees, int size1 )
{
    cout<<"Pracownicy, ktorzy pracuja wiecej niz 5 lat:"<<endl;
    for(int i=0;i<size1;i++)
    {
        if (employees[i]->getExperience()>5)
        {
            cout<<"- "<<employees[i]->getSurname()<<endl;
        }
    }
}


void howManyEarnLessThanMeanBonus(Employee** employees, int size1) {
    float totalBonus = 0;

    for (int i = 0; i < size1; i++) {
        totalBonus += employees[i]->calculateSalary(1);
    }

    float meanBonus = totalBonus/size1;

    int count = 0;
    for (int i = 0; i < size1; i++) {
        if (employees[i]->calculateSalary(1) < meanBonus) {
            count++;
        }
    }

    cout << "Liczba pracownikow, ktorzy otrzymali premie nizsza niz srednia: " << count << endl;
}
