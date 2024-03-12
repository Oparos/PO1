#include "PrintingVisitor.h"
#include "Data.h"

void PrintingVisitor::visit(const FloatData *vst)const {
    std::cout<<vst->getValue()<<" ";
}

void PrintingVisitor::visit(const IntData *vst)const {
    std::cout<<vst->get()<<" ";
}

void PrintingVisitor::visit(const FloatData *vst) {
   
}

void PrintingVisitor::visit(const IntData *vst) {
    
}