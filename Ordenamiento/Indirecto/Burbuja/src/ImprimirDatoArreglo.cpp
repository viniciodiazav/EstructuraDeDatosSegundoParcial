#include "ImprimirDatoArreglo.h"
#include <iostream>

using namespace std;

ImprimirDatoArreglo::ImprimirDatoArreglo() {}

ImprimirDatoArreglo::~ImprimirDatoArreglo() {}

void ImprimirDatoArreglo::imprimir(Dato* arreglo, int len) {
    cout << "\nArreglo de nuevo tipo de dato: [";
    for (int i = 0; i < len; i++) {
        if (i == len - 1) {
            cout << arreglo->GetDato() << "]" << endl;
            return;
        }
        cout << arreglo->GetDato() << ",";
        arreglo++;
    }
}
