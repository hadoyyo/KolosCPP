#ifndef BAZOWA_H
#define BAZOWA_H
#include <iostream>

class bazowa
{
    public:
        bazowa();
        bazowa(int liczba1);
        virtual ~bazowa();
        void print();
        virtual void show();

        int liczba;

    protected:

    private:
};

#endif // BAZOWA_H
