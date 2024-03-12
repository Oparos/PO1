#pragma once
#include <iostream>
#include "Ksztalt.h"

class Kolo :public Ksztalt {
    public:
    //konstruktor
        Kolo(const int x);
        //metoda pobierajaca promien
        void wypisz(std::ostream& o)const override;
        int GetR()const;
        //metoda liczaca pole powierzchis
        double polePow()const;
    private:
        int r=0;

};
void wypisz(const Kolo& to_print);