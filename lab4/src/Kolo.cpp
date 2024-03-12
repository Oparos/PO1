#include "Kolo.h"
Kolo::Kolo(const int x):r(x){}

int Kolo::GetR()const{return r;}
void Kolo::wypisz(std::ostream& o)const{
    o<<"Kolo o promieniu:"<<this->GetR()<<std::endl;
}

double Kolo::polePow()const{return r*3.1415;}

void wypisz(const Kolo& to_print){
    // std::cout<<"Kolo o promieniu:"<<to_print.GetR()<<std::endl;
    to_print.wypisz(std::cout);
}