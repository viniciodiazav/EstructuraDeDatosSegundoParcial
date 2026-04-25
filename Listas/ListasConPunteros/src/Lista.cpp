#include "Lista.h"
#include <iostream>

using namespace std;

Lista::Lista() {
    this->len = 0;
    this->primero = nullptr;
    this->ultimo = nullptr;
}

Lista::~Lista() {
    while (this->primero != nullptr) {
        eliminarUltimo();
    }
}

void Lista::agregarAlFinal(int n) {
    Dato *nD = new Dato(n);
    if (esVacia()) {
        this->primero = nD;
        this->ultimo = nD;
        this->len += 1;
        return;
    }
    this->ultimo->SetSiguiente(nD);
    nD->SetAnterior(this->ultimo);
    this->ultimo = nD;
    this->len += 1;
}

void Lista::agregarAlInicio(int n) {
    Dato *nD = new Dato(n);
    if (esVacia()) {
        this->primero = nD;
        this->ultimo = nD;
        this->len += 1;
        return;
    }
    this->primero->SetAnterior(nD);
    nD->SetSiguiente(this->primero);
    this->primero = nD;
    this->len += 1;
}

void Lista::agregarAntesDelIndice(int i, int n) {
    if (esVacia() || i >= this->len || i < 0) {
        cout << "Indice no valido." << endl;
        return;
    }
    if (i == 0) {
        agregarAlInicio(n);
        return;
    }
    Dato* nD = new Dato(n);
    Dato* pD = this->primero;
    for (int j = 1; j <= i; j++) {
        pD = pD->GetSiguiente();
    }
    Dato* anterior = pD->GetAnterior();
    nD->SetSiguiente(pD);
    pD->SetAnterior(nD);
    nD->SetAnterior(anterior);
    anterior->SetSiguiente(nD);
    this->len += 1;
}

int Lista::eliminarUltimo() {
    if (esVacia()) {
        cout << "La lista esta vacia. No hay nada que eliminar" << endl;
        return 0;
    }
    int d = this->ultimo->GetDato();
    Dato* pD = this->ultimo;
    if (this->len == 1) {
        this->primero = nullptr;
        this->ultimo = nullptr;
        delete pD;
        this->len -= 1;
        return d;
    } else {
        this->ultimo = this->ultimo->GetAnterior();
        this->ultimo->SetSiguiente(nullptr);
        delete pD;
        this->len -= 1;
        return d;
    }
}

int Lista::eliminarPrimero() {
    if (esVacia()) {
        cout << "La lista esta vacia. No hay nada que eliminar" << endl;
        return 0;
    }
    int d = this->primero->GetDato();
    Dato* pD = this->primero;
    if (this->len == 1) {
        this->primero = nullptr;
        this->ultimo = nullptr;
        delete pD;
        this->len -= 1;
        return d;
    } else {
        this->primero = this->primero->GetSiguiente();
        this->primero->SetAnterior(nullptr);
        delete pD;
        this->len -= 1;
        return d;
    }
}

int Lista::eliminarEnElIndice(int i) {
    if (esVacia()) {
        cout << "La lista esta vacia. No hay nada que eliminar" << endl;
        return 0;
    }
    if (i >= this->len || i < 0) {
        cout << "Indice no valido." << endl;
        return 0;
    }
    if (i == 0) {
        return eliminarPrimero();
    }
    if (i == this->len - 1) {
        return eliminarUltimo();
    }
    Dato* pD = this->primero;
    for (int j = 1; j <= i; j++) {
        pD = pD->GetSiguiente();
    }
    int d = pD->GetDato();
    Dato* anterior = pD->GetAnterior();
    Dato* siguiente = pD->GetSiguiente();
    anterior->SetSiguiente(siguiente);
    siguiente->SetAnterior(anterior);
    this->len -= 1;
    delete pD;
    return d;
}

void Lista::eliminarConcurrenciasDe(int n) {
    if (esVacia()) {
        cout << "La lista esta vacia. No hay nada que eliminar" << endl;
        return;
    }
    int indices[this->len];
    int conteo = -1;
    Dato* pD = this->primero;
    for (int i = 0; i < this->len; i++) {
        if (pD->GetDato() == n) {
            conteo += 1;
            indices[conteo] = i;
        }
        pD = pD->GetSiguiente();
    }
    for (int i = 0; i <= conteo; i++) {
        eliminarEnElIndice(indices[i] - i);
    }
}

void Lista::borrarLista() {
    while (this->primero != nullptr) {
        eliminarUltimo();
    }
}

int Lista::buscarElemento(int n) {
    if (esVacia()) {
        cout << "La lista esta vacia." << endl;
        return 0;
    }
    Dato* pD = this->primero;
    int indice = -1;
    for (int i = 0; i < this->len; i++) {
        if (pD->GetDato() == n) {
            indice = i;
            break;
        }
        pD = pD->GetSiguiente();
    }
    return indice;
}

Dato* Lista::GetPrimero() {
    if (esVacia()) {
        cout << "La lista esta vacia." << endl;
        return nullptr;
    }
    return this->primero;
}

Dato* Lista::GetUltimo() {
    if (esVacia()) {
        cout << "La lista esta vacia." << endl;
        return nullptr;
    }
    return this->ultimo;
}

int Lista::GetPrimerElemento() {
    if (esVacia()) {
        cout << "La lista esta vacia." << endl;
        return 0;
    }
    return this->primero->GetDato();
}

int Lista::GetUltimoElemento() {
    if (esVacia()) {
        cout << "La lista esta vacia." << endl;
        return 0;
    }
    return this->ultimo->GetDato();
}
