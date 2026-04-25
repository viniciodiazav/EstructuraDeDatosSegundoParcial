#include "Pila.h"
#include <iostream>

using namespace std;

Pila::Pila() {
    this->len = 0;
    this->primero = nullptr;
}

Pila::~Pila() {
    while (this->primero != nullptr) {
        eliminarElemento();
    }
}

void Pila::agregarElemento(int n) {
    Dato* nD = new Dato(n);
    if (esVacia()) {
        this->primero = nD;
        this->len += 1;
        return;
    }
    nD->SetSiguiente(this->primero);
    this->primero = nD;
    this->len += 1;
}

int Pila::eliminarElemento() {
    if (esVacia()) {
        cout << "La pila esta vacia. No hay nada que eliminar." << endl;
        return 0;
    }
    int d = this->primero->GetDato();
    Dato* pD = this->primero;
    if (this->len == 1) {
        this->primero = nullptr;
        delete pD;
        this->len -= 1;
        return d;
    } else {
        this->primero = this->primero->GetSiguiente();
        delete pD;
        this->len -= 1;
        return d;
    }
}

Dato* Pila::GetPrimero() {
    if (esVacia()) {
        cout << "La pila esta vacia." << endl;
        return nullptr;
    }
    return this->primero;
}

int Pila::GetPrimerElemento() {
    if (esVacia()) {
        cout << "La pila esta vacia." << endl;
        return 0;
    }
    return this->primero->GetDato();
}
