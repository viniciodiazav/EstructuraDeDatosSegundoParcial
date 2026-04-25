#include "ListaAlmacenamiento.h"

ListaAlmacenamiento::ListaAlmacenamiento() {}

ListaAlmacenamiento::~ListaAlmacenamiento() {}

int ListaAlmacenamiento::GetLen() {
    return this->len;
}

bool ListaAlmacenamiento::esVacia() {
    return this->len == 0;
}
