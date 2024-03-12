#include "StringFun.h"


bool Less::operator()(const std::string &x,const std::string &y)const{
    if(x<y)return true;
        else return false;
}

bool Greater::operator()(const std::string &x,const std::string &y)const{
    if(x>y)return true;
        else return false;
}

bool Length::operator()(const std::string &x,const std::string &y)const{
    if(x.size()<y.size())return true;
        else return false;
}


void PrintNames(const std::vector<std::string> &x){
    std::cout<<"\n";
    for(auto i:x)
        std::cout<<i<<" ";
    std::cout<<"\n";
}
