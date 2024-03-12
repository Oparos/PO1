#include "StringFun.h"

MyString::MyString(){}
MyString::MyString(const std::string &imie):_imie(imie){}// tne nie potrzebny
MyString::MyString(const char *imie):_imie(imie){}
// MyString::~MyString(){ delete(this);}

void * MyString::operator new(size_t rozm){
    std::cout<<"[MyString] Overloading new operator with size:"<<rozm<<std::endl;
    MyString* str=::new MyString;
    return str;
}


void MyString::operator delete(void * ptr){
    std::cout<<"[MyString] Overloading delete operator"<<std::endl;
    // ::delete ptr;
    
    free(ptr);
}

MyStringContainer::MyStringContainer(){}

MyStringContainer::MyStringContainer(const MyStringContainer& to_copy){
    // MyStringContainer nowy;
    for(auto i:to_copy.kontener)
        this->kontener.push_back(new MyString());
    for(auto i :to_copy.funkcja)
        this->funkcja.push_back(i);


}

void MyStringContainer::AddMStr( MyString* ptr){
    kontener.push_back(ptr);
}

void MyStringContainer::AddMStr(const std::string &nazwa){
    // MyString* ptr=::new MyString;
    kontener.push_back(new MyString(nazwa));
}

std::vector<MyString> MyStringContainer::GetSorted(std::string jak_sort){
    std::vector<MyString> posort;
    for( auto i :kontener)
        posort.push_back(*i);
    if(jak_sort=="ASC")
        {std::sort( posort.begin(), posort.end(), less );
        funkcja.push_back(less);}
    else
        {std::sort( posort.begin(), posort.end(), greater );
        funkcja.push_back(greater);}
    return posort;
}

bool Less::operator()(const MyString &x,const MyString &y)const{
    // funkcja.push_back(Less());
    if(x._imie<y._imie)return true;
        else return false;
}

bool Greater::operator()(const MyString &x,const MyString &y)const{
    if(x._imie>y._imie)return true;
        else return false;
}

void PrintNames(std::vector<MyString> x){
    // std::cout<<"\n";
    for(int i=0;i<x.size();i++)
        std::cout<<x[i]._imie<<" ";
    std::cout<<"\n";
}

std::vector< std::function<bool(const MyString &x,const MyString &y)>>MyStringContainer::SortFunc(){
    return funkcja;
}

MyStringContainer::~MyStringContainer(){
    for(auto i :kontener)
        delete i;
}