#pragma once
#include <iostream>

class Named{
    public:
    std::string Name()const;
    void setName(std::string name);
    std::string GetName()const;

    friend Named& operator>>(const std::string& txt, Named& to_write);
    private:
    std::string _name="None";
};
Named& operator>>(const std::string& txt, Named& to_write);

class Point :public Named{
    public:
    Point();
    Point(int a,int b);
    Point(int a,int b,std::string name);
    Point operator++(int);
    friend std::ostream& operator<<(std::ostream& out,const Point& print);
    friend class PointSmartPtr;
    private:
    int x=0;
    int y=0;
};
std::ostream& operator<<(std::ostream& out,const Point& print);

class PointSmartPtr{
    public:
    PointSmartPtr(Point* wsk);
    ~PointSmartPtr();
    Point& operator*();
    Point operator++(int);
    PointSmartPtr operator=(PointSmartPtr& obj);
    private:
    int * wart=NULL;
    Point* ptr=NULL;
};