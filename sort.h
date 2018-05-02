#ifndef SORT_H
#define SORT_H
#include <iostream>
using namespace std;

template <class T>
class Sort
{
    public:
        //Sort();
        virtual ~Sort();
        virtual void ordenar(T*,size_t) = 0;
    protected:
    private:
};

/*template <class T>
Sort<T>::Sort()
{

}*/

template <class T>
Sort<T>::~Sort()
{

}

#endif // SORT_H
