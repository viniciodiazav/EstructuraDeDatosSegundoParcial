#include "Lista.h"
#include <iostream>

using namespace std;

Lista::Lista(int len) {
    this->len = len;
    this->ultimaPosicion = -1;
    this->lista = new Dato[len];
}

Lista::~Lista() {
    delete[] this->lista;
}

void Lista::agregarAlFinal(int n) {
    if (esLlena()) {
        cout << "La lista esta llena." << endl;
        return;
    }
    this->ultimaPosicion += 1;
    this->lista[this->ultimaPosicion].SetDato(n);
}

void Lista::agregarAlInicio(int n) {
    if (esLlena()) {
        cout << "La lista esta llena." << endl;
        return;
    }
    for (int i = this->ultimaPosicion; i >= 0; i--) {
        this->lista[i + 1] = this->lista[i];
    }
    this->lista[0].SetDato(n);
    this->ultimaPosicion += 1;
}

void Lista::agregarAntesDelIndice(int i, int n) {
    if (esLlena()) {
        cout << "La lista esta llena." << endl;
        return;
    }
    if (i >= this->len || i < 0) {
        cout << "Indice no valido." << endl;
        return;
    }
    if (i == 0) {
        agregarAlInicio(n);
        return;
    }
    for (int j = this->ultimaPosicion; j >= i; j--) {
        this->lista[j + 1] = this->lista[j];
    }
    this->lista[i].SetDato(n);
    this->ultimaPosicion += 1;
}

int Lista::eliminarUltimo() {
    if (esVacia()) {
        cout << "La lista esta vacia. No hay nada que eliminar." << endl;
        return 0;
    }
    int d = this->lista[this->ultimaPosicion].GetDato();
    this->lista[this->ultimaPosicion].SetDato(0);
    this->ultimaPosicion -= 1;
    return d;
}

int Lista::eliminarPrimero() {
    if (esVacia()) {
        cout << "La lista esta vacia. No hay nada que eliminar." << endl;
        return 0;
    }
    int d = this->lista[0].GetDato();
    for (int i = 0; i < this->ultimaPosicion; i++) {
        this->lista[i] = this->lista[i + 1];
    }
    this->lista[this->ultimaPosicion].SetDato(0);
    this->ultimaPosicion -= 1;
    return d;
}

int Lista::eliminarEnElIndice(int i) {
    if (esVacia()) {
        cout << "La lista esta vacia. No hay nada que eliminar." << endl;
        return 0;
    }
    if (i >= this->len || i < 0) {
        cout << "Indice no valido." << endl;
        return 0;
    }
    int d = this->lista[i].GetDato();
    for (int j = i; j < this->ultimaPosicion; j++) {
        this->lista[j] = this->lista[j + 1];
    }
    this->lista[this->ultimaPosicion].SetDato(0);
    this->ultimaPosicion -= 1;
    return d;
}

void Lista::eliminarConcurrenciasDe(int n) {
    if (esVacia()) {
        cout << "La lista esta vacia. No hay nada que eliminar." << endl;
        return;
    }
    int indices[this->len];
    int conteo = -1;
    for (int i = 0; i <= this->ultimaPosicion; i++) {
        if (this->lista[i].GetDato() == n) {
            conteo += 1;
            indices[conteo] = i;
        }
    }
    for (int i = 0; i <= conteo; i++) {
        eliminarEnElIndice(indices[i] - i);
    }
}

void Lista::borrarLista() {
    delete[] this->lista;
    this->lista = new Dato[this->len];
}

int Lista::buscarElemento(int n) {
    if (esVacia()) {
        cout << "La lista esta vacia. No hay nada que eliminar." << endl;
        return 0;
    }
    int indice = -1;
    for (int i = 0; i < this->ultimaPosicion; i++) {
        if (this->lista[i].GetDato() == n) {
            indice = i;
            break;
        }
    }
    return indice;
}

int Lista::GetLen() {
    return this->len;
}

Dato* Lista::GetLista() {
    return this->lista;
}

int Lista::GetPrimerElemento() {
    if (esVacia()) {
        cout << "La lista esta vacia." << endl;
        return 0;
    }
    return this->lista[0].GetDato();
}

int Lista::GetUltimoElemento() {
    if (esVacia()) {
        cout << "La lista esta vacia." << endl;
        return 0;
    }
    return this->lista[this->ultimaPosicion].GetDato();
}
