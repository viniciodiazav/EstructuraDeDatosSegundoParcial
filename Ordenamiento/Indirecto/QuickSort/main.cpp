#include <iostream>
#include "Arreglo.h"
#include "ArregloDato.h"
#include "QuickSort.h"
#include "QuickSortDato.h"
#include "ImprimirArreglo.h"
#include "ImprimirDatoArreglo.h"

using namespace std;

int main()
{
  /*  Arreglo* arreglo = new Arreglo(5);
    ImprimirArreglo* imp = new ImprimirArreglo();
    QuickSort* quickSort = new QuickSort();

    imp->imprimir(arreglo->GetArreglo(), arreglo->GetLen());

    quickSort->ordenar(arreglo->GetArreglo(), 0, arreglo->GetLen() - 1);

    imp->imprimir(arreglo->GetArreglo(), arreglo->GetLen()); */

    ArregloDato* arregloDato = new ArregloDato(5);
    ImprimirDatoArreglo* impDato = new ImprimirDatoArreglo();
    QuickSortDato* quickSortDato = new QuickSortDato();

    impDato->imprimir(arregloDato->GetArreglo(), arregloDato->GetLen());

    quickSortDato->ordenar(arregloDato->GetArreglo(), 0, arregloDato->GetLen() - 1);

    impDato->imprimir(arregloDato->GetArreglo(), arregloDato->GetLen());

    return 0;
}
