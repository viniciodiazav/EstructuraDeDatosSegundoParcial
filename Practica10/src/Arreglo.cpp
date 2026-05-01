#include "Arreglo.h"
#include <iostream>

using namespace std;

Arreglo::Arreglo(int len) {
    this->len = len;
    this->arreglo = new int[len];
    rellenarArreglo();
    imprimirArreglo();
}

Arreglo::~Arreglo() {
    delete[] this->arreglo;
}

int* Arreglo::GetArrego() {
    return this->arreglo;
}

int Arreglo::GetLen() {
    return this->len;
}

void Arreglo::rellenarArreglo() {
    for (int i = 0; i < this->len; i++) {
        cout << "[" << i << "]: ";
        cin >> *(this->arreglo + i);
    }
}

void Arreglo::imprimirArreglo() {
    cout << "\nArreglo: [";
    for (int i = 0; i < this->len; i++) {
        if (i == this->len - 1) {
            cout << *(this->arreglo + i) << "]" << endl;
            return;
        }
        cout << *(this->arreglo + i) << ",";
    }
}
