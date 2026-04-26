#include "ListaAlmacenamiento.h"

ListaAlmacenamiento::ListaAlmacenamiento() {}

ListaAlmacenamiento::~ListaAlmacenamiento() {}

int ListaAlmacenamiento::GetLen() {
    return this->len;
}

int ListaAlmacenamiento::GetUltimaPosicion() {
    return this->ultimaPosicion;
}

bool ListaAlmacenamiento::esVacia() {
    return this->ultimaPosicion == -1;
}

bool ListaAlmacenamiento::esLlena() {
    return (this->ultimaPosicion + 1) == this->len;
}
