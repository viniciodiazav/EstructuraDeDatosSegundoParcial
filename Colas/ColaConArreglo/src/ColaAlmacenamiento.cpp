#include "ColaAlmacenamiento.h"

ColaAlmacenamiento::ColaAlmacenamiento() {}

ColaAlmacenamiento::~ColaAlmacenamiento() {}

int ColaAlmacenamiento::GetLen() {
    return this->len;
}

int ColaAlmacenamiento::GetUltimaPosicion() {
    return this->ultimaPosicion;
}

bool ColaAlmacenamiento::esVacia() {
    return this->ultimaPosicion == -1;
}

bool ColaAlmacenamiento::esLlena() {
    return (this->ultimaPosicion + 1) == this->len;
}
