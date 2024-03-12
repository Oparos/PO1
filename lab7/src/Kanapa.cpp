#include "Kanapa.h"



Kanapa::Kanapa(int sz,int wys,int dl,int dl_sie,int szer_spania):Mebel(sz,wys,dl),Sofa(dl_sie),Lozko(szer_spania){}

Kanapa::~Kanapa(){std::cout<<"~Kanapa\n";}

void Kanapa::print()const{
    std::cout<<"jako ";
    Mebel::print();
    std::cout<<"\n";
    std::cout<<"jako ";
    Sofa::print();
    std::cout<<"\n";
    std::cout<<"jako ";
    Lozko::print();
}