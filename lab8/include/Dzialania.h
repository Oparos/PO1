#pragma once
#include <iostream>
#include "ListaWektorow.h"

class DzialaniaNaZbiorach{
    public:
    DzialaniaNaZbiorach(std::set<Wektor2D> wektor):_wektor(wektor){}

    void WypiszXWiekszeOd(int val){
        std::for_each(_wektor.upper_bound(Wektor2D("",val,0)),_wektor.end(),[](Wektor2D tmp){tmp.print();});
    }

    void ZamienX(int x, int y){
        auto znalezione=std::find_if(_wektor.begin(),_wektor.end(),[x](Wektor2D tmp){return tmp.GetX()==x;});
        auto it=_wektor.find(Wektor2D("",x,0));
        // std::cout<<typeid(it).name();
        

    }
    private:
        std::set<Wektor2D> _wektor;
};

