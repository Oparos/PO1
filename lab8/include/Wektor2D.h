#pragma once
#include <iostream>
#include <set>


class Wektor2D{
    public:
        Wektor2D(std::string length,int n1,int n2):_length(length),_x(n1),_y(n2){}
        void print()const{
            std::cout<<_length<<"("<<_x<<","<<_y<<")"<<std::endl;
        }
        void printoverval(int val)const{
            if(_x>=val)std::cout<<_length<<"("<<_x<<","<<_y<<")"<<std::endl;
        }
        int GetX()const{
            return _x;
        }
        void SetX(int x){
            _x=x;
        }

         int GetY()const {
            return _y;
        }
        bool operator<(Wektor2D x)const{
            return this->GetX()<=x.GetX();

        }
    private:
        std::string _length="";
        int _x=0;
        int _y=0;

};