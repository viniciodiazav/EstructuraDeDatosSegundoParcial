#include "Operaciones.h"

Operaciones::Operaciones(int *arreglo, int len) {
    int *a = ordenarArreglo(arreglo, len);
    realizarOperaciones(a, len);
}

Operaciones::~Operaciones() {}

void Operaciones::realizarOperaciones(int *arreglo, int len) {
    this->maximo = *(arreglo);
    this->minimo = *(arreglo);
    this->suma = 0;
    int half = len / 2;
    if (len % 2 == 0) {
        this->mediana = (*(arreglo + half) + *(arreglo + (half - 1))) / (float) 2;
    } else {
        this->mediana = *(arreglo + (half + 1));
    }
    for (int i = 0; i < len; i++) {
        if (*(arreglo + i) > this->maximo) {
            this->maximo = *(arreglo + i);
        } else if (*(arreglo + i) < this->minimo) {
            this->minimo = *(arreglo + i);
        }
        this->suma += *(arreglo + i);
    }
    this->promedio = this->suma / (float) len;
}

int* Operaciones::ordenarArreglo(int *arreglo, int len) {
    int temp;
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            if (*(arreglo + i) > *(arreglo + j)) {
                temp = *(arreglo + i);
                *(arreglo + i) = *(arreglo + j);
                *(arreglo + j) = temp;
            }
        }
    }
    return arreglo;
}

float Operaciones::GetPromedio() {
    return this->promedio;
}

float Operaciones::getMediana() {
    return this->mediana;
}

int Operaciones::GetMaximo() {
    return this->maximo;
}

int Operaciones::GetMinimo() {
    return this->minimo;
}

int Operaciones::GetSuma() {
    return this->suma;
}
