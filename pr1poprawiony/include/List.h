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
        List();
        List(const List& copy);
        ~List();
        enum gdzie {Begin,End};
        void insert(const Data &tmp, gdzie x);
        List& insert (const Data &tmp);
        void print()const;
        Data *clone_if_exists(const Data& val);
        List numeric();
        List non_numeric();
    private:
        Node *head=nullptr;

};

