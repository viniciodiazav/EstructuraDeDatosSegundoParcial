#include "ArregloDatoContenido.h"
#include <iostream>

using namespace std;

ArregloDatoContenido::ArregloDatoContenido() {}

ArregloDatoContenido::~ArregloDatoContenido() {}

void ArregloDatoContenido::rellenarArreglo(Dato* arreglo, int len) {
    int n;
    for (int i = 0; i < len; i++) {
        cout << "[" << i << "]: ";
        cin >> n;
        arreglo[i].SetDato(n);
    }
}

int ArregloDatoContenido::GetLen() {
    return this->len;
}
