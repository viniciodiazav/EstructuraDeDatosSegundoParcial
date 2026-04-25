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
    Dato* pD = l->GetPrimero();
    cout << "\n====== Lista ======\n[";
    for (int i = 0; i < l->GetLen(); i++) {
        if (i == l->GetLen() - 1) {
            cout << pD->GetDato() << "]" << endl;
            return;
        }
        cout << pD->GetDato() << ",";
        pD = pD->GetSiguiente();
    }
}
