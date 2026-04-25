#include "ColaAlmacenamiento.h"

ColaAlmacenamiento::ColaAlmacenamiento() {}

ColaAlmacenamiento::~ColaAlmacenamiento() {}

int ColaAlmacenamiento::GetLen() {
    return this->len;
}

bool ColaAlmacenamiento::esVacia() {
    return this->len == 0;
}
