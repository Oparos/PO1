#pragma once
#include <iostream>
#include "Mebel.h"

class Sofa:virtual public Mebel{
    public:
    //Konstruktory
      Sofa(int sz,int wys,int dl,int dl_sie);
      Sofa(int dl_sie);
      //Destruktory
      ~Sofa();
      //metoda wypisujaca
      void print()const override;
    protected:
      int _dl_sie=0;
};
