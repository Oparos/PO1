#include "AccumulatingVisitor.h"
#include "Data.h"

void AccumulatingVisitor::visit(const FloatData *vst) {
    suma+=vst->getValue();
}

void AccumulatingVisitor::visit(const IntData *vst) {
    suma+=vst->get();
}
double AccumulatingVisitor::getTotalSum(){
    return suma;

}
void AccumulatingVisitor::visit(const FloatData *vst)const {
    
}

void AccumulatingVisitor::visit(const IntData *vst)const {
    
}