#pragma once
#include <iostream>

class Node{
    public:
        //wskaznik na kolejny element
        Node * _next=nullptr;

        // szablonowa metoda sprawdzajaca zgodnosc typow
        template<typename T>bool isType()const{
            return (typeid(T)==getType());
        }

        //metoda czysto wirtualna 
        virtual Node * next()const=0;

        //metoda cczysto wirtualna pomocna do sprawdzania typu
        virtual const std::type_info& getType()const=0;

        //destruktor
        virtual ~Node(){}

};

template<typename T> class  TNode : public Node{
    public:
        T value;

        //metoda zwracająca wskaznik na nastepny element
        Node * next()const override{
            return _next;
        }

        //metoda zwracajaca wartosc atrybutu
        T get()const{
            if(this->isType<T>())return value;
            else {
                auto valnode= dynamic_cast<const TNode<T>*>(this);
                return valnode->value;}
        }
        
        //metoda zwracajaca typ atrybutu
        const std::type_info& getType()const override{
            return typeid(value);
        }
};

class List{
    public:
    //szablonowa medoda dodajaca element na poczatek listy
        template<typename T> void add(T val){
            if(_head==nullptr){
                TNode<T> *node =new TNode<T>();
                node->value=val;
                _head=node;
            }
            else{
                TNode<T> *node =new TNode<T>();
                node->value=val;
                node->_next=_head;
                _head=node;
            }
        }
    //metoda zwracająca wskażnik na poczatek listy
        Node * head()const{
            return _head;
        }

        // szablonowa statyczna metoda zwracajaca wartosc atrybutu konkretnego elementu
        template<typename T=double> static T get(const Node *tmp);

    //destruktor
    ~List(){
        while (_head)
        {
            Node* tmp=_head;
            _head=_head->_next;
            delete tmp;
        }
        
    }
    private:
        Node* _head=nullptr;

};

//definicja statycznej metody szablonowej
template<typename T>  T List::get(const Node *tmp){
    auto valnode= dynamic_cast<const TNode<T>*>(tmp);
    return valnode->get();
    
}