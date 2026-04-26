#include "PilaAlmacenamiento.h"

PilaAlmacenamiento::PilaAlmacenamiento() {}

PilaAlmacenamiento::~PilaAlmacenamiento() {}

int PilaAlmacenamiento::GetLen() {
    return this->len;
}

int PilaAlmacenamiento::GetUltimaPosicion() {
    return this->ultimaPosicion;
}

bool PilaAlmacenamiento::esVacia() {
    return this->ultimaPosicion == -1;
}

bool PilaAlmacenamiento::esLlena() {
    return (this->ultimaPosicion + 1) == this->len;
}
