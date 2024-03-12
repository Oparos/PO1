#pragma once
#include <iostream>
#include "Ksztalt.h"

class Kwadrat: public Ksztalt{
    public:
    //konstruktor
        Kwadrat(int x);
        //metoda wypisujca
        void wypisz(std::ostream &o)const ;
        //metoda pobierajca dlugosc boku
        int Get()const;
        //metoda liczaca pole powierzchni
        double polePow()const;
    private:
        int length=0;

};

//funckja wypisujaca
void wypisz(const Kwadrat& to_print);
