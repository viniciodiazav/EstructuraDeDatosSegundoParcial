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
    cout << "\n====== Pila ======" << endl;
    for (int i = p->GetUltimaPosicion(); i >= 0;i--) {
        cout << "[" << p->GetPila()[i].GetDato() << "]" << endl;
    }
}
