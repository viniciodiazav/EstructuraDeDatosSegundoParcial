#include "QuickSort.h"

QuickSort::QuickSort() {}

QuickSort::~QuickSort() {}

void QuickSort::ordenar(int* arreglo, int inicio, int fin) {
    if (inicio > fin) {
        return;
    }
    int pivote = organizar(arreglo, inicio, fin);
    ordenar(arreglo, inicio, (pivote - 1));
    ordenar(arreglo, (pivote + 1), fin);
}

int QuickSort::organizar(int* arreglo, int inicio, int fin) {
    int pivote = arreglo[fin],
        menor = inicio - 1,
        temp = 0;

    for (int i = inicio; i < fin; i++) {
        if (arreglo[i] <= pivote) {
            menor += 1;
            temp = arreglo[i];
            arreglo[i] = arreglo[menor];
            arreglo[menor] = temp;
        }
    }
    menor += 1;
    temp = arreglo[menor];
    arreglo[menor] = arreglo[fin];
    arreglo[fin] = temp;

    return menor;
}
