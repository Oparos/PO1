#include "PointSmartPtr.h"

std::string Named::Name()const{
    return _name;
}

void Named::setName(std::string name){
    _name=name;
}

std::string Named::GetName()const{
    return _name;
}


Named& operator>>(const std::string& txt,Named& to_write){
    to_write._name=txt;
    return to_write;
}

std::ostream& operator<<(std::ostream& out,const Point& print){
    return out<<print.Name()<<" ["<<print.x<<","<<print.y<<"]";
}

Point::Point(){}

Point::Point(int a,int b):x(a),y(b){}

Point::Point(int a,int b,std::string name):x(a),y(b){
    setName(name);
}
PointSmartPtr::PointSmartPtr(Point* wsk){
    ptr=wsk;
    if(wart==NULL) wart=new int(0);
    (*wart)++;
    // std::cout<<(*wart)<<std::endl;
}

Point& PointSmartPtr::operator*(){
    return *ptr;
}

PointSmartPtr PointSmartPtr::operator=( PointSmartPtr& obj){
    if(this==&obj)
        return *this;
    else{
        if((*wart)==0){
                delete this->ptr;
                delete this->wart;
            }
    else (*wart)--; // trzeba zmniejszyc bo jzu wskazuje na cos innego

        // std::cout<<*(obj.wart)<<std::endl;
        // (this->ptr)=new Point ((obj.ptr)->x,(obj.ptr)->y);
        (this->ptr)=obj.ptr;
        this->wart=obj.wart;
        (*(obj.wart))++;
        return *this;
    }
}
Point Point::operator++(int){
    Point tmp=*this;
    x++;
    y++;
    return tmp;
}

PointSmartPtr::~PointSmartPtr(){
    // std::cout<<(*wart)<<std::endl;
    // std::cout<<"\tKasuje  takiego  "<<this->ptr->x<<this->ptr->GetName()<<std::endl;
    if((*wart)==0){
        delete this->wart;
        delete this->ptr;
    }
    else{
        (*wart)--;
    }
}