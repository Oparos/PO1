#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

class Less{
    public:
        //operator zwracajacy ktory string jest mniejszy literalnie
        bool operator()(const std::string& x,const std::string& y)const;
    private:
};

//metoda wypisujaca imiona 
void PrintNames(const std::vector<std::string> &x);

class Greater{
    public:
        //operator zwracajacy ktory string jest wieskszy literalnie
        bool operator()(const MyString x,const MyString y)const;
    private:
};

class Length{
    public:
        //operator zwracajacy ktory string jest mniejsza dlugosc
        bool operator()(const std::string& x,const std::string& y)const;
    private:
};