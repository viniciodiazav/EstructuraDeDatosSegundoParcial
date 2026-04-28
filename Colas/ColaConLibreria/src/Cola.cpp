#include "Cola.h"
#include <iostream>

using namespace std;

Cola::Cola() {}

Cola::~Cola() {}

void Cola::agregarElemento(int n) {
    this->cola.push(n);
}

int Cola::eliminarElemento() {
    if (esVacia()) {
        cout << "La cola esta vacia. No hay nada que eliminar." << endl;
        return 0;
    }
    int d = this->cola.front().GetDato();
    this->cola.pop();
    return d;
}

int Cola::GetPrimerElemento() {
    if (esVacia()) {
        cout << "La cola esta vacia." << endl;
        return 0;
    }
    return this->cola.front().GetDato();
}

int Cola::GetUltimoElemento() {
    if (esVacia()) {
        cout << "La cola esta vacia." << endl;
        return 0;
    }
    return this->cola.back().GetDato();
}

int Cola::GetLen() {
    return this->cola.size();
}

bool Cola::esVacia() {
    return this->cola.empty();
}

queue<Dato> Cola::GetCola() {
    return this->cola;
}
