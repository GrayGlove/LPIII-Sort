#ifndef INSERTION_H
#define INSERTION_H
#include "sort.h"

template <class T>
class Insertion : public Sort<T>
{
    public:
        Insertion();
        virtual ~Insertion();
        void ordenar(T*,size_t);
    protected:
    private:
};

template <class T>
Insertion<T>::Insertion()
{

}

template <class T>
void Insertion<T>::ordenar(T* a, size_t tam)
{
    for(int i=1;i<tam;i++){
        for(int j=i;j>0;j--){
            if(a[j]<a[j-1]){
                swap(a[j],a[j-1]);
            }
        }
    }
}

template <class T>
Insertion<T>::~Insertion()
{

}

#endif // INSERTION_H
