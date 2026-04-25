#include "Dato.h"

Dato::Dato(int n) {
    this->n = n;
    this->siguiente = nullptr;
}

Dato::~Dato() {}

int Dato::GetDato() {
    return this->n;
}

Dato* Dato::GetSiguiente() {
    return this->siguiente;
}

void Dato::SetSiguiente(Dato* siguiente) {
    this->siguiente = siguiente;
}
