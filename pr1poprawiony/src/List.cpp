#include "List.h"

Node::~Node(){delete data;}

List::List(){}

List::List(const List& copy){
    Node *tmp=copy.head;
    while(tmp){
        this->insert(*(tmp->data),List::End);
        tmp=tmp->next;
    }


}

Data *List::clone_if_exists(const Data& val){
    Node * tmp=this->head;
    while (tmp){
        if(tmp->data->isSame(val)==true) return tmp->data->clone();
        tmp=tmp->next;
    }
    return nullptr;
    
}
List::~List(){
    Node *tmp=head;
    
    while(head!=nullptr){
        Node * poprzedni=nullptr;
        //przechodze do przedostatneigo 
        while (tmp->next){
            poprzedni=tmp;
            tmp=tmp->next;
        }
        if(poprzedni)poprzedni->next=nullptr;//przedostatni ustawiam nullptr
        delete (tmp); //usuwam ostatni
        if(poprzedni==nullptr) head=nullptr;//return;sprawdzam czy zostal jeden element
        tmp=head;    
    }

}

void List::insert(const Data &tmp,gdzie x=End){
    Node * newEl= new Node();
    newEl->data=tmp.clone();
    switch(x){
        case Begin:{
            if(head==nullptr)head=newEl;
            else{
                newEl->next=head;
                head=newEl;
                }
            break;
    }
        case End:{
            if(head==nullptr){
                head=newEl;
            }
            else{
                Node *tmp=head;
                while(tmp->next){
                    tmp=tmp->next;
                }
                
                tmp->next=newEl;
            }
            break;
    }

    default:
        break;
    }
}

List& List::insert(const Data& tmp){
    insert(tmp, List::End);
    return *this;
}

void List::print()const{
    std::cout<<"[ ";
    Node* tmp=head;
    while (tmp!=NULL){
        tmp->data->print();
        if(tmp->next!=NULL)std::cout<<", ";
        tmp=tmp->next;
    }
    std::cout<<" ]\n";
}

List List::numeric(){
    Node *tmp =this->head;
    List newList;
    while(tmp){
        if(tmp->data->num())newList.insert(*(tmp->data),List::End);
        tmp=tmp->next;
    }
    return newList;
}

List List::non_numeric(){
    Node *tmp =this->head;
    List newList;
    while(tmp){
        if(tmp->data->num()==false)newList.insert(*(tmp->data),List::End);
        tmp=tmp->next;
    }
    return newList;
}
