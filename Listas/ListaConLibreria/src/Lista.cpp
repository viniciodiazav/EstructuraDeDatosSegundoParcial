#include "Lista.h"
#include <iostream>

using namespace std;

Lista::Lista() {}

Lista::~Lista() {}

void Lista::agregarAlFinal(int n) {
    this->lista.push_back(n);
}

void Lista::agregarAlInicio(int n) {
    this->lista.push_front(n);
}

int Lista::eliminarUltimo() {
    int d = this->lista.back().GetDato();
    this->lista.pop_back();
    return d;
}

int Lista::eliminarPrimero() {
    int d = this->lista.front().GetDato();
    this->lista.pop_front();
    return d;
}

void Lista::borrarLista() {
    this->lista.clear();
}

int Lista::GetLen() {
    return this->lista.size();
}

int Lista::GetPrimerElemento() {
    return this->lista.front().GetDato();
}

int Lista::GetUltimoElemento() {
    return this->lista.back().GetDato();
}

bool Lista::esVacia() {
    return this->lista.empty();
}
