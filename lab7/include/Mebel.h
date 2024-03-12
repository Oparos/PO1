#pragma once
#include <iostream>


class Mebel{
    public:
        //Konstruktory
        Mebel();
        Mebel(int sz,int wys,int dl);
        //Destruktory
        virtual ~Mebel();
        //wirtualna metoda wypisujaca
        virtual void print()const;
    protected:
        int _szer=0;
        int _wys=0;
        int _dl=0;
};

//operator ostream
std::ostream& operator<<(std::ostream &o,const Mebel &m);