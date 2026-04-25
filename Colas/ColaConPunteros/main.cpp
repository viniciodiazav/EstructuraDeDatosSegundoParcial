#include <iostream>
#include "ICola.h"
#include "Cola.h"
#include "ImprimirCola.h"

using namespace std;

int main()
{
    ICola* cola = new Cola();
    ImprimirCola imp = ImprimirCola();

    cola->agregarElemento(0);
    cola->agregarElemento(1);
    cola->agregarElemento(2);
    cola->agregarElemento(3);

    imp.imprimir(cola);

    cola->eliminarElemento();

    imp.imprimir(cola);

    cout << "\n====== Metodos ======" << endl;
    cout << "Tamanio: " << cola->GetLen() << endl;
    cout << "Esta vacia?: " << cola->esVacia() << endl;
    cout << "Primer elemento: " << cola->GetPrimerElemento() << endl;
    cout << "Ultimo elemento: " << cola->GetUltimoElemento() << endl;
    cout << "Direccion del primer elemento: " << cola->GetPrimero() << endl;
    cout << "Direccion del ultimo elemento: " << cola->GetUltimo() << endl;

    return 0;
}
