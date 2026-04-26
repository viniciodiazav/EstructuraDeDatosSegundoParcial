#include "ImprimirLista.h"
#include <iostream>

using namespace std;

ImprimirLista::ImprimirLista() {}

ImprimirLista::~ImprimirLista() {}

void ImprimirLista::imprimir(ILista* l) {
    if (l->esVacia()) {
        cout << "\nLa lista esta vacia." << endl;
        return;
    }
    cout << "\n====== Lista ======\n[";
    for (int i = 0; i <= l->GetUltimaPosicion(); i++) {
        if (i == l->GetUltimaPosicion()) {
            cout << l->GetLista()[i].GetDato() << "]" << endl;
            return;
        }
        cout << l->GetLista()[i].GetDato() << ",";
    }
}
