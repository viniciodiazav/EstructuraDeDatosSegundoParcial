#include <iostream>
#include "Arreglo.h"
#include "ArregloDato.h"
#include "MergeSort.h"
#include "MergeSortDato.h"
#include "ImprimirArreglo.h"
#include "ImprimirDatoArreglo.h"

using namespace std;

int main()
{
   /* Arreglo* arreglo = new Arreglo(8);
    ImprimirArreglo* imp = new ImprimirArreglo();
    MergeSort* mergeSort = new MergeSort();

    imp->imprimir(arreglo->GetArreglo(), arreglo->GetLen());

    mergeSort->ordenar(arreglo->GetArreglo(), 0, arreglo->GetLen() - 1);

    imp->imprimir(arreglo->GetArreglo(), arreglo->GetLen()); */

    ArregloDato* arregloDato = new ArregloDato(5);
    ImprimirDatoArreglo* impDato = new ImprimirDatoArreglo();
    MergeSortDato* mergeSortDato = new MergeSortDato();

    impDato->imprimir(arregloDato->GetArreglo(), arregloDato->GetLen());

    mergeSortDato->ordenar(arregloDato->GetArreglo(), 0, arregloDato->GetLen() - 1);

    impDato->imprimir(arregloDato->GetArreglo(), arregloDato->GetLen());

    return 0;
}
