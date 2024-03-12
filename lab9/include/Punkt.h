#pragma once
#include <iostream>

//template swap globalny
template<typename T> void swap(T &a,T &b){
    T tmp=b;
    b=a;
    a=tmp;
}

class Punkt{
    public:
    //konstruktor
        Punkt(std::string name,int x,int y):_name(name),_x(x),_y(y){}
        //template do wyciagania wspolrzednych
        template<int T> int  wsp()const {
            if(T==0)
                return _x;
            else return _y;
        }
        //template do ustawiana zmiennych
        template<int T> void set(int a){
            if(T==0)
                _x=a;
            else  _y=a;
        }
        //template ktory zawraca mniejsza wartosc
        template<typename T> static T min(const T &a,const T &b){
            if(a<b)return a;
                else return b;
        }
        //operator do porownywania
        bool operator <(const Punkt &tmp)const {
            if(_x<tmp._x) return true;
            else if(_x==tmp._x){
                if(_y<tmp._y) return true;
                else return false;
            }
            else return false;
        }

        //metoda pobierajaca imie
        std::string getname()const{
            return _name;
        }
    private:
        std::string _name="";
        int _x=0;
        int _y=0;
};

//przeladowany operator ostream
std::ostream& operator<<(std::ostream &o,const Punkt &tmp){
    return o<<tmp.getname()<<"("<<tmp.wsp<0>()<<","<<tmp.wsp<1>()<<")";
}

//template do zamiany Punktu
template<>void swap<Punkt>(Punkt &a,Punkt &b){
    Punkt tmp("",b.wsp<0>(),b.wsp<1>());
    b.set<0>(a.wsp<0>());
    b.set<1>(a.wsp<1>());
    a.set<0>(tmp.wsp<0>());
    a.set<1>(tmp.wsp<1>());
    
}