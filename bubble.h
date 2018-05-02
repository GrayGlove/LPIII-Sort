#ifndef BUBBLE_H
#define BUBBLE_H
#include "sort.h"

template <class T>
class Bubble : public Sort<T>
{
    public:
        Bubble();
        virtual ~Bubble();
        void ordenar(T*,size_t);
    protected:
    private:
};

template <class T>
Bubble<T>::Bubble()
{

}

template <class T>
void Bubble<T>::ordenar(T* a, size_t tam)
{
    for(int i=1;i<tam;i++){
        for(int j=0;j<(tam-i);j++){
            if(a[j+1]<a[j]){
                swap(a[j],a[j+1]);
            }
        }
    }
}

template <class T>
Bubble<T>::~Bubble()
{

}

#endif // BUBBLE_H
