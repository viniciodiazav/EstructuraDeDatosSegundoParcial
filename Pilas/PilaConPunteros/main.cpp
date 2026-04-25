#include <iostream>
#include "IPila.h"
#include "Pila.h"
#include "ImprimirPila.h"

using namespace std;

int main()
{
    IPila* pila = new Pila();
    ImprimirPila imp = ImprimirPila();

    pila->agregarElemento(0);
    pila->agregarElemento(1);
    pila->agregarElemento(2);
    pila->agregarElemento(3);

    imp.imprimir(pila);

    pila->eliminarElemento();

    imp.imprimir(pila);

    cout << "\n====== Metodos ======" << endl;
    cout << "Tamanio: " << pila->GetLen() << endl;
    cout << "Esta vacia?: " << pila->esVacia() << endl;
    cout << "Primer elemento: " << pila->GetPrimerElemento() << endl;
    cout << "Direccion del primer elemento: " << pila->GetPrimero() << endl;

    return 0;
}
