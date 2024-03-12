#pragma once
#include <iostream>
#include "Ksztalt.h"
#include <cmath>

class Trojkat: public Ksztalt{
    public:
    //konstruktor
     Trojkat(const int x,const int y,const int z);
     void wypisz(std::ostream & o)const override;
     // 3 metody pobierjace dlugosci bokow trojkata
     int GetA()const;
     int GetB()const;
     int GetC()const;
     //metoda liczaca poole powierzchni
     double polePow()const;
    private:
        int lengthA=0;
        int lengthB=0;
        int lengthC=0;
};
//funckja wypisujaca
void wypisz(const Trojkat& to_print);