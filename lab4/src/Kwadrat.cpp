#include "Kwadrat.h"

Kwadrat::Kwadrat(int x):length(x){}

void Kwadrat::wypisz(std::ostream &o)const {
    o<<"Kwadrat o boku:"<<length<<std::endl;
    // std::cout<<"Kwadrat o boku:"<<.Get()<<std::endl;
    // return o;
}

double Kwadrat::polePow()const{return length*length;}
int Kwadrat::Get()const{
    return length;
}

void wypisz(const Kwadrat& to_print){
    // to_print.wypisz(std::cout);
    // std::cout<<to_print.Get()<<std::endl;
    to_print.wypisz(std::cout);
}