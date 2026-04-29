#include "MergeSort.h"
#include <iostream>

using namespace std;

MergeSort::MergeSort() {}

MergeSort::~MergeSort() {}

void MergeSort::ordenar(int* arreglo, int inicio, int fin) {
    int* arregloFinal = dividir(arreglo, inicio, fin);
    for (int i = 0; i <= fin; i++) {
        *(arreglo + i) = *(arregloFinal + i);
    }
    delete[] arregloFinal;
}

int* MergeSort::dividir(int* arreglo, int inicio, int fin) {
    if (inicio == fin) {
        int* nuevoArreglo = new int[1];
        *(nuevoArreglo + 0) = *(arreglo + inicio);
        return nuevoArreglo;
    }
    int mitad = (inicio + fin) / 2;
    int* arreglo_1 = dividir(arreglo, inicio, mitad);
    int* arreglo_2 = dividir(arreglo, (mitad + 1), fin);

    int tamanioA_1 = mitad - inicio + 1;
    int tamanioA_2 = fin - mitad;

    int* resultadoFinal = juntar(arreglo_1, arreglo_2, tamanioA_1, tamanioA_2);

    delete[] arreglo_1;
    delete[] arreglo_2;

    return resultadoFinal;
}

int* MergeSort::juntar(int* arreglo_1, int* arreglo_2, int tamanio1, int tamanio2) {
    int tamnioFinal = tamanio1 + tamanio2;
    int* arregloFinal = new int[tamnioFinal];
    int i = 0, j = 0, l = 0;
    while (i < tamanio1 && j < tamanio2) {
        if (*(arreglo_1 + i) > *(arreglo_2 + j)) {
            *(arregloFinal + l) = *(arreglo_2 + j);
            j += 1;
            l += 1;
        } else if (*(arreglo_1 + i) < *(arreglo_2 + j)) {
            *(arregloFinal + l) = *(arreglo_1 + i);
            i += 1;
            l += 1;
        } else if (*(arreglo_1 + i) == *(arreglo_2 + j)) {
            *(arregloFinal + l) = *(arreglo_1 + i);
            i += 1;
            l += 1;
            *(arregloFinal + l) = *(arreglo_2 + j);
            j += 1;
            l += 1;
        }
    }
    while (i < tamanio1 && l < tamnioFinal) {
        *(arregloFinal + l) = *(arreglo_1 + i);
        i += 1;
        l += 1;
    }
    while (j < tamanio2 && l < tamnioFinal) {
        *(arregloFinal + l) = *(arreglo_2 + j);
        j += 1;
        l += 1;
    }
    return arregloFinal;
}
