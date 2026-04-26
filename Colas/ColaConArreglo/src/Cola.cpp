#include "Cola.h"
#include <iostream>

using namespace std;

Cola::Cola(int len) {
    this->len = len;
    this->ultimaPosicion = -1;
    this->cola = new Dato[len];
}

Cola::~Cola() {
    delete[] this->cola;
}

void Cola::agregarElemento(int n) {
    if (esLlena()) {
        cout << "La cola ya esta llena." << endl;
        return;
    }
    this->ultimaPosicion += 1;
    this->cola[this->ultimaPosicion].SetDato(n);
}

int Cola::eliminarElemento() {
    if (esVacia()) {
        cout << "La cola esta vacia. No hay nada que eliminar" << endl;
        return 0;
    }
    int d = this->cola[0].GetDato();
    for (int i = 0; i < this->ultimaPosicion; i++) {
        this->cola[i] = this->cola[i + 1];
    }
    this->cola[this->ultimaPosicion].SetDato(0);
    this->ultimaPosicion -= 1;
    return d;
}

int Cola::GetPrimerElemento() {
    if (esVacia()) {
        cout << "La cola esta vacia." << endl;
        return 0;
    }
    return this->cola[0].GetDato();
}

int Cola::GetUltimoElemento() {
    if (esVacia()) {
        cout << "La cola esta vacia." << endl;
        return 0;
    }
    return this->cola[this->ultimaPosicion].GetDato();
}

Dato* Cola::GetCola() {
    return this->cola;
}
