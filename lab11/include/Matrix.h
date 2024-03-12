#pragma once
#include <iostream>

template<typename T,int x,int y> class Matrix{
    public:
        //metoda ustawiajaca wzystkie wartosci macierzy ponada wartoscia
        void reset(T value){
            for(int i=0;i<_x;i++){
                for(int j=0;j<_y;j++)
                    mtx[j][i]=value;
            }
        }

        //konstruktor domyslny
        Matrix(){reset(0);}

        //metoda szablonowa dodajaca dwie macierze
            template<typename TT>void add(Matrix<TT,x,y>& matrix){
                for(int i=0;i<_y;i++){
                    for(int j=0;j<_x;j++){
                        mtx[i][j]+=matrix.at(i,j);
                    }
                }
            }

        //metoda dostepu do elementu
            T& at(int xsize,int ysize){
                return mtx[xsize][ysize];
            }

        //metoda szalonowa dostepu do elementu
            template<int xs,int ys> T& at();

        //konstrukor jednoagrumentowy
        Matrix(int value){
            reset(value);
        }
        
        private:
            int _x=x;
            int _y=y;
            T mtx[y][x];
};


template<typename T,int x,int y> template<int xs,int ys> T& Matrix< T, x,y>::at(){
            return mtx[xs][ys];
}


//szablon przeladowania operatora <<
template<typename T,int x,int y> std::ostream& operator<<(std::ostream &o,Matrix<T,x,y>& mtx){
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            o<<mtx.at(j,i)<<" ";
        }
        o<<"\n";
    }
    return o;
} 