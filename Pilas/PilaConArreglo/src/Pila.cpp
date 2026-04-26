#include "Pila.h"
#include <iostream>

using namespace std;

Pila::Pila(int len) {
    this->len = len;
    this->ultimaPosicion = -1;
    this->pila = new Dato[len];
}

Pila::~Pila() {}

void Pila::agregarElemento(int n) {
    if (esLlena()) {
        cout << "La pila esta llena." << endl;
        return;
    }
    this->ultimaPosicion += 1;
    this->pila[this->ultimaPosicion].SetDato(n);
}

int Pila::eliminarElemento() {
    if (esVacia()) {
        cout << "La pila esta vacia. No hay nada que eliminar." << endl;
        return 0;
    }
    int d = this->pila[this->ultimaPosicion].GetDato();
    this->pila[this->ultimaPosicion].SetDato(0);
    this->ultimaPosicion -= 1;
    return d;
}

int Pila::GetPrimerElemento() {
    if (esVacia()) {
        cout << "La pila esta vacia." << endl;
        return 0;
    }
    return this->pila[this->ultimaPosicion].GetDato();
}

Dato* Pila::GetPila() {
    return this->pila;
}
