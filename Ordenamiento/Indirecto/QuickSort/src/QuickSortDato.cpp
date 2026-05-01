#include "QuickSortDato.h"

QuickSortDato::QuickSortDato() {}

QuickSortDato::~QuickSortDato() {}

void QuickSortDato::ordenar(Dato* arreglo, int inicio, int fin) {
    if (inicio > fin) {
        return;
    }
    int pivote = organizar(arreglo, inicio, fin);
    ordenar(arreglo, inicio, (pivote - 1));
    ordenar(arreglo, (pivote + 1), fin);
}

int QuickSortDato::organizar(Dato* arreglo, int inicio, int fin) {
    int pivote = (arreglo + fin)->GetDato(),
        menor = inicio - 1,
        temp = 0,
        d = 0;

    for (int i = inicio; i < fin; i++) {
        if ((arreglo + i)->GetDato() <= pivote) {
            menor += 1;
            temp = (arreglo + i)->GetDato();
            d = (arreglo + menor)->GetDato();
            (arreglo + i)->SetDato(d);
            (arreglo + menor)->SetDato(temp);
        }
    }
    menor += 1;
    temp = (arreglo + menor)->GetDato();
    d = (arreglo + fin)->GetDato();
    (arreglo + menor)->SetDato(d);
    (arreglo + fin)->SetDato(temp);

    return menor;
}
