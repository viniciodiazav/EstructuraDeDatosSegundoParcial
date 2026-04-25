#include "PilaAlmacenamiento.h"

PilaAlmacenamiento::PilaAlmacenamiento() {}

PilaAlmacenamiento::~PilaAlmacenamiento() {}

int PilaAlmacenamiento::GetLen() {
    return this->len;
}

bool PilaAlmacenamiento::esVacia() {
    return this->len == 0;
}
