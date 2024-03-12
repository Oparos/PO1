#pragma once
#include <iostream>

class Data{
    public:
        virtual ~Data();
        virtual void print()const =0;
        virtual Data * clone()const =0;
        virtual bool isSame(const Data& data)const =0;
        virtual bool num()const =0;
        virtual std::string tostr()const =0;
};

std::ostream& operator<<(std::ostream& o,const Data& tmp);

class IntData:public Data{
    public:
        IntData(int x);
        void print() const override;
        Data* clone()const override;
        bool isSame(const Data& data)const override;
        bool num()const override;
        std::string tostr()const override;
    private:
        int value=0;
};

class FloatData:public Data{
    public:
        FloatData(float x);
        void print() const override;
        Data* clone()const override;
        bool isSame(const Data& data)const override;
        bool num()const override;
        std::string tostr()const override;
    private:
        float value=0;

};

class StringData:public Data{
    public:
        StringData(std::string x);
        void print() const override;
        Data* clone()const override;
        bool isSame(const Data& data)const override;
        bool num()const override;
        std::string tostr()const override;
    private:
        std::string value;

};

class Boolean:public Data{
    public:
        Boolean(bool x);
        void print() const override;
        Data* clone()const override;
        bool isSame(const Data& data)const override;
        bool num()const override;
        std::string tostr()const override;
    private:
        bool value;
};