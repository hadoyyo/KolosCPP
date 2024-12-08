#ifndef POCHODNA_H
#define POCHODNA_H
#include <bazowa.h>
#include <iostream>


class pochodna: public bazowa
{
    public:
        pochodna();
        pochodna(int liczba1);
        virtual ~pochodna();

        void print();
        void show() override;

    protected:

    private:
};

#endif // POCHODNA_H
