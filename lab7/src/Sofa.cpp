#include "Sofa.h"

Sofa::Sofa(int sz,int wys,int dl,int dl_sie):Mebel(sz,wys,dl),_dl_sie(dl_sie){}

Sofa::Sofa(int dl_sie):_dl_sie(dl_sie){}

Sofa::~Sofa(){std::cout<<"~Sofa\n";}

void Sofa::print()const{
    std::cout<<"Sofa: "; //<<
    Mebel::print();
    std::cout<<" siedzisko: "<<_dl_sie;
}