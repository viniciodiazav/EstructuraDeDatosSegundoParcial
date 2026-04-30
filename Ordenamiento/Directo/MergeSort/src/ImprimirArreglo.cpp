#include "ImprimirArreglo.h"
#include <iostream>

using namespace std;

ImprimirArreglo::ImprimirArreglo() {}

ImprimirArreglo::~ImprimirArreglo(){}

void ImprimirArreglo::imprimir(int* arreglo, int len) {
    cout << "\nArreglo: [";
    for (int i = 0; i < len; i++) {
        if (i == len - 1) {
            cout << arreglo[i] << "]" << endl;
            return;
        }
        cout << arreglo[i] << ",";
    }
}

