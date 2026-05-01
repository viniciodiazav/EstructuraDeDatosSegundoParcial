#include "PersonaPOO.h"

PersonaPOO::PersonaPOO() {}

PersonaPOO::PersonaPOO(char* nombre) {
    copyChars(this->nombre, nombre);
}

PersonaPOO::PersonaPOO(char* nombre, char* ap, char* am, char genero, short edad) {
    copyChars(this->nombre, nombre);
    copyChars(this->ap, ap);
    copyChars(this->am, am);
    this->genero = genero;
    this->edad = edad;
}

PersonaPOO::~PersonaPOO() {}

void PersonaPOO::copyChars(char* d, char* o) {
    for (int i = 0; i < 29; i++) {
        if (o[i] == '\0') {
            d[i] == '\0';
            return;
        }
        d[i] = o[i];
    }
    d[29] = '\0';
}

char* PersonaPOO::GetNombre() {
    return this->nombre;
}

void PersonaPOO::SetNombre(char* nombre) {
    copyChars(this->nombre, nombre);
}

char* PersonaPOO::GetAp() {
    return this->ap;
}

void PersonaPOO::SetAp(char* ap) {
    copyChars(this->ap, ap);
}

char* PersonaPOO::GetAm() {
    return this->am;
}

void PersonaPOO::SetAm(char* am) {
    copyChars(this->am, am);
}

char PersonaPOO::GetGenero() {
    return this->genero;
}

void PersonaPOO::SetGenerp(char genero) {
    this->genero = genero;
}

short PersonaPOO::GetEdad() {
    return this->edad;
}

void PersonaPOO::SetEdad(short edad) {
    this->edad = edad;
}
