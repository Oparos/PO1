#pragma once
#include <iostream>
#include "List.h"

template<typename T> void swap(T &a,T &b){
    T temp =std::move(b);
    b=std::move(a);
    a=std::move(temp);
}

