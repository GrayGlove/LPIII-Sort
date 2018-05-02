#ifndef SELECTION_H
#define SELECTION_H
#include "sort.h"

template <class T>
class Selection : public Sort<T>
{
    public:
        Selection();
        virtual ~Selection();
        void ordenar(T*,size_t);
    protected:
    private:
};

template <class T>
Selection<T>::Selection()
{

}

template <class T>
void Selection<T>::ordenar(T *a, size_t tam)
{
	for(int i=0;i<tam;i++){
		int minimo=i;
		for(int j=i+1;j<tam;j++){
			if(a[j]<a[minimo]){
				minimo=j;
			}
		}
		swap(a[minimo],a[i]);
    }
}

template <class T>
Selection<T>::~Selection()
{

}

#endif // SELECTION_H
