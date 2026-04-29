#include <iostream>
#include "Arreglo.h"
#include "MergeSort.h"
#include "ImprimirArreglo.h"

using namespace std;

int main()
{
    Arreglo* arreglo = new Arreglo(8);
    ImprimirArreglo* imp = new ImprimirArreglo();
    MergeSort* mergeSort = new MergeSort();

    imp->imprimir(arreglo->GetArreglo(), arreglo->GetLen());

    mergeSort->ordenar(arreglo->GetArreglo(), 0, arreglo->GetLen() - 1);

    imp->imprimir(arreglo->GetArreglo(), arreglo->GetLen());

    return 0;
}
