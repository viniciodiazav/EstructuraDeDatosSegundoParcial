#include "MergeSortDato.h"
#include <iostream>

using namespace std;

MergeSortDato::MergeSortDato() {}

MergeSortDato::~MergeSortDato() {}

void MergeSortDato::ordenar(Dato* arreglo, int inicio, int fin) {
    Dato* resultado = dividir(arreglo, inicio, fin);
    int d;
    for (int i = 0; i <= fin; i++) {
        d = (resultado + i)->GetDato();
        (arreglo + i)->SetDato(d);
    }
}

Dato* MergeSortDato::dividir(Dato* arreglo, int inicio, int fin) {
    if (inicio == fin) {
        Dato* nuevoArreglo = new Dato[1];
        int d = (arreglo + inicio)->GetDato();
        (nuevoArreglo + 0)->SetDato(d);
        return nuevoArreglo;
    }
    int mitad = (inicio + fin) / 2;
    Dato* arreglo_1 = dividir(arreglo, inicio, mitad);
    Dato* arreglo_2 = dividir(arreglo, (mitad + 1), fin);

    int tamanioA_1 = mitad - inicio + 1;
    int tamanioA_2 = fin - mitad;

    Dato* resultado = juntar(arreglo_1, arreglo_2, tamanioA_1, tamanioA_2);

    delete[] arreglo_1;
    delete[] arreglo_2;

    return resultado;
}

Dato* MergeSortDato::juntar(Dato* arreglo_1, Dato* arreglo_2, int tamanio1, int tamanio2) {
    int tamanioFinal = tamanio1 + tamanio2;
    Dato* arregloFinal = new Dato[tamanioFinal];

    int i = 0, j = 0, l = 0;

    while (i < tamanio1 && j < tamanio2) {
        if ((arreglo_1 + i)->GetDato() > (arreglo_2 + j)->GetDato()) {
            int d = (arreglo_2 + j)->GetDato();
            (arregloFinal + l)->SetDato(d);
            j += 1;
            l += 1;
        } else if ((arreglo_1 + i)->GetDato() < (arreglo_2 + j)->GetDato()) {
            int d = (arreglo_1 + i)->GetDato();
            (arregloFinal + l)->SetDato(d);
            i += 1;
            l += 1;
        } else if ((arreglo_1 + i)->GetDato() == (arreglo_2 + j)->GetDato()) {
            int d = (arreglo_2 + j)->GetDato();
            (arregloFinal + l)->SetDato(d);
            j += 1;
            l += 1;
            int b = (arreglo_1 + i)->GetDato();
            (arregloFinal + l)->SetDato(d);
            i += 1;
            l += 1;
        }
    }
    while (i < tamanio1 && l < tamanioFinal) {
        int d = (arreglo_1 + i)->GetDato();
        (arregloFinal + l)->SetDato(d);
        i += 1;
        l += 1;
    }
    while (j < tamanio2 && l < tamanioFinal) {
        int d = (arreglo_2 + j)->GetDato();
        (arregloFinal + l)->SetDato(d);
        j += 1;
        l += 1;
    }
    return arregloFinal;
}
