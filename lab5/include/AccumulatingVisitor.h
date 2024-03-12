#pragma once
#include <iostream>
#include "Visitor.h"

class AccumulatingVisitor :public Visitor{
    public:
    //metoda dodaajaca do sumy
        void visit(const FloatData *vst) override;
        //metoda dodaajaca do sumy
        void visit(const IntData *vst) override;
        //metoda aby klasa nie byla abstrakcyjna
        void visit(const FloatData *vst)const override;
        //metoda aby klasa nie byla abstrakcyjna
        void visit(const IntData *vst)const  override;
        //metoda zwracajaca syma liczb
        double getTotalSum();
    private:
    //zmienna przetrzymujaca sumes
        double suma=0;
};