#pragma once
#include <iostream>
#include <functional>
#include <algorithm>

namespace flcpp{
   double approximateDerivative(std::function<double(double)>fun, double x, double h){
      return (fun(x+h)-fun(x-h))/(2*h);
   }

   template<typename T> class Sum{
      public:
         Sum(int &x):total(x){}
         void operator()(int x){
            total+=x;
         }
      private:
         int &total=0;
   };

   template<typename T> bool even(T x){
      if(x%2==0) return true;
      return false;
   }
   template<typename T>bool odd(T x){
      if(even<T>(x))return false;
      return true;
   }

   template<typename T> class filter{
      public:
      filter(std::vector<T> vec,std::function<bool(int)> f){
         for(const auto&i:vec){
            if(f(i))std::cout<<i<<" ";
         }
         std::cout<<std::endl;
      }
      void operator()(std::vector<T> vec,std::function<bool(int)> f){
         for(const auto&i:vec){
            if(f(i))std::cout<<i<<" ";
         }

      }
   };

   template<typename T> class GreaterThan{
      public:
         GreaterThan(T val):value(val){}
         bool operator()(T val){
            return value<val;
         }
      private:
         T value;
   };
}

