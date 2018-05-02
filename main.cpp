#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
#include "bubble.h"
#include "insertion.h"
#include "quick.h"
#include "selection.h"
using namespace std;

template <class T>
void llenar_array(T* a,int tam){
    srand(time(NULL));
    for(int i=0; i<tam; i++){
        a[i] = rand()%(tam+1);
    }
}

template <class T>
bool estaOrdenado(T* a,int tam){
    T temp=a[0];
    for(int i=1; i<tam; i++){
        if(temp > a[i]){
            return false;
        }
        temp = a[i];
    }
    return true;
}

int main()
{
    Sort<int> *sarray[4]={new Bubble<int>(), new Insertion<int>(), new Selection<int>(), new Quick<int>()};
    int* a;
    int temp = pow(10,7);
    for(int i=10; i<=temp ; i*=10){
        a = new int[i];
        cout<<i;
        llenar_array(a,i);
        for(int s=0; s<4 ; s++){
            clock_t t;
            t = clock();
            sarray[s]->ordenar(a,i);
            t = clock() - t;
            cout<<"  "<<((float)t)/CLOCKS_PER_SEC;
        }
        cout<<endl;
        delete[] a;
    }

    return 0;
}
