#include "ArregloDato.h"

ArregloDato::ArregloDato(int len) {
    this->len = len;
    this->arreglo = new Dato[len];
    rellenarArreglo(this->arreglo, len);
}

ArregloDato::~ArregloDato() {}

Dato* ArregloDato::GetArreglo() {
    return this->arreglo;
}
