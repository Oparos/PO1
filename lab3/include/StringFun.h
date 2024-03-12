#pragma once
#include <iostream>
#include <string>
#include<vector>
#include<algorithm>
#include<functional>




class MyString{
    public:
        MyString();
        MyString(const std::string &imie);
        MyString(const char*imie);
        // ~MyString();
        void * operator new(size_t _imie);
        void operator delete(void * ptr);
        std::string _imie="";
    private:
};
class Less{
    public:
        //operator zwracajacy ktory string jest mniejszy literalnie
        bool operator()(const MyString &x,const MyString &y)const;
        friend class MyStrignContainer;
    private:
};

class Greater{
    public:
        //operator zwracajacy ktory string jest wieskszy literalnie
        bool operator()(const MyString &x,const MyString &y)const;
        friend class MyStringContainer;
    private:
};
class MyStringContainer{
    public:
        MyStringContainer();
        MyStringContainer(const MyStringContainer& to_copy);
        ~MyStringContainer();
        //metoda dodajace do kontenera wskaznik na my string
        void AddMStr( MyString* ptr);
        //metoda dodajace do kontenera wskaznik na my string z castowaniem
        void AddMStr(const std::string &nazwa);
        //metoda sortujaca i zwracajaca vectora
        std::vector<MyString> GetSorted(std::string jak_sort);
        std::vector< std::function<bool(const MyString &x,const MyString &y)>>SortFunc();
        Greater greater;
        Less less;
    private:
        std::vector<MyString*> kontener;
        std::vector< std::function<bool(const MyString &x,const MyString &y)>> funkcja;
    

};

void PrintNames(std::vector<MyString> x);
