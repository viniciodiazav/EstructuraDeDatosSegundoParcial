#include <iostream>
#include "IPila.h"
#include "Pila.h"
#include "ImprimirPila.h"

using namespace std;

int main()
{
    IPila* pila = new Pila(10);
    ImprimirPila imp = ImprimirPila();

    pila->agregarElemento(0);
    pila->agregarElemento(1);
    pila->agregarElemento(2);
    pila->agregarElemento(3);
    pila->agregarElemento(4);
    pila->agregarElemento(5);

    imp.imprimir(pila);

    pila->eliminarElemento();
    pila->eliminarElemento();

    imp.imprimir(pila);

    cout << "\n====== Metodos ======" << endl;
    cout << "Tamanio: " << pila->GetLen() << endl;
    cout << "Ultima posicion utulizada: " << pila->GetUltimaPosicion() << endl;
    cout << "Esta vacia?: " << pila->esVacia() << endl;
    cout << "Esta llena?: " << pila->esLlena() << endl;
    cout << "Primer elemento: " << pila->GetPrimerElemento() << endl;

    return 0;
}
