#ifndef BUFOR_H
#define BUFOR_H


class Bufor
{
    public:
        Bufor(int size1);
        Bufor();
        virtual ~Bufor();

        virtual void add(int value);

        virtual double calculate()=0;

        int getIndex();
        int getSize();
        int getTab(int i);
        int getFirst();

        void setFirst(int value);
        void setTab(int pos,int value);
        void show();

    protected:

    private:
        int* arr;
        int size;
        int index;
};

#endif // BUFOR_H
