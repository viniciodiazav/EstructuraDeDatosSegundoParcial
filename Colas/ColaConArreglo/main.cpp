#include <iostream>
#include "ICola.h"
#include "Cola.h"
#include "ImprimirCola.h"

using namespace std;

int main()
{
    ICola* cola = new Cola(10);
    ImprimirCola imp = ImprimirCola();

    cola->agregarElemento(0);
    cola->agregarElemento(1);
    cola->agregarElemento(2);
    cola->agregarElemento(3);
    cola->agregarElemento(4);
    cola->agregarElemento(5);

    imp.imprimir(cola);

    cola->eliminarElemento();
    cola->eliminarElemento();

    imp.imprimir(cola);

    cout << "\n====== Metodos ======" << endl;
    cout << "Tamanio: " << cola->GetLen() << endl;
    cout << "Ultima posicion utulizada: " << cola->GetUltimaPosicion() << endl;
    cout << "Esta vacia?: " << cola->esVacia() << endl;
    cout << "Esta llena?: " << cola->esLlena() << endl;
    cout << "Primer elemento: " << cola->GetPrimerElemento() << endl;
    cout << "Ultimo elemento: " << cola->GetUltimoElemento() << endl;

    return 0;
}
