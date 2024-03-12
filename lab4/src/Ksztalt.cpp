#include "Ksztalt.h"

Ksztalt::Ksztalt(){}

// void Ksztalt::wypisz(){}
void Ksztalt::wypisz(std::ostream &o)const{
    o<<std::endl;
}
void wypisz(const Ksztalt &to_print){
    to_print.wypisz(std::cout);
}
double Ksztalt::polePow()const{return 0;}
