#include "AutoPOO.h"

AutoPOO::AutoPOO() {};

AutoPOO::AutoPOO(float precio, int anio) {
    this->precio = precio;
    this->anio = anio;
    this->aPOO = nullptr;
}

AutoPOO::~AutoPOO() {}

float AutoPOO::GetPrecio() {
    return this->precio;
}

void AutoPOO::SetPrecio(float precio) {
    this->precio = precio;
}

int AutoPOO::GetAnio() {
    return this->anio;
}

void AutoPOO::SetAnio(int anio) {
    this->anio = anio;
}
