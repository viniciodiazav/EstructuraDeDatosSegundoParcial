#include "Dato.h"

Dato::Dato() {
    this->n = 0;
}

Dato::~Dato() {}

int Dato::GetDato() {
    return this->n;
}

void Dato::SetDato(int n) {
    this->n = n;
}
