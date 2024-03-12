#include "Trojkat.h"

Trojkat::Trojkat(const int x,const int y,const int z):lengthA(x), lengthB(y),lengthC(z){}

int Trojkat::GetA()const{return lengthA;}
int Trojkat::GetB()const{return lengthB;}
int Trojkat::GetC()const{return lengthC;}

 void Trojkat::wypisz(std::ostream & o)const{
    o<<"Trojkat bokach:"<<this->GetA()<<" "<<this->GetB()<<" "<<this->GetC()<<std::endl;
 }

double Trojkat::polePow()const{
     double pol = static_cast<double>(1.0*(lengthA+lengthB+lengthC)/2);
    return sqrt(pol*(pol-lengthA)*(pol-lengthB)*(pol-lengthC));
}

void wypisz(const Trojkat& to_print){
    // std::cout<<"Trojkat bokach:"<<to_print.GetA()<<" "<<to_print.GetB()<<" "<<to_print.GetC()<<std::endl;
    to_print.wypisz(std::cout);

}