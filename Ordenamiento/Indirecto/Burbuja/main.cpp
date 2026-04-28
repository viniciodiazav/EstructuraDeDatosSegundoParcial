#include <iostream>
#include "IArreglo.h"
#include "IArregloDato.h"
#include "Arreglo.h"
#include "ArregloDato.h"
#include "Burbuja.h"
#include "BurbujaDato.h"
#include "ImprimirArreglo.h"
#include "ImprimirDatoArreglo.h"

using namespace std;

int main()
{
    IArreglo* arreglo = new Arreglo(10);
    Burbuja burbuja = Burbuja();
    ImprimirArreglo imp = ImprimirArreglo();

    imp.imprimir(arreglo->GetArreglo(), arreglo->GetLen());

    burbuja.ordenar(arreglo->GetArreglo(), arreglo->GetLen());

    imp.imprimir(arreglo->GetArreglo(), arreglo->GetLen());

    IArregloDato* arregloDato = new ArregloDato(5);
    ImprimirDatoArreglo impDato = ImprimirDatoArreglo();

    impDato.imprimir(arregloDato->GetArreglo(), arregloDato->GetLen());

    BurbujaDato* burbujaDato = new BurbujaDato();

    burbujaDato->ordenar(arregloDato->GetArreglo(), arregloDato->GetLen());

    impDato.imprimir(arregloDato->GetArreglo(), arregloDato->GetLen());

    return 0;
}
