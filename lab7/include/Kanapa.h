#pragma once
#include <iostream>
#include "Mebel.h"
#include "Sofa.h"
#include "Lozko.h"

class Kanapa: public Sofa,public Lozko{
    public:
        //Konstruktor
        Kanapa(int sz,int wys,int dl,int dl_sie,int szer_spania);
        //Destruktor
        ~Kanapa();
        //metoda wypisujaca
        void print()const override;
};
