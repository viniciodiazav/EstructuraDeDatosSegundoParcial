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
    Dato* pD = c->GetPrimero();
    cout << "\n====== Cola ======\n(LIFO)" << endl;
    for (int i = 0; i < c->GetLen(); i++) {
        if (i == c->GetLen() - 1) {
            cout << "[" << pD->GetDato() << "]" << endl;
            return;
        }
        cout << "[" << pD->GetDato() << "] -> ";
        pD = pD->GetSiguiente();
    }
}
