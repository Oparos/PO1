#include "Data.h"
Data::~Data(){}

std::ostream& operator<<(std::ostream& o,const Data& tmp){
    tmp.print();
    return o;
}
 
 IntData::IntData(int x):value(x){}
 void IntData::print() const{
    std::cout<<value;
 }
Data* IntData::clone()const {
    return new IntData(value);
}
bool IntData::isSame(const Data& data)const{
    try{
        auto val  = dynamic_cast<const IntData&>(data);
        return (value == val.value);
        }
        catch(std::bad_cast){
            return false;
        }
 }

bool IntData::num()const{
    if(typeid(value)==typeid(int))return true;
    else return false;
}

 StringData::StringData(std::string x):value(x){}

  void StringData::print() const{
    std::cout<<value;
 }

Data* StringData::clone()const {
    return new StringData(value);
}
bool StringData::num()const{
    if(typeid(value)==typeid(int))return true;
    else return false;
}

bool StringData::isSame(const Data& data)const{
    try{
        auto val  = dynamic_cast<const StringData&>(data);
        return (value == val.value);
        }
        catch(std::bad_cast){
            return false;
        }
 }

 Boolean::Boolean(bool x):value(x){}

  void Boolean::print() const{
    std::cout<<(value?"true":"false");
 }

  Data* Boolean::clone()const {
    return new Boolean(value);
 }

 bool Boolean::isSame(const Data& data)const{
    try{
        auto val  = dynamic_cast<const Boolean&>(data);
        return (value == val.value);
        }
        catch(std::bad_cast){
            return false;
        }
 }
bool Boolean::num()const{
    if(typeid(value)==typeid(int))return true;
    else return false;
}