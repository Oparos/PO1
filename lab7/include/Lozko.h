#pragma once
#include <iostream>
#include "Mebel.h"

class Lozko:virtual public Mebel{
    public:
        //Konstruktory
        Lozko(int sz,int wys,int dl,int szer_spania);
        Lozko(int szer_spania);
        //Destruktor
        ~Lozko();
        //metoda wypisujaca
        void print()const override;

    protected:
        int _szer_spania=0;
};
