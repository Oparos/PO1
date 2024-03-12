#pragma once
#include <iostream>

class Ksztalt{
    public:
    //konstruktor
    Ksztalt();
    //metoda wypisujaca
    virtual void wypisz(std::ostream &o )const=0;
    //metoda liczaca pola powierzchni
    virtual double polePow()const;
};
//funckja wypisujaca
void wypisz(const Ksztalt &to_print);