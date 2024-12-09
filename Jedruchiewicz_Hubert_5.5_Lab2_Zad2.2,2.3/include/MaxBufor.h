#ifndef MAXBUFOR_H
#define MAXBUFOR_H
#include "Bufor.h"
#include <iostream>
using namespace std;


class MaxBufor: public Bufor
{
    public:
        MaxBufor(int size1);
        MaxBufor();
        virtual ~MaxBufor();

        double calculate() override;
        void add(int value) override;

    protected:

    private:
};

#endif // MAXBUFOR_H
