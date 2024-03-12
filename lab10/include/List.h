#pragma once
#include <iostream>
#include "Data.h"

class Node{
    public:
        Node * next=nullptr;
        Data * data=nullptr;
        ~Node();
};

class List{
    public:
    //konstruktory
        List();
        List(const List& copy);
        List(List&& move);
        //destruktor
        ~List();
        enum gdzie {Begin,End};
        //metoda insert
        void insert(const Data &tmp, gdzie x);
        //metoda insert
        List& insert (const Data &tmp);
        //metoda wypisujaca
        void print()const;
        //metoda klonujaca
        Data *clone_if_exists(const Data& val);
        //metoda sprawdzajaca czy jest alfanumerczyna waretosc
        List numeric();
        //metoda sprawdzajaca czy nie jest alfanumerczyna waretosc
        List non_numeric();
        //metoda konkatenacji
        void operator<<(List &a);
        //operator przypisana
        void operator=(List &&a);
        List convert_to_stringdata();
    private:
        Node *head=nullptr;

};

