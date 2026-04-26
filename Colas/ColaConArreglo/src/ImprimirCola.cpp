#include "ImprimirCola.h"
#include <iostream>

using namespace std;

ImprimirCola::ImprimirCola() {}

ImprimirCola::~ImprimirCola() {}

void ImprimirCola::imprimir(ICola* c) {
    if (c->esVacia()) {
        cout << "\nLa cola esta vacia." << endl;
        return;
    }
    cout << "\n====== Cola ======" << endl;
    for (int i = 0; i <= c->GetUltimaPosicion(); i++) {
        if (i == c->GetUltimaPosicion()) {
            cout << "[" << c->GetCola()[i].GetDato() << "]" << endl;
            return;
        }
        cout << "[" << c->GetCola()[i].GetDato() << "] -> ";
    }
}
