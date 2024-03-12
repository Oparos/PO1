#include "Lozko.h"

Lozko::Lozko(int sz,int wys,int dl,int szer_spania):Mebel(sz,wys,dl),_szer_spania(szer_spania){}

Lozko::~Lozko(){std::cout<<"~Lozko\n";}

Lozko::Lozko(int szer_spania):_szer_spania(szer_spania){}

void Lozko::print()const{
    std::cout<<"Lozko: "; //<<
    Mebel::print();
    std::cout<<" sz.spania: "<<_szer_spania;
}
