#include "Pila.h"
#include <iostream>

using namespace std;

Pila::Pila() {}

Pila::~Pila() {}

void Pila::agregarElemento(int n) {
    this->pila.push(n);
}

int Pila::eliminarElemento() {
    if (esVacia()) {
        cout << "La pila esta vacia. No hay nada que eliminar." << endl;
        return 0;
    }
    int d = this->pila.top().GetDato();
    this->pila.pop();
    return d;
}

int Pila::GetPrimerElemento() {
    if (esVacia()) {
        cout << "La pila esta vacia." << endl;
        return 0;
    }
    return this->pila.top().GetDato();
}

int Pila::GetLen() {
    return this->pila.size();
}

bool Pila::esVacia() {
    return this->pila.empty();
}

stack<Dato> Pila::GetPila() {
    return this->pila;
}
