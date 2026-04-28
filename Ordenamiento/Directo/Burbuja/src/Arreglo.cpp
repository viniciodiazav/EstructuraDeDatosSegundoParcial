#include "Arreglo.h"

Arreglo::Arreglo(int len) {
    this->len = len;
    this->arreglo = new int[len];
    rellenarArreglo(this->arreglo, len);
}

Arreglo::~Arreglo() {
    delete[] this->arreglo;
}

int* Arreglo::GetArreglo() {
    return this->arreglo;
}
