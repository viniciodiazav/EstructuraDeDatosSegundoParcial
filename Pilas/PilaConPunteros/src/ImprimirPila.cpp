#include "ImprimirPila.h"
#include <iostream>

using namespace std;

ImprimirPila::ImprimirPila() {}

ImprimirPila::~ImprimirPila() {}

void ImprimirPila::imprimir(IPila* p) {
    if (p->esVacia()) {
        cout << "La pila esta vacia." << endl;
        return;
    }
    Dato* pD = p->GetPrimero();
    cout << "\n====== Pila ======\n(FIFO)" << endl;
    for (int i = 0; i < p->GetLen(); i++) {
        cout << "[" << pD->GetDato() << "]" << endl;
        pD = pD->GetSiguiente();
    }
}
