#include "ArregloContenido.h"
#include <iostream>

using namespace std;

ArregloContenido::ArregloContenido() {}

ArregloContenido::~ArregloContenido() {}

void ArregloContenido::rellenarArreglo(int* arreglo, int len) {
    for (int i = 0; i < len; i++) {
        cout << "[" << i << "]: ";
        cin >> *(arreglo + i);
    }
}

int ArregloContenido::GetLen() {
    return this->len;
}
