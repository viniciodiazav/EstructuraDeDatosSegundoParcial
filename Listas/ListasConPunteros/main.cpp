#include <iostream>
#include "ILista.h"
#include "Lista.h"
#include "ImprimirLista.h"

using namespace std;

int main()
{
    ILista* lista = new Lista();
    ImprimirLista imp  = ImprimirLista();

    lista->agregarAlFinal(4);
    lista->agregarAlFinal(6);
    lista->agregarAlFinal(8);
    lista->agregarAlFinal(10);
    lista->agregarAlFinal(14);

    lista->agregarAlInicio(2);
    lista->agregarAlInicio(0);

    lista->agregarAntesDelIndice(6, 12);

    lista->agregarAlFinal(4);

    imp.imprimir(lista);

    lista->eliminarConcurrenciasDe(4);

    imp.imprimir(lista);

    lista->eliminarPrimero();
    lista->eliminarUltimo();

    imp.imprimir(lista);

    lista->eliminarEnElIndice(3);

    imp.imprimir(lista);

    cout << "\n====== Metodos ======" << endl;
    cout << "Tamanio: " << lista->GetLen() << endl;
    cout << "Esta vacia?: " << lista->esVacia() << endl;
    cout << "Buscar elemento (Ej. 8): indice " << lista->buscarElemento(8) << endl;
    cout << "Primer elemento: " << lista->GetPrimerElemento() << endl;
    cout << "Ultimo elemento: " << lista->GetUltimoElemento() << endl;
    cout << "Direccion del primer elemento: " << lista->GetPrimero() << endl;
    cout << "Direccion del ultimo elemento: " << lista->GetUltimo() << endl;

    return 0;
}
