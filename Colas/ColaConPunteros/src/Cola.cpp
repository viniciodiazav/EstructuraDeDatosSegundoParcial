#include "Cola.h"
#include <iostream>

using namespace std;

Cola::Cola() {
    this->len = 0;
    this->primero = nullptr;
    this->ultimo = nullptr;
}

Cola::~Cola() {
    while (this->primero != nullptr) {
        eliminarElemento();
    }
}

void Cola::agregarElemento(int n) {
    Dato* nD = new Dato(n);
    if (esVacia()) {
        this->primero = nD;
        this->ultimo = nD;
        this->len += 1;
        return;
    }
    this->ultimo->SetSiguiente(nD);
    this->ultimo = nD;
    this->len += 1;
}

int Cola::eliminarElemento() {
    if (esVacia()) {
        cout << "La cola esta vacia. No hay nada que eliminar." << endl;
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

Dato* Cola::GetPrimero() {
    if (esVacia()) {
        cout << "La cola esta vacia." << endl;
        return nullptr;
    }
    return this->primero;
}

Dato* Cola::GetUltimo() {
    if (esVacia()) {
        cout << "La cola esta vacia." << endl;
        return nullptr;
    }
    return this->ultimo;
}

int Cola::GetPrimerElemento() {
    if (esVacia()) {
        cout << "La cola esta vacia." << endl;
        return 0;
    }
    return this->primero->GetDato();
}

int Cola::GetUltimoElemento() {
    if (esVacia()) {
        cout << "La cola esta vacia." << endl;
        return 0;
    }
    return this->ultimo->GetDato();
}
