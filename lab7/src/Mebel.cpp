#include "Mebel.h"

Mebel::Mebel(){}

Mebel::Mebel(int sz,int wys,int dl):_szer(sz),_wys(wys),_dl(dl){}

Mebel::~Mebel(){std::cout<<"~Mebel\n";}

void Mebel::print()const{
    std::cout<<"Mebel: sz: "<<_szer<<" wys: "<<_wys<<" dl: "<<_dl;
}

std::ostream& operator<<(std::ostream &o,const Mebel &m){
    m.print();
    return o;
}