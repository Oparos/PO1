#pragma once
#include <iostream>
// #include "Data.h"
class Data;
class IntData;
class FloatData;

class Visitor{
    public:
    // Visitor();
        //metoda pobieraja do wypisania floatdata
        virtual void visit(const FloatData *vst)const=0;
        //metoda pobieraja do wypisania inttdata
        virtual void visit(const IntData *vst)const=0;
        //metoda dodaajaca do sumy
        virtual void visit(const FloatData *vst)=0;
        //metoda dodaajaca do sumy
        virtual void visit(const IntData *vst) =0;
    private:
};