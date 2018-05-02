#ifndef QUICK_H
#define QUICK_H
#include "sort.h"

template <class T>
class Quick : public Sort<T>
{
    public:
        Quick();
        virtual ~Quick();
        void ordenar(T[],size_t);
    protected:
    private:
        void funcion(T*,size_t,size_t);
};

template <class T>
Quick<T>::Quick()
{

}

template <class T>
void Quick<T>::ordenar(T a[], size_t tam)
{
    funcion(a,0,tam);
}

template <class T>
void Quick<T>::funcion(T *array, size_t left, size_t right)
{
    size_t i = left, j = right;
    size_t pivot = array[(left + right) / 2];
    while(i<=j){
        while(array[i]<pivot){
            i++;
        }
        while(array[j]>pivot){
            j--;
        }
        if(i<=j){
            swap(array[i],array[j]);
            i++;
            j--;
        }
    }
    if(left < j){funcion(array, left, j);}
    if (i < right){funcion(array, i, right);}
}

template <class T>
Quick<T>::~Quick()
{

}

#endif // QUICK_H
