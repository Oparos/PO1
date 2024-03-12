#pragma once
#include <iostream>
#include "Wektor2D.h"
#include <algorithm>
#include <vector>
#include <functional>

class ListaWektorow {
    public:
    ListaWektorow(){}
    void Dodaj(Wektor2D* tmp){
        veclist.push_back(tmp);
    }
    void Wypisz(){
        std::for_each(veclist.begin(),veclist.end(),[](Wektor2D* tmp){tmp->print();});
    }
    void PosortujWedlugX(){
        std::cout<<"Posortowana wedlug wsprzednych X\n";
        std::sort(veclist.begin(),veclist.end(),[](Wektor2D* a,Wektor2D* b){return a->GetX() < b->GetX();});
    }
    void PosortujWedlugY(){
        std::cout<<"Posortowana wedlug wsprzednych Y\n";
        std::sort(veclist.begin(),veclist.end(),[](Wektor2D* a,Wektor2D* b){return a->GetY() < b->GetY();});
    }

    private:
        std::vector<Wektor2D*> veclist;
};

