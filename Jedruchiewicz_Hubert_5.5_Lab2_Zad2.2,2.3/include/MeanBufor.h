#ifndef MEANBUFOR_H
#define MEANBUFOR_H
#include "Bufor.h"
#include <iostream>
using namespace std;


class MeanBufor: public Bufor
{
    public:
        MeanBufor(int size1);
        MeanBufor();
        virtual ~MeanBufor();

        double calculate() override;

    protected:

    private:
};

#endif // MEANBUFOR_H
