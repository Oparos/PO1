#pragma once
#include <iostream>
#include "Visitor.h"

class PrintingVisitor: public Visitor{
    public:
    //metoda pobieraja do wypisania floatdata
        void visit(const FloatData *vst)const override;
        //metoda pobieraja do wypisania intdata
        void visit(const IntData *vst)const override;
        //metoda aby klasa nie byla abstrakcyjna
        void visit(const FloatData *vst) override;
        //metoda aby klasa nie byla abstrakcyjna
        void visit(const IntData *vst) override;

};